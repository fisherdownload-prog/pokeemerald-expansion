Gen_Route07_MapScripts::
	.byte 0

Gen_Route07_EventScript_Trainer0::
	trainerbattle_single TRAINER_RICKY_5, Gen_Route07_Text_Trainer0Intro, Gen_Route07_Text_Trainer0Defeat
	msgbox Gen_Route07_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer0Intro:
	.string "Ho there, traveler! Care for a\n"
	.string "hearty battle to warm up?$"

Gen_Route07_Text_Trainer0Defeat:
	.string "Magnificent! You are tougher than\n"
	.string "granite!$"

Gen_Route07_Text_Trainer0After:
	.string "Always carry plenty of POTIONS\n"
	.string "when exploring far from town!$"

Gen_Route07_EventScript_Trainer1::
	trainerbattle_single TRAINER_RANDALL, Gen_Route07_Text_Trainer1Intro, Gen_Route07_Text_Trainer1Defeat
	msgbox Gen_Route07_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer1Intro:
	.string "Do not be fooled by their sweet\n"
	.string "smiles! FAIRY POKéMON are tough!$"

Gen_Route07_Text_Trainer1Defeat:
	.string "Splendid battle! You have the\n"
	.string "heart of a mountaineer!$"

Gen_Route07_Text_Trainer1After:
	.string "Take care out there on the rocky\n"
	.string "paths, friend!$"

Gen_Route07_EventScript_Trainer2::
	trainerbattle_single TRAINER_PARKER, Gen_Route07_Text_Trainer2Intro, Gen_Route07_Text_Trainer2Defeat
	msgbox Gen_Route07_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer2Intro:
	.string "A true ninja masters stealth,\n"
	.string "speed, and POKéMON tactics!$"

Gen_Route07_Text_Trainer2Defeat:
	.string "My secret techniques were\n"
	.string "completely countered!$"

Gen_Route07_Text_Trainer2After:
	.string "I will master the art of\n"
	.string "invisibility before our rematch!$"

Gen_Route07_EventScript_Guard::
	msgbox Gen_Route07_Text_Guard, MSGBOX_NPC
	end

Gen_Route07_Text_Guard:
	.string "This route is dangerous! Show me 5\n"
	.string "BADGES before I can let you\l"
	.string "through!$"
