SpinelCity_PokemonCenter_1F_MapScripts::
# 4 "data/maps/SpinelCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpinelCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/SpinelCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SpinelCity_PokemonCenter_1F_OnTransition::
# 9 "data/maps/SpinelCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SPINEL_CITY
	return


SpinelCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/SpinelCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/SpinelCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/SpinelCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/SpinelCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/SpinelCity_PokemonCenter_1F/scripts.pory"
	release
	return

