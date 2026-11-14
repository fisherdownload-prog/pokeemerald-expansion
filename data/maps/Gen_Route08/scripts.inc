Gen_Route08_MapScripts::
	.byte 0

Gen_Route08_EventScript_Trainer0::
	trainerbattle_single TRAINER_GEORGE, Gen_Route08_Text_Trainer0Intro, Gen_Route08_Text_Trainer0Defeat
	msgbox Gen_Route08_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer0Intro:
	.string "No flame can survive the\n"
	.string "relentless surge of my WATER\l"
	.string "POKéMON!$"

Gen_Route08_Text_Trainer0Defeat:
	.string "Whoa! You hooked me good in that\n"
	.string "battle!$"

Gen_Route08_Text_Trainer0After:
	.string "Tight lines and good luck to you,\n"
	.string "kid!$"

Gen_Route08_EventScript_Trainer1::
	trainerbattle_single TRAINER_BERKE, Gen_Route08_Text_Trainer1Intro, Gen_Route08_Text_Trainer1Defeat
	msgbox Gen_Route08_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer1Intro:
	.string "You were thinking about walking\n"
	.string "past me, were you not?$"

Gen_Route08_Text_Trainer1Defeat:
	.string "My concentration shattered under\n"
	.string "your pressure!$"

Gen_Route08_Text_Trainer1After:
	.string "I must meditate deeper to sharpen\n"
	.string "my inner sight.$"

Gen_Route08_EventScript_Trainer2::
	trainerbattle_single TRAINER_BRAXTON, Gen_Route08_Text_Trainer2Intro, Gen_Route08_Text_Trainer2Defeat
	msgbox Gen_Route08_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer2Intro:
	.string "Elegance is the deadliest weapon\n"
	.string "in any TRAINER's bag!$"

Gen_Route08_Text_Trainer2Defeat:
	.string "Hmph... You actually have quite a\n"
	.string "bit of flair!$"

Gen_Route08_Text_Trainer2After:
	.string "Perhaps I will try a whole new\n"
	.string "look for my next battle!$"

Gen_Route08_EventScript_Trainer3::
	trainerbattle_single TRAINER_VINCENT, Gen_Route08_Text_Trainer3Intro, Gen_Route08_Text_Trainer3Defeat
	msgbox Gen_Route08_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer3Intro:
	.string "A true BATTLE should look like a\n"
	.string "work of art!$"

Gen_Route08_Text_Trainer3Defeat:
	.string "A stunning performance. I tip my\n"
	.string "hat to you!$"

Gen_Route08_Text_Trainer3After:
	.string "Take good care of your POKéMON so\n"
	.string "they always shine!$"

Gen_Route08_EventScript_Trainer4::
	trainerbattle_single TRAINER_LEROY, Gen_Route08_Text_Trainer4Intro, Gen_Route08_Text_Trainer4Defeat
	msgbox Gen_Route08_Text_Trainer4After, MSGBOX_AUTOCLOSE
	end

Gen_Route08_Text_Trainer4Intro:
	.string "I trained all morning before\n"
	.string "breakfast! Watch this!$"

Gen_Route08_Text_Trainer4Defeat:
	.string "Aw man, my shorts did not save me\n"
	.string "this time!$"

Gen_Route08_Text_Trainer4After:
	.string "I am going to train my POKéMON\n"
	.string "until they are huge!$"

Gen_Route08_EventScript_Guard::
	msgbox Gen_Route08_Text_Guard, MSGBOX_NPC
	end

Gen_Route08_Text_Guard:
	.string "Halt! Only TRAINERS with at least\n"
	.string "6 BADGES may proceed past this\l"
	.string "checkpoint!$"
