Gen_Route06_MapScripts::
	.byte 0

Gen_Route06_EventScript_Trainer0::
	trainerbattle_single TRAINER_RICKY_2, Gen_Route06_Text_Trainer0Intro, Gen_Route06_Text_Trainer0Defeat
	msgbox Gen_Route06_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route06_Text_Trainer0Intro:
	.string "A strange aura surrounds you...\n"
	.string "Let me test its strength!$"

Gen_Route06_Text_Trainer0Defeat:
	.string "Impossible... My vision did not\n"
	.string "show this outcome!$"

Gen_Route06_Text_Trainer0After:
	.string "You carry a remarkable aura with\n"
	.string "you, TRAINER.$"

Gen_Route06_EventScript_Trainer1::
	trainerbattle_single TRAINER_RICKY_3, Gen_Route06_Text_Trainer1Intro, Gen_Route06_Text_Trainer1Defeat
	msgbox Gen_Route06_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route06_Text_Trainer1Intro:
	.string "I coordinated my outfit with my\n"
	.string "POKéMON today. Marvelous, no?$"

Gen_Route06_Text_Trainer1Defeat:
	.string "How dreadful! My flawless record\n"
	.string "is ruined!$"

Gen_Route06_Text_Trainer1After:
	.string "You possess a rare kind of\n"
	.string "confidence, TRAINER.$"

Gen_Route06_EventScript_Trainer2::
	trainerbattle_single TRAINER_RICKY_4, Gen_Route06_Text_Trainer2Intro, Gen_Route06_Text_Trainer2Defeat
	msgbox Gen_Route06_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route06_Text_Trainer2Intro:
	.string "Do you feel a chill? My POKéMON\n"
	.string "are thrilled to meet you...$"

Gen_Route06_Text_Trainer2Defeat:
	.string "Hehe... Even the spirits were\n"
	.string "startled by you...$"

Gen_Route06_Text_Trainer2After:
	.string "I will stay here and listen to the\n"
	.string "wind a little longer...$"

Gen_Route06_EventScript_Guard::
	msgbox Gen_Route06_Text_Guard, MSGBOX_NPC
	end

Gen_Route06_Text_Guard:
	.string "Checkpoint rule number one: no\n"
	.string "passing without 4 GYM BADGES!$"
