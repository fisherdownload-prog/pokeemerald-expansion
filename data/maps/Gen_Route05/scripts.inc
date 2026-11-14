Gen_Route05_MapScripts::
	.byte 0

Gen_Route05_EventScript_Trainer0::
	trainerbattle_single TRAINER_LOLA_2, Gen_Route05_Text_Trainer0Intro, Gen_Route05_Text_Trainer0Defeat
	msgbox Gen_Route05_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer0Intro:
	.string "I only train FLYING-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route05_Text_Trainer0Defeat:
	.string "You're tougher than you look.$"

Gen_Route05_Text_Trainer0After:
	.string "I need to train harder.$"

Gen_Route05_EventScript_Trainer1::
	trainerbattle_single TRAINER_LOLA_3, Gen_Route05_Text_Trainer1Intro, Gen_Route05_Text_Trainer1Defeat
	msgbox Gen_Route05_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer1Intro:
	.string "I only train FLYING-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route05_Text_Trainer1Defeat:
	.string "You're tougher than you look.$"

Gen_Route05_Text_Trainer1After:
	.string "I need to train harder.$"

Gen_Route05_EventScript_Trainer2::
	trainerbattle_single TRAINER_LOLA_4, Gen_Route05_Text_Trainer2Intro, Gen_Route05_Text_Trainer2Defeat
	msgbox Gen_Route05_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer2Intro:
	.string "ROUTE 5 is my turf. Let's battle!$"

Gen_Route05_Text_Trainer2Defeat:
	.string "You're tougher than you look.$"

Gen_Route05_Text_Trainer2After:
	.string "I need to train harder.$"
