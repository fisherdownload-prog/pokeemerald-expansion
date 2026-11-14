Gen_Route03_MapScripts::
	.byte 0

Gen_Route03_EventScript_Trainer0::
	trainerbattle_single TRAINER_GABBY_AND_TY_2, Gen_Route03_Text_Trainer0Intro, Gen_Route03_Text_Trainer0Defeat
	msgbox Gen_Route03_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer0Intro:
	.string "I only train GROUND-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route03_Text_Trainer0Defeat:
	.string "You're tougher than you look.$"

Gen_Route03_Text_Trainer0After:
	.string "I need to train harder.$"

Gen_Route03_EventScript_Trainer1::
	trainerbattle_single TRAINER_GABBY_AND_TY_3, Gen_Route03_Text_Trainer1Intro, Gen_Route03_Text_Trainer1Defeat
	msgbox Gen_Route03_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer1Intro:
	.string "Hold it! You look like you could\n"
	.string "use a battle.$"

Gen_Route03_Text_Trainer1Defeat:
	.string "You're tougher than you look.$"

Gen_Route03_Text_Trainer1After:
	.string "I need to train harder.$"

Gen_Route03_EventScript_Trainer2::
	trainerbattle_single TRAINER_GABBY_AND_TY_4, Gen_Route03_Text_Trainer2Intro, Gen_Route03_Text_Trainer2Defeat
	msgbox Gen_Route03_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer2Intro:
	.string "Hold it! You look like you could\n"
	.string "use a battle.$"

Gen_Route03_Text_Trainer2Defeat:
	.string "You're tougher than you look.$"

Gen_Route03_Text_Trainer2After:
	.string "I need to train harder.$"

Gen_Route03_EventScript_Trainer3::
	trainerbattle_single TRAINER_GABBY_AND_TY_5, Gen_Route03_Text_Trainer3Intro, Gen_Route03_Text_Trainer3Defeat
	msgbox Gen_Route03_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer3Intro:
	.string "Our eyes met. You know what that\n"
	.string "means!$"

Gen_Route03_Text_Trainer3Defeat:
	.string "You're tougher than you look.$"

Gen_Route03_Text_Trainer3After:
	.string "I need to train harder.$"
