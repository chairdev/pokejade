Route301_MapScripts::
# 10 "data/maps/Route301/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 21 "data/maps/Route301/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route301_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route301/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 13 "data/maps/Route301/scripts.pory"
	compare VAR_ROUTE301_STATE, 2
	goto_if_eq Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/Route301/scripts.pory"
	removeobject 1
# 16 "data/maps/Route301/scripts.pory"
	addobject 1
# 17 "data/maps/Route301/scripts.pory"
	setobjectxyperm 1, 10, 19
	return

Route301_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/Route301/scripts.pory"
	map_script_2 VAR_ROUTE301_STATE, 1, Route301_MapScript_FirstRivalBattle
	.2byte 0


Route301_MapScript_FirstRivalBattle::
# 27 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 28 "data/maps/Route301/scripts.pory"
	msgbox Route301_MapScript_FirstRivalBattle_Text_1
# 29 "data/maps/Route301/scripts.pory"
	closemessage
# 31 "data/maps/Route301/scripts.pory"
	checkplayergender
# 32 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_2
# 38 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
Route301_MapScript_FirstRivalBattle_1:
# 41 "data/maps/Route301/scripts.pory"
	opendoor 17, 21
# 42 "data/maps/Route301/scripts.pory"
	waitdooranim
# 43 "data/maps/Route301/scripts.pory"
	addobject 1
# 44 "data/maps/Route301/scripts.pory"
	setobjectxy 1, 17, 21
# 45 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_FirstRivalBattle_WalkDown
# 46 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_FirstRivalBattle_WalkDown
# 47 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route301/scripts.pory"
	closedoor 17, 21
# 49 "data/maps/Route301/scripts.pory"
	waitdooranim
# 50 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 51 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 54 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 55 "data/maps/Route301/scripts.pory"
	checkplayergender
# 56 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_6
# 91 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly1
# 92 "data/maps/Route301/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_MapScript_FirstRivalBattle_Text_2, Route301_MapScript_FirstRivalBattle_Text_3
# 95 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route301_MapScript_FirstRivalBattle_17
Route301_MapScript_FirstRivalBattle_16:
# 100 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly2
# 101 "data/maps/Route301/scripts.pory"
	closemessage
# 103 "data/maps/Route301/scripts.pory"
	switch VAR_STARTER_MON
# 104 "data/maps/Route301/scripts.pory"
	case 0, Route301_MapScript_FirstRivalBattle_26
# 107 "data/maps/Route301/scripts.pory"
	case 1, Route301_MapScript_FirstRivalBattle_27
# 110 "data/maps/Route301/scripts.pory"
	case 2, Route301_MapScript_FirstRivalBattle_28
Route301_MapScript_FirstRivalBattle_24:
# 115 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_HawthorneResearchLab_Movement_StarterHop
# 116 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 119 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly3
Route301_MapScript_FirstRivalBattle_5:
# 121 "data/maps/Route301/scripts.pory"
	closemessage
# 123 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_FirstRivalBattle_WatchRivalWalkAway
# 124 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_FirstRivalBattle_RivalWalkAway1
# 125 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 128 "data/maps/Route301/scripts.pory"
	checkplayergender
# 129 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_10
# 135 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly4
Route301_MapScript_FirstRivalBattle_9:
# 137 "data/maps/Route301/scripts.pory"
	closemessage
# 139 "data/maps/Route301/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/Route301/scripts.pory"
	removeobject 1
# 141 "data/maps/Route301/scripts.pory"
	addobject 1
# 142 "data/maps/Route301/scripts.pory"
	setobjectxy 1, 10, 19
# 143 "data/maps/Route301/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_301_RIVAL
# 144 "data/maps/Route301/scripts.pory"
	setvar VAR_ROUTE301_STATE, 2
# 145 "data/maps/Route301/scripts.pory"
	delay 60
# 146 "data/maps/Route301/scripts.pory"
	fadedefaultbgm
# 147 "data/maps/Route301/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

Route301_MapScript_FirstRivalBattle_2:
# 34 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	goto Route301_MapScript_FirstRivalBattle_1

Route301_MapScript_FirstRivalBattle_6:
# 58 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden1
# 59 "data/maps/Route301/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_MapScript_FirstRivalBattle_Text_2, Route301_MapScript_FirstRivalBattle_Text_3
# 62 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route301_MapScript_FirstRivalBattle_14
Route301_MapScript_FirstRivalBattle_13:
# 67 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden2
# 68 "data/maps/Route301/scripts.pory"
	closemessage
# 70 "data/maps/Route301/scripts.pory"
	switch VAR_STARTER_MON
# 71 "data/maps/Route301/scripts.pory"
	case 0, Route301_MapScript_FirstRivalBattle_21
# 74 "data/maps/Route301/scripts.pory"
	case 1, Route301_MapScript_FirstRivalBattle_22
# 77 "data/maps/Route301/scripts.pory"
	case 2, Route301_MapScript_FirstRivalBattle_23
Route301_MapScript_FirstRivalBattle_19:
# 82 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 83 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 86 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden3
	goto Route301_MapScript_FirstRivalBattle_5

Route301_MapScript_FirstRivalBattle_10:
# 131 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden4
	goto Route301_MapScript_FirstRivalBattle_9

Route301_MapScript_FirstRivalBattle_14:
# 64 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_CadenNo
	goto Route301_MapScript_FirstRivalBattle_13

Route301_MapScript_FirstRivalBattle_17:
# 97 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_HollyNo
	goto Route301_MapScript_FirstRivalBattle_16

Route301_MapScript_FirstRivalBattle_21:
# 72 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_CHIKORITA, Route301_Text_FirstRivalBattle_CadenDefeated
	goto Route301_MapScript_FirstRivalBattle_19

Route301_MapScript_FirstRivalBattle_22:
# 75 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_CYNDAQUIL, Route301_Text_FirstRivalBattle_CadenDefeated
	goto Route301_MapScript_FirstRivalBattle_19

Route301_MapScript_FirstRivalBattle_23:
# 78 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_TOTODILE, Route301_Text_FirstRivalBattle_CadenDefeated
	goto Route301_MapScript_FirstRivalBattle_19

Route301_MapScript_FirstRivalBattle_26:
# 105 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_CHIKORITA, Route301_Text_FirstRivalBattle_HollyDefeated
	goto Route301_MapScript_FirstRivalBattle_24

Route301_MapScript_FirstRivalBattle_27:
# 108 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_CYNDAQUIL, Route301_Text_FirstRivalBattle_HollyDefeated
	goto Route301_MapScript_FirstRivalBattle_24

Route301_MapScript_FirstRivalBattle_28:
# 111 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_TOTODILE, Route301_Text_FirstRivalBattle_HollyDefeated
	goto Route301_MapScript_FirstRivalBattle_24


# 150 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_WalkDown:
# 151 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 154 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_WatchRivalWalkAway:
# 155 "data/maps/Route301/scripts.pory"
	walk_down
# 156 "data/maps/Route301/scripts.pory"
	delay_16
# 157 "data/maps/Route301/scripts.pory"
	walk_up
# 158 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_left
	step_end

# 161 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_RivalWalkAway1:
# 162 "data/maps/Route301/scripts.pory"
	walk_down
# 163 "data/maps/Route301/scripts.pory"
	walk_left
# 163 "data/maps/Route301/scripts.pory"
	walk_left
# 163 "data/maps/Route301/scripts.pory"
	walk_left
# 164 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_right
	step_end

Route301_Trigger_MeetRival1::
# 224 "data/maps/Route301/scripts.pory"
	lockall
# 225 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 227 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival1
# 228 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_MeetRival2::
# 232 "data/maps/Route301/scripts.pory"
	lockall
# 233 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 235 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival2
# 236 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_CalledByRival::
# 240 "data/maps/Route301/scripts.pory"
	special SpawnCameraObject
# 241 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan1
# 242 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 244 "data/maps/Route301/scripts.pory"
	playse SE_PIN
# 245 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 246 "data/maps/Route301/scripts.pory"
	waitse
# 247 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route301/scripts.pory"
	delay 40
# 249 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 250 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 253 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Rival1
# 254 "data/maps/Route301/scripts.pory"
	closemessage
# 256 "data/maps/Route301/scripts.pory"
	checkplayergender
# 257 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_CalledByRival_1
# 263 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

Route301_Trigger_CalledByRival_1:
# 259 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return


Route301_Trigger_GoToLabWithRival::
# 269 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 270 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan2
# 271 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 272 "data/maps/Route301/scripts.pory"
	special RemoveCameraObject
# 274 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 275 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_2
# 286 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly1
# 287 "data/maps/Route301/scripts.pory"
	closemessage
# 289 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 290 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 291 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly2
Route301_Trigger_GoToLabWithRival_1:
# 293 "data/maps/Route301/scripts.pory"
	closemessage
# 295 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_GoToLabWithRival_RivalPath
# 296 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_GoToLabWithRival_PlayerPath
# 297 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 299 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 300 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_6
# 306 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly3
Route301_Trigger_GoToLabWithRival_5:
# 308 "data/maps/Route301/scripts.pory"
	closemessage
# 310 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 311 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route301/scripts.pory"
	opendoor 17, 21
# 313 "data/maps/Route301/scripts.pory"
	waitdooranim
# 314 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 315 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route301/scripts.pory"
	removeobject 1
# 317 "data/maps/Route301/scripts.pory"
	waitse
# 319 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 320 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route301/scripts.pory"
	warp MAP_ROUTE301_HAWTHORNE_RESEARCH_LAB, 6, 12
	return

Route301_Trigger_GoToLabWithRival_2:
# 277 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden1
# 278 "data/maps/Route301/scripts.pory"
	closemessage
# 280 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 281 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 282 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden2
	goto Route301_Trigger_GoToLabWithRival_1

Route301_Trigger_GoToLabWithRival_6:
# 302 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden3
	goto Route301_Trigger_GoToLabWithRival_5


# 324 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan1:
# 325 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 325 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 325 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 325 "data/maps/Route301/scripts.pory"
	walk_fast_down
	step_end

# 328 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan2:
# 329 "data/maps/Route301/scripts.pory"
	walk_up
	step_end

# 332 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival1:
# 333 "data/maps/Route301/scripts.pory"
	walk_right
# 334 "data/maps/Route301/scripts.pory"
	walk_down
# 334 "data/maps/Route301/scripts.pory"
	walk_down
# 334 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 337 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival2:
# 338 "data/maps/Route301/scripts.pory"
	walk_down
# 338 "data/maps/Route301/scripts.pory"
	walk_down
# 338 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 341 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_RivalPath:
# 342 "data/maps/Route301/scripts.pory"
	walk_down
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 343 "data/maps/Route301/scripts.pory"
	walk_right
# 344 "data/maps/Route301/scripts.pory"
	walk_up
# 345 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_down
	step_end

# 348 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_PlayerPath:
# 349 "data/maps/Route301/scripts.pory"
	walk_down
# 349 "data/maps/Route301/scripts.pory"
	walk_down
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 350 "data/maps/Route301/scripts.pory"
	walk_right
# 351 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_up
	step_end

Route301_MapScript_FirstRivalBattle_Text_0:
# 27 "data/maps/Route301/scripts.pory"
	.string "{RIVAL}$"

Route301_MapScript_FirstRivalBattle_Text_1:
# 28 "data/maps/Route301/scripts.pory"
	.string "{PLAYER}!\nHey, wait up!$"

Route301_MapScript_FirstRivalBattle_Text_2:
# 60 "data/maps/Route301/scripts.pory"
	.string "Sure!$"

Route301_MapScript_FirstRivalBattle_Text_3:
# 60 "data/maps/Route301/scripts.pory"
	.string "No way!$"

Route301_Text_FirstRivalBattle_Caden1::
# 167 "data/maps/Route301/scripts.pory"
	.string "Hey, before you go running off to\n"
	.string "Dolomite, let's see what you've got.\p"
	.string "We can't call ourselves rivals until\n"
	.string "we've battled, right?$"

Route301_Text_FirstRivalBattle_Holly1::
# 172 "data/maps/Route301/scripts.pory"
	.string "Wait! Before you leave, let's have a\n"
	.string "quick battle.\p"
	.string "It's the best way to get to know each\n"
	.string "other--and our new Pokémon--right?$"

Route301_Text_FirstRivalBattle_CadenNo::
# 177 "data/maps/Route301/scripts.pory"
	.string "Oh, come on! Don't be like that!\p"
	.string "We're both new trainers, so we should\n"
	.string "battle to see who's better!$"

Route301_Text_FirstRivalBattle_HollyNo::
# 182 "data/maps/Route301/scripts.pory"
	.string "But... why not?\p"
	.string "It's just a friendly battle, right?$"

Route301_Text_FirstRivalBattle_Caden2::
# 187 "data/maps/Route301/scripts.pory"
	.string "Ready or not, here I come!$"

Route301_Text_FirstRivalBattle_Holly2::
# 191 "data/maps/Route301/scripts.pory"
	.string "Besides, I've made up my mind!\n"
	.string "I'm going to win this battle!$"

Route301_Text_FirstRivalBattle_Caden3::
# 195 "data/maps/Route301/scripts.pory"
	.string "Looks like I need to train harder if I\n"
	.string "want to keep up.\p"
	.string "Guess this whole 'fieldwork' thing might\n"
	.string "be good for me after all.$"

Route301_Text_FirstRivalBattle_Holly3::
# 200 "data/maps/Route301/scripts.pory"
	.string "I can already tell we're going to have\n"
	.string "so much fun battling together.\p"
	.string "But next time, I'm totally winning!$"

Route301_Text_FirstRivalBattle_Caden4::
# 205 "data/maps/Route301/scripts.pory"
	.string "I'll be hanging around Route 301 for\n"
	.string "now--Oh, right!\p"
	.string "You should stop by home before heading\n"
	.string "out. Your mom might have something for\l"
	.string "you.$"

Route301_Text_FirstRivalBattle_Holly4::
# 210 "data/maps/Route301/scripts.pory"
	.string "I'll be on Route 301 for a while--Oh!\p"
	.string "Before you leave, you should stop by\n"
	.string "home. Your mom might have something for\l"
	.string "you!$"

Route301_Text_FirstRivalBattle_CadenDefeated::
# 215 "data/maps/Route301/scripts.pory"
	.string "Hah, not bad. But don't think I'm gonna\n"
	.string "let you win next time!$"

Route301_Text_FirstRivalBattle_HollyDefeated::
# 219 "data/maps/Route301/scripts.pory"
	.string "Wow, you're really good, {PLAYER}!\n"
	.string "That was amazing!$"

Route301_Text_GoToLabWithRival_Rival1::
# 355 "data/maps/Route301/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Over here!$"

Route301_Text_GoToLabWithRival_Caden1::
# 359 "data/maps/Route301/scripts.pory"
	.string "Man, this route is kinda small, huh?\n"
	.string "Guess I should've expected that from a\l"
	.string "place so close to Argil Town...$"

Route301_Text_GoToLabWithRival_Caden2::
# 363 "data/maps/Route301/scripts.pory"
	.string "Anyway, we should hurry.\n"
	.string "The professor said he needed something\l"
	.string "delivered, right?\p"
	.string "Hope it's not just some boring\n"
	.string "package...$"

Route301_Text_GoToLabWithRival_Caden3::
# 368 "data/maps/Route301/scripts.pory"
	.string "Guess we'll find out soon enough.\n"
	.string "Let's go$"

Route301_Text_GoToLabWithRival_Holly1::
# 372 "data/maps/Route301/scripts.pory"
	.string "It's so quiet out here!\n"
	.string "Not exactly the thrilling adventure I\l"
	.string "was hoping for, but hey, it's a start!$"

Route301_Text_GoToLabWithRival_Holly2::
# 376 "data/maps/Route301/scripts.pory"
	.string "I wonder what the professor needs help\n"
	.string "with...\n"
	.string "I hope it's something exciting!$"

Route301_Text_GoToLabWithRival_Holly3::
# 380 "data/maps/Route301/scripts.pory"
	.string "Come on, {PLAYER}!\n"
	.string "The professor's waiting, and I wanna\l"
	.string "get moving!$"
