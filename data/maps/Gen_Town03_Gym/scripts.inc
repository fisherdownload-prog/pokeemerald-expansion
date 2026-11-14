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
	.string "Welcome! Only through heat and\n"
	.string "hammer blows does raw ore become a\l"
	.string "blade!\p"
	.string "Let me test your mettle!$"

Gen_Town03_Gym_Text_Defeat:
	.string "Unbreakable will! You passed the\n"
	.string "ultimate test of mettle. Here is\l"
	.string "your BADGE!$"

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
	.string "Oh no! My poor POKéMON got all\n"
	.string "scuffed up!$"

Gen_Town03_Gym_Text_Trainer0After:
	.string "Traveling with POKéMON is the best\n"
	.string "thing ever!$"

Gen_Town03_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_ALBERTO, Gen_Town03_Gym_Text_Trainer1Intro, Gen_Town03_Gym_Text_Trainer1Defeat
	msgbox Gen_Town03_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town03_Gym_Text_Trainer1Intro:
	.string "Every TRAINER in this GYM is hand-\n"
	.string "picked by our LEADER!$"

Gen_Town03_Gym_Text_Trainer1Defeat:
	.string "Hmph! Well played, very well\n"
	.string "played indeed!$"

Gen_Town03_Gym_Text_Trainer1After:
	.string "True strength comes from trust\n"
	.string "between human and POKéMON.$"
