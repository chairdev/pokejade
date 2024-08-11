Route501_MapScripts::
# 4 "data/maps/Route501/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route501_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route501_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/Route501/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route501_Trigger_WalkToRivalLeft::
# 11 "data/maps/Route501/scripts.pory"
	lockall
# 13 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveToRivalLeft
# 14 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route501/scripts.pory"
	checkplayergender
# 17 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route501_RivalMaya
	return


Route501_Trigger_WalkToRivalRight::
# 22 "data/maps/Route501/scripts.pory"
	lockall
# 24 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveToRivalRight
# 25 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route501/scripts.pory"
	checkplayergender
# 28 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route501_RivalMaya
	return


# 31 "data/maps/Route501/scripts.pory"
PlayerMoveToRivalLeft:
# 32 "data/maps/Route501/scripts.pory"
	walk_right
# 33 "data/maps/Route501/scripts.pory"
	walk_up
# 33 "data/maps/Route501/scripts.pory"
	walk_up
# 34 "data/maps/Route501/scripts.pory"
	face_right
	step_end

# 37 "data/maps/Route501/scripts.pory"
PlayerMoveToRivalRight:
# 38 "data/maps/Route501/scripts.pory"
	walk_up
# 38 "data/maps/Route501/scripts.pory"
	walk_up
# 39 "data/maps/Route501/scripts.pory"
	face_right
	step_end

Route501_RivalMaya::
# 43 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 44 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route501/scripts.pory"
	msgbox RivalText1F
# 48 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 49 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalMaya_Text_0
# 53 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 54 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 55 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 57 "data/maps/Route501/scripts.pory"
	msgbox RivalText2F
# 60 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 62 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalMaya_Text_1
# 64 "data/maps/Route501/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 2
# 66 "data/maps/Route501/scripts.pory"
	fadedefaultbgm
# 67 "data/maps/Route501/scripts.pory"
	releaseall
	return


# 73 "data/maps/Route501/scripts.pory"
RivalNoticePlayer:
# 74 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
# 75 "data/maps/Route501/scripts.pory"
	face_left
	step_end

# 78 "data/maps/Route501/scripts.pory"
RivalLookAround:
# 79 "data/maps/Route501/scripts.pory"
	walk_in_place_fast_up
# 80 "data/maps/Route501/scripts.pory"
	walk_in_place_fast_down
# 81 "data/maps/Route501/scripts.pory"
	walk_in_place_fast_right
# 82 "data/maps/Route501/scripts.pory"
	face_right
# 83 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 86 "data/maps/Route501/scripts.pory"
RivalApproachBag:
# 87 "data/maps/Route501/scripts.pory"
	walk_down
# 88 "data/maps/Route501/scripts.pory"
	walk_right
# 88 "data/maps/Route501/scripts.pory"
	walk_right
# 88 "data/maps/Route501/scripts.pory"
	walk_right
# 89 "data/maps/Route501/scripts.pory"
	face_up
	step_end

# 92 "data/maps/Route501/scripts.pory"
PlayerApproachBag:
# 93 "data/maps/Route501/scripts.pory"
	walk_right
# 93 "data/maps/Route501/scripts.pory"
	walk_right
# 93 "data/maps/Route501/scripts.pory"
	walk_right
# 93 "data/maps/Route501/scripts.pory"
	walk_right
# 94 "data/maps/Route501/scripts.pory"
	face_right
	step_end

Route501_RivalMaya_Text_0:
# 51 "data/maps/Route501/scripts.pory"
	.string "Oh, there it is!\p"
	.string "$"

Route501_RivalMaya_Text_1:
# 62 "data/maps/Route501/scripts.pory"
	.string "No, stay back! Please!$"

RivalText1F::
# 97 "data/maps/Route501/scripts.pory"
	.string "Huh? What the...?\p"
	.string "Who are you?\l"
	.string "You look my age, but I've never seen you\l"
	.string "before.\p"
	.string "That means you must be the {PLAYER}{KUN}\n"
	.string "that just moved in next door, then!\p"
	.string "I'm {RIVAL}! Nice to meet you!\p"
	.string "Oh, right! I have something for you from\n"
	.string "Professor Sanzashi!\p"
	.string "I went to your house to deliver it, but\n"
	.string "your mom said you were asleep.\p"
	.string "I didn't want to wake you up, so I\n"
	.string "decided to wander around a bit.\p"
	.string "I guess I got a little carried away...\n"
	.string "Sorry about that!\p"
	.string "Uh.. where did I put it...?\p"
	.string "Don't tell me I dropped it somewhere...$"

RivalText2F::
# 111 "data/maps/Route501/scripts.pory"
	.string "Oh, there it is!\p"
	.string "I really don't know what I would've done\n"
	.string "if I lost it...\p"
	.string "The professor would've been so mad at\n"
	.string "me!\p"
	.string "$"
