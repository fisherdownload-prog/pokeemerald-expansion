Gen_Route05_MapScripts::
	.byte 0

Gen_Route05_EventScript_Trainer0::
	trainerbattle_single TRAINER_LOLA_2, Gen_Route05_Text_Trainer0Intro, Gen_Route05_Text_Trainer0Defeat
	msgbox Gen_Route05_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer0Intro:
	.string "I hope you brought a towel,\n"
	.string "because we are making a splash!$"

Gen_Route05_Text_Trainer0Defeat:
	.string "What a wipeout! You are a\n"
	.string "powerhouse!$"

Gen_Route05_Text_Trainer0After:
	.string "Remember to stretch before diving\n"
	.string "into deep water!$"

Gen_Route05_EventScript_Trainer1::
	trainerbattle_single TRAINER_LOLA_3, Gen_Route05_Text_Trainer1Intro, Gen_Route05_Text_Trainer1Defeat
	msgbox Gen_Route05_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer1Intro:
	.string "Treading water all day builds\n"
	.string "serious stamina!$"

Gen_Route05_Text_Trainer1Defeat:
	.string "Awesome match! You rode that wave\n"
	.string "to victory!$"

Gen_Route05_Text_Trainer1After:
	.string "Catch you on the next wave!$"

Gen_Route05_EventScript_Trainer2::
	trainerbattle_single TRAINER_LOLA_4, Gen_Route05_Text_Trainer2Intro, Gen_Route05_Text_Trainer2Defeat
	msgbox Gen_Route05_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer2Intro:
	.string "From the shadows I strike! Prepare\n"
	.string "yourself, TRAINER!$"

Gen_Route05_Text_Trainer2Defeat:
	.string "Ack! My smoke bomb failed to save\n"
	.string "me!$"

Gen_Route05_Text_Trainer2After:
	.string "Speed and surprise are everything\n"
	.string "in battle!$"

Gen_Route05_EventScript_Trainer3::
	trainerbattle_single TRAINER_LOLA_5, Gen_Route05_Text_Trainer3Intro, Gen_Route05_Text_Trainer3Defeat
	msgbox Gen_Route05_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer3Intro:
	.string "My POKéMON have shiny shells and\n"
	.string "sharp stingers!$"

Gen_Route05_Text_Trainer3Defeat:
	.string "Bzzzt... My strategy totally fell\n"
	.string "apart!$"

Gen_Route05_Text_Trainer3After:
	.string "Keep an eye out for rustling\n"
	.string "grass!$"

Gen_Route05_EventScript_Trainer4::
	trainerbattle_single TRAINER_RICKY_1, Gen_Route05_Text_Trainer4Intro, Gen_Route05_Text_Trainer4Defeat
	msgbox Gen_Route05_Text_Trainer4After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer4Intro:
	.string "You cannot catch what rides the\n"
	.string "wind! Go, my FLYING team!$"

Gen_Route05_Text_Trainer4Defeat:
	.string "Whoa! You hooked me good in that\n"
	.string "battle!$"

Gen_Route05_Text_Trainer4After:
	.string "I think I felt a nibble just now!\n"
	.string "Let me check!$"

Gen_Route05_EventScript_Trainer5::
	trainerbattle_single TRAINER_SIMON, Gen_Route05_Text_Trainer5Intro, Gen_Route05_Text_Trainer5Defeat
	msgbox Gen_Route05_Text_Trainer5After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer5Intro:
	.string "I woke up at dawn to catch these\n"
	.string "little critters!$"

Gen_Route05_Text_Trainer5Defeat:
	.string "Back to the tall grass for more\n"
	.string "training!$"

Gen_Route05_Text_Trainer5After:
	.string "Even if they lose, Bug POKéMON are\n"
	.string "still the coolest!$"

Gen_Route05_EventScript_Trainer6::
	trainerbattle_single TRAINER_CHARLIE, Gen_Route05_Text_Trainer6Intro, Gen_Route05_Text_Trainer6Defeat
	msgbox Gen_Route05_Text_Trainer6After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer6Intro:
	.string "From high in the sky, my FLYING\n"
	.string "team controls the whole field!$"

Gen_Route05_Text_Trainer6Defeat:
	.string "You completely outmaneuvered me\n"
	.string "out here!$"

Gen_Route05_Text_Trainer6After:
	.string "Maybe I will move my tent closer\n"
	.string "to the next town.$"
