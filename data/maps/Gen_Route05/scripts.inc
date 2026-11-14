Gen_Route05_MapScripts::
	.byte 0

Gen_Route05_EventScript_Trainer0::
	trainerbattle_single TRAINER_LOLA_2, Gen_Route05_Text_Trainer0Intro, Gen_Route05_Text_Trainer0Defeat
	msgbox Gen_Route05_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer0Intro:
	.string "Soar above the clouds with the\n"
	.string "swift grace of FLYING POKéMON!$"

Gen_Route05_Text_Trainer0Defeat:
	.string "Glub... I sank right to the\n"
	.string "bottom!$"

Gen_Route05_Text_Trainer0After:
	.string "Remember to stretch before diving\n"
	.string "into deep water!$"

Gen_Route05_EventScript_Trainer1::
	trainerbattle_single TRAINER_LOLA_3, Gen_Route05_Text_Trainer1Intro, Gen_Route05_Text_Trainer1Defeat
	msgbox Gen_Route05_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer1Intro:
	.string "I hope you brought a towel,\n"
	.string "because we are making a splash!$"

Gen_Route05_Text_Trainer1Defeat:
	.string "Awesome match! You rode that wave\n"
	.string "to victory!$"

Gen_Route05_Text_Trainer1After:
	.string "My POKéMON love racing alongside\n"
	.string "boats!$"

Gen_Route05_EventScript_Trainer2::
	trainerbattle_single TRAINER_LOLA_4, Gen_Route05_Text_Trainer2Intro, Gen_Route05_Text_Trainer2Defeat
	msgbox Gen_Route05_Text_Trainer2After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer2Intro:
	.string "Poof! Surprise! Now you are\n"
	.string "trapped in a battle!$"

Gen_Route05_Text_Trainer2Defeat:
	.string "You saw right through all my\n"
	.string "illusions!$"

Gen_Route05_Text_Trainer2After:
	.string "Check behind every tree! You never\n"
	.string "know who is watching!$"

Gen_Route05_EventScript_Trainer3::
	trainerbattle_single TRAINER_LOLA_5, Gen_Route05_Text_Trainer3Intro, Gen_Route05_Text_Trainer3Defeat
	msgbox Gen_Route05_Text_Trainer3After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer3Intro:
	.string "From high in the sky, my FLYING\n"
	.string "team controls the whole field!$"

Gen_Route05_Text_Trainer3Defeat:
	.string "Back to the tall grass for more\n"
	.string "training!$"

Gen_Route05_Text_Trainer3After:
	.string "Keep an eye out for rustling\n"
	.string "grass!$"

Gen_Route05_EventScript_Trainer4::
	trainerbattle_single TRAINER_RICKY_1, Gen_Route05_Text_Trainer4Intro, Gen_Route05_Text_Trainer4Defeat
	msgbox Gen_Route05_Text_Trainer4After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer4Intro:
	.string "My arms are sore from hauling in\n"
	.string "heavy POKéMON all day!$"

Gen_Route05_Text_Trainer4Defeat:
	.string "Looks like I caught myself a solid\n"
	.string "defeat!$"

Gen_Route05_Text_Trainer4After:
	.string "Patience is the secret to both\n"
	.string "fishing and raising POKéMON!$"

Gen_Route05_EventScript_Trainer5::
	trainerbattle_single TRAINER_SIMON, Gen_Route05_Text_Trainer5Intro, Gen_Route05_Text_Trainer5Defeat
	msgbox Gen_Route05_Text_Trainer5After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer5Intro:
	.string "Creepy, crawly, and completely\n"
	.string "unstoppable! Go, my team!$"

Gen_Route05_Text_Trainer5Defeat:
	.string "Bzzzt... My strategy totally fell\n"
	.string "apart!$"

Gen_Route05_Text_Trainer5After:
	.string "Even if they lose, Bug POKéMON are\n"
	.string "still the coolest!$"

Gen_Route05_EventScript_Trainer6::
	trainerbattle_single TRAINER_CHARLIE, Gen_Route05_Text_Trainer6Intro, Gen_Route05_Text_Trainer6Defeat
	msgbox Gen_Route05_Text_Trainer6After, MSGBOX_AUTOCLOSE
	end

Gen_Route05_Text_Trainer6Intro:
	.string "Feel the gale-force fury of my\n"
	.string "FLYING POKéMON!$"

Gen_Route05_Text_Trainer6Defeat:
	.string "Oof! That was rougher than\n"
	.string "sleeping on rocks!$"

Gen_Route05_Text_Trainer6After:
	.string "I love comparing notes with other\n"
	.string "travelers!$"
