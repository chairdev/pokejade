StarridgeCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StarridgeCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


StarridgeCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_STARRIDGE_CITY
	return


StarridgeCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 12 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 14 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 15 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	release
	return


DOWTest::
# 19 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	bufferdayofweekstring STR_VAR_1, DAY_CURRENT
# 21 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	msgbox DOWTest_Text_0
# 22 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	release
	return


DOWTest_Text_0:
# 21 "data/maps/StarridgeCity_PokemonCenter_1F/scripts.pory"
	.string "today is {STR_VAR_1}$"
