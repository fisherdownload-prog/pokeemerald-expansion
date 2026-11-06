# Resolve RPG: Characters (draft 1)

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

### Heroism through suffering: Struggle

**Struggle's self-damage counts toward an evolution condition** (`IF_RECOIL_DAMAGE_GE`,
`src/battle_set_effect.c:509`). So "ran out of talking points, kept going anyway, and took a lot of
punishment doing it" works with no new code.

Two catches:
1. As written, progress **resets if they faint**, so it rewards enduring *without* collapsing.
   Evolving *because* they hit zero would need a small code change.
2. **Talking points (PP) resetting after every encounter** isn't built in. It's a small code change
   at the end of battle. Lower PP values are just data.

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
| **Mother** | Love | Holds a family together | Endure heavy damage → **Mourning Mother** (Grief/Humour), after mothers' movements. Commitment → **Matriarch** (Love/Custom) |
| **Grandee** | Wealth | Rich local collaborator | Commitment (very high) → **Philanthropist** (Wealth/Love), a redemption path. Level → **Councillor** (Wealth/Power), deeper into the regime |

### Imperial outsiders (distinct by fashion)

| Archetype | Type | Branches |
|---|---|---|
| **Imperial Trooper** | Power | Commitment → **Disillusioned Veteran** (Power/Grief). **Dark:** cruelty in debate → **Officer** (Power/Fear) |
| **Colonial Official** | Protocol | Leans Logic → **Reformer** (Protocol/Vision). **Dark:** level → **Commissioner** (Protocol/Power) |
| **Foreign Correspondent** | Facts | Commitment → **Sympathiser** (Facts/Love) |

## Unique individuals (to be designed)

Known so far:
- **The Heel**: the ultimate antagonist; the Aura of Fury ability.
- **The Saint**: a previously apolitical figure known for pure compassion; the Aura of Sorrow ability.
- **The Legend**: so inspiring they uplift everyone, even opponents; the Inspiring Presence ability.

Enough uniques are needed to fill a whole team (6+), spread across both sides.

## Open questions

1. Struggle-to-zero: keep the built-in "endure without collapsing" version, or change the code so
   collapsing triggers it?
2. Talking points resetting after every encounter: make that code change?
3. Which archetypes to keep, cut or add?
4. The player character: which archetype do they start as, and do they get their own branch tree?
