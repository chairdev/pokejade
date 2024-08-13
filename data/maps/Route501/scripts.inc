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
# 76 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 77 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceUp
# 79 "data/maps/Route501/scripts.pory"
	msgbox RivalText3F
# 81 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 82 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceDown
# 84 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 85 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 86 "data/maps/Route501/scripts.pory"
	removeobject 3
# 87 "data/maps/Route501/scripts.pory"
	removeobject 4
# 88 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 89 "data/maps/Route501/scripts.pory"
	waitstate
# 91 "data/maps/Route501/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 92 "data/maps/Route501/scripts.pory"
	msgbox RivalText4F
# 94 "data/maps/Route501/scripts.pory"
	special HealPlayerParty
# 95 "data/maps/Route501/scripts.pory"
	setflag FLAG_ROUTE_501_SAVED_RIVAL
# 96 "data/maps/Route501/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 97 "data/maps/Route501/scripts.pory"
	setvar VAR_ROUTE501_STATE, 1
# 98 "data/maps/Route501/scripts.pory"
	setvar VAR_SANZASHI_LAB_STATE, 2
# 100 "data/maps/Route501/scripts.pory"
	warp MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB, 6, 5
	return


# 103 "data/maps/Route501/scripts.pory"
RivalNoticePlayer:
# 104 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
# 105 "data/maps/Route501/scripts.pory"
	face_left
	step_end

# 108 "data/maps/Route501/scripts.pory"
RivalLookAround:
# 109 "data/maps/Route501/scripts.pory"
	walk_in_place_up
# 110 "data/maps/Route501/scripts.pory"
	walk_in_place_down
# 111 "data/maps/Route501/scripts.pory"
	walk_in_place_right
# 112 "data/maps/Route501/scripts.pory"
	face_right
# 113 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 116 "data/maps/Route501/scripts.pory"
RivalApproachBag:
# 117 "data/maps/Route501/scripts.pory"
	walk_up
# 118 "data/maps/Route501/scripts.pory"
	walk_right
# 118 "data/maps/Route501/scripts.pory"
	walk_right
# 118 "data/maps/Route501/scripts.pory"
	walk_right
# 118 "data/maps/Route501/scripts.pory"
	walk_right
# 119 "data/maps/Route501/scripts.pory"
	face_up
	step_end

# 122 "data/maps/Route501/scripts.pory"
PlayerApproachBag:
# 123 "data/maps/Route501/scripts.pory"
	walk_right
# 123 "data/maps/Route501/scripts.pory"
	walk_right
# 123 "data/maps/Route501/scripts.pory"
	walk_right
# 123 "data/maps/Route501/scripts.pory"
	walk_right
# 124 "data/maps/Route501/scripts.pory"
	face_right
	step_end

# 127 "data/maps/Route501/scripts.pory"
PidoveApproachPlayer:
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 128 "data/maps/Route501/scripts.pory"
	walk_faster_right
	step_end

# 131 "data/maps/Route501/scripts.pory"
PidoveApprachRival:
# 132 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 132 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 132 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 132 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 132 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 132 "data/maps/Route501/scripts.pory"
	walk_faster_down
	step_end

# 135 "data/maps/Route501/scripts.pory"
ExclemationMark:
# 136 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 139 "data/maps/Route501/scripts.pory"
FaceUp:
# 140 "data/maps/Route501/scripts.pory"
	face_up
	step_end

# 143 "data/maps/Route501/scripts.pory"
FaceDown:
# 144 "data/maps/Route501/scripts.pory"
	face_down
	step_end

# 147 "data/maps/Route501/scripts.pory"
FaceLeft:
# 148 "data/maps/Route501/scripts.pory"
	face_left
	step_end

# 151 "data/maps/Route501/scripts.pory"
FaceRight:
# 152 "data/maps/Route501/scripts.pory"
	face_right
	step_end

Route501_RivalMaya_Text_0:
# 55 "data/maps/Route501/scripts.pory"
	.string "Oh, there it is!$"

RivalText1F::
# 155 "data/maps/Route501/scripts.pory"
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
# 168 "data/maps/Route501/scripts.pory"
	.string "I really don't know what I would've done\n"
	.string "if I lost it...\p"
	.string "The professor would've been so mad at\n"
	.string "me!\p"
	.string "$"

RivalText3F::
# 175 "data/maps/Route501/scripts.pory"
	.string "Uwaaah! Wha... What's going on?!\p"
	.string "A wild Pokémon?! This is bad! This is\n"
	.string "really bad!\p"
	.string "{PLAYER}{KUN}, we have to use the Poké\n"
	.string "Balls in that bag to protect ourselves!\p"
	.string "Grab one and let's battle them!$"

RivalText4F::
# 183 "data/maps/Route501/scripts.pory"
	.string "Whew... That was a close one!\p"
	.string "I can't believe we were attacked by wild\n"
	.string "Pokémon!\p"
	.string "Good thing you had {STR_VAR_1} to\n"
	.string "protect you!\p"
	.string "You see, I don't really like Pokémon...\p"
	.string "I just wanted a reason to go out and\n"
	.string "explore the reason.\p"
	.string "But I guess I'll have to get used to\n"
	.string "them if I want to be a Trainer.\p"
	.string "...We should probably head back to\n"
	.string "Professor Sanzashi's lab now.\p"
	.string "I'm sure he must be worried about us.$"
