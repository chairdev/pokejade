Route301_MapScripts::
# 13 "data/maps/Route301/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/Route301/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route301_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/Route301/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/Route301/scripts.pory"
	compare VAR_ROUTE301_STATE, 2
	goto_if_eq Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/Route301/scripts.pory"
	removeobject 1
# 19 "data/maps/Route301/scripts.pory"
	addobject 1
# 20 "data/maps/Route301/scripts.pory"
	setobjectxyperm 1, 10, 19
	return

Route301_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 25 "data/maps/Route301/scripts.pory"
	map_script_2 VAR_ROUTE301_STATE, 1, Route301_MapScript_FirstRivalBattle
# 26 "data/maps/Route301/scripts.pory"
	map_script_2 VAR_ROUTE301_STATE, 4, Route301_MapScript_MomGoodbye
	.2byte 0


Route301_MapScript_MomGoodbye::
# 31 "data/maps/Route301/scripts.pory"
	lockall
# 33 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 35 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_MomGoodbye_Text_0
# 36 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_MomGoodbye1
# 37 "data/maps/Route301/scripts.pory"
	closemessage
# 39 "data/maps/Route301/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 41 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_MomGoodbye_ApproachMom
# 42 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_MomGoodbye_Text_0
# 45 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_MomGoodbye2
# 46 "data/maps/Route301/scripts.pory"
	closemessage
# 48 "data/maps/Route301/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/Route301/scripts.pory"
	msgbox Route301_MapScript_MomGoodbye_Text_1
# 50 "data/maps/Route301/scripts.pory"
	waitfanfare
# 51 "data/maps/Route301/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 52 "data/maps/Route301/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 53 "data/maps/Route301/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 55 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_MomGoodbye_Text_0
# 56 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_MomGoodbye3
# 57 "data/maps/Route301/scripts.pory"
	closemessage
# 59 "data/maps/Route301/scripts.pory"
	playse SE_RG_SHOP
# 60 "data/maps/Route301/scripts.pory"
	msgbox Route301_MapScript_MomGoodbye_Text_2
# 61 "data/maps/Route301/scripts.pory"
	addmoney 10000
# 63 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_MomGoodbye_Text_0
# 64 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_MomGoodbye4
# 65 "data/maps/Route301/scripts.pory"
	closemessage
# 67 "data/maps/Route301/scripts.pory"
	applymovement 3, Route301_Movement_MomGoodbye_MomStartToLeave
# 68 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route301/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 71 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_MomGoodbye_Text_0
# 72 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_MomGoodbye5
# 73 "data/maps/Route301/scripts.pory"
	closemessage
# 75 "data/maps/Route301/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/Route301/scripts.pory"
	delay 16
# 77 "data/maps/Route301/scripts.pory"
	setflag FLAG_HIDE_ROUTE_301_MOM_OUTSIDE
# 78 "data/maps/Route301/scripts.pory"
	removeobject 3
# 79 "data/maps/Route301/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/Route301/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 82 "data/maps/Route301/scripts.pory"
	setvar VAR_ROUTE301_STATE, 5
# 84 "data/maps/Route301/scripts.pory"
	releaseall
	return


# 87 "data/maps/Route301/scripts.pory"
Route301_Movement_MomGoodbye_ApproachMom:
# 88 "data/maps/Route301/scripts.pory"
	walk_down
# 89 "data/maps/Route301/scripts.pory"
	walk_left
# 89 "data/maps/Route301/scripts.pory"
	walk_left
# 89 "data/maps/Route301/scripts.pory"
	walk_left
# 89 "data/maps/Route301/scripts.pory"
	walk_left
# 89 "data/maps/Route301/scripts.pory"
	walk_left
# 89 "data/maps/Route301/scripts.pory"
	walk_left
	step_end

# 92 "data/maps/Route301/scripts.pory"
Route301_Movement_MomGoodbye_MomStartToLeave:
# 93 "data/maps/Route301/scripts.pory"
	walk_left
# 93 "data/maps/Route301/scripts.pory"
	walk_left
# 94 "data/maps/Route301/scripts.pory"
	walk_in_place_right
	step_end

Route301_MapScript_FirstRivalBattle::
# 127 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 128 "data/maps/Route301/scripts.pory"
	msgbox Route301_MapScript_FirstRivalBattle_Text_1
# 129 "data/maps/Route301/scripts.pory"
	closemessage
# 131 "data/maps/Route301/scripts.pory"
	checkplayergender
# 132 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_2
# 138 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
Route301_MapScript_FirstRivalBattle_1:
# 141 "data/maps/Route301/scripts.pory"
	opendoor 17, 21
# 142 "data/maps/Route301/scripts.pory"
	waitdooranim
# 143 "data/maps/Route301/scripts.pory"
	addobject 1
# 144 "data/maps/Route301/scripts.pory"
	setobjectxy 1, 17, 21
# 145 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_FirstRivalBattle_WalkDown
# 146 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_FirstRivalBattle_WalkDown
# 147 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route301/scripts.pory"
	closedoor 17, 21
# 149 "data/maps/Route301/scripts.pory"
	waitdooranim
# 150 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 151 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 154 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 155 "data/maps/Route301/scripts.pory"
	checkplayergender
# 156 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_6
# 191 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly1
# 192 "data/maps/Route301/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_MapScript_FirstRivalBattle_Text_2, Route301_MapScript_FirstRivalBattle_Text_3
# 195 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route301_MapScript_FirstRivalBattle_17
Route301_MapScript_FirstRivalBattle_16:
# 200 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly2
# 201 "data/maps/Route301/scripts.pory"
	closemessage
# 203 "data/maps/Route301/scripts.pory"
	switch VAR_STARTER_MON
# 204 "data/maps/Route301/scripts.pory"
	case 0, Route301_MapScript_FirstRivalBattle_26
# 207 "data/maps/Route301/scripts.pory"
	case 1, Route301_MapScript_FirstRivalBattle_27
# 210 "data/maps/Route301/scripts.pory"
	case 2, Route301_MapScript_FirstRivalBattle_28
Route301_MapScript_FirstRivalBattle_24:
# 215 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_HawthorneResearchLab_Movement_StarterHop
# 216 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 219 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly3
Route301_MapScript_FirstRivalBattle_5:
# 221 "data/maps/Route301/scripts.pory"
	closemessage
# 223 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_FirstRivalBattle_WatchRivalWalkAway
# 224 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_FirstRivalBattle_RivalWalkAway1
# 225 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 228 "data/maps/Route301/scripts.pory"
	checkplayergender
# 229 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_10
# 235 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly4
Route301_MapScript_FirstRivalBattle_9:
# 237 "data/maps/Route301/scripts.pory"
	closemessage
# 239 "data/maps/Route301/scripts.pory"
	fadescreen FADE_TO_BLACK
# 240 "data/maps/Route301/scripts.pory"
	removeobject 1
# 241 "data/maps/Route301/scripts.pory"
	addobject 1
# 242 "data/maps/Route301/scripts.pory"
	setobjectxy 1, 10, 19
# 243 "data/maps/Route301/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_301_RIVAL
# 244 "data/maps/Route301/scripts.pory"
	setvar VAR_ROUTE301_STATE, 2
# 245 "data/maps/Route301/scripts.pory"
	delay 60
# 246 "data/maps/Route301/scripts.pory"
	fadedefaultbgm
# 247 "data/maps/Route301/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

Route301_MapScript_FirstRivalBattle_2:
# 134 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	goto Route301_MapScript_FirstRivalBattle_1

Route301_MapScript_FirstRivalBattle_6:
# 158 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden1
# 159 "data/maps/Route301/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_MapScript_FirstRivalBattle_Text_2, Route301_MapScript_FirstRivalBattle_Text_3
# 162 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route301_MapScript_FirstRivalBattle_14
Route301_MapScript_FirstRivalBattle_13:
# 167 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden2
# 168 "data/maps/Route301/scripts.pory"
	closemessage
# 170 "data/maps/Route301/scripts.pory"
	switch VAR_STARTER_MON
# 171 "data/maps/Route301/scripts.pory"
	case 0, Route301_MapScript_FirstRivalBattle_21
# 174 "data/maps/Route301/scripts.pory"
	case 1, Route301_MapScript_FirstRivalBattle_22
# 177 "data/maps/Route301/scripts.pory"
	case 2, Route301_MapScript_FirstRivalBattle_23
Route301_MapScript_FirstRivalBattle_19:
# 182 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 183 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 186 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden3
	goto Route301_MapScript_FirstRivalBattle_5

Route301_MapScript_FirstRivalBattle_10:
# 231 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden4
	goto Route301_MapScript_FirstRivalBattle_9

Route301_MapScript_FirstRivalBattle_14:
# 164 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_CadenNo
	goto Route301_MapScript_FirstRivalBattle_13

Route301_MapScript_FirstRivalBattle_17:
# 197 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_HollyNo
	goto Route301_MapScript_FirstRivalBattle_16

Route301_MapScript_FirstRivalBattle_21:
# 172 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_CHIKORITA, Route301_Text_FirstRivalBattle_CadenDefeated
	goto Route301_MapScript_FirstRivalBattle_19

Route301_MapScript_FirstRivalBattle_22:
# 175 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_CYNDAQUIL, Route301_Text_FirstRivalBattle_CadenDefeated
	goto Route301_MapScript_FirstRivalBattle_19

Route301_MapScript_FirstRivalBattle_23:
# 178 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_TOTODILE, Route301_Text_FirstRivalBattle_CadenDefeated
	goto Route301_MapScript_FirstRivalBattle_19

Route301_MapScript_FirstRivalBattle_26:
# 205 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_CHIKORITA, Route301_Text_FirstRivalBattle_HollyDefeated
	goto Route301_MapScript_FirstRivalBattle_24

Route301_MapScript_FirstRivalBattle_27:
# 208 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_CYNDAQUIL, Route301_Text_FirstRivalBattle_HollyDefeated
	goto Route301_MapScript_FirstRivalBattle_24

Route301_MapScript_FirstRivalBattle_28:
# 211 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_TOTODILE, Route301_Text_FirstRivalBattle_HollyDefeated
	goto Route301_MapScript_FirstRivalBattle_24


# 250 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_WalkDown:
# 251 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 254 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_WatchRivalWalkAway:
# 255 "data/maps/Route301/scripts.pory"
	walk_down
# 256 "data/maps/Route301/scripts.pory"
	delay_16
# 257 "data/maps/Route301/scripts.pory"
	walk_up
# 258 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_left
	step_end

# 261 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_RivalWalkAway1:
# 262 "data/maps/Route301/scripts.pory"
	walk_down
# 263 "data/maps/Route301/scripts.pory"
	walk_left
# 263 "data/maps/Route301/scripts.pory"
	walk_left
# 263 "data/maps/Route301/scripts.pory"
	walk_left
# 264 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_right
	step_end

Route301_Trigger_MeetRival1::
# 324 "data/maps/Route301/scripts.pory"
	lockall
# 325 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 327 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival1
# 328 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_MeetRival2::
# 332 "data/maps/Route301/scripts.pory"
	lockall
# 333 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 335 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival2
# 336 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_CalledByRival::
# 340 "data/maps/Route301/scripts.pory"
	special SpawnCameraObject
# 341 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan1
# 342 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 344 "data/maps/Route301/scripts.pory"
	playse SE_PIN
# 345 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 346 "data/maps/Route301/scripts.pory"
	waitse
# 347 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route301/scripts.pory"
	delay 40
# 349 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 350 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 353 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Rival1
# 354 "data/maps/Route301/scripts.pory"
	closemessage
# 356 "data/maps/Route301/scripts.pory"
	checkplayergender
# 357 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_CalledByRival_1
# 363 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

Route301_Trigger_CalledByRival_1:
# 359 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return


Route301_Trigger_GoToLabWithRival::
# 369 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 370 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan2
# 371 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 372 "data/maps/Route301/scripts.pory"
	special RemoveCameraObject
# 374 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 375 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_2
# 386 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly1
# 387 "data/maps/Route301/scripts.pory"
	closemessage
# 389 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 390 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 391 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly2
Route301_Trigger_GoToLabWithRival_1:
# 393 "data/maps/Route301/scripts.pory"
	closemessage
# 395 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_GoToLabWithRival_RivalPath
# 396 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_GoToLabWithRival_PlayerPath
# 397 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 399 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 400 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_6
# 406 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly3
Route301_Trigger_GoToLabWithRival_5:
# 408 "data/maps/Route301/scripts.pory"
	closemessage
# 410 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 411 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route301/scripts.pory"
	opendoor 17, 21
# 413 "data/maps/Route301/scripts.pory"
	waitdooranim
# 414 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 415 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 416 "data/maps/Route301/scripts.pory"
	removeobject 1
# 417 "data/maps/Route301/scripts.pory"
	waitse
# 419 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 420 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route301/scripts.pory"
	warp MAP_ROUTE301_HAWTHORNE_RESEARCH_LAB, 6, 12
	return

Route301_Trigger_GoToLabWithRival_2:
# 377 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden1
# 378 "data/maps/Route301/scripts.pory"
	closemessage
# 380 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 381 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 382 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden2
	goto Route301_Trigger_GoToLabWithRival_1

Route301_Trigger_GoToLabWithRival_6:
# 402 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden3
	goto Route301_Trigger_GoToLabWithRival_5


# 424 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan1:
# 425 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 425 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 425 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 425 "data/maps/Route301/scripts.pory"
	walk_fast_down
	step_end

# 428 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan2:
# 429 "data/maps/Route301/scripts.pory"
	walk_up
	step_end

# 432 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival1:
# 433 "data/maps/Route301/scripts.pory"
	walk_right
# 434 "data/maps/Route301/scripts.pory"
	walk_down
# 434 "data/maps/Route301/scripts.pory"
	walk_down
# 434 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 437 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival2:
# 438 "data/maps/Route301/scripts.pory"
	walk_down
# 438 "data/maps/Route301/scripts.pory"
	walk_down
# 438 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 441 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_RivalPath:
# 442 "data/maps/Route301/scripts.pory"
	walk_down
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 443 "data/maps/Route301/scripts.pory"
	walk_right
# 444 "data/maps/Route301/scripts.pory"
	walk_up
# 445 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_down
	step_end

# 448 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_PlayerPath:
# 449 "data/maps/Route301/scripts.pory"
	walk_down
# 449 "data/maps/Route301/scripts.pory"
	walk_down
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 450 "data/maps/Route301/scripts.pory"
	walk_right
# 451 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_up
	step_end

Route301_MapScript_MomGoodbye_Text_0:
# 35 "data/maps/Route301/scripts.pory"
	.string "Mom$"

Route301_MapScript_MomGoodbye_Text_1:
# 49 "data/maps/Route301/scripts.pory"
	.string "You received the PokéNav!$"

Route301_MapScript_MomGoodbye_Text_2:
# 60 "data/maps/Route301/scripts.pory"
	.string "You received ¥10,000!$"

Route301_MapScript_FirstRivalBattle_Text_0:
# 127 "data/maps/Route301/scripts.pory"
	.string "{RIVAL}$"

Route301_MapScript_FirstRivalBattle_Text_1:
# 128 "data/maps/Route301/scripts.pory"
	.string "{PLAYER}!\nHey, wait up!$"

Route301_MapScript_FirstRivalBattle_Text_2:
# 160 "data/maps/Route301/scripts.pory"
	.string "Sure!$"

Route301_MapScript_FirstRivalBattle_Text_3:
# 160 "data/maps/Route301/scripts.pory"
	.string "No way!$"

Route301_Text_MomGoodbye1::
# 97 "data/maps/Route301/scripts.pory"
	.string "{PLAYER}, there you are!\p"
	.string "I had a feeling I'd find you here.$"

Route301_Text_MomGoodbye2::
# 102 "data/maps/Route301/scripts.pory"
	.string "I heard from Professor Hawthorne about\n"
	.string "your big journey.\p"
	.string "I can't believe my little {PLAYER} is\n"
	.string "already setting off on their own\l"
	.string "adventure!\p"
	.string "Here, I wanted to give you something\n"
	.string "before you go.$"

Route301_Text_MomGoodbye3::
# 108 "data/maps/Route301/scripts.pory"
	.string "The PokéNav will help you keep in touch\n"
	.string "with me and other people you meet along\l"
	.string "the way.\p"
	.string "Make sure to check it every now and\n"
	.string "then, okay?\p"
	.string "Oh, and one more thing...\p"
	.string "I know you'll need some spending money,\n"
	.string "so take this.$"

Route301_Text_MomGoodbye4::
# 115 "data/maps/Route301/scripts.pory"
	.string "Now, don't go blowing it all at once!\p"
	.string "Poké Balls and Potions are important,\n"
	.string "but so is managing your money wisely.$"

Route301_Text_MomGoodbye5::
# 120 "data/maps/Route301/scripts.pory"
	.string "I know you and {STR_VAR_1} are\n"
	.string "going to do great, {PLAYER}.\p"
	.string "Be safe, have fun, and don't forget to\n"
	.string "call your mother every once in a while,\l"
	.string "alright?$"

Route301_Text_FirstRivalBattle_Caden1::
# 267 "data/maps/Route301/scripts.pory"
	.string "Hey, before you go running off to\n"
	.string "Dolomite, let's see what you've got.\p"
	.string "We can't call ourselves rivals until\n"
	.string "we've battled, right?$"

Route301_Text_FirstRivalBattle_Holly1::
# 272 "data/maps/Route301/scripts.pory"
	.string "Wait! Before you leave, let's have a\n"
	.string "quick battle.\p"
	.string "It's the best way to get to know each\n"
	.string "other--and our new Pokémon--right?$"

Route301_Text_FirstRivalBattle_CadenNo::
# 277 "data/maps/Route301/scripts.pory"
	.string "Oh, come on! Don't be like that!\p"
	.string "We're both new trainers, so we should\n"
	.string "battle to see who's better!$"

Route301_Text_FirstRivalBattle_HollyNo::
# 282 "data/maps/Route301/scripts.pory"
	.string "But... why not?\p"
	.string "It's just a friendly battle, right?$"

Route301_Text_FirstRivalBattle_Caden2::
# 287 "data/maps/Route301/scripts.pory"
	.string "Ready or not, here I come!$"

Route301_Text_FirstRivalBattle_Holly2::
# 291 "data/maps/Route301/scripts.pory"
	.string "Besides, I've made up my mind!\n"
	.string "I'm going to win this battle!$"

Route301_Text_FirstRivalBattle_Caden3::
# 295 "data/maps/Route301/scripts.pory"
	.string "Looks like I need to train harder if I\n"
	.string "want to keep up.\p"
	.string "Guess this whole 'fieldwork' thing might\n"
	.string "be good for me after all.$"

Route301_Text_FirstRivalBattle_Holly3::
# 300 "data/maps/Route301/scripts.pory"
	.string "I can already tell we're going to have\n"
	.string "so much fun battling together.\p"
	.string "But next time, I'm totally winning!$"

Route301_Text_FirstRivalBattle_Caden4::
# 305 "data/maps/Route301/scripts.pory"
	.string "I'll be hanging around Route 301 for\n"
	.string "now--Oh, right!\p"
	.string "You should stop by home before heading\n"
	.string "out. Your mom might have something for\l"
	.string "you.$"

Route301_Text_FirstRivalBattle_Holly4::
# 310 "data/maps/Route301/scripts.pory"
	.string "I'll be on Route 301 for a while--Oh!\p"
	.string "Before you leave, you should stop by\n"
	.string "home. Your mom might have something for\l"
	.string "you!$"

Route301_Text_FirstRivalBattle_CadenDefeated::
# 315 "data/maps/Route301/scripts.pory"
	.string "Hah, not bad. But don't think I'm gonna\n"
	.string "let you win next time!$"

Route301_Text_FirstRivalBattle_HollyDefeated::
# 319 "data/maps/Route301/scripts.pory"
	.string "Wow, you're really good, {PLAYER}!\n"
	.string "That was amazing!$"

Route301_Text_GoToLabWithRival_Rival1::
# 455 "data/maps/Route301/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Over here!$"

Route301_Text_GoToLabWithRival_Caden1::
# 459 "data/maps/Route301/scripts.pory"
	.string "Man, this route is kinda small, huh?\n"
	.string "Guess I should've expected that from a\l"
	.string "place so close to Argil Town...$"

Route301_Text_GoToLabWithRival_Caden2::
# 463 "data/maps/Route301/scripts.pory"
	.string "Anyway, we should hurry.\n"
	.string "The professor said he needed something\l"
	.string "delivered, right?\p"
	.string "Hope it's not just some boring\n"
	.string "package...$"

Route301_Text_GoToLabWithRival_Caden3::
# 468 "data/maps/Route301/scripts.pory"
	.string "Guess we'll find out soon enough.\n"
	.string "Let's go$"

Route301_Text_GoToLabWithRival_Holly1::
# 472 "data/maps/Route301/scripts.pory"
	.string "It's so quiet out here!\n"
	.string "Not exactly the thrilling adventure I\l"
	.string "was hoping for, but hey, it's a start!$"

Route301_Text_GoToLabWithRival_Holly2::
# 476 "data/maps/Route301/scripts.pory"
	.string "I wonder what the professor needs help\n"
	.string "with...\n"
	.string "I hope it's something exciting!$"

Route301_Text_GoToLabWithRival_Holly3::
# 480 "data/maps/Route301/scripts.pory"
	.string "Come on, {PLAYER}!\n"
	.string "The professor's waiting, and I wanna\l"
	.string "get moving!$"
