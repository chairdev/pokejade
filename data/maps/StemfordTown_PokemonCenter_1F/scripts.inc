StemfordTown_PokemonCenter_1F_MapScripts::
# 4 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StemfordTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


StemfordTown_PokemonCenter_1F_OnTransition::
# 9 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_STEMFORD_TOWN
	return


StemfordTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	release
	return


StemfordTown_PokemonCenter_1F_EventScript_TiredLady::
# 21 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	lock
# 22 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 23 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	msgbox StemfordTown_PokemonCenter_1F_EventScript_TiredLady_Text_0
# 27 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	release
	return


StemfordTown_PokemonCenter_1F_EventScript_TiredLady_Text_0:
# 24 "data/maps/StemfordTown_PokemonCenter_1F/scripts.pory"
	.string "Ever notice how nobody in this world\n"
	.string "sleeps? Not the trainers, not the\l"
	.string "Pokémon, certainly not me.$"
