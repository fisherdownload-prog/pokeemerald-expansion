Gen_Town00_PlayerHouse_MapScripts::
	.byte 0

Gen_Town00_PlayerHouse_EventScript_Mom::
	lock
	faceplayer
	msgbox Gen_Town00_PlayerHouse_Text_Rest, MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Gen_Town00_PlayerHouse_Text_Go, MSGBOX_DEFAULT
	release
	end

Gen_Town00_PlayerHouse_Text_Rest:
	.string "Home already? You and your POKéMON\n"
	.string "should take a quick rest.$"

Gen_Town00_PlayerHouse_Text_Go:
	.string "There! All better. Off you go,\n"
	.string "dear.$"
