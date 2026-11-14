Gen_Town11_League_MapScripts::
	.byte 0

Gen_Town11_League_EventScript_Member0::
	trainerbattle_single TRAINER_SIDNEY, Gen_Town11_League_Text_Member0Intro, Gen_Town11_League_Text_Member0Defeat
	msgbox Gen_Town11_League_Text_Member0After, MSGBOX_AUTOCLOSE
	end

Gen_Town11_League_Text_Member0Intro:
	.string "You have walked through fire to\n"
	.string "reach this chamber, yet the\l"
	.string "hottest trial awaits!\p"
	.string "Let us see if you can survive my\n"
	.string "inferno!$"

Gen_Town11_League_Text_Member0Defeat:
	.string "What roaring power! You conquered\n"
	.string "the flames. Step forward to your\l"
	.string "destiny!$"

Gen_Town11_League_Text_Member0After:
	.string "The next of us is waiting.$"

Gen_Town11_League_EventScript_Member1::
	trainerbattle_single TRAINER_PHOEBE, Gen_Town11_League_Text_Member1Intro, Gen_Town11_League_Text_Member1Defeat
	msgbox Gen_Town11_League_Text_Member1After, MSGBOX_AUTOCLOSE
	end

Gen_Town11_League_Text_Member1Intro:
	.string "Forged in the depths of the earth,\n"
	.string "my ROCK POKéMON yield to nothing!\p"
	.string "Show me your strength!$"

Gen_Town11_League_Text_Member1Defeat:
	.string "Unbreakable will! You earned this\n"
	.string "victory cleanly. Step forward!$"

Gen_Town11_League_Text_Member1After:
	.string "The next of us is waiting.$"

Gen_Town11_League_EventScript_Member2::
	trainerbattle_single TRAINER_GLACIA, Gen_Town11_League_Text_Member2Intro, Gen_Town11_League_Text_Member2Defeat
	msgbox Gen_Town11_League_Text_Member2After, MSGBOX_AUTOCLOSE
	end

Gen_Town11_League_Text_Member2Intro:
	.string "You stand before the apex of\n"
	.string "POKéMON might! Tremble or triumph!\p"
	.string "Face the sovereign fury of DRAGON\n"
	.string "POKéMON!$"

Gen_Town11_League_Text_Member2Defeat:
	.string "Truly worthy of legend! Step\n"
	.string "forward and face your final\l"
	.string "destiny!$"

Gen_Town11_League_Text_Member2After:
	.string "The next of us is waiting.$"

Gen_Town11_League_EventScript_Member3::
	lock
	faceplayer
	goto_if_not_defeated TRAINER_SIDNEY, Gen_Town11_League_EventScript_NotYet
	goto_if_not_defeated TRAINER_PHOEBE, Gen_Town11_League_EventScript_NotYet
	goto_if_not_defeated TRAINER_GLACIA, Gen_Town11_League_EventScript_NotYet
	trainerbattle_single TRAINER_DRAKE, Gen_Town11_League_Text_FinalIntro, Gen_Town11_League_Text_FinalDefeat, Gen_Town11_League_EventScript_Champion, NO_MUSIC
	msgbox Gen_Town11_League_Text_FinalDefeat, MSGBOX_DEFAULT
	release
	end

Gen_Town11_League_EventScript_NotYet::
	msgbox Gen_Town11_League_Text_NotYet, MSGBOX_DEFAULT
	release
	end

Gen_Town11_League_EventScript_Champion::
	msgbox Gen_Town11_League_Text_Champion, MSGBOX_DEFAULT
	setrespawn HEAL_LOCATION_GEN_TOWN00
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	releaseall
	end

Gen_Town11_League_Text_FinalIntro:
	.string "You have climbed high, challenger,\n"
	.string "yet the sky above still belongs to\l"
	.string "me!\p"
	.string "Try to reach my FLYING POKéMON!$"

Gen_Town11_League_Text_FinalDefeat:
	.string "Magnificent. There is nothing more\n"
	.string "I can teach you.$"

Gen_Town11_League_Text_NotYet:
	.string "You must defeat the other three of\n"
	.string "the ELITE FOUR before you face me.$"

Gen_Town11_League_Text_Champion:
	.string "You have beaten the ELITE FOUR.\n"
	.string "You are the new CHAMPION!$"
