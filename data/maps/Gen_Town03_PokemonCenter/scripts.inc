Gen_Town03_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Gen_Town03_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Gen_Town03_PokemonCenter_OnTransition:
	setrespawn HEAL_LOCATION_GEN_TOWN03
	end

Gen_Town03_PokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_GEN_TOWN03_POKEMONCENTER_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
