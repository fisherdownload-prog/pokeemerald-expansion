Gen_Route07_MapScripts::
	.byte 0

Gen_Route07_EventScript_Trainer0::
	trainerbattle_single TRAINER_CHARLIE, Gen_Route07_Text_Trainer0Intro, Gen_Route07_Text_Trainer0Defeat
	msgbox Gen_Route07_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer0Intro:
	.string "I only train FAIRY-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route07_Text_Trainer0Defeat:
	.string "You're tougher than you look.$"

Gen_Route07_Text_Trainer0After:
	.string "I need to train harder.$"

Gen_Route07_EventScript_Trainer1::
	trainerbattle_single TRAINER_RICKY_2, Gen_Route07_Text_Trainer1Intro, Gen_Route07_Text_Trainer1Defeat
	msgbox Gen_Route07_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer1Intro:
	.string "I only train FAIRY-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route07_Text_Trainer1Defeat:
	.string "You're tougher than you look.$"

Gen_Route07_Text_Trainer1After:
	.string "I need to train harder.$"

Gen_Route07_EventScript_Trainer2::
	trainerbattle_single TRAINER_RICKY_3, Gen_Route07_Text_Trainer2Intro, Gen_Route07_Text_Trainer2Defeat
	msgbox Gen_Route07_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer2Intro:
	.string "ROUTE 7 is my turf. Let's battle!$"

Gen_Route07_Text_Trainer2Defeat:
	.string "You're tougher than you look.$"

Gen_Route07_Text_Trainer2After:
	.string "I need to train harder.$"

Gen_Route07_EventScript_Trainer3::
	trainerbattle_single TRAINER_RICKY_4, Gen_Route07_Text_Trainer3Intro, Gen_Route07_Text_Trainer3Defeat
	msgbox Gen_Route07_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer3Intro:
	.string "I only train FAIRY-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route07_Text_Trainer3Defeat:
	.string "You're tougher than you look.$"

Gen_Route07_Text_Trainer3After:
	.string "I need to train harder.$"

Gen_Route07_EventScript_Trainer4::
	trainerbattle_single TRAINER_RICKY_5, Gen_Route07_Text_Trainer4Intro, Gen_Route07_Text_Trainer4Defeat
	msgbox Gen_Route07_Text_Trainer4After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer4Intro:
	.string "Our eyes met. You know what that\n"
	.string "means!$"

Gen_Route07_Text_Trainer4Defeat:
	.string "You're tougher than you look.$"

Gen_Route07_Text_Trainer4After:
	.string "I need to train harder.$"

Gen_Route07_EventScript_Guard::
	msgbox Gen_Route07_Text_Guard, MSGBOX_NPC
	end

Gen_Route07_Text_Guard:
	.string "The road ahead is dangerous. Come\n"
	.string "back when you have 5 BADGES.$"
