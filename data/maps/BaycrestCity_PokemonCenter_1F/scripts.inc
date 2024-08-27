BaycrestCity_PokemonCenter_1F_MapScripts::
# 4 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BaycrestCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


BaycrestCity_PokemonCenter_1F_OnTransition::
# 9 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BAYCREST_CITY
	return


BaycrestCity_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_REGISTERED_TO_LEAGUE, BaycrestCity_PokemonCenter_1F_EventScript_Nurse_1
# 20 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 21 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	release
	return

BaycrestCity_PokemonCenter_1F_EventScript_Nurse_1:
# 16 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	goto BaycrestCity_PokemonCenter_1F_EventScript_RegisterLeague
	return


BaycrestCity_PokemonCenter_1F_EventScript_RegisterLeague::
# 29 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	lock
# 31 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	msgbox BaycrestCity_PokemonCenter_1F_Text_RegisterToLeague1
# 32 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 33 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	playse SE_M_LOCK_ON
# 35 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	waitse
# 36 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	msgbox BaycrestCity_PokemonCenter_1F_Text_RegisterToLeague2
# 37 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 38 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	playse SE_M_CHARGE
# 39 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	msgbox BaycrestCity_PokemonCenter_1F_Text_RegisterToLeague3
# 42 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_REGISTERED_TO_LEAGUE
# 43 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 2
# 44 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	release
	return


BaycrestCity_PokemonCenter_1F_EventScript_Boy::
# 70 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	lock
# 71 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 72 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	msgbox BaycrestCity_PokemonCenter_1F_Text_Boy
# 73 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 74 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	release
	return


BaycrestCity_PokemonCenter_1F_Text_RegisterToLeague1::
# 47 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	.string "Welcome to the Pokémon Center!\n"
	.string "How may I help you today?\p"
	.string "Oh, you're here to register for the\n"
	.string "Toshou Pokémon League?\p"
	.string "I can help you with that!\n"
	.string "Just give me your Pokédex, and I'll take\l"
	.string "care of the rest.$"

BaycrestCity_PokemonCenter_1F_Text_RegisterToLeague2::
# 54 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} from Everwood Town.\p"
	.string "Registration for the Toshou Pokémon\n"
	.string "League recognized.\p"
	.string "Registration complete.$"

BaycrestCity_PokemonCenter_1F_Text_RegisterToLeague3::
# 61 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	.string "There you go! You're all set to compete\n"
	.string "in the Toshou League!\p"
	.string "The nearest Gym is here in Baycrest\n"
	.string "City, so you can start by getting your\l"
	.string "first badge there.\p"
	.string "Once you have all eight badges, you can\n"
	.string "participate in the Paragon Conference\l"
	.string "to earn the right to challenge the Elite\l"
	.string "Four and the Champion!\p"
	.string "Good luck on your journey to become the\n"
	.string "Toshou Champion!$"

BaycrestCity_PokemonCenter_1F_Text_Boy::
# 77 "data/maps/BaycrestCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon Centers are great!\n"
	.string "No matter where you go, they're always\l"
	.string "super recognizable!\p"
	.string "Ours are... not as cool as the ones with\n"
	.string "Poké Marts in them like in Galar and\l"
	.string "other regions, but they're still cool!$"
