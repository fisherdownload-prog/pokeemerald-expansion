Gen_Route01_MapScripts::
	.byte 0

Gen_Route01_EventScript_Trainer0::
	trainerbattle_single TRAINER_DUSTY_1, Gen_Route01_Text_Trainer0Intro, Gen_Route01_Text_Trainer0Defeat
	msgbox Gen_Route01_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route01_Text_Trainer0Intro:
	.string "Experience cannot be bought at any\n"
	.string "POKé MART!$"

Gen_Route01_Text_Trainer0Defeat:
	.string "Remarkable! Keep walking that\n"
	.string "path!$"

Gen_Route01_Text_Trainer0After:
	.string "Go on now. Your destiny awaits!$"

Gen_Route01_EventScript_Trainer1::
	trainerbattle_single TRAINER_CHIP, Gen_Route01_Text_Trainer1Intro, Gen_Route01_Text_Trainer1Defeat
	msgbox Gen_Route01_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route01_Text_Trainer1Intro:
	.string "Focus your thoughts, or my PSYCHIC\n"
	.string "team will overwhelm your mind!$"

Gen_Route01_Text_Trainer1Defeat:
	.string "You proved your worth beyond any\n"
	.string "doubt!$"

Gen_Route01_Text_Trainer1After:
	.string "You have a good head on your\n"
	.string "shoulders, youngster.$"

Gen_Route01_EventScript_Trainer2::
	trainerbattle_single TRAINER_FOSTER, Gen_Route01_Text_Trainer2Intro, Gen_Route01_Text_Trainer2Defeat
	msgbox Gen_Route01_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route01_Text_Trainer2Intro:
	.string "Watch your step! The rocks around\n"
	.string "here bite back!$"

Gen_Route01_Text_Trainer2Defeat:
	.string "Wahaha! What an avalanche of power\n"
	.string "you have!$"

Gen_Route01_Text_Trainer2After:
	.string "Always carry plenty of POTIONS\n"
	.string "when exploring far from town!$"

Gen_Route01_EventScript_Trainer3::
	trainerbattle_single TRAINER_DUSTY_2, Gen_Route01_Text_Trainer3Intro, Gen_Route01_Text_Trainer3Defeat
	msgbox Gen_Route01_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route01_Text_Trainer3Intro:
	.string "En garde! Let us conduct this\n"
	.string "match with utmost honor!$"

Gen_Route01_Text_Trainer3Defeat:
	.string "Bravo! A truly masterful display!$"

Gen_Route01_Text_Trainer3After:
	.string "May fortune favor your travels\n"
	.string "across the land!$"
