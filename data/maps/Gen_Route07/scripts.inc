Gen_Route07_MapScripts::
	.byte 0

Gen_Route07_EventScript_Trainer0::
	trainerbattle_single TRAINER_RICKY_5, Gen_Route07_Text_Trainer0Intro, Gen_Route07_Text_Trainer0Defeat
	msgbox Gen_Route07_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer0Intro:
	.string "I have climbed every peak around\n"
	.string "here without breaking a sweat!$"

Gen_Route07_Text_Trainer0Defeat:
	.string "Ha! I stumbled on the final\n"
	.string "stretch!$"

Gen_Route07_Text_Trainer0After:
	.string "Wahaha! Come back anytime for\n"
	.string "another round!$"

Gen_Route07_EventScript_Trainer1::
	trainerbattle_single TRAINER_RANDALL, Gen_Route07_Text_Trainer1Intro, Gen_Route07_Text_Trainer1Defeat
	msgbox Gen_Route07_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer1Intro:
	.string "Sparkling charm hides fierce\n"
	.string "power! Behold my FAIRY POKéMON!$"

Gen_Route07_Text_Trainer1Defeat:
	.string "Magnificent! You are tougher than\n"
	.string "granite!$"

Gen_Route07_Text_Trainer1After:
	.string "Take care out there on the rocky\n"
	.string "paths, friend!$"

Gen_Route07_EventScript_Trainer2::
	trainerbattle_single TRAINER_PARKER, Gen_Route07_Text_Trainer2Intro, Gen_Route07_Text_Trainer2Defeat
	msgbox Gen_Route07_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route07_Text_Trainer2Intro:
	.string "My moves are swift as the wind and\n"
	.string "silent as night!$"

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
	.string "Safety regulations require 5 GYM\n"
	.string "BADGES to enter the road ahead!$"
