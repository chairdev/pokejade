Route501_MapScripts::
# 6 "data/maps/Route501/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route501_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route501_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Route501/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route501_Trigger_WalkToRivalLeft::
# 13 "data/maps/Route501/scripts.pory"
	lockall
# 15 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveToRivalLeft
# 16 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route501/scripts.pory"
	checkplayergender
# 19 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route501_RivalMaya
	return


Route501_Trigger_WalkToRivalRight::
# 24 "data/maps/Route501/scripts.pory"
	lockall
# 26 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveToRivalRight
# 27 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route501/scripts.pory"
	checkplayergender
# 30 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route501_RivalMaya
	return


# 33 "data/maps/Route501/scripts.pory"
PlayerMoveToRivalLeft:
# 34 "data/maps/Route501/scripts.pory"
	walk_right
# 35 "data/maps/Route501/scripts.pory"
	walk_up
# 35 "data/maps/Route501/scripts.pory"
	walk_up
# 36 "data/maps/Route501/scripts.pory"
	face_right
	step_end

# 39 "data/maps/Route501/scripts.pory"
PlayerMoveToRivalRight:
# 40 "data/maps/Route501/scripts.pory"
	walk_up
# 40 "data/maps/Route501/scripts.pory"
	walk_up
# 41 "data/maps/Route501/scripts.pory"
	face_right
	step_end

Route501_RivalMaya::
# 45 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 46 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route501/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 50 "data/maps/Route501/scripts.pory"
	msgbox RivalText1F
# 52 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 53 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalMaya_Text_0
# 57 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 58 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 59 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 61 "data/maps/Route501/scripts.pory"
	msgbox RivalText2F
# 63 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 65 "data/maps/Route501/scripts.pory"
	setobjectxy 3, 1, 17
# 66 "data/maps/Route501/scripts.pory"
	setobjectxy 4, 1, 17
# 67 "data/maps/Route501/scripts.pory"
	applymovement 3, PidoveApproachPlayer
# 68 "data/maps/Route501/scripts.pory"
	applymovement 4, PidoveApprachRival
# 69 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 71 "data/maps/Route501/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
# 73 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ExclemationMark
# 74 "data/maps/Route501/scripts.pory"
	applymovement 1, ExclemationMark
# 75 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 77 "data/maps/Route501/scripts.pory"
	msgbox RivalText3F
# 79 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 80 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/Route501/scripts.pory"
	removeobject 3
# 82 "data/maps/Route501/scripts.pory"
	removeobject 4
# 83 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 84 "data/maps/Route501/scripts.pory"
	waitstate
# 86 "data/maps/Route501/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 2
# 88 "data/maps/Route501/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/Route501/scripts.pory"
	releaseall
	return


# 95 "data/maps/Route501/scripts.pory"
RivalNoticePlayer:
# 96 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
# 97 "data/maps/Route501/scripts.pory"
	face_left
	step_end

# 100 "data/maps/Route501/scripts.pory"
RivalLookAround:
# 101 "data/maps/Route501/scripts.pory"
	walk_in_place_up
# 102 "data/maps/Route501/scripts.pory"
	walk_in_place_down
# 103 "data/maps/Route501/scripts.pory"
	walk_in_place_right
# 104 "data/maps/Route501/scripts.pory"
	face_right
# 105 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 108 "data/maps/Route501/scripts.pory"
RivalApproachBag:
# 109 "data/maps/Route501/scripts.pory"
	walk_up
# 110 "data/maps/Route501/scripts.pory"
	walk_right
# 110 "data/maps/Route501/scripts.pory"
	walk_right
# 110 "data/maps/Route501/scripts.pory"
	walk_right
# 110 "data/maps/Route501/scripts.pory"
	walk_right
# 111 "data/maps/Route501/scripts.pory"
	face_up
	step_end

# 114 "data/maps/Route501/scripts.pory"
PlayerApproachBag:
# 115 "data/maps/Route501/scripts.pory"
	walk_right
# 115 "data/maps/Route501/scripts.pory"
	walk_right
# 115 "data/maps/Route501/scripts.pory"
	walk_right
# 115 "data/maps/Route501/scripts.pory"
	walk_right
# 116 "data/maps/Route501/scripts.pory"
	face_right
	step_end

# 119 "data/maps/Route501/scripts.pory"
PidoveApproachPlayer:
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 120 "data/maps/Route501/scripts.pory"
	walk_faster_right
	step_end

# 123 "data/maps/Route501/scripts.pory"
PidoveApprachRival:
# 124 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 124 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 124 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 124 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 124 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 124 "data/maps/Route501/scripts.pory"
	walk_faster_down
	step_end

# 127 "data/maps/Route501/scripts.pory"
ExclemationMark:
# 128 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

Route501_RivalMaya_Text_0:
# 55 "data/maps/Route501/scripts.pory"
	.string "Oh, there it is!$"

RivalText1F::
# 131 "data/maps/Route501/scripts.pory"
	.string "Huh? What the...?\p"
	.string "Oh! Are you the {PLAYER}{KUN} that just\n"
	.string "moved in next door?\p"
	.string "I'm your neighbor, {RIVAL}! Nice to\n"
	.string "meet you!\p"
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
# 144 "data/maps/Route501/scripts.pory"
	.string "I really don't know what I would've done\n"
	.string "if I lost it...\p"
	.string "The professor would've been so mad at\n"
	.string "me!\p"
	.string "$"

RivalText3F::
# 151 "data/maps/Route501/scripts.pory"
	.string "Uwaaah! Wha... What's going on?!\p"
	.string "A wild Pokémon?! This is bad! This is\n"
	.string "really bad!\p"
	.string "{PLAYER}{KUN}, we have to use the Poké\n"
	.string "Balls in that bag to protect ourselves!\p"
	.string "Grab one and let's battle them!$"
