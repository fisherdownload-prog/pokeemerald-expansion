# Resolve RPG: Rename Sheet (draft 12)

Based on `pokeemerald-expansion` at commit `3ecef353`, branch `Resolve-rpg`.
Goal: get the theme by **using what already exists**, not adding mechanics.

## Working method

We work through the code in three tiers:

1. **Hardcoded**: behavior written into the C code. We design *around* these.
2. **Coded but configurable**: behavior in the code that a config switch can turn on or off.
3. **Data and text only**: type chart, names, messages. Free to change.

## Decisions so far

- **Physical/special split stays modern** (per move). As a rule, moves follow their family:
  Emotion moves are special (Passion vs Composure), Reason moves are physical (Logic vs Rebuttal).
  Individual moves can break the rule on purpose.
- **Emotion slots accepted for now:** Rage = Fire, Grief = Water, Fear = Ghost, Hope = Poison,
  Humour = Electric (replaced Dignity), Love = Fairy.
- **Idealism = Flying, Pragmatism = Ground, Assertion = Rock**, and **Gish Gallop = sandstorm** (see tier 1).
- **Mathematics = Steel, Memory = Ice**, **Hail = Revisionism**.
- **Common Sense = Normal**, **Ingenuity = Fighting** (working name: maverick, outside-the-box thinking).
- **Officer types: Protocol = Psychic, Hierarchy = Dragon, Corrupt = Dark.**
- **Tradition = Grass, Self-Interest = Bug.** All 18 slots now have a concept.
- *Scrutiny* is better as a **move** (lowers the target's Passion) than a type.

---

## Tier 1: Hardcoded behavior (design around it)

### Type quirks

| Slot | Hardcoded behavior | New type | Reading | Where |
|---|---|---|---|---|
| Fire | Can't be burned; its damaging moves thaw a frozen target | **Rage** | Can't be made Frustrated; Rage snaps people out of Stunned silence | battle_util.c:5346, battle_script_commands.c:9173 |
| Ghost | Always escapes wild battles; can't be trapped (config, see tier 2) | **Fear** | The frightened flee and can't be cornered | battle_util.c:671, 4982 |
| Poison | Can't be poisoned; Toxic never misses from a Poison type (config); absorbs Toxic Spikes on entry | **Hope** | Can't be made Doubting; clears lingering doubt from the field | battle_util.c:5305, battle_switch_in.c:342 |
| Electric | Can't be paralyzed (config); Electric Terrain prevents sleep | **Humour** | People in a joking mood act on impulse, so they can't be made Hesitant. Electric Terrain becomes a **Lively** atmosphere where nobody is left Speechless. | battle_util.c:5327 |
| Flying | **Not grounded**: Ground moves can't hit it; ignores Spikes, Toxic Spikes and terrains | **Idealism** | Pragmatic arguments don't reach people with their head in the clouds | battle_util.c:5971, 8181-8318 |
| Ground | Immune to sandstorm damage | **Pragmatism** | A Gish Gallop doesn't faze a practical person | battle_end_turn.c:148 |
| Rock | Immune to sandstorm damage; **Sp. Def x1.5 in sandstorm** | **Assertion** | Asserters thrive in a flood of claims: during a Gish Gallop they're harder to move emotionally | battle_end_turn.c:148, battle_util.c:7295 |
| Steel | Can't be poisoned; immune to sandstorm damage | **Mathematics** | A proof can't be doubted; a flood of dubious claims doesn't move someone who checks the numbers | battle_util.c:5305, battle_end_turn.c:148 |
| Ice | Can't be frozen; immune to hail; Defense x1.5 in snow | **Memory** | People who know history aren't shocked into silence; unhurt by Revisionism; snow boosts Rebuttal | battle_util.c:5397, battle_end_turn.c:171, 7300 |
| Grass | Immune to Leech Seed (powder immunity is a config, see tier 2) | **Tradition** | Tradition can't be slowly worn away. Grassy Terrain (heals each turn) could become a Gathering or Festival. | battle_script_commands.c:5256 |
| Normal | Pure Flying becomes Normal while using Roost | **Common Sense** | An idealist who steps back comes down to earth | battle_util.c:9803 |
| Water, Bug | Net Ball bonus | Bug = **Self-Interest** | Only matters if Net Ball stays | battle_script_commands.c:7879 |

### Idealism, Pragmatism and Assertion: how it plays out

- **Pragmatism → Idealism is an immunity (0×)** and it's hardcoded through "grounding", not the chart.
  An idealist can still be brought down to earth by the existing tools:
  - **Smack Down** becomes something like **Reality Check**: grounds the target, so Pragmatism lands from then on.
  - **Gravity** becomes something like **Sobering Moment**: grounds everyone for a few turns.
  - **Roost** becomes something like **Step Back**: heals, but the user loses Idealism for that turn.
  - **Iron Ball** becomes a held item that keeps someone grounded.
- **Assertion → Idealism is super effective** (a chart entry, tier 3). Confident claims of "fact"
  knock idealists down where practical arguments can't even reach them.
- **Stealth Rock** becomes a planted narrative (**Talking Points**?). It hurts everyone who enters,
  scaled by how weak they are to Assertion, so idealists take the most. That behavior is built in.

### Weather damage

| Weather | New name | Who's unaffected (hardcoded) | Bonus (hardcoded) |
|---|---|---|---|
| Sandstorm | **Gish Gallop** | Pragmatism, Assertion, Mathematics | Assertion Sp. Def x1.5 |
| Hail | **Revisionism** | Memory | none |
| Snow | *open* | none | Memory Defense (Rebuttal) x1.5 |

Hail and snow are alternatives: `B_SNOW_WARNING` (battle.h:335) picks which one Snow Warning summons.

### Other slots (no hardcoded type behavior)

| Slot | New type | Notes |
|---|---|---|
| Psychic | **Protocol** (officer) | Only quirk is Psychic Terrain boosting its moves, which could become a "bureaucratic" atmosphere. If the vanilla chart is kept: Corrupt (Dark) is immune to Protocol, and Fear (Ghost) is super effective against it (officers fear their superiors). |
| Dragon | **Hierarchy** (officer) | Only quirk is Misty Terrain halving its moves. If the vanilla chart is kept: resists Rage, Grief and Custom; weak to Hierarchy (pulling rank) and Memory; Love is super effective and immune to it. |
| Fighting | **Ingenuity** | No quirks. If the vanilla chart is kept: super effective against Common Sense, Assertion, Mathematics, Memory and Corrupt; resisted by Idealism, Hope, Love and Protocol; Fear is immune. Weak to Idealism, Protocol and Love. |

### Status conditions (effects are hardcoded, names are text)

Exact numbers from the code (latest-generation configs in `include/config/battle.h`):

| Existing | New | Hardcoded effect | Recruit bonus |
|---|---|---|---|
| Sleep | **Speechless** | Can't act for 1-3 turns (`B_SLEEP_TURNS`) | x2.5 |
| Freeze | **Stunned silence** | Can't act; 20% chance each turn to recover; a Rage move breaks it | x2.5 |
| Paralysis | **Hesitant** | 25% chance to fail to act; Wit halved | x1.5 |
| Burn | **Frustrated** | Logic (physical) damage halved; loses 1/16 Resolve per turn | x1.5 |
| Poison | **Doubting** | Loses 1/8 Resolve per turn | x1.5 |
| Toxic | **Deep doubt** | Loses 1/16, 2/16, 3/16... Resolve per turn | x1.5 |
| Confusion | **Flustered** | 1/3 chance to hit themselves with their own Logic, for 2-5 turns | none |

Recruit bonuses come from `battle_script_commands.c:8102-8110`. So any lasting status makes
someone easier to recruit, and being left speechless or stunned helps most.

**Battle messages done:** 70 strings in `src/battle_message.c` rewritten for these seven statuses,
using "their" for people. Toxic Spikes text now refers to **seeds of doubt** (a good name for the move later).

**Charmed (infatuation) is gender-neutral.** Anyone can charm anyone. `CanBattlerCharmBattler`
in `src/battle_util.c` replaces the opposite-gender check for Attract, Cute Charm, Captivate and
Destiny Knot (including the AI's checks). Only the Rivalry ability still uses gender.

**Flinch = Interrupted**: "X was interrupted and couldn't respond!"

**Pronouns: everyone is "they".** All battle messages use they/their/themselves for people.
"It" is kept only where it means a move, the weather or an item ("But it failed!", "made it rain").
NPC and story dialogue (`data/text/`) still uses Emerald's text, which will be replaced when the
story is written.

**Not yet done:**
- Status icons (PSN, BRN, PAR, SLP, FRZ) are graphics: `graphics/battle_interface/status*.png`.
- Item names and descriptions (Antidote, Burn Heal, Awakening...) belong to the items pass.
- Frostbite strings are untouched; it's off (`B_USE_FROSTBITE`, battle.h:393).

Note: Frustrated halving **Logic** fits the per-move split: a frustrated person reasons badly
but can still be emotional.

---

## Tier 2: Coded but configurable

All in `include/config/battle.h`.

| Config | Line | What it controls | Relevant to |
|---|---|---|---|
| `B_GHOSTS_ESCAPE` | 45 | Ghost types always escape and can't be trapped | Fear: keep |
| `B_PARALYZE_ELECTRIC` | 46 | Electric types can't be paralyzed | Humour: keep |
| `B_POWDER_GRASS` | 47 | Grass types immune to powder and spore moves | Grass slot: decide later |
| `B_PRANKSTER_DARK_TYPES` | 49 | Dark types immune to Prankster-boosted status moves | Dark slot: a fit for **Corrupt** (they know the game) |
| `B_TOXIC_NEVER_MISS` | 91 | Toxic can't miss when used by a Poison type | Hope: probably harmless |
| `B_SANDSTORM_SPDEF_BOOST` | 331 | Assertion's Sp. Def boost in a Gish Gallop | Assertion: keep |
| `B_PHYSICAL_SPECIAL_SPLIT` | 76 | Keep at modern (decided) | All |
| `B_FLAG_NO_WHITEOUT` | 291 | Lose to trainers without blacking out | Authority battles later |

---

## Tier 3: Data and text only

### Type names and chart

`src/data/types_info.h` holds both `gTypesInfo[].name` and `gTypeEffectivenessTable`.
The chart must be **fully rewritten** once the slots are filled. Vanilla matchups would otherwise
carry over.

Emotion matchups agreed so far (attacker ↓, defender →; 2 = super effective, ½ = resisted):

| | Rage | Fear | Hope | Love | Grief | Humour |
|---|---|---|---|---|---|---|
| **Rage** | ½ | 2 | | ½ | | 2 |
| **Fear** | ½ | | 2 | 2 | | ½ |
| **Hope** | ½ | 2 | | | 2 | ½ |
| **Love** | 2 | ½ | | | 2 | ½ |
| **Grief** | ½ | | 2 | 2 | ½ | |
| **Humour** | 2 | 2 | | | ½ | ½ |

Also set so far: Assertion → Idealism = 2.

If the vanilla chart is kept for these, Memory (Ice) is super effective against Idealism (Flying),
Pragmatism (Ground) and Hierarchy (Dragon), and weak to Rage (Fire), Assertion (Rock), Mathematics (Steel)
and the Fighting slot.

### Stats (done)

| Existing | New | Summary label | Dex abbreviation |
|---|---|---|---|
| HP | Resolve | RESOLVE | RES |
| Attack | Logic | LOGIC | LOG |
| Defense | **Rigour** (a trait, not an action like "Rebuttal") | RIGOUR | RIG |
| Sp. Atk | **Spirit** (Passion didn't fit) | SPIRIT | SPI |
| Sp. Def | **Poise** (Composure didn't fit) | POISE | POI |
| Speed | Wit | WIT | WIT |
| Accuracy | credibility | (battle text only) | |
| Evasion | scepticism | (battle text only) | |

The summary screen centres labels in fixed widths: **42 px** on the left (Resolve, Logic, Rigour)
and **36 px** on the right (Spirit, Poise, Wit). RESOLVE uses all 42 px.
Changed in `src/battle_message.c` (stat names, plus "HP", "Attack", "Defense" and "Sp. Def" inside
messages), `src/strings.c` (summary, level-up window, party menu) and `src/pokedex_plus_hgss.c`.
The level-up window shows RESOLVE, not "MAX RESOLVE", which would collide with the numbers.

**Still graphics:** the "HP" label on the battle Resolve bar and the party menu.
**Left for the moves pass:** "ACCURACY" on the move info screen (that's move *Plausibility*).

### Battle messages (`src/battle_message.c`)

| Existing | New | Where |
|---|---|---|
| "X fainted!" | "X lost their nerve!" | :208 |
| "X avoided the attack!" | "X wasn't convinced!" | :280-281 |
| Status messages | per the status table | poison ~24 strings, burn ~21, paralysis ~17, confusion ~13, sleep ~8, freeze ~6 |
| Rain / sun | Somber Mood / Heated Atmosphere | |

### Graphics (small edits)

- Status icons (PSN, BRN, PAR...): `graphics/battle_interface/status*.png`
- Type icons: one per renamed type

---

## Current type chart (in the code)

The six Emotion types use the custom matchups among themselves. Every other cell is vanilla,
except these deliberate changes:

- **Humour → Power = 2**: mockery deflates the powerful.
- **Facts → Rage = 0**: you can't tell an angry person the facts.
- **Facts → Wealth = 1** (was 2).
- **Maths → Love = ½** (was 2): the numbers don't win hearts.
- **Hope → Maths = 2** (was 0): hope defies the odds.
`src/data/types_info.h` now has a second header row with the new names.

| Type | Super effective against | Not very effective against | No effect on | Weak to | Resists | Immune to |
|---|---|---|---|---|---|---|
| **Sense** | - | Facts, Maths | Fear | Vision | - | Fear |
| **Vision** | Sense, Facts, Maths, Memory, Corrupt | Idealism, Hope, Wealth, Protocol, Love | Fear | Idealism, Protocol, Love | Facts, Wealth, Corrupt | - |
| **Idealism** | Vision, Wealth, Custom | Facts, Maths, Humour | - | Facts, Humour, Memory | Vision, Wealth, Custom | Realism |
| **Hope** | Fear, Maths, Grief, Custom | Realism, Facts, Rage, Humour | - | Realism, Fear, Grief, Protocol | Vision, Wealth, Custom | - |
| **Realism** | Hope, Facts, Maths, Rage, Humour | Wealth, Custom | Idealism | Grief, Custom, Memory | Hope, Facts | Humour |
| **Facts** | Idealism, Memory | Vision, Realism, Maths | Rage | Vision, Realism, Maths, Grief, Custom | Sense, Idealism, Hope, Rage | - |
| **Wealth** | Custom, Protocol, Corrupt | Vision, Idealism, Hope, Fear, Maths, Rage, Love | - | Idealism, Rage | Vision, Realism, Custom | - |
| **Fear** | Hope, Protocol, Love | Rage, Humour, Corrupt | Sense | Hope, Rage, Humour, Corrupt | Wealth, Love | Sense, Vision |
| **Maths** | Facts, Memory | Maths, Rage, Grief, Humour, Love | - | Vision, Hope, Realism, Rage | Sense, Idealism, Facts, Wealth, Maths, Custom, Protocol, Memory, Power, Love | - |
| **Rage** | Wealth, Fear, Maths, Custom, Humour, Memory | Facts, Rage, Power, Love | - | Realism, Humour, Love | Hope, Wealth, Fear, Maths, Rage, Grief, Custom, Memory | Facts |
| **Grief** | Hope, Realism, Facts, Love | Rage, Grief, Custom, Power | - | Hope, Custom, Love | Maths, Grief, Humour, Memory | - |
| **Custom** | Realism, Facts, Grief | Idealism, Hope, Wealth, Maths, Rage, Custom, Power | - | Idealism, Hope, Wealth, Rage, Memory | Realism, Grief, Custom, Humour | - |
| **Humour** | Idealism, Fear, Rage, Power | Grief, Custom, Humour | Realism | Realism, Rage | Idealism, Hope, Fear, Maths, Humour, Love | - |
| **Protocol** | Vision, Hope | Maths, Protocol | Corrupt | Wealth, Fear, Corrupt | Vision, Protocol | - |
| **Memory** | Idealism, Realism, Custom, Power | Maths, Rage, Grief, Memory | - | Vision, Facts, Maths, Rage | Memory | - |
| **Power** | Power | Maths | Love | Humour, Memory, Power, Love | Rage, Grief, Custom | - |
| **Corrupt** | Fear, Protocol | Vision, Corrupt, Love | - | Vision, Wealth, Love | Fear, Corrupt | Protocol |
| **Love** | Vision, Rage, Grief, Power, Corrupt | Fear, Maths, Humour | - | Fear, Grief | Vision, Wealth, Maths, Rage, Corrupt | Power |

## Full slot list

| Slot | Concept | Family | In-game name |
|---|---|---|---|
| Normal | Common Sense | Reason | Sense |
| Fighting | Ingenuity | Reason | Vision |
| Flying | Idealism | Reason | Idealism |
| Poison | Hope | Emotion | Hope |
| Ground | Pragmatism | Reason | Realism |
| Rock | Assertion | Reason | Facts |
| Bug | Self-Interest | Reason | Wealth |
| Ghost | Fear | Emotion | Fear |
| Steel | Mathematics | Reason | Maths |
| Fire | Rage | Emotion | Rage |
| Water | Grief | Emotion | Grief |
| Grass | Tradition | Reason | Custom |
| Electric | Humour | Emotion | Humour |
| Psychic | Protocol | Officer | Protocol |
| Ice | Memory | Reason | Memory |
| Dragon | Hierarchy | Officer | Power |
| Dark | Corrupt | Officer | Corrupt |
| Fairy | Love | Emotion | Love |

**Name length limit:** `TYPE_NAME_LENGTH` is **8 characters** (`include/constants/global.h:169`).
Type names appear as text in the battle move menu (`battle_controller_player.c:1735`), the move
info screen (`menu_specialized.c:781`) and the Pokédex search. In-game names are now set in `src/data/types_info.h` and pass the on-screen width tests
(`test/text.c`). The concept name and the in-game label can differ.

## Open decisions

1. ~~In-game name for Assertion~~: **Facts**. A person who goes on what they "know" to be true, whether or not it is.
2. Name for snow, and whether to use hail or snow.
3. Fighting/Ingenuity family placement (Reason?) and Tradition's family.
4. **Frostbite**: an optional replacement for freeze that halves *special* (Passion) damage, mirroring
   Frustrated. Switching it on would replace Stunned silence.

