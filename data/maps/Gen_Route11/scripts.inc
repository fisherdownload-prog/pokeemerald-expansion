Gen_Route11_MapScripts::
	.byte 0

Gen_Route11_EventScript_Trainer0::
	trainerbattle_single TRAINER_WILTON_2, Gen_Route11_Text_Trainer0Intro, Gen_Route11_Text_Trainer0Defeat
	msgbox Gen_Route11_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer0Intro:
	.string "Slowly but surely, my POISON\n"
	.string "POKéMON wear down every foe!$"

Gen_Route11_Text_Trainer0Defeat:
	.string "The future shifted right before my\n"
	.string "eyes!$"

Gen_Route11_Text_Trainer0After:
	.string "We shall cross paths again when\n"
	.string "fate decides...$"

Gen_Route11_EventScript_Trainer1::
	trainerbattle_single TRAINER_WILTON_3, Gen_Route11_Text_Trainer1Intro, Gen_Route11_Text_Trainer1Defeat
	msgbox Gen_Route11_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer1Intro:
	.string "Excuse me! Could you help me\n"
	.string "practice my battle skills?$"

Gen_Route11_Text_Trainer1Defeat:
	.string "You beat me fair and square. That\n"
	.string "was fun!$"

Gen_Route11_Text_Trainer1After:
	.string "I should visit a POKéMON CENTER\n"
	.string "before my next match!$"

Gen_Route11_EventScript_Trainer2::
	trainerbattle_single TRAINER_WILTON_4, Gen_Route11_Text_Trainer2Intro, Gen_Route11_Text_Trainer2Defeat
	msgbox Gen_Route11_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer2Intro:
	.string "Sweet aroma or noxious fume,\n"
	.string "POISON POKéMON always leave a\l"
	.string "mark!$"

Gen_Route11_Text_Trainer2Defeat:
	.string "Hmph! You did not have to go that\n"
	.string "hard on me!$"

Gen_Route11_Text_Trainer2After:
	.string "My POKéMON still look adorable,\n"
	.string "even when tired!$"

Gen_Route11_EventScript_Trainer3::
	trainerbattle_single TRAINER_WILTON_5, Gen_Route11_Text_Trainer3Intro, Gen_Route11_Text_Trainer3Defeat
	msgbox Gen_Route11_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route11_Text_Trainer3Intro:
	.string "Toxic clouds and venomous fangs!\n"
	.string "Beware my POISON team!$"

Gen_Route11_Text_Trainer3Defeat:
	.string "Remarkable! Youthful energy\n"
	.string "triumphs today!$"

Gen_Route11_Text_Trainer3After:
	.string "It was a genuine pleasure crossing\n"
	.string "swords with you!$"

Gen_Route11_EventScript_Guard::
	msgbox Gen_Route11_Text_Guard, MSGBOX_NPC
	end

Gen_Route11_Text_Guard:
	.string "Halt! Only TRAINERS with at least\n"
	.string "8 BADGES may proceed past this\l"
	.string "checkpoint!$"
