Gen_Route09_MapScripts::
	.byte 0

Gen_Route09_EventScript_Trainer0::
	trainerbattle_single TRAINER_BRAXTON, Gen_Route09_Text_Trainer0Intro, Gen_Route09_Text_Trainer0Defeat
	msgbox Gen_Route09_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route09_Text_Trainer0Intro:
	.string "I only train PSYCHIC-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route09_Text_Trainer0Defeat:
	.string "You're tougher than you look.$"

Gen_Route09_Text_Trainer0After:
	.string "I need to train harder.$"

Gen_Route09_EventScript_Trainer1::
	trainerbattle_single TRAINER_VINCENT, Gen_Route09_Text_Trainer1Intro, Gen_Route09_Text_Trainer1Defeat
	msgbox Gen_Route09_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route09_Text_Trainer1Intro:
	.string "ROUTE 9 is my turf. Let's battle!$"

Gen_Route09_Text_Trainer1Defeat:
	.string "You're tougher than you look.$"

Gen_Route09_Text_Trainer1After:
	.string "I need to train harder.$"

Gen_Route09_EventScript_Trainer2::
	trainerbattle_single TRAINER_LEROY, Gen_Route09_Text_Trainer2Intro, Gen_Route09_Text_Trainer2Defeat
	msgbox Gen_Route09_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route09_Text_Trainer2Intro:
	.string "Our eyes met. You know what that\n"
	.string "means!$"

Gen_Route09_Text_Trainer2Defeat:
	.string "You're tougher than you look.$"

Gen_Route09_Text_Trainer2After:
	.string "I need to train harder.$"
