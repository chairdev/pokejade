ArgilTown_RivalsHouse_1F_MapScripts::
# 5 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ArgilTown_RivalsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArgilTown_RivalsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ArgilTown_RivalsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

ArgilTown_RivalsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	map_script_2 VAR_ARGIL_TOWN_STATE, 1, ArgilTown_RivalsHouse_1F_MapScript_MeetRival
	.2byte 0


ArgilTown_RivalsHouse_1F_MapScript_MeetRival::
# 15 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	playse SE_PIN
# 16 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 17 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	waitse
# 18 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	applymovement 1, ArgilTown_RivalsHouse_1F_Movement_RivalMom_ApproachPlayer
# 20 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_Text_MeetRival_Mom1
# 23 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	applymovement 1, ArgilTown_RivalsHouse_1F_Movement_RivalMom_TurnUp
# 24 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_MapScript_MeetRival_Text_0
# 25 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	closemessage
# 27 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	speakername ArgilTown_RivalsHouse_1F_MapScript_MeetRival_Text_1
# 29 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_MapScript_MeetRival_Text_2
# 30 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	closemessage
# 31 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	playse SE_EXIT
# 32 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	delay 10
# 34 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	addobject 2
# 35 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	setobjectxy 1, 7, 6
# 36 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 37 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	turnobject 1, DIR_EAST
# 38 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	speakername ArgilTown_RivalsHouse_1F_MapScript_MeetRival_Text_3
# 43 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	checkplayergender
# 44 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ArgilTown_RivalsHouse_1F_MapScript_MeetRival_2
# 51 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 52 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_Text_MeetRival_Holly1
ArgilTown_RivalsHouse_1F_MapScript_MeetRival_1:
# 54 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	closemessage
# 56 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	playse SE_PIN
# 57 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 58 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	waitse
# 59 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_Text_MeetRival_Mom2
# 63 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	speakername ArgilTown_RivalsHouse_1F_MapScript_MeetRival_Text_3
# 64 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ArgilTown_RivalsHouse_1F_MapScript_MeetRival_6
# 70 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_Text_MeetRival_Holly2
ArgilTown_RivalsHouse_1F_MapScript_MeetRival_5:
# 72 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	closemessage
# 74 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 75 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 77 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	applymovement 2, ArgilTown_RivalsHouse_1F_Movement_RivalLeave
# 78 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 80 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	fadedefaultbgm
# 81 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	playse SE_EXIT
# 82 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	removeobject 2
# 83 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	waitse
# 85 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 87 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_Text_RivalMom
# 88 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	closemessage
# 90 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	applymovement 1, ArgilTown_RivalsHouse_1F_Movement_RivalMomMoveBack
# 91 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	setvar VAR_ARGIL_TOWN_STATE, 2
# 94 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	releaseall
	return

ArgilTown_RivalsHouse_1F_MapScript_MeetRival_2:
# 46 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 47 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_Text_MeetRival_Caden1
	goto ArgilTown_RivalsHouse_1F_MapScript_MeetRival_1

ArgilTown_RivalsHouse_1F_MapScript_MeetRival_6:
# 66 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_Text_MeetRival_Caden2
	goto ArgilTown_RivalsHouse_1F_MapScript_MeetRival_5


# 132 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
ArgilTown_RivalsHouse_1F_Movement_RivalMom_ApproachPlayer:
# 133 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	delay_16
# 134 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_right
# 134 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_right
# 134 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_right
# 135 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_down
	step_end

# 138 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
ArgilTown_RivalsHouse_1F_Movement_RivalMom_TurnUp:
# 139 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 142 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
ArgilTown_RivalsHouse_1F_Movement_RivalMomMoveBack:
# 143 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_left
# 143 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_left
	step_end

# 146 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
ArgilTown_RivalsHouse_1F_Movement_RivalLeave:
# 147 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_fast_right
# 148 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_fast_down
# 148 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_fast_down
# 148 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	walk_fast_down
	step_end

ArgilTown_RivalsHouse_1F_EventScript_RivalMom::
# 153 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	msgbox ArgilTown_RivalsHouse_1F_Text_RivalMom
# 154 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	closemessage
	return


ArgilTown_RivalsHouse_1F_MapScript_MeetRival_Text_0:
# 24 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "{RIVAL}!\n"
	.string "Come downstairs, we've got a visitor!$"

ArgilTown_RivalsHouse_1F_MapScript_MeetRival_Text_1:
# 28 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "???$"

ArgilTown_RivalsHouse_1F_MapScript_MeetRival_Text_2:
# 29 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "Coming, Mom!$"

ArgilTown_RivalsHouse_1F_MapScript_MeetRival_Text_3:
# 42 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "{RIVAL}$"

ArgilTown_RivalsHouse_1F_Text_MeetRival_Mom1::
# 97 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "Oh, hello! You must be the new neighbor,\n"
	.string "{PLAYER}!\p"
	.string "We've been meaning to say\n"
	.string "hello--welcome to Argil Town.$"

ArgilTown_RivalsHouse_1F_Text_MeetRival_Caden1::
# 102 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "So you're the one who just moved here?\n"
	.string "Not bad.\p"
	.string "I'm Caden, by the way.\n"
	.string "What's your name?\p"
	.string "Oh, {PLAYER}?\n"
	.string "Nice to meet you.\p"
	.string "Argil Town's kind of boring, but maybe\n"
	.string "it'll be less dull now that you're here.$"

ArgilTown_RivalsHouse_1F_Text_MeetRival_Holly1::
# 109 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "Hi! You're the new kid, right?\n"
	.string "I'm Holly, what's your name?\p"
	.string "{PLAYER}?\n"
	.string "That's so cool--welcome to Argil Town!\p"
	.string "It's not the most exciting place, but\n"
	.string "it's got its charm.$"

ArgilTown_RivalsHouse_1F_Text_MeetRival_Mom2::
# 115 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "Oh! Before I forget, Professor\n"
	.string "Hawthorn called earlier.\p"
	.string "He said something about needing help\n"
	.string "with a delivery.\p"
	.string "{RIVAL}, could you go help him out?$"

ArgilTown_RivalsHouse_1F_Text_MeetRival_Caden2::
# 121 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "The professor? Sweet!\n"
	.string "He's always got something cool going on.\p"
	.string "Let's head over--I'll even let you tag\n"
	.string "along, {PLAYER}.$"

ArgilTown_RivalsHouse_1F_Text_MeetRival_Holly2::
# 126 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "Oh, the professor?\n"
	.string "{PLAYER}, he's really nice--you'll like\l"
	.string "him!\p"
	.string "Come on, I'll show you the way.$"

ArgilTown_RivalsHouse_1F_Text_RivalMom::
# 157 "data/maps/ArgilTown_RivalsHouse_1F/scripts.pory"
	.string "Oh that {RIVAL}--always eager to\n"
	.string "run off.\p"
	.string "I hope you two have fun!$"
