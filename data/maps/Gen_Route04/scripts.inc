Gen_Route04_MapScripts::
	.byte 0

Gen_Route04_EventScript_Trainer0::
	trainerbattle_single TRAINER_GABBY_AND_TY_6, Gen_Route04_Text_Trainer0Intro, Gen_Route04_Text_Trainer0Defeat
	msgbox Gen_Route04_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route04_Text_Trainer0Intro:
	.string "Try not to get starstruck by my\n"
	.string "dazzling POKéMON!$"

Gen_Route04_Text_Trainer0Defeat:
	.string "Hmph... You actually have quite a\n"
	.string "bit of flair!$"

Gen_Route04_Text_Trainer0After:
	.string "Do try not to get too dusty out\n"
	.string "here on the road!$"

Gen_Route04_EventScript_Trainer1::
	trainerbattle_single TRAINER_LOLA_1, Gen_Route04_Text_Trainer1Intro, Gen_Route04_Text_Trainer1Defeat
	msgbox Gen_Route04_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route04_Text_Trainer1Intro:
	.string "One touch from my ICE POKéMON will\n"
	.string "freeze your strategy solid!$"

Gen_Route04_Text_Trainer1Defeat:
	.string "I got completely washed out by\n"
	.string "your team!$"

Gen_Route04_Text_Trainer1After:
	.string "If you find a good fishing spot,\n"
	.string "keep it a secret!$"

Gen_Route04_EventScript_Trainer2::
	trainerbattle_single TRAINER_AUSTINA, Gen_Route04_Text_Trainer2Intro, Gen_Route04_Text_Trainer2Defeat
	msgbox Gen_Route04_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route04_Text_Trainer2Intro:
	.string "Let us see if you understand the\n"
	.string "deeper flow of combat.$"

Gen_Route04_Text_Trainer2Defeat:
	.string "Remarkable! Keep walking that\n"
	.string "path!$"

Gen_Route04_Text_Trainer2After:
	.string "Never grow complacent, no matter\n"
	.string "how many BADGES you earn!$"

Gen_Route04_EventScript_Trainer3::
	trainerbattle_single TRAINER_GWEN, Gen_Route04_Text_Trainer3Intro, Gen_Route04_Text_Trainer3Defeat
	msgbox Gen_Route04_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route04_Text_Trainer3Intro:
	.string "Brrr! Can you handle the sub-zero\n"
	.string "chill of my ICE POKéMON?$"

Gen_Route04_Text_Trainer3Defeat:
	.string "Back to the drawing board around\n"
	.string "the lantern tonight!$"

Gen_Route04_Text_Trainer3After:
	.string "Nothing beats sleeping under a\n"
	.string "blanket of bright stars!$"
