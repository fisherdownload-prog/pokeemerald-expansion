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
	.string "Incredible heat! Your spirit\n"
	.string "shines brighter than any fire.\l"
	.string "Here is your BADGE!$"

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
	.string "Do not look past me toward the\n"
	.string "LEADER! Focus on our battle!$"

Gen_Town09_Gym_Text_Trainer0Defeat:
	.string "You totally swept me away in that\n"
	.string "tide!$"

Gen_Town09_Gym_Text_Trainer0After:
	.string "I could float out here all\n"
	.string "afternoon!$"

Gen_Town09_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_ROSE_3, Gen_Town09_Gym_Text_Trainer1Intro, Gen_Town09_Gym_Text_Trainer1Defeat
	msgbox Gen_Town09_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town09_Gym_Text_Trainer1Intro:
	.string "Show me how well you handle FIRE\n"
	.string "POKéMON under pressure!$"

Gen_Town09_Gym_Text_Trainer1Defeat:
	.string "Oof! I ran out of breath on the\n"
	.string "last lap!$"

Gen_Town09_Gym_Text_Trainer1After:
	.string "You certainly know how to handle\n"
	.string "yourself at sea!$"
