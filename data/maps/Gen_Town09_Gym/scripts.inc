Gen_Town09_Gym_MapScripts::
	.byte 0

Gen_Town09_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_TATE_AND_LIZA_1, Gen_Town09_Gym_Text_Intro, Gen_Town09_Gym_Text_Defeat, Gen_Town09_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town09_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town09_Gym_EventScript_Defeated::
	message Gen_Town09_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE07_GET
	giveitem ITEM_HM_ROCK_SMASH
	msgbox Gen_Town09_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town09_Gym_Text_Intro:
	.string "My passion for battling never\n"
	.string "cools, not even for a second!\p"
	.string "Come! Let us ignite an\n"
	.string "unforgettable GYM battle!$"

Gen_Town09_Gym_Text_Defeat:
	.string "What a blaze of glory! You have\n"
	.string "more than earned this GYM BADGE!$"

Gen_Town09_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 7 from\n"
	.string "the GYM LEADER.$"

Gen_Town09_Gym_Text_After:
	.string "That BADGE lets you use ROCK SMASH\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town09_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_ROSE_2, Gen_Town09_Gym_Text_Trainer0Intro, Gen_Town09_Gym_Text_Trainer0Defeat
	msgbox Gen_Town09_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town09_Gym_Text_Trainer0Intro:
	.string "You will not reach the LEADER\n"
	.string "without proving your skill right\l"
	.string "here!$"

Gen_Town09_Gym_Text_Trainer0Defeat:
	.string "Oof! I ran out of breath on the\n"
	.string "last lap!$"

Gen_Town09_Gym_Text_Trainer0After:
	.string "Make sure you have plenty of\n"
	.string "healing items for long swims!$"

Gen_Town09_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_ROSE_3, Gen_Town09_Gym_Text_Trainer1Intro, Gen_Town09_Gym_Text_Trainer1Defeat
	msgbox Gen_Town09_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town09_Gym_Text_Trainer1Intro:
	.string "Step forward, challenger! Let us\n"
	.string "see if you deserve a shot at the\l"
	.string "BADGE!$"

Gen_Town09_Gym_Text_Trainer1Defeat:
	.string "A fine contest! Thank you for the\n"
	.string "thrill!$"

Gen_Town09_Gym_Text_Trainer1After:
	.string "Treat your POKéMON with kindness\n"
	.string "and they will never fail you.$"
