# Resolve RPG: Plot (first draft)

Deliberately simple. Fits the Game Plan setting (an invented empire and colony) and `maps.md`. Real-world
inspiration is used only in the broadest terms; nothing is copied or specific to a real country or party.

**Rule: no violence, ever.** The player wins by persuasion, organisation, exposure and pressure. The authorities can
arrest, fine, censor and intimidate, and the game can show that, but the player's side does not hurt anyone.

## The shape of the story

1. **Unite the rebels and win people over.** Travel the country, city by city, bringing scattered rebel groups and
   ordinary people into one movement until you have supporters in every city.
2. **Make occupation uneconomical.** Raise the cost of ruling the colony until the empire decides it isn't worth
   keeping troops and officials here.
3. **Force the election.** The empire's departure plan, or the regime's need to look legitimate, leads to a vote.
4. **Win the election.** Beat the current establishment (the collaborators who grew rich on the empire) in debate.
5. **Make democracy happen in every city** (see the end of this document).

Act 1 is the bulk of the game. It lines up with the districts and safehouses in `maps.md`: each city has people
to win over, a safehouse to unlock, and a state that can change.

## Act 1: rebel groups

The rebels are not one group. They differ in tactics and in how much they trust each other, and they are the main
source of recruits (characters). Uniting them is the main way the plot moves from city to city.

- Each city has one or more groups (a union, a student circle, a temple society, a smugglers' ring, a newspaper).
- Winning a group over unlocks its safehouse and its people.
- Some groups want the fight to be violent. Part of the story is persuading them not to be. That is a debate, not a
  fight.

## Act 2: making occupation uneconomical

A visible measure of **how much the empire is spending** to hold the colony. It rises with what the player does:
boycotts that cut trade, strikes that stop ports and rail, scandals that cost the empire support at home, officials
who stop cooperating. When it passes a threshold, Act 3 begins.

- The measure is a single variable, shown to the player as a report from a contact (a newspaper clipping, a
  sympathetic clerk), not a number on screen.
- It gives the player a reason to visit cities again: each city adds its own pressure.

## Early choice: the prison break

One of the early missions to win someone over means **getting them out of prison**. How the player does it decides
whether they free just that person or **everyone held there**.

- **One person:** a quiet, targeted release (a petition, a favour, a clerical trick). Safe and controlled, but it
  frees only one.
- **Everyone:** a mass release (for example, exploiting an amnesty, a paperwork loophole, or a crisis that makes the
  prison impossible to hold). It costs more and happens only if the player picks the right method.

The player **cannot vet the prisoners** in a mass release. They are a mix:

- **Good people locked up for political crimes.** Some of these can be **recruited almost immediately** afterwards, so
  the early game gets a burst of new characters.
- **Others who are not good.** Some go on to do bad things later. The consequences:
  - They **lock out other characters** (someone refuses to work with the movement because of them, or is hurt by
    what they did).
  - They **damage the player's popularity in certain cities**.

This is the first example of the pattern the game should repeat: **a generous or bold choice has a real cost the
player can't fully see at the time**.

### How it could work in the code

- Each prisoner is a character with a hidden **disposition** (good, mixed, bad) set at design time, not visible to
  the player.
- Recruitable ones have an early recruit script. Others wander off and appear later as the source of an event.
- Each city has a **popularity** variable. Bad events subtract from it. Lock-outs are flags that recruitment scripts
  for the affected characters check before allowing a recruit.
- A bad prisoner's harm is **not violence by the player** and the game still doesn't show the player's side
  committing it. The harm is things like theft in the movement's name, informing, public disgrace, or crime that
  gets blamed on the movement.

### Decided details

- **Cast size:** 8 to 12 named prisoners.
- **Information:** the player is told upfront that the prison holds a **mix of political prisoners and petty
  criminals**, and nothing more. There is **no interview or vetting** beforehand, so the decision to free everyone is
  made knowing the risk but not who is who.
- **Mitigation:** the player gets some ways to limit the fallout after the fact (for example persuading someone to
  stop, handing them over, sending them away, or repairing the damage in a city). These reduce harm but do not
  remove it.
- **At least one consequence cannot be stopped.** One of the bad outcomes always happens, however well the player
  responds. It should be painful and memorable (a lasting loss of a character or a city's trust), and clearly traceable
  to the choice to free everyone.
- **More early choices** will be designed later as the story is fleshed out.

## Big choice 1: the action against the empire

Pick one major, non-violent action. It decides which cities matter most and what the empire loses.

| Action | Broad inspiration | What it hits | Who it needs |
|---|---|---|---|
| **Boycott** | Refusing to buy or use the empire's goods | Trade and tax revenue | Shopkeepers, consumers, the markets |
| **General strike** | Workers stopping ports, rail and mills | Transport and industry | Unions, dock and rail workers |
| **Exposé** | Publishing the truth to the empire's own public | Opinion and the empire's government at home | Printers, journalists, sympathetic officials |

Placeholder list. Add or swap later. Each leads to a different mix of districts opening up and different Act 3 conditions.

## Big choice 2: how the election starts

The player decides how the election comes about. All routes still end with the player having to **win the election**.

| Route | How it works | Starting position in the election |
|---|---|---|
| **Mass protest** | Huge peaceful demonstrations in every city make a vote unavoidable | Strong grassroots, hostile establishment |
| **Defections** | Win over several government officials. They don't join the player's cause directly, but align with it, and the rest of the government goes along in a bloodless "quiet coup" | Government split, some officials friendly, but you still need the votes |
| **Palace infiltration** | Get into the Governor's palace posing as loyal supporters and persuade them to hold an election to show the world how popular the regime is | The regime expects to win, so it is overconfident and badly prepared. The player has to turn that against them |

Broad inspiration for the three: mass non-violent campaigns, officials who changed sides rather than defend the old
order, and regimes that held votes to look legitimate and got surprised.

## Act 4: the election and debates

The election is a series of debates against the current establishment (placeholder: the regime's leading figures and
the wealthy collaborators), one per city plus a final national debate. The route taken in Big choice 2 changes the
starting position, who the opponents are, and which settings the debates take place in.

## Act 5: the vote in every city

After the national result is set in motion, the player goes to **every city** during the run-up to polling to do two jobs, without
violence:

1. **Stop the regime cheating.** Rigged rolls, bought officials, intimidation, lost ballots.
2. **Make sure the results go your way.** Back the right local candidate and keep them in the race.

How the player does each job is open, within non-violence, and **is limited by choices already made**. In some
cities the player may have no way to stop the cheating at all, because of who they did or did not bring on board.

### Local organisers and candidates

- Every city has a **local organiser** the player put in charge of operations there. They are chosen during Acts 1
  and 2, usually from the rebel groups or safehouse owners the player won over.
- The organiser **chooses the local candidates**. Candidates have their own motives (ambition, loyalty, grievance,
  money, a cause) and may not be who the player would have picked.
- The player's job in Act 5 is to work with whoever is there, not to hand-pick everyone.

### What decides what is possible

- **Allies are capabilities.** Each group the player won over adds things the city can do. Clerks can audit the rolls,
  printers can publish the true count, unions can guard polling stations, a temple society can turn out voters.
  Without a group, that option isn't there.
- **Corruption prevention can be locked out** of a city where the player has no one able to do it.
- **Candidates can have problems.** Allegations, old scandals, a rival's smear. The player may need to smooth these
  over with a debate, a favour or a story task before the vote. Failing doesn't end the game, but it costs that city.
- Each city's outcome is a mix of two measures, **integrity** (was the vote clean?) and **result** (did the player's
  side win?). Both feed the ending.

### The managed "democracy" option

Where the player cannot stop the cheating, they may choose to let a managed "democracy" run, so the result goes their
way even if the vote isn't clean. This is a moral cost to the ending, not a hidden trick. (To be confirmed: does the
player ever *choose* it over a clean vote when they could have had one?)

## How the plot uses the map

- **District states** (open, curfew, raided, liberated, and so on) are set by the plot's choices, so Big choice 1 and 2
  change which districts are in which state.
- **Safe/unsafe flags** flip with plot events: a march makes a street safe, a crackdown makes it unsafe.
- Most branching changes **who is where and what they say**. Only the two big choices and the ending should add or
  remove maps.

## Open questions

1. **Which unstoppable consequence?** It needs to hurt but stay fair. For example, a specific character who refuses
   the movement for good, or one city whose popularity never fully recovers.
2. **Is the ending decided city by city, or one national ending?** City by city is richer but costs more to build.
3. **Does the player ever choose the managed "democracy" when a clean vote was possible?** It would give the choice
   more weight if it can be tempting.
