Gen_Town06_Gym_MapScripts::
	.byte 0

Gen_Town06_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_NORMAN_1, Gen_Town06_Gym_Text_Intro, Gen_Town06_Gym_Text_Defeat, Gen_Town06_Gym_EventScript_Defeated, NO_MUSIC
	msgbox Gen_Town06_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town06_Gym_EventScript_Defeated::
	message Gen_Town06_Gym_Text_Badge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE05_GET
	giveitem ITEM_HM_FLASH
	msgbox Gen_Town06_Gym_Text_After, MSGBOX_DEFAULT
	release
	end

Gen_Town06_Gym_Text_Intro:
	.string "Fufufu... Careful where you step\n"
	.string "in my GYM, challenger!\p"
	.string "One tiny mistake can linger until\n"
	.string "the very end!$"

Gen_Town06_Gym_Text_Defeat:
	.string "Fufufu... You saw through every\n"
	.string "trick and endured to the end! Take\l"
	.string "this BADGE!$"

Gen_Town06_Gym_Text_Badge:
	.string "{PLAYER} received BADGE No. 5 from\n"
	.string "the GYM LEADER.$"

Gen_Town06_Gym_Text_After:
	.string "That BADGE lets you use FLASH\n"
	.string "outside of battle. Take the HM and\l"
	.string "teach it to a POKéMON.$"

Gen_Town06_Gym_EventScript_Trainer0::
	trainerbattle_single TRAINER_DAISY, Gen_Town06_Gym_Text_Trainer0Intro, Gen_Town06_Gym_Text_Trainer0Defeat
	msgbox Gen_Town06_Gym_Text_Trainer0After, MSGBOX_AUTOCLOSE
	end

Gen_Town06_Gym_Text_Trainer0Intro:
	.string "Step forward, challenger! Let us\n"
	.string "see if you deserve a shot at the\l"
	.string "BADGE!$"

Gen_Town06_Gym_Text_Trainer0Defeat:
	.string "Incredible! Your spirit\n"
	.string "overwhelmed my own!$"

Gen_Town06_Gym_Text_Trainer0After:
	.string "Osu! May your journey make you\n"
	.string "stronger!$"

Gen_Town06_Gym_EventScript_Trainer1::
	trainerbattle_single TRAINER_ROSE_1, Gen_Town06_Gym_Text_Trainer1Intro, Gen_Town06_Gym_Text_Trainer1Defeat
	msgbox Gen_Town06_Gym_Text_Trainer1After, MSGBOX_AUTOCLOSE
	end

Gen_Town06_Gym_Text_Trainer1Intro:
	.string "You will not reach the LEADER\n"
	.string "without proving your skill right\l"
	.string "here!$"

Gen_Town06_Gym_Text_Trainer1Defeat:
	.string "Whoa, you chewed right through my\n"
	.string "bug team!$"

Gen_Town06_Gym_Text_Trainer1After:
	.string "Watch your step so you do not\n"
	.string "squash any little guys!$"
