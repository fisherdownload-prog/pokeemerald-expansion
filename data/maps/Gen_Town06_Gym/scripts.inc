Gen_Town06_Gym_MapScripts::
	.byte 0

Gen_Town06_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_NORMAN_1, Gen_Town06_Gym_Text_Intro, Gen_Town06_Gym_Text_Defeat, Gen_Town06_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town06_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town06_Gym_EventScript_Defeated::
	message Gen_Town06_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE05_GET
	giveitem ITEM_HM_FLASH
	msgbox Gen_Town06_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town06_Gym_Text_Intro:
	.string "Welcome to the CLOVERVIEW GYM! My\n"
	.string "POISON-type POKéMON and I have\l"
	.string "been waiting for a challenger like\l"
	.string "you.$"

Gen_Town06_Gym_Text_Defeat:
	.string "Well fought! You have earned this.$"

Gen_Town06_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 5 from\n"
	.string "the GYM LEADER.$"

Gen_Town06_Gym_Text_After:
	.string "That BADGE lets you use FLASH\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town06_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_DAISY, Gen_Town06_Gym_Text_Trainer0Intro, Gen_Town06_Gym_Text_Trainer0Defeat
	msgbox Gen_Town06_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town06_Gym_Text_Trainer0Intro:
	.string "The LEADER is too busy for you.\n"
	.string "Battle me first!$"

Gen_Town06_Gym_Text_Trainer0Defeat:
	.string "You might just have a chance.$"

Gen_Town06_Gym_Text_Trainer0After:
	.string "The LEADER is straight ahead.$"

Gen_Town06_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_ROSE_1, Gen_Town06_Gym_Text_Trainer1Intro, Gen_Town06_Gym_Text_Trainer1Defeat
	msgbox Gen_Town06_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town06_Gym_Text_Trainer1Intro:
	.string "The LEADER is too busy for you.\n"
	.string "Battle me first!$"

Gen_Town06_Gym_Text_Trainer1Defeat:
	.string "You might just have a chance.$"

Gen_Town06_Gym_Text_Trainer1After:
	.string "The LEADER is straight ahead.$"
