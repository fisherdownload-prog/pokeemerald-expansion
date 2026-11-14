Gen_Town07_Gym_MapScripts::
	.byte 0

Gen_Town07_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_WINONA_1, Gen_Town07_Gym_Text_Intro, Gen_Town07_Gym_Text_Defeat, Gen_Town07_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town07_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town07_Gym_EventScript_Defeated::
	message Gen_Town07_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE06_GET
	giveitem ITEM_HM_WATERFALL
	msgbox Gen_Town07_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town07_Gym_Text_Intro:
	.string "Pride, fury, and ancient majesty\n"
	.string "define my DRAGON POKéMON!\p"
	.string "Hold nothing back, or be swept\n"
	.string "away!$"

Gen_Town07_Gym_Text_Defeat:
	.string "Magnificent! You stood fearless\n"
	.string "before dragons and triumphed! Take\l"
	.string "this BADGE!$"

Gen_Town07_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 6 from\n"
	.string "the GYM LEADER.$"

Gen_Town07_Gym_Text_After:
	.string "That BADGE lets you use WATERFALL\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town07_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_FELIX, Gen_Town07_Gym_Text_Trainer0Intro, Gen_Town07_Gym_Text_Trainer0Defeat
	msgbox Gen_Town07_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town07_Gym_Text_Trainer0Intro:
	.string "Our DRAGON strategies are famous\n"
	.string "across the entire region!$"

Gen_Town07_Gym_Text_Trainer0Defeat:
	.string "Wow, you are really good at this!$"

Gen_Town07_Gym_Text_Trainer0After:
	.string "Good luck on the rest of your\n"
	.string "trip!$"

Gen_Town07_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_VIOLET, Gen_Town07_Gym_Text_Trainer1Intro, Gen_Town07_Gym_Text_Trainer1Defeat
	msgbox Gen_Town07_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town07_Gym_Text_Trainer1Intro:
	.string "Think you can earn a BADGE today?\n"
	.string "Let us test that confidence!$"

Gen_Town07_Gym_Text_Trainer1Defeat:
	.string "That was a bigger shock than\n"
	.string "hooking a monster!$"

Gen_Town07_Gym_Text_Trainer1After:
	.string "Water routes can be tricky if you\n"
	.string "are unprepared!$"
