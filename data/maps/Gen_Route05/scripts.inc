Gen_Route05_MapScripts::
	.byte 0

Gen_Route05_EventScript_Trainer0::
	trainerbattle_single TRAINER_LOLA_2, Gen_Route05_Text_Trainer0Intro, Gen_Route05_Text_Trainer0Defeat
	msgbox Gen_Route05_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer0Intro:
	.string "Hold it! You look like you could\n"
	.string "use a battle.$"

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

Gen_Route05_EventScript_Trainer3::
	trainerbattle_single TRAINER_LOLA_5, Gen_Route05_Text_Trainer3Intro, Gen_Route05_Text_Trainer3Defeat
	msgbox Gen_Route05_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer3Intro:
	.string "I only train FLYING-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route05_Text_Trainer3Defeat:
	.string "You're tougher than you look.$"

Gen_Route05_Text_Trainer3After:
	.string "I need to train harder.$"

Gen_Route05_EventScript_Trainer4::
	trainerbattle_single TRAINER_RICKY_1, Gen_Route05_Text_Trainer4Intro, Gen_Route05_Text_Trainer4Defeat
	msgbox Gen_Route05_Text_Trainer4After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer4Intro:
	.string "Our eyes met. You know what that\n"
	.string "means!$"

Gen_Route05_Text_Trainer4Defeat:
	.string "You're tougher than you look.$"

Gen_Route05_Text_Trainer4After:
	.string "I need to train harder.$"

Gen_Route05_EventScript_Trainer5::
	trainerbattle_single TRAINER_SIMON, Gen_Route05_Text_Trainer5Intro, Gen_Route05_Text_Trainer5Defeat
	msgbox Gen_Route05_Text_Trainer5After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer5Intro:
	.string "Hold it! You look like you could\n"
	.string "use a battle.$"

Gen_Route05_Text_Trainer5Defeat:
	.string "You're tougher than you look.$"

Gen_Route05_Text_Trainer5After:
	.string "I need to train harder.$"

Gen_Route05_EventScript_Trainer6::
	trainerbattle_single TRAINER_CHARLIE, Gen_Route05_Text_Trainer6Intro, Gen_Route05_Text_Trainer6Defeat
	msgbox Gen_Route05_Text_Trainer6After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer6Intro:
	.string "I only train FLYING-type POKéMON.\n"
	.string "Want to see why?$"

Gen_Route05_Text_Trainer6Defeat:
	.string "You're tougher than you look.$"

Gen_Route05_Text_Trainer6After:
	.string "I need to train harder.$"
