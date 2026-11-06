# Resolve RPG: Characters (draft 2)

Characters take the place of Pokémon species. This is a **first batch to prune and reshape**, not a final list.

## Principles

- **Archetypes** are common people. **Unique individuals** are named people, like legendaries.
- **Balance:** enough uniques to build a whole team from them, and enough archetypes that you never
  have to use a unique.
- **Evolution = a fundamental life change.** Branching, Digimon-style, reflecting choices.
- **Villain-coded branches** are unlocked by unpleasant means. "Villain" is relative to who someone
  was, and some people become *more* heroic through suffering.
- **The regime** is a collaborationist government: local people grown rich through loyalty to the empire.
- **Imperial outsiders** (troops, officials, visitors from the heartland) are distinct by **fashion,
  not ethnicity**.

## Mechanics the code already supports

### Struggle: two outcomes (implemented)

Running out of talking points and fighting on with Struggle can end two ways:

| Outcome | Condition in code | Reads as |
|---|---|---|
| **Heroic** | `IF_RECOIL_DAMAGE_GE`: enough recoil endured **without collapsing** | Kept going and held firm |
| **Villain-coded** | `IF_COLLAPSED_FROM_RECOIL` (new): **collapsed** from their own recoil | Broke themselves trying |

- Both use the existing evolution tracker. Its low 9 bits count recoil endured (up to 511), and its
  top bit records a collapse. Collapsing resets the endured count.
- In vanilla expansion, recoil was recorded *before* the HP loss, so its "reset if it faints" check
  never fired. Collapse is now detected from the recoil amount.
- A collapse evolution happens at the next level-up after recovering (`EVO_LEVEL` + the condition).
- **Talking points reset after every encounter** (`B_RESTORE_PP_AFTER_BATTLE`, `include/config/battle.h`),
  so Struggle is a within-debate event.
- Tests: `test/battle/resolve_rpg.c`.

### Items with harmful built-in effects (for dark branches)

Level up while holding one of these, and the life change is tied to what it did to them:

| Existing item | Built-in effect | Could become |
|---|---|---|
| Flame Orb | Holder becomes Frustrated | **Grudge** |
| Toxic Orb | Holder falls into Deep doubt | **Propaganda Leaflet** |
| Iron Ball | Holder's Wit halved; grounded | **Debt** |
| Lagging Tail | Holder always acts last | **Bad Reputation** |
| Ring Target | Holder loses immunities | **Wanted Poster** |
| Sticky Barb | Hurts the holder; jumps to whoever touches them | **Nagging Rumour** |

New items with no battle effect, used only for evolution: textbooks, **Bribe Money**, **Party Badge**
(the regime's membership pin), **Censor's Stamp**, **Patron's Purse**.

### Other conditions used below

Commitment (friendship), cruelty (critical hits in one debate), enduring damage, a place (such as
prison), mentorship (someone in the party), practice (using a move enough times), time of day,
leaning (Logic against Rigour), personality (nature), story events.

## First batch: 16 archetypes

Types use the in-game names. **Dark** marks a villain-coded branch.

| Archetype | Type | Who they are | Branches (condition → result) |
|---|---|---|---|
| **Student** | Sense | Young, unformed, open to anything | Level up holding a textbook: History → **Historian** (Memory), Mathematics → **Mathematician** (Maths), Law → **Lawyer** (Protocol), Philosophy → **Philosopher** (Idealism), Engineering → **Engineer** (Realism), Science → **Inventor** (Vision), Scripture → **Scholar** (Custom). **Dark:** holding a Party Badge → **Youth Cadre** (Power/Protocol) |
| **Labourer** | Realism | Dock or factory hand | Commitment → **Union Organiser** (Realism/Love). Endure Struggle recoil → **Striker** (Realism/Grief). **Dark:** holding Bribe Money → **Strikebreaker** (Realism/Wealth) |
| **Cultivator** | Custom | Works the land, deeply rooted | Endure heavy damage → **Resister** (Custom/Hope). Commitment → **Village Elder** (Custom/Memory). **Dark:** holding Debt → **Moneylender's Man** (Wealth/Fear) |
| **Weaver** | Custom | Skilled hand-craftsperson | Commitment → **Master Weaver** (Custom/Humour). Practice a cloth-boycott move → **Homespun Organiser** (Custom/Hope) |
| **Shopkeeper** | Wealth | Small trader, worried about stock | Commitment → **Cooperative Founder** (Wealth/Love). **Dark:** holding imported goods → **Profiteer** (Wealth/Corrupt) |
| **Nurse** | Love | Cares for anyone who comes through the door | Endure heavy damage → **Field Nurse** (Love/Grief). At night → **Night Matron** (Love/Humour) |
| **Teacher** | Memory | Village or city schoolteacher | Mentoring (Student in party) → **Headteacher** (Memory/Love). Commitment → **Hedge-School Teacher** (Memory/Hope), teaching banned history. **Dark:** holding a Propaganda Leaflet → **Propagandist** (Memory/Facts) |
| **Printer** | Facts | Runs a press, sets type | Practice an exposé move → **Editor** (Facts/Vision). **Dark:** holding a Censor's Stamp → **Censor** (Protocol/Facts) |
| **Clerk** | Protocol | Minor civil servant | Commitment → **Whistleblower** (Protocol/Hope). Level → **Magistrate** (Protocol/Power). **Dark:** holding Bribe Money → **Corrupt Official** (Protocol/Corrupt) |
| **Constable** | Power | Local policeman | Commitment → **Defector** (Power/Love). Leans Rigour → **Inspector** (Power/Protocol). **Dark:** several cutting remarks in one debate → **Enforcer** (Power/Corrupt) |
| **Conscript** | Power | Local soldier in the imperial army | Endure Struggle recoil → **Deserter** (Power/Hope). **Dark:** holding a Grudge → **Sergeant** (Power/Fear) |
| **Elder** | Memory | Has seen it all before | Commitment → **Storyteller** (Memory/Humour). **Dark:** holding a Grudge → **Reactionary** (Memory/Rage) |
| **Street Musician** | Humour | Busker, songwriter | Practice a song move → **Satirist** (Humour/Vision). **Dark:** holding a Patron's Purse → **Court Entertainer** (Humour/Wealth) |
| **Newsboy** | Sense | Runs papers and messages; very fast (high Wit) | Commitment → **Courier** (Sense/Hope). **Dark:** holding Bribe Money → **Informer** (Fear/Corrupt) |
| **Homemaker** | Love | Raising children, full or part time | Endure heavy damage → **Mourning Parent** (Grief/Humour), after mothers' movements. Commitment → **Head of the Household** (Love/Custom) |
| **Grandee** | Wealth | Rich local collaborator | Commitment (very high) → **Philanthropist** (Wealth/Love), a redemption path. Level → **Councillor** (Wealth/Power), deeper into the regime |

### Imperial outsiders (distinct by fashion)

| Archetype | Type | Branches |
|---|---|---|
| **Imperial Trooper** | Power | Commitment → **Disillusioned Veteran** (Power/Grief). **Dark:** cruelty in debate → **Officer** (Power/Fear) |
| **Colonial Official** | Protocol | Leans Logic → **Reformer** (Protocol/Vision). **Dark:** level → **Commissioner** (Protocol/Power) |
| **Foreign Correspondent** | Facts | Commitment → **Sympathiser** (Facts/Love) |

## The player character

The player needs an identity that lets them wander and recruit, free of a job, a home or a family to return to.
Three starting identities to choose from:

| Starting identity | Type (draft) | Why they're free to wander |
|---|---|---|
| **Street Kid** | Sense | No home, no family to answer to; knows every alley |
| **Wandering Ascetic** | Idealism | Has given up possessions and ties by choice |
| **Exiled Heir** | Power | A displaced royal, cut off from their old life and position |

They evolve through **branching evolutions based on story choices**. The simplest way for now is
**item-based**: the story hands over a different item at each decision point, and using it
(`EVO_ITEM`) or levelling up while holding it causes the matching evolution. Dark branches work the
same way, through the choices that lead there.

## Unique individuals (to be designed)

Known so far:
- **The Heel**: the ultimate antagonist; the Aura of Fury ability.
- **The Saint**: a previously apolitical figure known for pure compassion; the Aura of Sorrow ability.
- **The Legend**: so inspiring they uplift everyone, even opponents; the Inspiring Presence ability.

Enough uniques are needed to fill a whole team (6+), spread across both sides.

## Open questions

1. Which archetypes to keep, cut or add?
2. The player character's branch trees and the items or choices behind them.
