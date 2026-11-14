Gen_Route01_MapScripts::
	.byte 0

Gen_Route01_EventScript_Trainer0::
	trainerbattle_single TRAINER_DUSTY_1, Gen_Route01_Text_Trainer0Intro, Gen_Route01_Text_Trainer0Defeat
	msgbox Gen_Route01_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route01_Text_Trainer0Intro:
	.string "Years of study have perfected my\n"
	.string "team's harmony.$"

Gen_Route01_Text_Trainer0Defeat:
	.string "Your bond with your POKéMON is\n"
	.string "genuine!$"

Gen_Route01_Text_Trainer0After:
	.string "Go on now. Your destiny awaits!$"

Gen_Route01_EventScript_Trainer1::
	trainerbattle_single TRAINER_CHIP, Gen_Route01_Text_Trainer1Intro, Gen_Route01_Text_Trainer1Defeat
	msgbox Gen_Route01_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route01_Text_Trainer1Intro:
	.string "Hidden telekinetic power surges\n"
	.string "through my PSYCHIC POKéMON!$"

Gen_Route01_Text_Trainer1Defeat:
	.string "I have nothing left to teach you\n"
	.string "today!$"

Gen_Route01_Text_Trainer1After:
	.string "True strength comes from trust\n"
	.string "between human and POKéMON.$"

Gen_Route01_EventScript_Trainer2::
	trainerbattle_single TRAINER_FOSTER, Gen_Route01_Text_Trainer2Intro, Gen_Route01_Text_Trainer2Defeat
	msgbox Gen_Route01_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route01_Text_Trainer2Intro:
	.string "Wahaha! Nothing beats the fresh\n"
	.string "air out on the mountain trails!$"

Gen_Route01_Text_Trainer2Defeat:
	.string "My knees are shaking after a bout\n"
	.string "like that!$"

Gen_Route01_Text_Trainer2After:
	.string "Wahaha! Come back anytime for\n"
	.string "another round!$"

Gen_Route01_EventScript_Trainer3::
	trainerbattle_single TRAINER_DUSTY_2, Gen_Route01_Text_Trainer3Intro, Gen_Route01_Text_Trainer3Defeat
	msgbox Gen_Route01_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route01_Text_Trainer3Intro:
	.string "En garde! Let us conduct this\n"
	.string "match with utmost honor!$"

Gen_Route01_Text_Trainer3Defeat:
	.string "Remarkable! Youthful energy\n"
	.string "triumphs today!$"

Gen_Route01_Text_Trainer3After:
	.string "I believe I shall enjoy a quiet\n"
	.string "cup of tea now.$"
