BaycrestCity_MapScripts::
# 4 "data/maps/BaycrestCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BaycrestCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BaycrestCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/BaycrestCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


BaycrestCity_Trigger_Rival1::
# 10 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 12 "data/maps/BaycrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachRival1
# 13 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 14 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, LookLeft
# 15 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 17 "data/maps/BaycrestCity/scripts.pory"
	checkplayergender
# 18 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BaycrestCity_Maya
# 19 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BaycrestCity_Shinji
# 21 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Trigger_Rival2::
# 25 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 27 "data/maps/BaycrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachRival2
# 28 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 29 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, LookDown
# 30 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 32 "data/maps/BaycrestCity/scripts.pory"
	checkplayergender
# 33 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BaycrestCity_Maya
# 34 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BaycrestCity_Shinji
# 36 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Maya::
# 40 "data/maps/BaycrestCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 43 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival1F
	return


BaycrestCity_Shinji::
# 47 "data/maps/BaycrestCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 50 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival1M
	return


# 54 "data/maps/BaycrestCity/scripts.pory"
ApproachRival1:
# 55 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 55 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 55 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 55 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 56 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 60 "data/maps/BaycrestCity/scripts.pory"
ApproachRival2:
# 61 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 61 "data/maps/BaycrestCity/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/BaycrestCity/scripts.pory"
LookLeft:
# 65 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 66 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 69 "data/maps/BaycrestCity/scripts.pory"
LookDown:
# 70 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 71 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_down
	step_end

BaycrestCity_Text_Rival1F::
# 74 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}{KUN}! I've been\n"
	.string "waiting for you!\p"
	.string "I wanted to see how many Pokémon\n"
	.string "you've caught so far.\p"
	.string "I've caught a bunch of Pokémon myself,\n"
	.string "so I'm sure I've got more than you!\p"
	.string "You've caught... {STR_VAR_1}\n"
	.string "Pokémon, right?$"

BaycrestCity_Text_Rival1MonF::
# 82 "data/maps/BaycrestCity/scripts.pory"
	.string "$"

BaycrestCity_Text_Rival1M::
# 86 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Oh, hey, {PLAYER}{KUN}!\n"
	.string "There you are!\p"
	.string "Have you caught any Pokémon yet?\p"
	.string "I sure have!\n"
	.string "Let's see who's caught more! Looks like\l"
	.string "you've caught... {STR_VAR_1}\l"
	.string "Pokémon, right?$"
