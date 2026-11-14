Gen_Route11_MapScripts::
	.byte 0

Gen_Route11_EventScript_Trainer0::
	trainerbattle_single TRAINER_SAMUEL, Gen_Route11_Text_Trainer0Intro, Gen_Route11_Text_Trainer0Defeat
	msgbox Gen_Route11_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer0Intro:
	.string "ROUTE 11 is my turf. Let's battle!$"

Gen_Route11_Text_Trainer0Defeat:
	.string "You're tougher than you look.$"

Gen_Route11_Text_Trainer0After:
	.string "I need to train harder.$"

Gen_Route11_EventScript_Trainer1::
	trainerbattle_single TRAINER_VITO, Gen_Route11_Text_Trainer1Intro, Gen_Route11_Text_Trainer1Defeat
	msgbox Gen_Route11_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer1Intro:
	.string "I only train POISON-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route11_Text_Trainer1Defeat:
	.string "You're tougher than you look.$"

Gen_Route11_Text_Trainer1After:
	.string "I need to train harder.$"

Gen_Route11_EventScript_Trainer2::
	trainerbattle_single TRAINER_OWEN, Gen_Route11_Text_Trainer2Intro, Gen_Route11_Text_Trainer2Defeat
	msgbox Gen_Route11_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer2Intro:
	.string "I only train POISON-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route11_Text_Trainer2Defeat:
	.string "You're tougher than you look.$"

Gen_Route11_Text_Trainer2After:
	.string "I need to train harder.$"

Gen_Route11_EventScript_Trainer3::
	trainerbattle_single TRAINER_WILTON_2, Gen_Route11_Text_Trainer3Intro, Gen_Route11_Text_Trainer3Defeat
	msgbox Gen_Route11_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer3Intro:
	.string "ROUTE 11 is my turf. Let's battle!$"

Gen_Route11_Text_Trainer3Defeat:
	.string "You're tougher than you look.$"

Gen_Route11_Text_Trainer3After:
	.string "I need to train harder.$"

Gen_Route11_EventScript_Guard::
	msgbox Gen_Route11_Text_Guard, MSGBOX_NPC
	end

Gen_Route11_Text_Guard:
	.string "The road ahead is dangerous. Come\n"
	.string "back when you have 8 BADGES.$"
