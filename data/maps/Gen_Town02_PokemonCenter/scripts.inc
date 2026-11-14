Gen_Town02_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Gen_Town02_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Gen_Town02_PokemonCenter_OnTransition:
	setrespawn HEAL_LOCATION_GEN_TOWN02
	end

Gen_Town02_PokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_GEN_TOWN02_POKEMONCENTER_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
