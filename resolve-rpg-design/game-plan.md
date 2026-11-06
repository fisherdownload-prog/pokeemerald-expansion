# Resolve RPG: Game Plan

Big-picture decisions that sit above the rename sheet. See `rename-sheet.md` for battle mechanics.

## Graphics: replace everything

Goal: no Pokémon art anywhere, and no imitation of the Pokémon style.

| Area | Plan | Notes from the code |
|---|---|---|
| Maps and tilesets | Made from scratch | Gen 3 builds maps from 16x16 metatiles made of 8x8 tiles, with 16-colour palettes split between a primary and a secondary tileset. Porytiles can convert ordinary layered PNGs into this format. |
| Open-source tilesets | Allowed if not derived from Pokémon | Check each licence: CC0 is simplest; CC-BY needs credit. Avoid packs that are rips or edits of Pokémon tiles, including many "fan" packs. Most of this asset repo is Pokémon-derived, so it is mostly out. |
| Battle sprites (front/back) | Human art for every character | 64x64, 16 colours each |
| Trainer sprites | Not used; replaced with original art | |
| Party menu and storage-box icons | Small **face icons** | 32x32, two animation frames, from a small shared set of palettes |
| Overworld sprites | Original people | Also needed if overworld encounters are used (below) |
| UI | Restyled | Type icons, status icons, the "HP" label on the Resolve bar, the summary screen |

## Encounters

Mostly **visible, overworld-based** encounters, plus a few deliberate sources of random ones.

| Source | How it works | Code support |
|---|---|---|
| **Placed characters** | Fixed NPCs on maps who start a debate when spoken to or when they see you | Existing trainer and script system |
| **Wandering citizens** | Undecided people spawn and walk around a map, drawn from that map's encounter table; walking into one starts an encounter | Built in: Overworld Wild Encounters, `WE_OW_ENCOUNTERS` in `include/config/wild_encounter.h` (needs an overworld sprite per character type) |
| **Soapbox locations** | Busy places (a busy street, a train station, a university) where standing in crowd areas can produce random encounters | Built in: the normal random-encounter tables, attached to "crowd" tiles instead of grass |
| **The soapbox itself** | A literal soapbox tile or object. Standing on it draws a random listener, with a chance of the police turning up instead | Existing script commands: `random`, `setwildbattle` + `dowildbattle` for a listener, a trainer battle for the police. The police chance could grow with a "heat" variable. |

## Setting

- **Low tech**, to avoid modern surveillance and technology. Roughly trains, telegraphs, printing
  presses and newspapers: early 20th century.
- **A fictional setting resembling the British Empire.** The colonised land is more like India than
  America, **without being a stereotype**: an invented place with its own names, regions and
  traditions, inspired by history rather than copying it.
- Surveillance means informers, censors and police files, which already fits *Din*, Doctored
  Records and the Protocol, Power and Corrupt officer types.

## Characters

Characters take the place of Pokémon species.

- **Archetypes** (common people, like common species) and **unique individuals** (like legendaries).
- **Experience is debating experience.**
- **Evolution happens when someone's life fundamentally changes**, here mostly as they commit more
  deeply to a cause.
- **Branching, Digimon-like evolution**: branches reflect different life choices. That also allows
  role-playing for the player character.
- **Different kinds of people evolve in different ways.**

### Example: the Student (an Eevee-like branching archetype)

A Student given a **textbook** of a subject specialises in it, without necessarily graduating. Method:
gain a level **while holding** the book.

### Evolution methods the code already supports

Evolutions can combine several conditions, and a species can have many branches (Eevee has eight).

| Code method or condition | Possible life change |
|---|---|
| Level up + `IF_HOLD_ITEM` | Student + textbook → specialist (Historian, Mathematician...) |
| `IF_MIN_FRIENDSHIP` | **Commitment** to the cause (friendship renamed) |
| `IF_IN_MAP` / `IF_IN_MAPSEC` | Being somewhere: a pilgrimage, the capital, **prison** |
| `EVO_SCRIPT_TRIGGER` | A story event: a speech, an arrest, a march |
| `IF_ATK_GT_DEF` / `EQ` / `LT` | Which way someone leans (Logic against Rigour), as Tyrogue does |
| `IF_NATURE` / amped / low-key nature | Personality |
| `IF_USED_MOVE_X_TIMES` | Practice: an Orator after giving enough speeches |
| `IF_KNOWS_MOVE` / `IF_KNOWS_MOVE_TYPE` | The arguments they've taken up |
| `IF_CURRENT_DAMAGE_GE` / `IF_RECOIL_DAMAGE_GE` | Enduring hardship: taking punishment without striking back |
| `IF_SPECIES_IN_PARTY` / `IF_TYPE_IN_PARTY` | Mentorship: travelling with a Teacher or an Organiser |
| `IF_TIME` / `IF_NOT_TIME` | Night-shift workers, dawn prayers |
| `IF_WEATHER` | Map weather at the time |
| `IF_CRITICAL_HITS_GE` + `EVO_BATTLE_END` | A breakthrough moment in a single debate |
| `IF_DEFEAT_X_WITH_ITEMS` | Winning over enough of a certain kind of person |
| `IF_BAG_ITEM_COUNT` | Gathering resources (it uses them up) |
| `EVO_ITEM` | A single defining gift or experience |
| Contest stats (`IF_MIN_SMARTNESS`...) | If contests are repurposed later |

Not useful here: `EVO_TRADE` (no link play).

### Relevant facts from the code
- **Species slots:** the expansion has over 1,000. `include/config/species_enabled.h` can switch off
  whole generations, and our characters can reuse the remaining slots.
- **Gender:** each species can be set to genderless. Charm no longer depends on gender, and only the
  Rivalry ability still does.
- **Names:** each recruit has a species name (their archetype) and a nickname (their own name).
