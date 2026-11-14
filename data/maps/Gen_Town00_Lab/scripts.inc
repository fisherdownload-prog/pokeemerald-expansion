Gen_Town00_Lab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Gen_Town00_Lab_OnTransition
	.byte 0

Gen_Town00_Lab_OnTransition:
	setrespawn HEAL_LOCATION_GEN_TOWN00
	call_if_set FLAG_SYS_POKEMON_GET, Gen_Town00_Lab_EventScript_AllowLeaving
	end

Gen_Town00_Lab_EventScript_AllowLeaving::
	setvar VAR_TEMP_1, 1
	return

Gen_Town00_Lab_EventScript_NoLeaving::
	lockall
	msgbox Gen_Town00_Lab_Text_ChooseFirst, MSGBOX_DEFAULT
	applymovement LOCALID_PLAYER, Gen_Town00_Lab_Movement_StepBack
	waitmovement 0
	releaseall
	end

Gen_Town00_Lab_Movement_StepBack:
	walk_up
	step_end

Gen_Town00_Lab_EventScript_Professor::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEMON_GET, Gen_Town00_Lab_EventScript_ProfessorAfter
	msgbox Gen_Town00_Lab_Text_Welcome, MSGBOX_DEFAULT
	release
	end

Gen_Town00_Lab_EventScript_ProfessorAfter::
	msgbox Gen_Town00_Lab_Text_Advice, MSGBOX_DEFAULT
	release
	end

Gen_Town00_Lab_EventScript_Starter::
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_B_DASH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_ADVENTURE_STARTED
	special EnableNationalPokedex
	setvar VAR_TEMP_1, 1
	playfanfare MUS_OBTAIN_ITEM
	message Gen_Town00_Lab_Text_Received
	waitmessage
	waitfanfare
	removeobject LOCALID_GEN_TOWN00_LAB_BALL0
	removeobject LOCALID_GEN_TOWN00_LAB_BALL1
	removeobject LOCALID_GEN_TOWN00_LAB_BALL2
	giveitem ITEM_POKE_BALL, 10
	giveitem ITEM_POTION, 3
	msgbox Gen_Town00_Lab_Text_Advice, MSGBOX_DEFAULT
	release
	end

Gen_Town00_Lab_EventScript_Ball0::
	lock
	showmonpic SPECIES_TREECKO, 10, 3
	msgbox Gen_Town00_Lab_Text_Take0, MSGBOX_YESNO
	hidemonpic
	goto_if_eq VAR_RESULT, NO, Gen_Town00_Lab_EventScript_PutBack
	givemon SPECIES_TREECKO, 5
	goto Gen_Town00_Lab_EventScript_Starter

Gen_Town00_Lab_Text_Take0:
	.string "Will you take TREECKO as your\n"
	.string "partner?$"

Gen_Town00_Lab_EventScript_Ball1::
	lock
	showmonpic SPECIES_TORCHIC, 10, 3
	msgbox Gen_Town00_Lab_Text_Take1, MSGBOX_YESNO
	hidemonpic
	goto_if_eq VAR_RESULT, NO, Gen_Town00_Lab_EventScript_PutBack
	givemon SPECIES_TORCHIC, 5
	goto Gen_Town00_Lab_EventScript_Starter

Gen_Town00_Lab_Text_Take1:
	.string "Will you take TORCHIC as your\n"
	.string "partner?$"

Gen_Town00_Lab_EventScript_Ball2::
	lock
	showmonpic SPECIES_MUDKIP, 10, 3
	msgbox Gen_Town00_Lab_Text_Take2, MSGBOX_YESNO
	hidemonpic
	goto_if_eq VAR_RESULT, NO, Gen_Town00_Lab_EventScript_PutBack
	givemon SPECIES_MUDKIP, 5
	goto Gen_Town00_Lab_EventScript_Starter

Gen_Town00_Lab_Text_Take2:
	.string "Will you take MUDKIP as your\n"
	.string "partner?$"

Gen_Town00_Lab_EventScript_PutBack::
	release
	end

Gen_Town00_Lab_Text_ChooseFirst:
	.string "PROF. TEAK: Hold on! It's\n"
	.string "dangerous out there. Choose a\l"
	.string "POKéMON first.$"

Gen_Town00_Lab_Text_Welcome:
	.string "I'm PROF. TEAK. Welcome!\p"
	.string "Three POKéMON are waiting on the\n"
	.string "floor in front of me. Pick the one\l"
	.string "you like.$"

Gen_Town00_Lab_Text_Received:
	.string "{PLAYER} received a POKéMON, a\n"
	.string "POKéDEX and the RUNNING SHOES!$"

Gen_Town00_Lab_Text_Advice:
	.string "PROF. TEAK: Eight GYM LEADERS\n"
	.string "stand between you and the POKéMON\l"
	.string "LEAGUE.\p"
	.string "The first GYM is in FLINTMERE\n"
	.string "CITY. Good luck!$"
