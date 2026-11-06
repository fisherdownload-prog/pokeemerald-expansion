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

## Characters: planning next

Characters take the place of Pokémon species, so they come before abilities and moves.
Questions are in the conversation; decisions get recorded here.

Relevant facts from the code:
- **Species slots:** the expansion has over 1,000. `include/config/species_enabled.h` can switch off
  whole generations, and our characters can reuse the remaining slots.
- **Gender:** each species can be set to genderless. Charm no longer depends on gender, and only the
  Rivalry ability still does.
- **Names:** each recruit has a species name (their archetype) and a nickname (their own name).
