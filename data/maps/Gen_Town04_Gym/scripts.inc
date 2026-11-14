Gen_Town04_Gym_MapScripts::
	.byte 0

Gen_Town04_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_WATTSON_1, Gen_Town04_Gym_Text_Intro, Gen_Town04_Gym_Text_Defeat, Gen_Town04_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town04_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town04_Gym_EventScript_Defeated::
	message Gen_Town04_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE03_GET
	giveitem ITEM_HM_SURF
	msgbox Gen_Town04_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town04_Gym_Text_Intro:
	.string "Everything you build rests upon\n"
	.string "the ground beneath your feet.\p"
	.string "Feel the unstoppable weight of my\n"
	.string "GROUND POKéMON!$"

Gen_Town04_Gym_Text_Defeat:
	.string "What earth-shattering strength!\n"
	.string "You have rightfully earned my\l"
	.string "BADGE!$"

Gen_Town04_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 3 from\n"
	.string "the GYM LEADER.$"

Gen_Town04_Gym_Text_After:
	.string "That BADGE lets you use SURF\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town04_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_ED, Gen_Town04_Gym_Text_Trainer0Intro, Gen_Town04_Gym_Text_Trainer0Defeat
	msgbox Gen_Town04_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town04_Gym_Text_Trainer0Intro:
	.string "Many challengers walk through\n"
	.string "those doors, and most turn right\l"
	.string "back!$"

Gen_Town04_Gym_Text_Trainer0Defeat:
	.string "Whoa! You are way stronger than I\n"
	.string "thought!$"

Gen_Town04_Gym_Text_Trainer0After:
	.string "Next time we meet, I will\n"
	.string "definitely win!$"

Gen_Town04_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_DECLAN, Gen_Town04_Gym_Text_Trainer1Intro, Gen_Town04_Gym_Text_Trainer1Defeat
	msgbox Gen_Town04_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town04_Gym_Text_Trainer1Intro:
	.string "Welcome to our GYM! Show me you\n"
	.string "have what it takes to face the\l"
	.string "LEADER!$"

Gen_Town04_Gym_Text_Trainer1Defeat:
	.string "Ah, my old tactics met their match\n"
	.string "today!$"

Gen_Town04_Gym_Text_Trainer1After:
	.string "The road ahead holds far tougher\n"
	.string "challenges than me!$"
