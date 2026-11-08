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

### How a turn works (my reading)

1. **Arguments stay on the table across turns.** An argument in progress sits in front of the person building it.
2. **On your turn you either:**
   - **add a part** to your argument in progress, or
   - **attack a part** of your opponent's argument, which damages *their* Resolve.
3. **Finishing an argument** delivers it: it deals Resolve damage to the target, based on the parts that survived.
4. **Small arguments** finish quickly and are rarely countered, but hit lightly. **Big arguments** hit hard but give the
   opponent several turns to pick them apart.

### Things to settle

- **Are "evidence" and similar words types (Facts) or kinds of part?** One option is two layers: a part's **kind**
  (claim, evidence, appeal, conclusion) sets the ordering rules, and its **type** sets effectiveness.
  This is richer but harder to learn. One layer is simpler.
- **Which parts can be attacked?** Any part on the table, or only the most recent?
- **When does the target take damage?** Only when an argument is finished, or also as each part lands?
- **What if you run out of parts?** Suggest a weak fallback ("repeating yourself") that always exists and costs
  Resolve, like Pokémon's Struggle.
- **How many parts per character?** Pokémon has four moves. With one use each, something like 8 to 12 seems right.
- **One on one, or teams?** And can you swap who is speaking mid-debate?
- **Stats:** the six existing stats (Resolve, Logic, Rigour, Spirit, Poise, Wit) still map naturally: build strength,
  resistance to counters, and turn order. To be worked out with the system.

### Reference

**Griftlands** (Klei) has a negotiation mode close to this: each side has Resolve, arguments sit on the table, and the
opponent can attack the arguments or the person. Worth playing as a reference. This design differs in ordered parts,
once-per-battle parts, and damage to the arguer when parts are countered.

## AI

Random choice (what Open RPG ships with) won't work here. The AI must judge which parts to play, in what order, and
which of your parts to attack. Plan for this from the start, as it shapes how complex the rules can be.
