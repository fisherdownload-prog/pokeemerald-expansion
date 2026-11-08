# Resolve RPG: Debate System and Characters (first draft)

The battle system for the new engine (Godot, built on GDQuest Open RPG). Written from scratch, so nothing here is
bound by Pokémon's rules. `rename-sheet.md` stays as a record of the old type and stat concepts; reuse what still fits.

Parts marked **(my reading)** are interpretations to confirm.

## Portraits: built from parts

Every person is unique.

- **Random characters** get a portrait assembled from layered parts: face shape, skin tone, eyes, brows, nose, mouth,
  hair, facial hair, age lines, glasses, headwear, clothing.
- **Fixed characters** get custom portraits, drawn in the same style so they sit beside the generated ones.
- **Each character stores a seed**, so they keep the same face for the whole game.
- **Clothing and accessories carry meaning:** archetype, class, faction, heartland versus colony. This follows the
  Game Plan rule of **fashion, not ethnicity**. Faces and bodies come from one broad shared pool, so no group is drawn
  as a type.
- **Evolution changes clothing and accessories, not the face.** This fits the earlier decision that disguises are form
  changes.
- **Expressions:** a few brow and mouth variants per portrait (confident, rattled, beaten) for reactions in debate.
  Cheap with layered parts, and valuable in a game about persuasion.
- Variety grows fast: around 8 options in each of 10 slots gives millions of combinations.

## Types

- Each character has **one or two types**. Both are possible in the new engine.
- **Types do not depend on archetype.** Every character has an archetype (shared by fixed and random characters),
  and their types are separate. Two Students might be Facts/Hope and Rage.
- Some archetype and type combinations will work better than others, but **unusual combinations can have twists** that
  make them worth using.
- Not bound to Pokémon's 18 types or its chart any more. The existing list (Reason, Emotion and Officer families) is a
  starting point and can be reshaped.
- Suggested effects of a character's types (to confirm):
  - **Attack:** argument parts matching their types are stronger when they use them.
  - **Defence:** counters of a type they are weak to cost them more Resolve.

Open: should random characters roll their types completely freely, or **weighted** by archetype (likely combinations
common, twists rare)?

## Debates: building arguments from parts

Instead of choosing an attack, on your turn you **assemble your own argument** or **dismantle your opponent's**.

- An argument is **built from parts**, in order.
- You can make **several small arguments or one big one**.
- **Each argument part can be used only once per battle.** A debate is a matter of spending a limited set of parts well.
- **Order matters.** If you lead with your evidence and the opponent counters with something strong against evidence,
  you take more Resolve damage.
- **Every hit an argument takes damages the Resolve of the character making it.** A long argument is exposed for
  longer.
- Type effectiveness and each individual's strengths and weaknesses feed into how hard each part and each counter hits.

### Two layers: kind and type (decided)

Every argument part has:

- a **kind**, its role in the argument (placeholder list: **claim, evidence, reasoning, appeal, conclusion**). Kinds set
  the **ordering rules**: for example, evidence after a claim supports it, and a conclusion finishes the argument.
- a **type** (Facts, Hope, Rage and so on), which sets **effectiveness**.

A counter can be strong against a kind, a type, or both. "Your opponent counters your evidence with something strong
against evidence" is a kind matchup.

### How a turn works

1. **Arguments stay on the table across turns.** An argument in progress sits in front of the person building it.
2. **On your turn you either:**
   - **add a part** to your own argument in progress, or
   - **counter a part** of your opponent's argument, which damages *their* Resolve.
3. **Any part on the table can be countered.**
4. **Parts get harder to take down the longer they stand.** Not countering a point implicitly accepts it. Each round a
   part survives without being countered, it gains **standing**, which makes it harder to counter and stronger when
   the argument is delivered. Ignoring an opponent's argument is therefore dangerous.
5. **Finishing an argument** (with a conclusion) delivers it: it deals Resolve damage to the target, based on the parts
   that survived and their standing.
6. **Small arguments** finish quickly and are rarely countered, but hit lightly. **Big arguments** hit hard but give the
   opponent several turns to pick them apart.

### Limits (decided)

- **Each character has 12 argument parts**, each usable **once per battle**.
- **Countering is never limited.** You can always counter your opponent's arguments. Only your own argument parts run
  out, so a character who has spent their parts can still fight, but only defensively.

### Team debates

- **Build one on one first.** Design the data so each side holds a **list** of speakers, so team debates can be added
  later without a rewrite. Open RPG already supports several combatants per side.

### Still to settle

- **What are counters made of?** Since countering is unlimited, a character presumably has a separate, small set of
  **reusable counters**, each with a kind and type it is strong against (like Pokémon's four moves). How many?
- **What if there is nothing to counter?** If the opponent has no argument on the table and you have no parts left,
  can you do anything (press the person directly, wait), or does the debate end?
- **When does the target take damage?** Only when an argument is delivered, or also as each part lands?
- **Stats:** the six existing stats (Resolve, Logic, Rigour, Spirit, Poise, Wit) still map naturally: build strength,
  resistance to counters, and turn order. To be worked out with the system.

### Reference

**Griftlands** (Klei) has a negotiation mode close to this: each side has Resolve, arguments sit on the table, and the
opponent can attack the arguments or the person. Worth playing as a reference. This design differs in ordered parts,
once-per-battle parts, and damage to the arguer when parts are countered.

## AI (decided rule, for now)

**The AI always works out the most effective action, then has a percentage chance to pick a random one instead.**
The more skilled the opponent, the lower that chance. Preferences (favourite kinds or types per character) can be
weighted in later.

- **Skill** becomes one number per opponent (for example 40% random for a nervous citizen, 0% for a final
  opponent). Easy to tune.
- **"Random" means a random legal action**, so a mistake is always something the rules allow.
- **"Most effective" must value long-term play, not only this turn.** Looking only one turn ahead, the AI would never
  build big arguments, because their payoff comes later. The scoring needs to count the worth of an argument in
  progress and the standing of parts on the table, as well as Resolve damage dealt and risked.
