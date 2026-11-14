Gen_Town07_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Gen_Town07_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Gen_Town07_PokemonCenter_OnTransition:
	setrespawn HEAL_LOCATION_GEN_TOWN07
	end

Gen_Town07_PokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_GEN_TOWN07_POKEMONCENTER_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
