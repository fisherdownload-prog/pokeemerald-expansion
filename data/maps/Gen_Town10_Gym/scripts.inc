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
	.string "Our LEADER only battles TRAINERS\n"
	.string "who can get past me first!$"

Gen_Town10_Gym_Text_Trainer0Defeat:
	.string "Aww, I thought for sure I had you!$"

Gen_Town10_Gym_Text_Trainer0After:
	.string "I will practice harder so we can\n"
	.string "have a rematch!$"

Gen_Town10_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_ROSE_5, Gen_Town10_Gym_Text_Trainer1Intro, Gen_Town10_Gym_Text_Trainer1Defeat
	msgbox Gen_Town10_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town10_Gym_Text_Trainer1Intro:
	.string "Many challengers walk through\n"
	.string "those doors, and most turn right\l"
	.string "back!$"

Gen_Town10_Gym_Text_Trainer1Defeat:
	.string "Yikes! You wiped out my whole\n"
	.string "team!$"

Gen_Town10_Gym_Text_Trainer1After:
	.string "You really know how to raise\n"
	.string "POKéMON!$"
