Gen_Route02_MapScripts::
	.byte 0

Gen_Route02_EventScript_Trainer0::
	trainerbattle_single TRAINER_DUSTY_3, Gen_Route02_Text_Trainer0Intro, Gen_Route02_Text_Trainer0Defeat
	msgbox Gen_Route02_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route02_Text_Trainer0Intro:
	.string "Try not to get starstruck by my\n"
	.string "dazzling POKéMON!$"

Gen_Route02_Text_Trainer0Defeat:
	.string "You completely stole the spotlight\n"
	.string "from me!$"

Gen_Route02_Text_Trainer0After:
	.string "Perhaps I will try a whole new\n"
	.string "look for my next battle!$"

Gen_Route02_EventScript_Trainer1::
	trainerbattle_single TRAINER_DUSTY_4, Gen_Route02_Text_Trainer1Intro, Gen_Route02_Text_Trainer1Defeat
	msgbox Gen_Route02_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route02_Text_Trainer1Intro:
	.string "Try chipping away at the immovable\n"
	.string "defense of ROCK POKéMON!$"

Gen_Route02_Text_Trainer1Defeat:
	.string "Well! At least I lost with\n"
	.string "impeccable grace!$"

Gen_Route02_Text_Trainer1After:
	.string "You possess a rare kind of\n"
	.string "confidence, TRAINER.$"

Gen_Route02_EventScript_Trainer2::
	trainerbattle_single TRAINER_DUSTY_5, Gen_Route02_Text_Trainer2Intro, Gen_Route02_Text_Trainer2Defeat
	msgbox Gen_Route02_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route02_Text_Trainer2Intro:
	.string "Hehe... Look closely into the\n"
	.string "darkness...$"

Gen_Route02_Text_Trainer2Defeat:
	.string "Hehe... Even the spirits were\n"
	.string "startled by you...$"

Gen_Route02_Text_Trainer2After:
	.string "The shadows always remember strong\n"
	.string "TRAINERS...$"

Gen_Route02_EventScript_Trainer3::
	trainerbattle_single TRAINER_GABBY_AND_TY_1, Gen_Route02_Text_Trainer3Intro, Gen_Route02_Text_Trainer3Defeat
	msgbox Gen_Route02_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route02_Text_Trainer3Intro:
	.string "Think you can weather the storm my\n"
	.string "team is about to bring?$"

Gen_Route02_Text_Trainer3Defeat:
	.string "Haha! You reeled in a well-earned\n"
	.string "victory!$"

Gen_Route02_Text_Trainer3After:
	.string "Take care not to drop your POKé\n"
	.string "BALLS in the drink!$"
