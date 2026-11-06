# Resolve RPG: Rename Sheet (draft 2)

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
| Steel | Can't be poisoned; immune to sandstorm damage | *open* | Unfazed by doubt and by a Gish Gallop. A strong fit for **Protocol** (authority) | battle_util.c:5305, battle_end_turn.c:148 |
| Ice | Can't be frozen; immune to hail; Defense x1.5 in snow | *open* | Can't be stunned into silence | battle_util.c:5397, battle_end_turn.c:171, 7300 |
| Grass | Immune to Leech Seed (powder immunity is a config, see tier 2) | *open* | | battle_script_commands.c:5256 |
| Normal | Pure Flying becomes Normal while using Roost | *open* | | battle_util.c:9803 |
| Water, Bug | Net Ball bonus | | Only matters if Net Ball stays | battle_script_commands.c:7879 |

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
| Sandstorm | **Gish Gallop** | Pragmatism, Assertion, Steel slot | Assertion Sp. Def x1.5 |
| Hail | *open* | Ice slot | none |
| Snow | *open* | none | Ice slot Defense x1.5 |

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

## Remaining slots, sorted by tier

| Tier | Slots | What constrains them |
|---|---|---|
| 1: hardcoded quirks | **Steel**, **Ice**, Grass, Normal | Steel: no doubt + Gish Gallop immune. Ice: no stunned silence + hail. |
| 2: config quirks only | **Dark**, Grass (powder) | Can be switched off |
| 3: no quirks | Fighting, Bug, Psychic, Dragon | Free choice |

## Open decisions

1. Name for **Rock**: Assertion, Spin, or something else?
2. Fill **Steel** next (Protocol?), then **Ice**, since those have the most hardcoded behavior.
3. Names for hail and snow (they'll follow from whatever Ice becomes).
