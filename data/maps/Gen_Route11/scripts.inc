Gen_Route11_MapScripts::
	.byte 0

Gen_Route11_EventScript_Trainer0::
	trainerbattle_single TRAINER_WILTON_2, Gen_Route11_Text_Trainer0Intro, Gen_Route11_Text_Trainer0Defeat
	msgbox Gen_Route11_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer0Intro:
	.string "Mental focus bends reality itself.\n"
	.string "Witness my power!$"

Gen_Route11_Text_Trainer0Defeat:
	.string "The future shifted right before my\n"
	.string "eyes!$"

Gen_Route11_Text_Trainer0After:
	.string "Your future is clouded in bright,\n"
	.string "unpredictable energy...$"

Gen_Route11_EventScript_Trainer1::
	trainerbattle_single TRAINER_WILTON_3, Gen_Route11_Text_Trainer1Intro, Gen_Route11_Text_Trainer1Defeat
	msgbox Gen_Route11_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer1Intro:
	.string "Excuse me! Could you help me\n"
	.string "practice my battle skills?$"

Gen_Route11_Text_Trainer1Defeat:
	.string "Oh no! My poor POKéMON got all\n"
	.string "scuffed up!$"

Gen_Route11_Text_Trainer1After:
	.string "Where did you learn to battle like\n"
	.string "that?$"

Gen_Route11_EventScript_Trainer2::
	trainerbattle_single TRAINER_WILTON_4, Gen_Route11_Text_Trainer2Intro, Gen_Route11_Text_Trainer2Defeat
	msgbox Gen_Route11_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer2Intro:
	.string "Let us have a clean, fair battle\n"
	.string "right here!$"

Gen_Route11_Text_Trainer2Defeat:
	.string "My ribbon came undone from all\n"
	.string "that excitement!$"

Gen_Route11_Text_Trainer2After:
	.string "Traveling with POKéMON is the best\n"
	.string "thing ever!$"

Gen_Route11_EventScript_Trainer3::
	trainerbattle_single TRAINER_WILTON_5, Gen_Route11_Text_Trainer3Intro, Gen_Route11_Text_Trainer3Defeat
	msgbox Gen_Route11_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer3Intro:
	.string "How delightful to meet a fellow\n"
	.string "enthusiast on the road!$"

Gen_Route11_Text_Trainer3Defeat:
	.string "A fine contest! Thank you for the\n"
	.string "thrill!$"

Gen_Route11_Text_Trainer3After:
	.string "May fortune favor your travels\n"
	.string "across the land!$"

Gen_Route11_EventScript_Guard::
	msgbox Gen_Route11_Text_Guard, MSGBOX_NPC
	end

Gen_Route11_Text_Guard:
	.string "Sorry, kid! Come back once you\n"
	.string "have earned 8 BADGES from GYM\l"
	.string "LEADERS!$"
