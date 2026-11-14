Gen_Town05_Gym_MapScripts::
	.byte 0

Gen_Town05_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_FLANNERY_1, Gen_Town05_Gym_Text_Intro, Gen_Town05_Gym_Text_Defeat, Gen_Town05_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town05_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town05_Gym_EventScript_Defeated::
	message Gen_Town05_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE04_GET
	giveitem ITEM_HM_DIVE
	msgbox Gen_Town05_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town05_Gym_Text_Intro:
	.string "No fear! No hesitation! Only pure,\n"
	.string "honest combat!\p"
	.string "Come at me with your strongest\n"
	.string "spirit!$"

Gen_Town05_Gym_Text_Defeat:
	.string "What power and heart! You defeated\n"
	.string "me cleanly. Wear this BADGE\l"
	.string "proudly!$"

Gen_Town05_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 4 from\n"
	.string "the GYM LEADER.$"

Gen_Town05_Gym_Text_After:
	.string "That BADGE lets you use DIVE\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town05_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_ZANDER, Gen_Town05_Gym_Text_Trainer0Intro, Gen_Town05_Gym_Text_Trainer0Defeat
	msgbox Gen_Town05_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town05_Gym_Text_Trainer0Intro:
	.string "I train here every day to uphold\n"
	.string "the honor of our GYM!$"

Gen_Town05_Gym_Text_Trainer0Defeat:
	.string "You completely stole the spotlight\n"
	.string "from me!$"

Gen_Town05_Gym_Text_Trainer0After:
	.string "Take good care of your POKéMON so\n"
	.string "they always shine!$"

Gen_Town05_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_LEAH, Gen_Town05_Gym_Text_Trainer1Intro, Gen_Town05_Gym_Text_Trainer1Defeat
	msgbox Gen_Town05_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town05_Gym_Text_Trainer1Intro:
	.string "Our LEADER only battles TRAINERS\n"
	.string "who can get past me first!$"

Gen_Town05_Gym_Text_Trainer1Defeat:
	.string "Haha! You reeled in a well-earned\n"
	.string "victory!$"

Gen_Town05_Gym_Text_Trainer1After:
	.string "Take care not to drop your POKé\n"
	.string "BALLS in the drink!$"
