Gen_Route09_MapScripts::
	.byte 0

Gen_Route09_EventScript_Trainer0::
	trainerbattle_single TRAINER_WILTON_1, Gen_Route09_Text_Trainer0Intro, Gen_Route09_Text_Trainer0Defeat
	msgbox Gen_Route09_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route09_Text_Trainer0Intro:
	.string "Focus your thoughts, or my PSYCHIC\n"
	.string "team will overwhelm your mind!$"

Gen_Route09_Text_Trainer0Defeat:
	.string "Oof! You knocked me right off the\n"
	.string "trail!$"

Gen_Route09_Text_Trainer0After:
	.string "My legs are tired, so I think I\n"
	.string "will rest here a bit.$"

Gen_Route09_EventScript_Trainer1::
	trainerbattle_single TRAINER_EDGAR, Gen_Route09_Text_Trainer1Intro, Gen_Route09_Text_Trainer1Defeat
	msgbox Gen_Route09_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route09_Text_Trainer1Intro:
	.string "I packed extra POKé BALLS and\n"
	.string "plenty of grit for this trip!$"

Gen_Route09_Text_Trainer1Defeat:
	.string "You completely outmaneuvered me\n"
	.string "out here!$"

Gen_Route09_Text_Trainer1After:
	.string "Maybe I will move my tent closer\n"
	.string "to the next town.$"

Gen_Route09_EventScript_Trainer2::
	trainerbattle_single TRAINER_ALBERT, Gen_Route09_Text_Trainer2Intro, Gen_Route09_Text_Trainer2Defeat
	msgbox Gen_Route09_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route09_Text_Trainer2Intro:
	.string "You scared off a whopper! You\n"
	.string "better make up for it in battle!$"

Gen_Route09_Text_Trainer2Defeat:
	.string "Haha! You reeled in a well-earned\n"
	.string "victory!$"

Gen_Route09_Text_Trainer2After:
	.string "Take care not to drop your POKé\n"
	.string "BALLS in the drink!$"
