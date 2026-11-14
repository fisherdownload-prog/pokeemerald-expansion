Gen_Town03_Gym_MapScripts::
	.byte 0

Gen_Town03_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_BRAWLY_1, Gen_Town03_Gym_Text_Intro, Gen_Town03_Gym_Text_Defeat, Gen_Town03_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town03_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town03_Gym_EventScript_Defeated::
	message Gen_Town03_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE02_GET
	giveitem ITEM_HM_STRENGTH
	msgbox Gen_Town03_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town03_Gym_Text_Intro:
	.string "Precision, resilience, and\n"
	.string "unyielding resolve!\p"
	.string "Try to dent the iron defense of my\n"
	.string "STEEL POKéMON!$"

Gen_Town03_Gym_Text_Defeat:
	.string "Clang! Your resolve rang truer\n"
	.string "than tempered steel! Take this\l"
	.string "BADGE!$"

Gen_Town03_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 2 from\n"
	.string "the GYM LEADER.$"

Gen_Town03_Gym_Text_After:
	.string "That BADGE lets you use STRENGTH\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town03_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_MARCEL, Gen_Town03_Gym_Text_Trainer0Intro, Gen_Town03_Gym_Text_Trainer0Defeat
	msgbox Gen_Town03_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town03_Gym_Text_Trainer0Intro:
	.string "In this GYM, we push STEEL POKéMON\n"
	.string "to their absolute peak!$"

Gen_Town03_Gym_Text_Trainer0Defeat:
	.string "My training is still far from\n"
	.string "complete!$"

Gen_Town03_Gym_Text_Trainer0After:
	.string "Defeat is merely the first step\n"
	.string "toward true mastery!$"

Gen_Town03_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_ALBERTO, Gen_Town03_Gym_Text_Trainer1Intro, Gen_Town03_Gym_Text_Trainer1Defeat
	msgbox Gen_Town03_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town03_Gym_Text_Trainer1Intro:
	.string "Every TRAINER in this GYM is hand-\n"
	.string "picked by our LEADER!$"

Gen_Town03_Gym_Text_Trainer1Defeat:
	.string "What a wipeout! You are a\n"
	.string "powerhouse!$"

Gen_Town03_Gym_Text_Trainer1After:
	.string "Catch you on the next wave!$"
