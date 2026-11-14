Gen_Town02_Gym_MapScripts::
	.byte 0

Gen_Town02_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_ROXANNE_1, Gen_Town02_Gym_Text_Intro, Gen_Town02_Gym_Text_Defeat, Gen_Town02_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town02_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town02_Gym_EventScript_Defeated::
	message Gen_Town02_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE01_GET
	giveitem ITEM_HM_CUT
	msgbox Gen_Town02_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town02_Gym_Text_Intro:
	.string "Welcome! To reach the summit, you\n"
	.string "must learn to ride the fiercest\l"
	.string "gales!\p"
	.string "Let us see if your dreams have\n"
	.string "wings!$"

Gen_Town02_Gym_Text_Defeat:
	.string "Bravo! You soared higher than even\n"
	.string "the wind could carry us. Take this\l"
	.string "BADGE!$"

Gen_Town02_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 1 from\n"
	.string "the GYM LEADER.$"

Gen_Town02_Gym_Text_After:
	.string "That BADGE lets you use CUT\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town02_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_SAWYER_1, Gen_Town02_Gym_Text_Trainer0Intro, Gen_Town02_Gym_Text_Trainer0Defeat
	msgbox Gen_Town02_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town02_Gym_Text_Trainer0Intro:
	.string "Show me how well you handle FLYING\n"
	.string "POKéMON under pressure!$"

Gen_Town02_Gym_Text_Trainer0Defeat:
	.string "Snapped my line! You got away with\n"
	.string "the win!$"

Gen_Town02_Gym_Text_Trainer0After:
	.string "Tight lines and good luck to you,\n"
	.string "kid!$"

Gen_Town02_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_GABRIELLE_1, Gen_Town02_Gym_Text_Trainer1Intro, Gen_Town02_Gym_Text_Trainer1Defeat
	msgbox Gen_Town02_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town02_Gym_Text_Trainer1Intro:
	.string "Do not look past me toward the\n"
	.string "LEADER! Focus on our battle!$"

Gen_Town02_Gym_Text_Trainer1Defeat:
	.string "Looks like my campfire just got\n"
	.string "put out!$"

Gen_Town02_Gym_Text_Trainer1After:
	.string "Safe travels out there on the\n"
	.string "road!$"
