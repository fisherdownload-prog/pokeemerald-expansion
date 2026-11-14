Gen_Route09_MapScripts::
	.byte 0

Gen_Route09_EventScript_Trainer0::
	trainerbattle_single TRAINER_WILTON_1, Gen_Route09_Text_Trainer0Intro, Gen_Route09_Text_Trainer0Defeat
	msgbox Gen_Route09_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route09_Text_Trainer0Intro:
	.string "My boots are dusty and my POKéMON\n"
	.string "are solid as stone!$"

Gen_Route09_Text_Trainer0Defeat:
	.string "My knees are shaking after a bout\n"
	.string "like that!$"

Gen_Route09_Text_Trainer0After:
	.string "My legs are tired, so I think I\n"
	.string "will rest here a bit.$"

Gen_Route09_EventScript_Trainer1::
	trainerbattle_single TRAINER_EDGAR, Gen_Route09_Text_Trainer1Intro, Gen_Route09_Text_Trainer1Defeat
	msgbox Gen_Route09_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route09_Text_Trainer1Intro:
	.string "Hey! You are in my favorite\n"
	.string "training spot! Let us settle this!$"

Gen_Route09_Text_Trainer1Defeat:
	.string "Oof! That was rougher than\n"
	.string "sleeping on rocks!$"

Gen_Route09_Text_Trainer1After:
	.string "Nothing beats sleeping under a\n"
	.string "blanket of bright stars!$"

Gen_Route09_EventScript_Trainer2::
	trainerbattle_single TRAINER_ALBERT, Gen_Route09_Text_Trainer2Intro, Gen_Route09_Text_Trainer2Defeat
	msgbox Gen_Route09_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route09_Text_Trainer2Intro:
	.string "Shh! They are biting! Oh, wait,\n"
	.string "that was just my shoe!$"

Gen_Route09_Text_Trainer2Defeat:
	.string "Looks like I caught myself a solid\n"
	.string "defeat!$"

Gen_Route09_Text_Trainer2After:
	.string "Patience is the secret to both\n"
	.string "fishing and raising POKéMON!$"
