#include "global.h"
#include "test/battle.h"

// Tests for Resolve RPG mechanics added on top of pokeemerald-expansion.

ASSUMPTIONS
{
    ASSUME(GetMoveRecoil(MOVE_DOUBLE_EDGE) > 0);
}

// Talking points (PP) reset after every encounter: B_RESTORE_PP_AFTER_BATTLE

WILD_BATTLE_TEST("Resolve RPG: the player's talking points are fully restored after a battle")
{
    GIVEN {
        ASSUME(B_RESTORE_PP_AFTER_BATTLE == TRUE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        HP_BAR(opponent, hp: 0);
    } THEN {
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_PP1), GetMovePP(MOVE_SCRATCH));
    }
}

// Recoil evolutions: IF_RECOIL_DAMAGE_GE (endure without collapsing) and
// IF_COLLAPSED_FROM_RECOIL (collapse from your own recoil) share the evolution tracker.

WILD_BATTLE_TEST("Resolve RPG: recoil endured without collapsing counts towards IF_RECOIL_DAMAGE_GE")
{
    u32 tracker;
    GIVEN {
        PLAYER(SPECIES_BASCULIN_WHITE_STRIPED) { Ability(ABILITY_ADAPTABILITY); Moves(MOVE_DOUBLE_EDGE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_EDGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_EDGE, player);
        HP_BAR(player);
    } THEN {
        tracker = GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EVOLUTION_TRACKER);
        EXPECT_GT(tracker & EVO_TRACKER_RECOIL_MASK, 0);
        EXPECT_EQ(tracker & EVO_TRACKER_COLLAPSED_FLAG, 0);
    }
}

WILD_BATTLE_TEST("Resolve RPG: collapsing from recoil sets the collapsed flag and resets enduring progress")
{
    GIVEN {
        PLAYER(SPECIES_BASCULIN_WHITE_STRIPED) { Ability(ABILITY_ADAPTABILITY); Moves(MOVE_DOUBLE_EDGE); HP(1); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); } // Fainting both ends the battle without a send-out prompt.
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_EDGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_EDGE, player);
        HP_BAR(player, hp: 0);
    } THEN {
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EVOLUTION_TRACKER), EVO_TRACKER_COLLAPSED_FLAG);
    }
}
