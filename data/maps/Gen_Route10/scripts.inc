Gen_Route10_MapScripts::
	.byte 0

Gen_Route10_EventScript_Trainer0::
	trainerbattle_single TRAINER_SAMUEL, Gen_Route10_Text_Trainer0Intro, Gen_Route10_Text_Trainer0Defeat
	msgbox Gen_Route10_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route10_Text_Trainer0Intro:
	.string "Sunshine and fresh soil gave my\n"
	.string "GRASS team unstoppable vigor!$"

Gen_Route10_Text_Trainer0Defeat:
	.string "Defeated! I must vanish into\n"
	.string "training!$"

Gen_Route10_Text_Trainer0After:
	.string "Check behind every tree! You never\n"
	.string "know who is watching!$"

Gen_Route10_EventScript_Trainer1::
	trainerbattle_single TRAINER_VITO, Gen_Route10_Text_Trainer1Intro, Gen_Route10_Text_Trainer1Defeat
	msgbox Gen_Route10_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route10_Text_Trainer1Intro:
	.string "Do not let their gentle leaves\n"
	.string "fool you! GRASS POKéMON bite back!$"

Gen_Route10_Text_Trainer1Defeat:
	.string "You saw right through all my\n"
	.string "illusions!$"

Gen_Route10_Text_Trainer1After:
	.string "Nin-nin! Farewell for now!$"

Gen_Route10_EventScript_Trainer2::
	trainerbattle_single TRAINER_OWEN, Gen_Route10_Text_Trainer2Intro, Gen_Route10_Text_Trainer2Defeat
	msgbox Gen_Route10_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route10_Text_Trainer2Intro:
	.string "Nature's roots run deep! Feel the\n"
	.string "wild energy of GRASS POKéMON!$"

Gen_Route10_Text_Trainer2Defeat:
	.string "I bow to your superior strength\n"
	.string "and focus!$"

Gen_Route10_Text_Trainer2After:
	.string "Never neglect the fundamentals of\n"
	.string "type matchups!$"
