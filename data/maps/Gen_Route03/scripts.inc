Gen_Route03_MapScripts::
	.byte 0

Gen_Route03_EventScript_Trainer0::
	trainerbattle_single TRAINER_GABBY_AND_TY_2, Gen_Route03_Text_Trainer0Intro, Gen_Route03_Text_Trainer0Defeat
	msgbox Gen_Route03_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer0Intro:
	.string "Feel the earth tremble beneath my\n"
	.string "mighty GROUND POKéMON!$"

Gen_Route03_Text_Trainer0Defeat:
	.string "Incredible! Your spirit\n"
	.string "overwhelmed my own!$"

Gen_Route03_Text_Trainer0After:
	.string "Osu! May your journey make you\n"
	.string "stronger!$"

Gen_Route03_EventScript_Trainer1::
	trainerbattle_single TRAINER_GABBY_AND_TY_3, Gen_Route03_Text_Trainer1Intro, Gen_Route03_Text_Trainer1Defeat
	msgbox Gen_Route03_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer1Intro:
	.string "My POKéMON are small, but they\n"
	.string "pack a huge punch!$"

Gen_Route03_Text_Trainer1Defeat:
	.string "Whoa, you battle like a real pro!$"

Gen_Route03_Text_Trainer1After:
	.string "When I grow up, I want to be just\n"
	.string "as strong as you!$"

Gen_Route03_EventScript_Trainer2::
	trainerbattle_single TRAINER_GABBY_AND_TY_4, Gen_Route03_Text_Trainer2Intro, Gen_Route03_Text_Trainer2Defeat
	msgbox Gen_Route03_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer2Intro:
	.string "Fashion fades, darling, but a\n"
	.string "dazzling victory lasts forever!$"

Gen_Route03_Text_Trainer2Defeat:
	.string "Unbelievable! You outshone my\n"
	.string "entire team!$"

Gen_Route03_Text_Trainer2After:
	.string "Until we meet again, darling!$"

Gen_Route03_EventScript_Trainer3::
	trainerbattle_single TRAINER_GABBY_AND_TY_5, Gen_Route03_Text_Trainer3Intro, Gen_Route03_Text_Trainer3Defeat
	msgbox Gen_Route03_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route03_Text_Trainer3Intro:
	.string "Solid as bedrock! My GROUND team\n"
	.string "shakes the very ground!$"

Gen_Route03_Text_Trainer3Defeat:
	.string "My haunting melody ended far too\n"
	.string "soon...$"

Gen_Route03_Text_Trainer3After:
	.string "Until the shadows bring us\n"
	.string "together again...$"
