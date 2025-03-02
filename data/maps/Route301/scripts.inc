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
	setflag FLAG_HIDE_ROUTE_301_RIVAL
# 79 "data/maps/Route301/scripts.pory"
	clearflag FLAG_HIDE_TRAINER_SCHOOL_GEO_RIVAL
# 80 "data/maps/Route301/scripts.pory"
	removeobject 3
# 81 "data/maps/Route301/scripts.pory"
	fadedefaultbgm
# 82 "data/maps/Route301/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 84 "data/maps/Route301/scripts.pory"
	setvar VAR_ROUTE301_STATE, 5
# 86 "data/maps/Route301/scripts.pory"
	releaseall
	return


# 89 "data/maps/Route301/scripts.pory"
Route301_Movement_MomGoodbye_ApproachMom:
# 90 "data/maps/Route301/scripts.pory"
	walk_down
# 91 "data/maps/Route301/scripts.pory"
	walk_left
# 91 "data/maps/Route301/scripts.pory"
	walk_left
# 91 "data/maps/Route301/scripts.pory"
	walk_left
# 91 "data/maps/Route301/scripts.pory"
	walk_left
# 91 "data/maps/Route301/scripts.pory"
	walk_left
# 91 "data/maps/Route301/scripts.pory"
	walk_left
	step_end

# 94 "data/maps/Route301/scripts.pory"
Route301_Movement_MomGoodbye_MomStartToLeave:
# 95 "data/maps/Route301/scripts.pory"
	walk_left
# 95 "data/maps/Route301/scripts.pory"
	walk_left
# 96 "data/maps/Route301/scripts.pory"
	walk_in_place_right
	step_end

Route301_MapScript_FirstRivalBattle::
# 129 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 130 "data/maps/Route301/scripts.pory"
	msgbox Route301_MapScript_FirstRivalBattle_Text_1
# 131 "data/maps/Route301/scripts.pory"
	closemessage
# 133 "data/maps/Route301/scripts.pory"
	checkplayergender
# 134 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_2
# 140 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
Route301_MapScript_FirstRivalBattle_1:
# 143 "data/maps/Route301/scripts.pory"
	opendoor 17, 21
# 144 "data/maps/Route301/scripts.pory"
	waitdooranim
# 145 "data/maps/Route301/scripts.pory"
	addobject 1
# 146 "data/maps/Route301/scripts.pory"
	setobjectxy 1, 17, 21
# 147 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_FirstRivalBattle_WalkDown
# 148 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_FirstRivalBattle_WalkDown
# 149 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route301/scripts.pory"
	closedoor 17, 21
# 151 "data/maps/Route301/scripts.pory"
	waitdooranim
# 152 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 153 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 156 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 157 "data/maps/Route301/scripts.pory"
	checkplayergender
# 158 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_6
# 193 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly1
# 194 "data/maps/Route301/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_MapScript_FirstRivalBattle_Text_2, Route301_MapScript_FirstRivalBattle_Text_3
# 197 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route301_MapScript_FirstRivalBattle_17
Route301_MapScript_FirstRivalBattle_16:
# 202 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly2
# 203 "data/maps/Route301/scripts.pory"
	closemessage
# 205 "data/maps/Route301/scripts.pory"
	switch VAR_STARTER_MON
# 206 "data/maps/Route301/scripts.pory"
	case 0, Route301_MapScript_FirstRivalBattle_26
# 209 "data/maps/Route301/scripts.pory"
	case 1, Route301_MapScript_FirstRivalBattle_27
# 212 "data/maps/Route301/scripts.pory"
	case 2, Route301_MapScript_FirstRivalBattle_28
Route301_MapScript_FirstRivalBattle_24:
# 217 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_HawthorneResearchLab_Movement_StarterHop
# 218 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 221 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly3
Route301_MapScript_FirstRivalBattle_5:
# 223 "data/maps/Route301/scripts.pory"
	closemessage
# 225 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_FirstRivalBattle_WatchRivalWalkAway
# 226 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_FirstRivalBattle_RivalWalkAway1
# 227 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 229 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 230 "data/maps/Route301/scripts.pory"
	checkplayergender
# 231 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_10
# 237 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly4
Route301_MapScript_FirstRivalBattle_9:
# 239 "data/maps/Route301/scripts.pory"
	closemessage
# 241 "data/maps/Route301/scripts.pory"
	fadescreen FADE_TO_BLACK
# 242 "data/maps/Route301/scripts.pory"
	removeobject 1
# 243 "data/maps/Route301/scripts.pory"
	addobject 1
# 244 "data/maps/Route301/scripts.pory"
	setobjectxy 1, 10, 19
# 245 "data/maps/Route301/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_301_RIVAL
# 246 "data/maps/Route301/scripts.pory"
	setvar VAR_ROUTE301_STATE, 2
# 247 "data/maps/Route301/scripts.pory"
	delay 60
# 248 "data/maps/Route301/scripts.pory"
	fadedefaultbgm
# 249 "data/maps/Route301/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

Route301_MapScript_FirstRivalBattle_2:
# 136 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	goto Route301_MapScript_FirstRivalBattle_1

Route301_MapScript_FirstRivalBattle_6:
# 160 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden1
# 161 "data/maps/Route301/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_MapScript_FirstRivalBattle_Text_2, Route301_MapScript_FirstRivalBattle_Text_3
# 164 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route301_MapScript_FirstRivalBattle_14
Route301_MapScript_FirstRivalBattle_13:
# 169 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden2
# 170 "data/maps/Route301/scripts.pory"
	closemessage
# 172 "data/maps/Route301/scripts.pory"
	switch VAR_STARTER_MON
# 173 "data/maps/Route301/scripts.pory"
	case 0, Route301_MapScript_FirstRivalBattle_21
# 176 "data/maps/Route301/scripts.pory"
	case 1, Route301_MapScript_FirstRivalBattle_22
# 179 "data/maps/Route301/scripts.pory"
	case 2, Route301_MapScript_FirstRivalBattle_23
Route301_MapScript_FirstRivalBattle_19:
# 184 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 185 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 188 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden3
	goto Route301_MapScript_FirstRivalBattle_5

Route301_MapScript_FirstRivalBattle_10:
# 233 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden4
	goto Route301_MapScript_FirstRivalBattle_9

Route301_MapScript_FirstRivalBattle_14:
# 166 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_CadenNo
	goto Route301_MapScript_FirstRivalBattle_13

Route301_MapScript_FirstRivalBattle_17:
# 199 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_HollyNo
	goto Route301_MapScript_FirstRivalBattle_16

Route301_MapScript_FirstRivalBattle_21:
# 174 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_CHIKORITA, Route301_Text_FirstRivalBattle_CadenDefeated
	goto Route301_MapScript_FirstRivalBattle_19

Route301_MapScript_FirstRivalBattle_22:
# 177 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_CYNDAQUIL, Route301_Text_FirstRivalBattle_CadenDefeated
	goto Route301_MapScript_FirstRivalBattle_19

Route301_MapScript_FirstRivalBattle_23:
# 180 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_TOTODILE, Route301_Text_FirstRivalBattle_CadenDefeated
	goto Route301_MapScript_FirstRivalBattle_19

Route301_MapScript_FirstRivalBattle_26:
# 207 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_CHIKORITA, Route301_Text_FirstRivalBattle_HollyDefeated
	goto Route301_MapScript_FirstRivalBattle_24

Route301_MapScript_FirstRivalBattle_27:
# 210 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_CYNDAQUIL, Route301_Text_FirstRivalBattle_HollyDefeated
	goto Route301_MapScript_FirstRivalBattle_24

Route301_MapScript_FirstRivalBattle_28:
# 213 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_TOTODILE, Route301_Text_FirstRivalBattle_HollyDefeated
	goto Route301_MapScript_FirstRivalBattle_24


# 252 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_WalkDown:
# 253 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 256 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_WatchRivalWalkAway:
# 257 "data/maps/Route301/scripts.pory"
	walk_down
# 258 "data/maps/Route301/scripts.pory"
	delay_16
# 259 "data/maps/Route301/scripts.pory"
	walk_up
# 260 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_left
	step_end

# 263 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_RivalWalkAway1:
# 264 "data/maps/Route301/scripts.pory"
	walk_down
# 265 "data/maps/Route301/scripts.pory"
	walk_left
# 265 "data/maps/Route301/scripts.pory"
	walk_left
# 265 "data/maps/Route301/scripts.pory"
	walk_left
# 266 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_right
	step_end

Route301_Trigger_MeetRival1::
# 326 "data/maps/Route301/scripts.pory"
	lockall
# 327 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 329 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival1
# 330 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_MeetRival2::
# 334 "data/maps/Route301/scripts.pory"
	lockall
# 335 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 337 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival2
# 338 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_CalledByRival::
# 342 "data/maps/Route301/scripts.pory"
	special SpawnCameraObject
# 343 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan1
# 344 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 346 "data/maps/Route301/scripts.pory"
	playse SE_PIN
# 347 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 348 "data/maps/Route301/scripts.pory"
	waitse
# 349 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 350 "data/maps/Route301/scripts.pory"
	delay 40
# 351 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 352 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 355 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Rival1
# 356 "data/maps/Route301/scripts.pory"
	closemessage
# 358 "data/maps/Route301/scripts.pory"
	checkplayergender
# 359 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_CalledByRival_1
# 365 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

Route301_Trigger_CalledByRival_1:
# 361 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return


Route301_Trigger_GoToLabWithRival::
# 371 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 372 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan2
# 373 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 374 "data/maps/Route301/scripts.pory"
	special RemoveCameraObject
# 376 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 377 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_2
# 388 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly1
# 389 "data/maps/Route301/scripts.pory"
	closemessage
# 391 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 392 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 393 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly2
Route301_Trigger_GoToLabWithRival_1:
# 395 "data/maps/Route301/scripts.pory"
	closemessage
# 397 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_GoToLabWithRival_RivalPath
# 398 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_GoToLabWithRival_PlayerPath
# 399 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 402 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_6
# 408 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly3
Route301_Trigger_GoToLabWithRival_5:
# 410 "data/maps/Route301/scripts.pory"
	closemessage
# 412 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 413 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 414 "data/maps/Route301/scripts.pory"
	opendoor 17, 21
# 415 "data/maps/Route301/scripts.pory"
	waitdooranim
# 416 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 417 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 418 "data/maps/Route301/scripts.pory"
	removeobject 1
# 419 "data/maps/Route301/scripts.pory"
	waitse
# 421 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 422 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route301/scripts.pory"
	warp MAP_ROUTE301_HAWTHORNE_RESEARCH_LAB, 6, 12
	return

Route301_Trigger_GoToLabWithRival_2:
# 379 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden1
# 380 "data/maps/Route301/scripts.pory"
	closemessage
# 382 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 383 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 384 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden2
	goto Route301_Trigger_GoToLabWithRival_1

Route301_Trigger_GoToLabWithRival_6:
# 404 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden3
	goto Route301_Trigger_GoToLabWithRival_5


# 426 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan1:
# 427 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 427 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 427 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 427 "data/maps/Route301/scripts.pory"
	walk_fast_down
	step_end

# 430 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan2:
# 431 "data/maps/Route301/scripts.pory"
	walk_up
	step_end

# 434 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival1:
# 435 "data/maps/Route301/scripts.pory"
	walk_right
# 436 "data/maps/Route301/scripts.pory"
	walk_down
# 436 "data/maps/Route301/scripts.pory"
	walk_down
# 436 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 439 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival2:
# 440 "data/maps/Route301/scripts.pory"
	walk_down
# 440 "data/maps/Route301/scripts.pory"
	walk_down
# 440 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 443 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_RivalPath:
# 444 "data/maps/Route301/scripts.pory"
	walk_down
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 445 "data/maps/Route301/scripts.pory"
	walk_right
# 446 "data/maps/Route301/scripts.pory"
	walk_up
# 447 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_down
	step_end

# 450 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_PlayerPath:
# 451 "data/maps/Route301/scripts.pory"
	walk_down
# 451 "data/maps/Route301/scripts.pory"
	walk_down
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 452 "data/maps/Route301/scripts.pory"
	walk_right
# 453 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_up
	step_end

Route301_EventScript_RodMan::
# 487 "data/maps/Route301/scripts.pory"
	lock
# 488 "data/maps/Route301/scripts.pory"
	faceplayer
# 490 "data/maps/Route301/scripts.pory"
	compare VAR_ROUTE301_STATE, 3
	goto_if_gt Route301_EventScript_RodMan_2
# 503 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_RodMan4
Route301_EventScript_RodMan_1:
# 506 "data/maps/Route301/scripts.pory"
	release
	return

Route301_EventScript_RodMan_2:
# 492 "data/maps/Route301/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SUPER_ROD, Route301_EventScript_RodMan_6
Route301_EventScript_RodMan_5:
# 499 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_RodMan3
	goto Route301_EventScript_RodMan_1

Route301_EventScript_RodMan_6:
# 494 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_RodMan1
# 495 "data/maps/Route301/scripts.pory"
	giveitem ITEM_SUPER_ROD, 1
# 496 "data/maps/Route301/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 497 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_RodMan2
	goto Route301_EventScript_RodMan_5


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
# 129 "data/maps/Route301/scripts.pory"
	.string "{RIVAL}$"

Route301_MapScript_FirstRivalBattle_Text_1:
# 130 "data/maps/Route301/scripts.pory"
	.string "{PLAYER}!\nHey, wait up!$"

Route301_MapScript_FirstRivalBattle_Text_2:
# 162 "data/maps/Route301/scripts.pory"
	.string "Sure!$"

Route301_MapScript_FirstRivalBattle_Text_3:
# 162 "data/maps/Route301/scripts.pory"
	.string "No way!$"

Route301_Text_MomGoodbye1::
# 99 "data/maps/Route301/scripts.pory"
	.string "{PLAYER}, there you are!\p"
	.string "I had a feeling I'd find you here.$"

Route301_Text_MomGoodbye2::
# 104 "data/maps/Route301/scripts.pory"
	.string "I heard from Professor Hawthorne about\n"
	.string "your big journey.\p"
	.string "I can't believe my little {PLAYER} is\n"
	.string "already setting off on their own\l"
	.string "adventure!\p"
	.string "Here, I wanted to give you something\n"
	.string "before you go.$"

Route301_Text_MomGoodbye3::
# 110 "data/maps/Route301/scripts.pory"
	.string "The PokéNav will help you keep in touch\n"
	.string "with me and other people you meet along\l"
	.string "the way.\p"
	.string "Make sure to check it every now and\n"
	.string "then, okay?\p"
	.string "Oh, and one more thing...\p"
	.string "I know you'll need some spending money,\n"
	.string "so take this.$"

Route301_Text_MomGoodbye4::
# 117 "data/maps/Route301/scripts.pory"
	.string "Now, don't go blowing it all at once!\p"
	.string "Poké Balls and Potions are important,\n"
	.string "but so is managing your money wisely.$"

Route301_Text_MomGoodbye5::
# 122 "data/maps/Route301/scripts.pory"
	.string "I know you and {STR_VAR_1} are\n"
	.string "going to do great, {PLAYER}.\p"
	.string "Be safe, have fun, and don't forget to\n"
	.string "call your mother every once in a while,\l"
	.string "alright?$"

Route301_Text_FirstRivalBattle_Caden1::
# 269 "data/maps/Route301/scripts.pory"
	.string "Hey, before you go running off to\n"
	.string "Dolomite, let's see what you've got.\p"
	.string "We can't call ourselves rivals until\n"
	.string "we've battled, right?$"

Route301_Text_FirstRivalBattle_Holly1::
# 274 "data/maps/Route301/scripts.pory"
	.string "Wait! Before you leave, let's have a\n"
	.string "quick battle.\p"
	.string "It's the best way to get to know each\n"
	.string "other--and our new Pokémon--right?$"

Route301_Text_FirstRivalBattle_CadenNo::
# 279 "data/maps/Route301/scripts.pory"
	.string "Oh, come on! Don't be like that!\p"
	.string "We're both new trainers, so we should\n"
	.string "battle to see who's better!$"

Route301_Text_FirstRivalBattle_HollyNo::
# 284 "data/maps/Route301/scripts.pory"
	.string "But... why not?\p"
	.string "It's just a friendly battle, right?$"

Route301_Text_FirstRivalBattle_Caden2::
# 289 "data/maps/Route301/scripts.pory"
	.string "Ready or not, here I come!$"

Route301_Text_FirstRivalBattle_Holly2::
# 293 "data/maps/Route301/scripts.pory"
	.string "Besides, I've made up my mind!\n"
	.string "I'm going to win this battle!$"

Route301_Text_FirstRivalBattle_Caden3::
# 297 "data/maps/Route301/scripts.pory"
	.string "Looks like I need to train harder if I\n"
	.string "want to keep up.\p"
	.string "Guess this whole 'fieldwork' thing might\n"
	.string "be good for me after all.$"

Route301_Text_FirstRivalBattle_Holly3::
# 302 "data/maps/Route301/scripts.pory"
	.string "I can already tell we're going to have\n"
	.string "so much fun battling together.\p"
	.string "But next time, I'm totally winning!$"

Route301_Text_FirstRivalBattle_Caden4::
# 307 "data/maps/Route301/scripts.pory"
	.string "I'll be hanging around Route 301 for\n"
	.string "now--Oh, right!\p"
	.string "You should stop by home before heading\n"
	.string "out. Your mom might have something for\l"
	.string "you.$"

Route301_Text_FirstRivalBattle_Holly4::
# 312 "data/maps/Route301/scripts.pory"
	.string "I'll be on Route 301 for a while--Oh!\p"
	.string "Before you leave, you should stop by\n"
	.string "home. Your mom might have something for\l"
	.string "you!$"

Route301_Text_FirstRivalBattle_CadenDefeated::
# 317 "data/maps/Route301/scripts.pory"
	.string "Hah, not bad. But don't think I'm gonna\n"
	.string "let you win next time!$"

Route301_Text_FirstRivalBattle_HollyDefeated::
# 321 "data/maps/Route301/scripts.pory"
	.string "Wow, you're really good, {PLAYER}!\n"
	.string "That was amazing!$"

Route301_Text_GoToLabWithRival_Rival1::
# 457 "data/maps/Route301/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Over here!$"

Route301_Text_GoToLabWithRival_Caden1::
# 461 "data/maps/Route301/scripts.pory"
	.string "Man, this route is kinda small, huh?\n"
	.string "Guess I should've expected that from a\l"
	.string "place so close to Argil Town...$"

Route301_Text_GoToLabWithRival_Caden2::
# 465 "data/maps/Route301/scripts.pory"
	.string "Anyway, we should hurry.\n"
	.string "The professor said he needed something\l"
	.string "delivered, right?\p"
	.string "Hope it's not just some boring\n"
	.string "package...$"

Route301_Text_GoToLabWithRival_Caden3::
# 470 "data/maps/Route301/scripts.pory"
	.string "Guess we'll find out soon enough.\n"
	.string "Let's go$"

Route301_Text_GoToLabWithRival_Holly1::
# 474 "data/maps/Route301/scripts.pory"
	.string "It's so quiet out here!\n"
	.string "Not exactly the thrilling adventure I\l"
	.string "was hoping for, but hey, it's a start!$"

Route301_Text_GoToLabWithRival_Holly2::
# 478 "data/maps/Route301/scripts.pory"
	.string "I wonder what the professor needs help\n"
	.string "with...\n"
	.string "I hope it's something exciting!$"

Route301_Text_GoToLabWithRival_Holly3::
# 482 "data/maps/Route301/scripts.pory"
	.string "Come on, {PLAYER}!\n"
	.string "The professor's waiting, and I wanna\l"
	.string "get moving!$"

Route301_Text_RodMan1::
# 509 "data/maps/Route301/scripts.pory"
	.string "Hey, kid.\n"
	.string "Could you stop stomping around so\l"
	.string "much?\p"
	.string "You're scaring away all the fish!\p"
	.string "I'm trying to catch something here!\p"
	.string "... ... ...\p"
	.string "You're not going to leave me alone, are\n"
	.string "you?\p"
	.string "If I give you this, will you go away?$"

Route301_Text_RodMan2::
# 519 "data/maps/Route301/scripts.pory"
	.string "With that Super Rod, you can catch some\n"
	.string "really cool Pokémon!\p"
	.string "Just don't scare them away like you did\n"
	.string "to me!\p"
	.string "So uh...$"

Route301_Text_RodMan3::
# 525 "data/maps/Route301/scripts.pory"
	.string "Go away and let me fish in peace!\p"
	.string "Man, kids these days...$"

Route301_Text_RodMan4::
# 530 "data/maps/Route301/scripts.pory"
	.string "Hey, kid.\n"
	.string "I'm trying to fish here, so could you\l"
	.string "give me some space?$"
