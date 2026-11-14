Gen_Town10_Gym_MapScripts::
	.byte 0

Gen_Town10_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_JUAN_1, Gen_Town10_Gym_Text_Intro, Gen_Town10_Gym_Text_Defeat, Gen_Town10_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town10_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town10_Gym_EventScript_Defeated::
	message Gen_Town10_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE08_GET
	giveitem ITEM_HM_FLY
	msgbox Gen_Town10_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town10_Gym_Text_Intro:
	.string "Welcome, traveler! Like the tide,\n"
	.string "a true TRAINER must be both gentle\l"
	.string "and relentless.\p"
	.string "Let us test your resolve against\n"
	.string "the waves!$"

Gen_Town10_Gym_Text_Defeat:
	.string "Your adaptability is\n"
	.string "extraordinary! Take this BADGE and\l"
	.string "keep sailing forward!$"

Gen_Town10_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 8 from\n"
	.string "the GYM LEADER.$"

Gen_Town10_Gym_Text_After:
	.string "That BADGE lets you use FLY\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town10_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_ROSE_4, Gen_Town10_Gym_Text_Trainer0Intro, Gen_Town10_Gym_Text_Trainer0Defeat
	msgbox Gen_Town10_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town10_Gym_Text_Trainer0Intro:
	.string "Think you can earn a BADGE today?\n"
	.string "Let us test that confidence!$"

Gen_Town10_Gym_Text_Trainer0Defeat:
	.string "My ribbon came undone from all\n"
	.string "that excitement!$"

Gen_Town10_Gym_Text_Trainer0After:
	.string "Where did you learn to battle like\n"
	.string "that?$"

Gen_Town10_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_ROSE_5, Gen_Town10_Gym_Text_Trainer1Intro, Gen_Town10_Gym_Text_Trainer1Defeat
	msgbox Gen_Town10_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town10_Gym_Text_Trainer1Intro:
	.string "In this GYM, we push WATER POKéMON\n"
	.string "to their absolute peak!$"

Gen_Town10_Gym_Text_Trainer1Defeat:
	.string "Yikes! You wiped out my whole\n"
	.string "team!$"

Gen_Town10_Gym_Text_Trainer1After:
	.string "When I grow up, I want to be just\n"
	.string "as strong as you!$"
