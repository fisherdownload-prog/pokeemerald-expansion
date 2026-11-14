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
	.string "A GYM battle is a conversation\n"
	.string "held with fists, grit, and\l"
	.string "courage!\p"
	.string "Show me the discipline you and\n"
	.string "your POKéMON share!$"

Gen_Town05_Gym_Text_Defeat:
	.string "I bow to a true warrior! You have\n"
	.string "earned the right to carry this\l"
	.string "BADGE!$"

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
	.string "No way! Even my toughest shell\n"
	.string "cracked!$"

Gen_Town05_Gym_Text_Trainer0After:
	.string "One day my bugs will surprise\n"
	.string "everybody!$"

Gen_Town05_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_LEAH, Gen_Town05_Gym_Text_Trainer1Intro, Gen_Town05_Gym_Text_Trainer1Defeat
	msgbox Gen_Town05_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town05_Gym_Text_Trainer1Intro:
	.string "Our LEADER only battles TRAINERS\n"
	.string "who can get past me first!$"

Gen_Town05_Gym_Text_Trainer1Defeat:
	.string "How dreadful! My flawless record\n"
	.string "is ruined!$"

Gen_Town05_Gym_Text_Trainer1After:
	.string "Do try not to get too dusty out\n"
	.string "here on the road!$"
