# Resolve RPG: Maps and Travel (first draft)

Goal: maps that look and work nothing like Pokémon's. Urban, dense, and gated by story rather than by obstacles.
This is a design draft. Questions for the designer are at the bottom.

## Core idea: one open city-region, opened up by the story

- **One continuous open world**, not a chain of routes and towns. The world is a set of **districts** (neighbourhoods,
  a harbour, a rail yard, a university quarter, the old town, the colonial administrative centre, outlying villages).
- **Districts open as the story advances.** This is a stronger HM system: instead of a rock that needs Rock Smash,
  an entire district is closed until the story gives you a reason to be allowed in.
- Gates are **social and political, not terrain**: curfews, checkpoints, a pass you need, a district under martial law, a
  neighbourhood that won't speak to strangers, a bridge guarded until someone vouches for you.
- **No random grass.** Encounters follow the Game Plan (placed characters, wandering citizens, soapbox locations).
- **Not an exploration game.** Districts are dense and purposeful: few dead ends, little hidden loot, nothing to
  grind for. The pull is the story and the people.

## Making it unlike Pokémon

| Pokémon habit | Replace with |
|---|---|
| Top-down routes with grass, ledges, cut trees | Streets, rooftops, alleys, markets, stations, courtyards |
| Town = a few houses and a gym | District = a dense grid of blocks, with interiors that actually match the buildings |
| Route-to-route linear flow | Hub-and-spoke through the city; many ways to cross a district |
| Gym puzzle | A building to win over: its owner, staff and residents |
| Pokémon Centre in every town | Safehouses you unlock (below) |
| HM blockers (Cut, Surf, Strength...) | Access blockers: passes, curfews, informers, guards, reputation |

Technical note: Gen 3 maps are 16x16 metatiles with two tilesets per map, and a map can be large in the layout
data, but there is a hard cap on the number of tiles and palettes visible per map. Dense city blocks work better as
**many mid-sized maps stitched with map connections** than as one enormous map. The player never sees the seams.

## Gating: a stronger HM system

Existing code gates field moves on badge flags (`FLAG_BADGE01_GET` ... `FLAG_BADGE08_GET`) and system flags such as
`FLAG_SYS_USE_FLASH`. We can repurpose the same mechanism with **story flags** instead of badges:

- Each district has an **access flag** (e.g. `FLAG_ACCESS_HARBOUR`).
- Entry points (map connections, doors, gates) check it, and run a short script if closed: a guard turns you back, a
  gatekeeper asks for a pass, a crowd blocks the street.
- Opening a district is a **story beat**, not an item pickup.
- The same flag can also unlock the **safehouse** inside it, but these are separate: a district can be open while its
  safehouse is still locked.

## Safehouses

Safehouses replace Pokémon Centres. They are not given; they are **won**.

- Each safehouse belongs to someone (a shopkeeper, a printer, a landlady, a priest, a ferryman).
- To unlock it you must **win over the owner**. Possible forms: a debate, a favour, a story mission, or a mix.
- Once unlocked, a safehouse is where you **heal, store your party, and manage your team** (the storage-box equivalent),
  and it is a **fast-travel destination**.
- The owner stays in the game: they can give gossip, side tasks, and react to how the story has gone.
- Safehouses are **the checkpoints**. Whiting out (losing a debate chain or being arrested) returns you to the last
  safehouse you used.

Code mapping: Pokémon Centres use `data/heal_locations.json`, which sets the whiteout location and Fly destinations
by map; each safehouse becomes an entry there. Unlocking sets a flag per safehouse, which the travel menu reads.

## The Underground

A literal tunnel network that links the safehouses. It is the **fiction behind fast travel**, never a place you play.

- Characters use it to move between safehouses **without fear of the authorities**.
- The player never walks it. Fast travel is a **fade to black, a short text beat, and arrival** at the destination safehouse.
- It can still carry story: a tunnel entrance sign in each safehouse, an NPC who mentions a collapsed section, a map on a
  wall that fills in as you unlock more safehouses.
- Optional: the authorities find a tunnel mid-game and close part of it, which temporarily removes some destinations
  (a story cost, not a game-breaking one).

## Fast travel: the key item

A **key item you have from the start** (working name: *the Underground Pass*, or a map, or a token) that returns you to **any unlocked safehouse**.

- Replaces Fly. Code-wise, this reuses the Fly region-map screen (`CB2_OpenFlyMap` in `src/region_map.c`), but
  triggered from the bag as a key item rather than from the party menu. A key item whose `fieldUseFunc` opens the
  map is the same pattern as the Town Map (`ItemUseOutOfBattle_TownMap` in `src/item_use.c`).
- **Only safehouse destinations appear**, and only unlocked ones. Locked ones are hidden or shown as unknown.
- **It cannot be used from everywhere.** Suggested rule: only from outdoors and from safehouses, not mid-mission and not
  inside buildings under guard. This keeps travel from breaking tension scenes.
- Travel is **one-way back to a safehouse**, as you described. You walk (or use the open map) to get out again.
  We should decide whether going *out* from one safehouse to another is also allowed (see questions).

### Travel screen: one drawn map of the country (decided)

- A single **hand-drawn map of the whole country** replaces the Gen 3 grid region map. It shows rivers, rail lines, city
  and district outlines in our own art style, and doubles as the tunnel map in the fiction.
- Each unlocked safehouse appears as a **dot**. The **selector jumps from dot to dot** instead of sliding square by
  square. Locked safehouses are missing or shown as unknown.
- Code: the Fly screen (`src/region_map.c`) assumes a fixed grid of map sections. We keep the screen but replace the
  cursor movement with a list of safehouse positions and the background with the drawn map. Safehouses are
  grouped by city so the selector moves in a sensible order.

## Dependencies on other design

- **Characters and evolution:** safehouses and districts are good triggers for `IF_IN_MAP` / `IF_IN_MAPSEC`
  evolutions (prison, the capital, a pilgrimage site).
- **Encounters:** each district gets its own wandering-citizen table and soapbox locations.
- **Graphics:** every tileset is original (see Game Plan). The district list below drives the tileset list.

## First-pass district list (placeholder)

To be replaced by whatever the story needs. Aim for **6 to 8 districts**, matching the eight badges Emerald uses, which
is convenient for the existing gating code.

1. Starting neighbourhood (tenements, market, the first safehouse)
2. Docks and warehouses
3. Rail yards and station
4. University quarter
5. Old town and temple streets
6. Wealthy collaborator district
7. Administrative centre (the regime)
8. Outlying villages (the colonised land, away from the city)

## Decisions so far

- **Scope:** multiple cities across a country. Size is kept down because we only build the areas the player visits.
- **Travel screen:** one drawn map of the country with a selector that jumps between safehouse locations.

## Questions for you

1. **How many safehouses?** One per district, or several? Does every one need a full "win them over" quest, or can some
   be a single debate and some be big story beats?
2. **Fast travel from anywhere outdoors, or only from safehouses?** I assumed anywhere outdoors, landing at any
   unlocked safehouse.
3. **What stops you walking into a locked district early?** Soft gates (a guard turns you back) or hard gates (no
   path at all)? Soft gates are cheaper and read better.
4. **Does the world change over time?** E.g. curfew at night, a march that closes a street, a district raided after a
   story event. Cheap to do with flags; gives the city a pulse.
