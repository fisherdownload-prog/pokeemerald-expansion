Gen_Town11_League_MapScripts::
	.byte 0

Gen_Town11_League_EventScript_Member0::
	trainerbattle_single TRAINER_SIDNEY, Gen_Town11_League_Text_Member0Intro, Gen_Town11_League_Text_Member0Defeat
	msgbox Gen_Town11_League_Text_Member0After, MSGBOX_AUTOCLOSE
	end

Gen_Town11_League_Text_Member0Intro:
	.string "I am SIDNEY of the ELITE FOUR.\n"
	.string "Show me what eight BADGES are\l"
	.string "worth!$"

Gen_Town11_League_Text_Member0Defeat:
	.string "Splendid. Go on.$"

Gen_Town11_League_Text_Member0After:
	.string "The next of us is waiting.$"

Gen_Town11_League_EventScript_Member1::
	trainerbattle_single TRAINER_PHOEBE, Gen_Town11_League_Text_Member1Intro, Gen_Town11_League_Text_Member1Defeat
	msgbox Gen_Town11_League_Text_Member1After, MSGBOX_AUTOCLOSE
	end

Gen_Town11_League_Text_Member1Intro:
	.string "I am PHOEBE of the ELITE FOUR.\n"
	.string "Show me what eight BADGES are\l"
	.string "worth!$"

Gen_Town11_League_Text_Member1Defeat:
	.string "Splendid. Go on.$"

Gen_Town11_League_Text_Member1After:
	.string "The next of us is waiting.$"

Gen_Town11_League_EventScript_Member2::
	trainerbattle_single TRAINER_GLACIA, Gen_Town11_League_Text_Member2Intro, Gen_Town11_League_Text_Member2Defeat
	msgbox Gen_Town11_League_Text_Member2After, MSGBOX_AUTOCLOSE
	end

Gen_Town11_League_Text_Member2Intro:
	.string "I am GLACIA of the ELITE FOUR.\n"
	.string "Show me what eight BADGES are\l"
	.string "worth!$"

Gen_Town11_League_Text_Member2Defeat:
	.string "Splendid. Go on.$"

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
	.string "I am DRAKE, last of the ELITE\n"
	.string "FOUR. Nobody has come this far in\l"
	.string "a long time. Let's begin!$"

Gen_Town11_League_Text_FinalDefeat:
	.string "Magnificent. There is nothing more\n"
	.string "I can teach you.$"

Gen_Town11_League_Text_NotYet:
	.string "You must defeat the other three of\n"
	.string "the ELITE FOUR before you face me.$"

Gen_Town11_League_Text_Champion:
	.string "You have beaten the ELITE FOUR.\n"
	.string "You are the new CHAMPION!$"
