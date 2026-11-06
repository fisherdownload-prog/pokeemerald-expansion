# Resolve RPG: Rename Sheet (draft 6)

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
  Dignity = Electric, Love = Fairy.
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
| Electric | Can't be paralyzed (config) | **Dignity** | Can't be made Hesitant | battle_util.c:5327 |
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
| Dragon | **Hierarchy** (officer) | Only quirk is Misty Terrain halving its moves. If the vanilla chart is kept: resists Rage, Grief and Dignity; weak to Hierarchy (pulling rank) and Memory; Love is super effective and immune to it. |
| Fighting | **Ingenuity** | No quirks. If the vanilla chart is kept: super effective against Common Sense, Assertion, Mathematics, Memory and Corrupt; resisted by Idealism, Hope, Love and Protocol; Fear is immune. Weak to Idealism, Protocol and Love. |

### Status conditions (effects are hardcoded, names are text)

| Existing | New | Effect |
|---|---|---|
| Sleep | Speechless | Can't act for a few turns; boosts recruit rate |
| Paralysis | Hesitant | May fail to act; Wit drops |
| Burn | Frustrated | Physical (Logic) damage halved; slow Resolve loss |
| Poison / Toxic | Doubting / Deep doubt | Slow (or growing) Resolve loss |
| Freeze | Stunned silence | Can't act until it wears off; boosts recruit rate |
| Confusion | Flustered | May undermine own argument |

Note: Frustrated halving **Logic** fits the per-move split: a frustrated person reasons badly
but can still be emotional.

---

## Tier 2: Coded but configurable

All in `include/config/battle.h`.

| Config | Line | What it controls | Relevant to |
|---|---|---|---|
| `B_GHOSTS_ESCAPE` | 45 | Ghost types always escape and can't be trapped | Fear: keep |
| `B_PARALYZE_ELECTRIC` | 46 | Electric types can't be paralyzed | Dignity: keep |
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

| | Rage | Fear | Hope | Love | Grief | Dignity |
|---|---|---|---|---|---|---|
| **Rage** | ½ | 2 | | ½ | | 2 |
| **Fear** | ½ | | 2 | 2 | | ½ |
| **Hope** | ½ | 2 | | | 2 | ½ |
| **Love** | 2 | ½ | | | 2 | ½ |
| **Grief** | ½ | | 2 | 2 | ½ | |
| **Dignity** | 2 | 2 | | | | ½ |

Also set so far: Assertion → Idealism = 2.

If the vanilla chart is kept for these, Memory (Ice) is super effective against Idealism (Flying),
Pragmatism (Ground) and Hierarchy (Dragon), and weak to Rage (Fire), Assertion (Rock), Mathematics (Steel)
and the Fighting slot.

### Stats

Text in `src/battle_message.c:155-168` (`gStatNamesTable`) and `src/strings.c` (summary labels).

| Existing | New |
|---|---|
| HP | Resolve |
| Attack / Defense | Logic / Rebuttal |
| Sp. Atk / Sp. Def | Passion / Composure |
| Speed | Wit |
| Accuracy | Credibility |
| Evasion | Scepticism |

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

## Full slot list

| Slot | Concept | Family | In-game name |
|---|---|---|---|
| Normal | Common Sense | Reason | Sense |
| Fighting | Ingenuity | Reason | Vision |
| Flying | Idealism | Reason | Idealism |
| Poison | Hope | Emotion | Hope |
| Ground | Pragmatism | Reason | Realism |
| Rock | Assertion | Reason | Data |
| Bug | Self-Interest | Reason | Wealth |
| Ghost | Fear | Emotion | Fear |
| Steel | Mathematics | Reason | Maths |
| Fire | Rage | Emotion | Rage |
| Water | Grief | Emotion | Grief |
| Grass | Tradition | Reason | Custom |
| Electric | Dignity | Emotion | Dignity |
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

1. In-game name for Assertion: *Data* for now; *Factoid* is the closest word for "a claim presented as fact".
2. Name for snow, and whether to use hail or snow.
3. Fighting/Ingenuity family placement (Reason?) and Tradition's family.
