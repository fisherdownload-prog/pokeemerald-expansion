Gen_Route10_MapScripts::
	.byte 0

Gen_Route10_EventScript_Trainer0::
	trainerbattle_single TRAINER_SAMUEL, Gen_Route10_Text_Trainer0Intro, Gen_Route10_Text_Trainer0Defeat
	msgbox Gen_Route10_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route10_Text_Trainer0Intro:
	.string "Training in secret makes my\n"
	.string "POKéMON unpredictable!$"

Gen_Route10_Text_Trainer0Defeat:
	.string "Defeated! I must vanish into\n"
	.string "training!$"

Gen_Route10_Text_Trainer0After:
	.string "Speed and surprise are everything\n"
	.string "in battle!$"

Gen_Route10_EventScript_Trainer1::
	trainerbattle_single TRAINER_VITO, Gen_Route10_Text_Trainer1Intro, Gen_Route10_Text_Trainer1Defeat
	msgbox Gen_Route10_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route10_Text_Trainer1Intro:
	.string "Keep your eyes sharp, or you will\n"
	.string "miss my whole team!$"

Gen_Route10_Text_Trainer1Defeat:
	.string "Ack! My smoke bomb failed to save\n"
	.string "me!$"

Gen_Route10_Text_Trainer1After:
	.string "I must go report this defeat to my\n"
	.string "secret master!$"

Gen_Route10_EventScript_Trainer2::
	trainerbattle_single TRAINER_OWEN, Gen_Route10_Text_Trainer2Intro, Gen_Route10_Text_Trainer2Defeat
	msgbox Gen_Route10_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route10_Text_Trainer2Intro:
	.string "A true martial artist respects\n"
	.string "every opponent. Let us begin!$"

Gen_Route10_Text_Trainer2Defeat:
	.string "A worthy defeat! I will train\n"
	.string "twice as hard!$"

Gen_Route10_Text_Trainer2After:
	.string "Keep honing your skills every\n"
	.string "single day!$"
