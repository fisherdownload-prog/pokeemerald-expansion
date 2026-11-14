Gen_Route02_MapScripts::
	.byte 0

Gen_Route02_EventScript_Trainer0::
	trainerbattle_single TRAINER_DUSTY_3, Gen_Route02_Text_Trainer0Intro, Gen_Route02_Text_Trainer0Defeat
	msgbox Gen_Route02_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route02_Text_Trainer0Intro:
	.string "Try chipping away at the immovable\n"
	.string "defense of ROCK POKéMON!$"

Gen_Route02_Text_Trainer0Defeat:
	.string "A stunning performance. I tip my\n"
	.string "hat to you!$"

Gen_Route02_Text_Trainer0After:
	.string "I suppose losing builds\n"
	.string "character... though winning is\l"
	.string "prettier!$"

Gen_Route02_EventScript_Trainer1::
	trainerbattle_single TRAINER_DUSTY_4, Gen_Route02_Text_Trainer1Intro, Gen_Route02_Text_Trainer1Defeat
	msgbox Gen_Route02_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route02_Text_Trainer1Intro:
	.string "Hard as diamonds and stubborn as\n"
	.string "boulders! Go, my ROCK team!$"

Gen_Route02_Text_Trainer1Defeat:
	.string "Well! At least I lost with\n"
	.string "impeccable grace!$"

Gen_Route02_Text_Trainer1After:
	.string "Perhaps I will try a whole new\n"
	.string "look for my next battle!$"

Gen_Route02_EventScript_Trainer2::
	trainerbattle_single TRAINER_DUSTY_5, Gen_Route02_Text_Trainer2Intro, Gen_Route02_Text_Trainer2Defeat
	msgbox Gen_Route02_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route02_Text_Trainer2Intro:
	.string "Hehe... Look closely into the\n"
	.string "darkness...$"

Gen_Route02_Text_Trainer2Defeat:
	.string "Fufufu... The spirits applaud your\n"
	.string "victory...$"

Gen_Route02_Text_Trainer2After:
	.string "Be careful when walking past old,\n"
	.string "quiet places...$"

Gen_Route02_EventScript_Trainer3::
	trainerbattle_single TRAINER_GABBY_AND_TY_1, Gen_Route02_Text_Trainer3Intro, Gen_Route02_Text_Trainer3Defeat
	msgbox Gen_Route02_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route02_Text_Trainer3Intro:
	.string "Nothing compares to the thrill of\n"
	.string "reeling in a massive catch!$"

Gen_Route02_Text_Trainer3Defeat:
	.string "Whoa! You hooked me good in that\n"
	.string "battle!$"

Gen_Route02_Text_Trainer3After:
	.string "I think I felt a nibble just now!\n"
	.string "Let me check!$"
