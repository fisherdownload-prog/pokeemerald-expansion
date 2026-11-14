Gen_Route03_MapScripts::
	.byte 0

Gen_Route03_EventScript_Trainer0::
	trainerbattle_single TRAINER_GABBY_AND_TY_2, Gen_Route03_Text_Trainer0Intro, Gen_Route03_Text_Trainer0Defeat
	msgbox Gen_Route03_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer0Intro:
	.string "A true martial artist respects\n"
	.string "every opponent. Let us begin!$"

Gen_Route03_Text_Trainer0Defeat:
	.string "What power! You struck with true\n"
	.string "precision!$"

Gen_Route03_Text_Trainer0After:
	.string "I will perform one thousand squats\n"
	.string "before sunset!$"

Gen_Route03_EventScript_Trainer1::
	trainerbattle_single TRAINER_GABBY_AND_TY_3, Gen_Route03_Text_Trainer1Intro, Gen_Route03_Text_Trainer1Defeat
	msgbox Gen_Route03_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer1Intro:
	.string "Nowhere to stand when my GROUND\n"
	.string "POKéMON split the earth!$"

Gen_Route03_Text_Trainer1Defeat:
	.string "Aw man, my shorts did not save me\n"
	.string "this time!$"

Gen_Route03_Text_Trainer1After:
	.string "I am going to train my POKéMON\n"
	.string "until they are huge!$"

Gen_Route03_EventScript_Trainer2::
	trainerbattle_single TRAINER_GABBY_AND_TY_4, Gen_Route03_Text_Trainer2Intro, Gen_Route03_Text_Trainer2Defeat
	msgbox Gen_Route03_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer2Intro:
	.string "Feel the earth tremble beneath my\n"
	.string "mighty GROUND POKéMON!$"

Gen_Route03_Text_Trainer2Defeat:
	.string "A stunning performance. I tip my\n"
	.string "hat to you!$"

Gen_Route03_Text_Trainer2After:
	.string "I suppose losing builds\n"
	.string "character... though winning is\l"
	.string "prettier!$"

Gen_Route03_EventScript_Trainer3::
	trainerbattle_single TRAINER_GABBY_AND_TY_5, Gen_Route03_Text_Trainer3Intro, Gen_Route03_Text_Trainer3Defeat
	msgbox Gen_Route03_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer3Intro:
	.string "Dust, sand, and unstoppable force!\n"
	.string "That is GROUND power!$"

Gen_Route03_Text_Trainer3Defeat:
	.string "A thrilling chill... You are\n"
	.string "terribly strong...$"

Gen_Route03_Text_Trainer3After:
	.string "Do not forget to heal your poor\n"
	.string "POKéMON...$"
