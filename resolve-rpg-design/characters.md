# Resolve RPG: Characters (draft 4)

Characters take the place of Pokémon species. This is a **first batch to prune and reshape**, not a final list.

## Principles

- **Archetypes** are common people. **Unique individuals** are named people, like legendaries.
- **Balance:** enough uniques to build a whole team from them, and enough archetypes that you never
  have to use a unique.
- **Evolution = a fundamental life change.** Branching, Digimon-style, reflecting choices.
- **Evolution is not a career path.** Archetypes start out defined by their job or place in society,
  because that's how society sees them. As they commit to the cause, they **stop being defined by
  their career and become more of who they are as a person**.
- **Students gain expertise for the movement**, not for a career: a Historian uses history to help the
  cause.
- **Dark branches are about your movement and its tactics**, not selling out. Everyone stays in the
  movement and everything stays **non-violent**, but the methods turn ugly: con artists, fanatics,
  blackmailers, smear writers, hecklers.
- **Looking like the regime is a disguise, not an evolution.** Uniforms, badges of office and
  disguises let your people pass as officials, for infiltration and similar missions (see below).
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

### Held items for evolution

Two kinds of positive item, plus two kinds of dark one:

| Kind | What it is | Examples |
|---|---|---|
| **Something you learn from** | Changes how someone thinks | Textbooks (History, Mathematics, Law, Philosophy...), banned books |
| **A tool you put to use** | Lets someone become what they already were inside | Painting supplies, an instrument, a spinning wheel, a medical kit, printing type |
| **Something that harms you** | Has a harmful built-in effect | See below |
| **A dark tool of the movement** | Lets someone fight dirty, still without violence | **Book of Doctrine** (written by your own movement), forger's kit, stolen files |

The method is the same for all of them: **gain a level while holding it**.

### Disguises and badges of office (for infiltration)

These are **not** evolutions. They use a built-in **held-item form change** (`FORM_CHANGE_ITEM_HOLD`):
while someone holds the item, they switch to a disguised form; take it away and they switch back.
The disguised form can have different types, so a member in a constable's uniform could count as
**Power**/**Protocol** for authority battles and infiltration missions.

Examples: a constable's uniform, a clerk's badge of office, a Party Badge (the regime's pin), forged papers.

Existing items with harmful built-in effects, for dark branches:

| Existing item | Built-in effect | Could become |
|---|---|---|
| Flame Orb | Holder becomes Frustrated | **Grudge** |
| Toxic Orb | Holder falls into Deep doubt | **Propaganda Leaflet** |
| Iron Ball | Holder's Wit halved; grounded | **Debt** |
| Lagging Tail | Holder always acts last | **Bad Reputation** |
| Ring Target | Holder loses immunities | **Wanted Poster** |
| Sticky Barb | Hurts the holder; jumps to whoever touches them | **Nagging Rumour** |

### Other conditions used below

Commitment (friendship), cruelty (critical hits in one debate), enduring damage, a place (such as
prison), mentorship (someone in the party), practice (using a move enough times), time of day,
leaning (Logic against Rigour), personality (nature), story events.

## First batch: 18 archetypes

Types use the in-game names. **Dark** marks a villain-coded branch: still in the movement, still
non-violent, but using ugly tactics. Hero branches are who someone becomes, or their place in the
movement, never a promotion.

| Archetype | Type | Who they are | Branches (condition → result) |
|---|---|---|---|
| **Student** | Sense | Young, unformed, open to anything | Level up holding a textbook: History → **Historian** (Memory), Mathematics → **Mathematician** (Maths), Law → **Advocate** (Protocol), Philosophy → **Philosopher** (Idealism), Engineering → **Builder** (Realism), Science → **Inventor** (Vision), Scripture → **Scholar** (Custom). **Dark:** holding a Book of Doctrine (your movement's own) → **Fanatic** (Idealism/Rage) |
| **Daydreamer** | Idealism | Always somewhere else in their head | Holding painting supplies → **Artist** (Vision/Humour). Holding a notebook → **Poet** (Idealism/Grief). **Dark:** holding a forger's kit → **Forger** (Vision/Facts), who fakes documents for the movement |
| **Street Urchin** | Sense | Lives by their wits on the street (not the player's Street Kid) | Commitment → **Lookout** (Sense/Hope), who warns of raids. **Dark:** several cutting remarks in one debate → **Confidence Trickster** (Facts/Wealth) |
| **Labourer** | Realism | Dock or factory hand | Commitment → **Organiser** (Realism/Love). Endure Struggle recoil → **Picket** (Realism/Grief), who holds the line. **Dark:** collapse from Struggle recoil → **Rabble-Rouser** (Realism/Rage) |
| **Cultivator** | Custom | Works the land, deeply rooted | Endure heavy damage → **Resister** (Custom/Hope). Commitment → **Village Voice** (Custom/Memory). **Dark:** holding Debt → **Hoarder** (Custom/Wealth), who withholds the harvest as leverage |
| **Weaver** | Custom | Skilled hand-craftsperson | Holding a spinning wheel → **Homespinner** (Custom/Hope), who makes the cloth that replaces imports. Commitment → **Pattern-Maker** (Custom/Vision), who designs the movement's banners. **Dark:** holding a Grudge → **Boycott Enforcer** (Custom/Power), who pressures neighbours into line |
| **Shopkeeper** | Wealth | Small trader, worried about stock | Commitment → **Boycotter** (Wealth/Hope), who refuses imperial goods. Commitment + Love in party → **Provider** (Wealth/Love), who feeds the strikers. **Dark:** holding imported goods → **Black Marketeer** (Wealth/Corrupt), who funds the movement by smuggling |
| **Nurse** | Love | Cares for anyone who comes through the door | Holding a medical kit → **Field Medic** (Love/Realism), at the marches. Endure heavy damage → **Healer** (Love/Grief). **Dark:** holding a Propaganda Leaflet → **Martyr-Maker** (Love/Facts), who stages suffering for the papers |
| **Teacher** | Memory | Village or city schoolteacher | Mentoring (Student in party) → **Mentor** (Memory/Love). Holding banned books → **Secret Teacher** (Memory/Hope). **Dark:** holding a Propaganda Leaflet → **Propagandist** (Memory/Facts), rewriting history for the cause |
| **Printer** | Facts | Runs a press, sets type | Holding printing type → **Pamphleteer** (Facts/Vision). **Dark:** holding a Nagging Rumour → **Smear Writer** (Facts/Rage) |
| **Clerk** | Protocol | Minor civil servant | Commitment → **Whistleblower** (Protocol/Hope). **Dark:** holding stolen files → **Blackmailer** (Protocol/Corrupt) |
| **Constable** | Power | Local policeman | Commitment → **Defector** (Power/Love). Leans Rigour → **Refuser** (Power/Protocol), who won't carry out orders. **Dark:** holding a Grudge → **Double Agent** (Power/Corrupt), who stays inside and betrays their oath |
| **Conscript** | Power | Local soldier in the imperial army | Endure Struggle recoil → **Deserter** (Power/Hope). **Dark:** collapse from Struggle recoil → **Mutineer** (Power/Rage) |
| **Elder** | Memory | Has seen it all before | Commitment → **Storyteller** (Memory/Humour). **Dark:** holding a Grudge → **Grudge-Keeper** (Memory/Rage), who keeps old feuds alive |
| **Street Musician** | Humour | Busker, songwriter | Holding an instrument → **Protest Singer** (Humour/Hope). Practice a song move → **Satirist** (Humour/Vision). **Dark:** several cutting remarks in one debate → **Heckler** (Humour/Rage), who humiliates opponents |
| **Newsboy** | Sense | Runs papers and messages; very fast (high Wit) | Commitment → **Courier** (Sense/Hope). **Dark:** holding a Nagging Rumour → **Rumour-Monger** (Sense/Facts) |
| **Homemaker** | Love | Raising children, full or part time | Endure heavy damage → **Mourning Parent** (Grief/Humour), after mothers' movements. Commitment → **Heart of the Street** (Love/Custom). **Dark:** several cutting remarks in one debate → **Shamer** (Love/Rage), who turns the neighbourhood against people |
| **Grandee** | Wealth | Rich local, once a collaborator | Commitment (very high) → **Patron of the Cause** (Wealth/Love), a redemption path. **Dark:** holding Bribe Money → **Kingmaker** (Wealth/Power), who buys influence inside the movement |

### Imperial outsiders (distinct by fashion)

| Archetype | Type | Branches |
|---|---|---|
| **Imperial Trooper** | Power | Commitment → **Disillusioned Veteran** (Power/Grief). Dark branch to be decided |
| **Colonial Official** | Protocol | Leans Logic → **Reformer** (Protocol/Vision). Dark branch to be decided |
| **Foreign Correspondent** | Facts | Commitment → **Sympathiser** (Facts/Love). Dark branch to be decided |

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
