StemfordTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StemfordTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


StemfordTown_PokemonCenter_1F_OnTransition::
# 7 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_STEMFORD_TOWN
	return


StemfordTown_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 12 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 14 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 15 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	release
	return

