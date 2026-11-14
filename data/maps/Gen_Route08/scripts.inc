Gen_Route08_MapScripts::
	.byte 0

Gen_Route08_EventScript_Trainer0::
	trainerbattle_single TRAINER_GEORGE, Gen_Route08_Text_Trainer0Intro, Gen_Route08_Text_Trainer0Defeat
	msgbox Gen_Route08_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer0Intro:
	.string "Dive into the deep end against my\n"
	.string "fluid WATER team!$"

Gen_Route08_Text_Trainer0Defeat:
	.string "I got completely washed out by\n"
	.string "your team!$"

Gen_Route08_Text_Trainer0After:
	.string "If you find a good fishing spot,\n"
	.string "keep it a secret!$"

Gen_Route08_EventScript_Trainer1::
	trainerbattle_single TRAINER_BERKE, Gen_Route08_Text_Trainer1Intro, Gen_Route08_Text_Trainer1Defeat
	msgbox Gen_Route08_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer1Intro:
	.string "Words are unnecessary. Our POKéMON\n"
	.string "will speak for us!$"

Gen_Route08_Text_Trainer1Defeat:
	.string "Impossible... My vision did not\n"
	.string "show this outcome!$"

Gen_Route08_Text_Trainer1After:
	.string "Your future is clouded in bright,\n"
	.string "unpredictable energy...$"

Gen_Route08_EventScript_Trainer2::
	trainerbattle_single TRAINER_BRAXTON, Gen_Route08_Text_Trainer2Intro, Gen_Route08_Text_Trainer2Defeat
	msgbox Gen_Route08_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer2Intro:
	.string "Crash like a tidal wave! My WATER\n"
	.string "POKéMON will wash you away!$"

Gen_Route08_Text_Trainer2Defeat:
	.string "A stunning performance. I tip my\n"
	.string "hat to you!$"

Gen_Route08_Text_Trainer2After:
	.string "Do try not to get too dusty out\n"
	.string "here on the road!$"

Gen_Route08_EventScript_Trainer3::
	trainerbattle_single TRAINER_VINCENT, Gen_Route08_Text_Trainer3Intro, Gen_Route08_Text_Trainer3Defeat
	msgbox Gen_Route08_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer3Intro:
	.string "Let us put on a show worthy of a\n"
	.string "grand stage!$"

Gen_Route08_Text_Trainer3Defeat:
	.string "Well! At least I lost with\n"
	.string "impeccable grace!$"

Gen_Route08_Text_Trainer3After:
	.string "Until we meet again, darling!$"

Gen_Route08_EventScript_Trainer4::
	trainerbattle_single TRAINER_LEROY, Gen_Route08_Text_Trainer4Intro, Gen_Route08_Text_Trainer4Defeat
	msgbox Gen_Route08_Text_Trainer4After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer4Intro:
	.string "Shorts are comfy and easy to wear!\n"
	.string "Let us battle!$"

Gen_Route08_Text_Trainer4Defeat:
	.string "Whoa! You are way stronger than I\n"
	.string "thought!$"

Gen_Route08_Text_Trainer4After:
	.string "You really know how to raise\n"
	.string "POKéMON!$"

Gen_Route08_EventScript_Guard::
	msgbox Gen_Route08_Text_Guard, MSGBOX_NPC
	end

Gen_Route08_Text_Guard:
	.string "This route is dangerous! Show me 6\n"
	.string "BADGES before I can let you\l"
	.string "through!$"
