Gen_Route10_MapScripts::
	.byte 0

Gen_Route10_EventScript_Trainer0::
	trainerbattle_single TRAINER_WILTON_1, Gen_Route10_Text_Trainer0Intro, Gen_Route10_Text_Trainer0Defeat
	msgbox Gen_Route10_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route10_Text_Trainer0Intro:
	.string "Our eyes met. You know what that\n"
	.string "means!$"

Gen_Route10_Text_Trainer0Defeat:
	.string "You're tougher than you look.$"

Gen_Route10_Text_Trainer0After:
	.string "I need to train harder.$"

Gen_Route10_EventScript_Trainer1::
	trainerbattle_single TRAINER_EDGAR, Gen_Route10_Text_Trainer1Intro, Gen_Route10_Text_Trainer1Defeat
	msgbox Gen_Route10_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route10_Text_Trainer1Intro:
	.string "I only train GRASS-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route10_Text_Trainer1Defeat:
	.string "You're tougher than you look.$"

Gen_Route10_Text_Trainer1After:
	.string "I need to train harder.$"

Gen_Route10_EventScript_Trainer2::
	trainerbattle_single TRAINER_ALBERT, Gen_Route10_Text_Trainer2Intro, Gen_Route10_Text_Trainer2Defeat
	msgbox Gen_Route10_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route10_Text_Trainer2Intro:
	.string "I only train GRASS-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route10_Text_Trainer2Defeat:
	.string "You're tougher than you look.$"

Gen_Route10_Text_Trainer2After:
	.string "I need to train harder.$"
