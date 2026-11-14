Gen_Town07_Gym_MapScripts::
	.byte 0

Gen_Town07_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_WINONA_1, Gen_Town07_Gym_Text_Intro, Gen_Town07_Gym_Text_Defeat, Gen_Town07_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town07_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town07_Gym_EventScript_Defeated::
	message Gen_Town07_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE06_GET
	giveitem ITEM_HM_WATERFALL
	msgbox Gen_Town07_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town07_Gym_Text_Intro:
	.string "Few challengers possess the\n"
	.string "courage to look a dragon in the\l"
	.string "eye!\p"
	.string "Show me you are worthy of standing\n"
	.string "among legends!$"

Gen_Town07_Gym_Text_Defeat:
	.string "Truly the heart of a champion! You\n"
	.string "have earned this BADGE with honor!$"

Gen_Town07_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 6 from\n"
	.string "the GYM LEADER.$"

Gen_Town07_Gym_Text_After:
	.string "That BADGE lets you use WATERFALL\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town07_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_FELIX, Gen_Town07_Gym_Text_Trainer0Intro, Gen_Town07_Gym_Text_Trainer0Defeat
	msgbox Gen_Town07_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town07_Gym_Text_Trainer0Intro:
	.string "Our DRAGON strategies are famous\n"
	.string "across the entire region!$"

Gen_Town07_Gym_Text_Trainer0Defeat:
	.string "You totally swept me away in that\n"
	.string "tide!$"

Gen_Town07_Gym_Text_Trainer0After:
	.string "My POKéMON love racing alongside\n"
	.string "boats!$"

Gen_Town07_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_VIOLET, Gen_Town07_Gym_Text_Trainer1Intro, Gen_Town07_Gym_Text_Trainer1Defeat
	msgbox Gen_Town07_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town07_Gym_Text_Trainer1Intro:
	.string "Think you can earn a BADGE today?\n"
	.string "Let us test that confidence!$"

Gen_Town07_Gym_Text_Trainer1Defeat:
	.string "Oof! You knocked me right off the\n"
	.string "trail!$"

Gen_Town07_Gym_Text_Trainer1After:
	.string "A sturdy team is a traveler's best\n"
	.string "companion!$"
