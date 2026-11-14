Gen_Route06_MapScripts::
	.byte 0

Gen_Route06_EventScript_Trainer0::
	trainerbattle_single TRAINER_LOLA_5, Gen_Route06_Text_Trainer0Intro, Gen_Route06_Text_Trainer0Defeat
	msgbox Gen_Route06_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route06_Text_Trainer0Intro:
	.string "Our eyes met. You know what that\n"
	.string "means!$"

Gen_Route06_Text_Trainer0Defeat:
	.string "You're tougher than you look.$"

Gen_Route06_Text_Trainer0After:
	.string "I need to train harder.$"

Gen_Route06_EventScript_Trainer1::
	trainerbattle_single TRAINER_RICKY_1, Gen_Route06_Text_Trainer1Intro, Gen_Route06_Text_Trainer1Defeat
	msgbox Gen_Route06_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route06_Text_Trainer1Intro:
	.string "Hold it! You look like you could\n"
	.string "use a battle.$"

Gen_Route06_Text_Trainer1Defeat:
	.string "You're tougher than you look.$"

Gen_Route06_Text_Trainer1After:
	.string "I need to train harder.$"

Gen_Route06_EventScript_Trainer2::
	trainerbattle_single TRAINER_SIMON, Gen_Route06_Text_Trainer2Intro, Gen_Route06_Text_Trainer2Defeat
	msgbox Gen_Route06_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route06_Text_Trainer2Intro:
	.string "I only train GROUND-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route06_Text_Trainer2Defeat:
	.string "You're tougher than you look.$"

Gen_Route06_Text_Trainer2After:
	.string "I need to train harder.$"

Gen_Route06_EventScript_Guard::
	msgbox Gen_Route06_Text_Guard, MSGBOX_NPC
	end

Gen_Route06_Text_Guard:
	.string "The road ahead is dangerous. Come\n"
	.string "back when you have 4 BADGES.$"
