DolomiteCity_PokemonCenter_1F_MapScripts::
# 4 "data/maps/DolomiteCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DolomiteCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/DolomiteCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


DolomiteCity_PokemonCenter_1F_OnTransition::
# 9 "data/maps/DolomiteCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_DOLOMITE_CITY
	return


DolomiteCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/DolomiteCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/DolomiteCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/DolomiteCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/DolomiteCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/DolomiteCity_PokemonCenter_1F/scripts.pory"
	release
	return

