Gen_Route04_MapScripts::
	.byte 0

Gen_Route04_EventScript_Trainer0::
	trainerbattle_single TRAINER_GABBY_AND_TY_6, Gen_Route04_Text_Trainer0Intro, Gen_Route04_Text_Trainer0Defeat
	msgbox Gen_Route04_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route04_Text_Trainer0Intro:
	.string "I coordinated my outfit with my\n"
	.string "POKéMON today. Marvelous, no?$"

Gen_Route04_Text_Trainer0Defeat:
	.string "Unbelievable! You outshone my\n"
	.string "entire team!$"

Gen_Route04_Text_Trainer0After:
	.string "Until we meet again, darling!$"

Gen_Route04_EventScript_Trainer1::
	trainerbattle_single TRAINER_LOLA_1, Gen_Route04_Text_Trainer1Intro, Gen_Route04_Text_Trainer1Defeat
	msgbox Gen_Route04_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route04_Text_Trainer1Intro:
	.string "Sharp as icicles and cold as\n"
	.string "winter wind! Go, my ICE team!$"

Gen_Route04_Text_Trainer1Defeat:
	.string "That was a bigger shock than\n"
	.string "hooking a monster!$"

Gen_Route04_Text_Trainer1After:
	.string "Water routes can be tricky if you\n"
	.string "are unprepared!$"

Gen_Route04_EventScript_Trainer2::
	trainerbattle_single TRAINER_AUSTINA, Gen_Route04_Text_Trainer2Intro, Gen_Route04_Text_Trainer2Defeat
	msgbox Gen_Route04_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route04_Text_Trainer2Intro:
	.string "Come then! Show an old hand what\n"
	.string "the new generation can do!$"

Gen_Route04_Text_Trainer2Defeat:
	.string "Ah, my old tactics met their match\n"
	.string "today!$"

Gen_Route04_Text_Trainer2After:
	.string "Never grow complacent, no matter\n"
	.string "how many BADGES you earn!$"

Gen_Route04_EventScript_Trainer3::
	trainerbattle_single TRAINER_GWEN, Gen_Route04_Text_Trainer3Intro, Gen_Route04_Text_Trainer3Defeat
	msgbox Gen_Route04_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route04_Text_Trainer3Intro:
	.string "I have been reading my survival\n"
	.string "guide, and step one is winning!$"

Gen_Route04_Text_Trainer3Defeat:
	.string "Back to the drawing board around\n"
	.string "the lantern tonight!$"

Gen_Route04_Text_Trainer3After:
	.string "Make sure you stock up on supplies\n"
	.string "before heading out!$"
