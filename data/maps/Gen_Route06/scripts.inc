Gen_Route06_MapScripts::
	.byte 0

Gen_Route06_EventScript_Trainer0::
	trainerbattle_single TRAINER_RICKY_2, Gen_Route06_Text_Trainer0Intro, Gen_Route06_Text_Trainer0Defeat
	msgbox Gen_Route06_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route06_Text_Trainer0Intro:
	.string "Solid as bedrock! My GROUND team\n"
	.string "shakes the very ground!$"

Gen_Route06_Text_Trainer0Defeat:
	.string "I underestimated the power of your\n"
	.string "bond!$"

Gen_Route06_Text_Trainer0After:
	.string "You carry a remarkable aura with\n"
	.string "you, TRAINER.$"

Gen_Route06_EventScript_Trainer1::
	trainerbattle_single TRAINER_RICKY_3, Gen_Route06_Text_Trainer1Intro, Gen_Route06_Text_Trainer1Defeat
	msgbox Gen_Route06_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route06_Text_Trainer1Intro:
	.string "You seem confident. Let us see if\n"
	.string "your skills match your nerve!$"

Gen_Route06_Text_Trainer1Defeat:
	.string "Hmph... You actually have quite a\n"
	.string "bit of flair!$"

Gen_Route06_Text_Trainer1After:
	.string "Take good care of your POKéMON so\n"
	.string "they always shine!$"

Gen_Route06_EventScript_Trainer2::
	trainerbattle_single TRAINER_RICKY_4, Gen_Route06_Text_Trainer2Intro, Gen_Route06_Text_Trainer2Defeat
	msgbox Gen_Route06_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route06_Text_Trainer2Intro:
	.string "Strange spirits gather wherever\n"
	.string "strong TRAINERS walk...$"

Gen_Route06_Text_Trainer2Defeat:
	.string "My haunting melody ended far too\n"
	.string "soon...$"

Gen_Route06_Text_Trainer2After:
	.string "I will stay here and listen to the\n"
	.string "wind a little longer...$"

Gen_Route06_EventScript_Guard::
	msgbox Gen_Route06_Text_Guard, MSGBOX_NPC
	end

Gen_Route06_Text_Guard:
	.string "Sorry, kid! Come back once you\n"
	.string "have earned 4 BADGES from GYM\l"
	.string "LEADERS!$"
