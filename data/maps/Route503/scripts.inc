Route503_MapScripts::
# 12 "data/maps/Route503/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route503_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route503_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/Route503/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 15 "data/maps/Route503/scripts.pory"
	setflag FLAG_HIDE_ROUTE_503_MOM_DELCATTY
# 17 "data/maps/Route503/scripts.pory"
	goto_if_unset FLAG_SAVED_NURSERY_MAN, Route503_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 23 "data/maps/Route503/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_503_NURSERY_MAN
	return

Route503_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/Route503/scripts.pory"
	setflag FLAG_HIDE_ROUTE_503_NURSERY_MAN
	return


Route503_Trigger_MeetDio1::
# 29 "data/maps/Route503/scripts.pory"
	lockall
# 31 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_0
# 32 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetDio1_Text_1
# 33 "data/maps/Route503/scripts.pory"
	closemessage
# 35 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 36 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetDio1_Text_3
# 37 "data/maps/Route503/scripts.pory"
	closemessage
# 39 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerApproachRival1
# 40 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route503/scripts.pory"
	goto Route503_MeetDio
	return


Route503_Trigger_MeetDio2::
# 46 "data/maps/Route503/scripts.pory"
	lockall
# 48 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_0
# 49 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetDio1_Text_1
# 50 "data/maps/Route503/scripts.pory"
	closemessage
# 52 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 53 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetDio1_Text_3
# 54 "data/maps/Route503/scripts.pory"
	closemessage
# 56 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerApproachRival2
# 57 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route503/scripts.pory"
	goto Route503_MeetDio
	return


# 62 "data/maps/Route503/scripts.pory"
Route503_Movement_PlayerApproachRival1:
# 63 "data/maps/Route503/scripts.pory"
	walk_right
# 63 "data/maps/Route503/scripts.pory"
	walk_right
# 63 "data/maps/Route503/scripts.pory"
	walk_right
	step_end

# 66 "data/maps/Route503/scripts.pory"
Route503_Movement_PlayerApproachRival2:
# 67 "data/maps/Route503/scripts.pory"
	walk_right
# 68 "data/maps/Route503/scripts.pory"
	walk_up
# 69 "data/maps/Route503/scripts.pory"
	walk_right
# 69 "data/maps/Route503/scripts.pory"
	walk_right
	step_end

Route503_MeetDio::
# 73 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceUp
# 74 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 77 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival1
# 79 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceRight
# 81 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_0
# 82 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Dio1
# 84 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 85 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival2, MSGBOX_YESNO
# 87 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceUp
# 89 "data/maps/Route503/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route503_MeetDio_2
Route503_MeetDio_1:
# 98 "data/maps/Route503/scripts.pory"
	msgbox Route503_MeetDio_Text_0
# 100 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceRight
# 102 "data/maps/Route503/scripts.pory"
	speakername Route503_MeetDio_Text_1
# 103 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Dio2
# 105 "data/maps/Route503/scripts.pory"
	trainerbattle_no_intro TRAINER_DIO_ROUTE_503, Route503_Text_DioDefeated
# 107 "data/maps/Route503/scripts.pory"
	applymovement 8, Route503_DioStepBack
# 108 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route503/scripts.pory"
	speakername Route503_MeetDio_Text_1
# 111 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Dio3
# 112 "data/maps/Route503/scripts.pory"
	closemessage
# 114 "data/maps/Route503/scripts.pory"
	applymovement 8, Route503_DioLeave
# 115 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_RivalFaceUp
# 117 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceUp
# 118 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route503/scripts.pory"
	removeobject 8
# 123 "data/maps/Route503/scripts.pory"
	speakername Route503_MeetDio_Text_1
# 124 "data/maps/Route503/scripts.pory"
	msgbox Route503_MeetDio_Text_2
# 125 "data/maps/Route503/scripts.pory"
	closemessage
# 127 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 129 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 130 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival4
# 131 "data/maps/Route503/scripts.pory"
	closemessage
# 133 "data/maps/Route503/scripts.pory"
	switch VAR_STARTER_MON
# 134 "data/maps/Route503/scripts.pory"
	case 0, Route503_MeetDio_6
# 137 "data/maps/Route503/scripts.pory"
	case 1, Route503_MeetDio_7
# 140 "data/maps/Route503/scripts.pory"
	case 2, Route503_MeetDio_8
Route503_MeetDio_4:
# 145 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 146 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival5
# 147 "data/maps/Route503/scripts.pory"
	closemessage
# 149 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalLeave
# 150 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route503/scripts.pory"
	removeobject 9
# 153 "data/maps/Route503/scripts.pory"
	setvar VAR_ROUTE503_STATE, 1
# 154 "data/maps/Route503/scripts.pory"
	setflag FLAG_ROUTE_503_METDIO
# 156 "data/maps/Route503/scripts.pory"
	releaseall
	return

Route503_MeetDio_2:
Route503_MeetDio_9:
# 91 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival3, MSGBOX_YESNO
# 92 "data/maps/Route503/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route503_MeetDio_11
	goto Route503_MeetDio_9

Route503_MeetDio_6:
# 135 "data/maps/Route503/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
	goto Route503_MeetDio_4

Route503_MeetDio_7:
# 138 "data/maps/Route503/scripts.pory"
	giveitem ITEM_CHARCOAL
	goto Route503_MeetDio_4

Route503_MeetDio_8:
# 141 "data/maps/Route503/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
	goto Route503_MeetDio_4

Route503_MeetDio_11:
	goto Route503_MeetDio_1


# 159 "data/maps/Route503/scripts.pory"
Route503_Movement_PlayerFaceDown:
# 160 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 163 "data/maps/Route503/scripts.pory"
Route503_RivalFaceUp:
# 164 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_up
	step_end

# 167 "data/maps/Route503/scripts.pory"
Route503_RivalFaceRight:
# 168 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_right
	step_end

# 171 "data/maps/Route503/scripts.pory"
Route503_DioStepBack:
# 172 "data/maps/Route503/scripts.pory"
	lock_facing_direction
# 173 "data/maps/Route503/scripts.pory"
	walk_right
# 174 "data/maps/Route503/scripts.pory"
	unlock_facing_direction
	step_end

# 177 "data/maps/Route503/scripts.pory"
Route503_DioLeave:
# 178 "data/maps/Route503/scripts.pory"
	walk_left
# 179 "data/maps/Route503/scripts.pory"
	walk_up
# 179 "data/maps/Route503/scripts.pory"
	walk_up
# 179 "data/maps/Route503/scripts.pory"
	walk_up
# 179 "data/maps/Route503/scripts.pory"
	walk_up
# 179 "data/maps/Route503/scripts.pory"
	walk_up
# 179 "data/maps/Route503/scripts.pory"
	walk_up
	step_end

# 182 "data/maps/Route503/scripts.pory"
Route503_RivalLeave:
# 183 "data/maps/Route503/scripts.pory"
	walk_right
# 183 "data/maps/Route503/scripts.pory"
	walk_right
# 183 "data/maps/Route503/scripts.pory"
	walk_right
# 183 "data/maps/Route503/scripts.pory"
	walk_right
# 183 "data/maps/Route503/scripts.pory"
	walk_right
# 183 "data/maps/Route503/scripts.pory"
	walk_right
# 183 "data/maps/Route503/scripts.pory"
	walk_right
# 184 "data/maps/Route503/scripts.pory"
	walk_down
# 184 "data/maps/Route503/scripts.pory"
	walk_down
# 184 "data/maps/Route503/scripts.pory"
	walk_down
# 184 "data/maps/Route503/scripts.pory"
	walk_down
	step_end

Route503_Trigger_GetPokeNav1::
# 250 "data/maps/Route503/scripts.pory"
	lockall
# 251 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 252 "data/maps/Route503/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_503_MOM_DELCATTY
# 254 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 255 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_0
# 256 "data/maps/Route503/scripts.pory"
	waitmoncry
# 257 "data/maps/Route503/scripts.pory"
	closemessage
# 259 "data/maps/Route503/scripts.pory"
	addobject 15, MAP_ROUTE503
# 260 "data/maps/Route503/scripts.pory"
	addobject 16, MAP_ROUTE503
# 261 "data/maps/Route503/scripts.pory"
	applymovement 16, Route503_Movement_DelcattyApproachPlayer1
# 262 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_FaceLeft
# 265 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_0
# 266 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_1
# 267 "data/maps/Route503/scripts.pory"
	closemessage
# 269 "data/maps/Route503/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 271 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 272 "data/maps/Route503/scripts.pory"
	applymovement 15, Route503_Movement_MomApproachPlayer1
# 273 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 275 "data/maps/Route503/scripts.pory"
	goto Route503_GetPokeNav
	return


Route503_Trigger_GetPokeNav2::
# 279 "data/maps/Route503/scripts.pory"
	lockall
# 280 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 282 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 283 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_0
# 284 "data/maps/Route503/scripts.pory"
	waitmoncry
# 285 "data/maps/Route503/scripts.pory"
	closemessage
# 287 "data/maps/Route503/scripts.pory"
	addobject 15, MAP_ROUTE503
# 288 "data/maps/Route503/scripts.pory"
	addobject 16, MAP_ROUTE503
# 289 "data/maps/Route503/scripts.pory"
	applymovement 16, Route503_Movement_DelcattyApproachPlayer2
# 290 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_FaceLeft
# 293 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_0
# 294 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_1
# 295 "data/maps/Route503/scripts.pory"
	closemessage
# 297 "data/maps/Route503/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 299 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 300 "data/maps/Route503/scripts.pory"
	applymovement 15, Route503_Movement_MomApproachPlayer2
# 301 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route503/scripts.pory"
	goto Route503_GetPokeNav
	return


Route503_GetPokeNav::
# 307 "data/maps/Route503/scripts.pory"
	speakername Route503_GetPokeNav_Text_0
# 308 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_GetPokeNav_Mom1
# 309 "data/maps/Route503/scripts.pory"
	closemessage
# 311 "data/maps/Route503/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 312 "data/maps/Route503/scripts.pory"
	msgbox Route503_GetPokeNav_Text_1
# 313 "data/maps/Route503/scripts.pory"
	waitfanfare
# 314 "data/maps/Route503/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 315 "data/maps/Route503/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 316 "data/maps/Route503/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 318 "data/maps/Route503/scripts.pory"
	speakername Route503_GetPokeNav_Text_0
# 319 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_GetPokeNav_Mom2
# 320 "data/maps/Route503/scripts.pory"
	closemessage
# 322 "data/maps/Route503/scripts.pory"
	delay 30
# 323 "data/maps/Route503/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 324 "data/maps/Route503/scripts.pory"
	msgbox Route503_GetPokeNav_Text_2
# 325 "data/maps/Route503/scripts.pory"
	waitfanfare
# 326 "data/maps/Route503/scripts.pory"
	closemessage
# 327 "data/maps/Route503/scripts.pory"
	delay 30
# 328 "data/maps/Route503/scripts.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 330 "data/maps/Route503/scripts.pory"
	speakername Route503_GetPokeNav_Text_0
# 331 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_GetPokeNav_Mom3
# 332 "data/maps/Route503/scripts.pory"
	closemessage
# 334 "data/maps/Route503/scripts.pory"
	setvar VAR_ROUTE503_STATE, 2
# 336 "data/maps/Route503/scripts.pory"
	fadedefaultbgm
# 337 "data/maps/Route503/scripts.pory"
	fadescreen FADE_TO_BLACK
# 338 "data/maps/Route503/scripts.pory"
	removeobject 15
# 339 "data/maps/Route503/scripts.pory"
	removeobject 16
# 340 "data/maps/Route503/scripts.pory"
	setflag FLAG_HIDE_ROUTE_503_MOM_DELCATTY
# 341 "data/maps/Route503/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 343 "data/maps/Route503/scripts.pory"
	releaseall
	return


# 346 "data/maps/Route503/scripts.pory"
Route503_Movement_FaceLeft:
# 347 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_left
	step_end

# 350 "data/maps/Route503/scripts.pory"
Route503_Movement_DelcattyApproachPlayer1:
# 351 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 351 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 351 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 351 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 351 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 351 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 351 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 352 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 352 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 352 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 352 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 352 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 353 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 356 "data/maps/Route503/scripts.pory"
Route503_Movement_DelcattyApproachPlayer2:
# 357 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 357 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 357 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 357 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 357 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 357 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 357 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 357 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 358 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 358 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 358 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 358 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 358 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 359 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 362 "data/maps/Route503/scripts.pory"
Route503_Movement_MomApproachPlayer1:
# 363 "data/maps/Route503/scripts.pory"
	walk_right
# 363 "data/maps/Route503/scripts.pory"
	walk_right
# 363 "data/maps/Route503/scripts.pory"
	walk_right
# 363 "data/maps/Route503/scripts.pory"
	walk_right
# 363 "data/maps/Route503/scripts.pory"
	walk_right
# 363 "data/maps/Route503/scripts.pory"
	walk_right
# 363 "data/maps/Route503/scripts.pory"
	walk_right
# 363 "data/maps/Route503/scripts.pory"
	walk_right
# 364 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 364 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 364 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 364 "data/maps/Route503/scripts.pory"
	walk_fast_up
	step_end

# 367 "data/maps/Route503/scripts.pory"
Route503_Movement_MomApproachPlayer2:
# 368 "data/maps/Route503/scripts.pory"
	walk_right
# 368 "data/maps/Route503/scripts.pory"
	walk_right
# 368 "data/maps/Route503/scripts.pory"
	walk_right
# 368 "data/maps/Route503/scripts.pory"
	walk_right
# 368 "data/maps/Route503/scripts.pory"
	walk_right
# 368 "data/maps/Route503/scripts.pory"
	walk_right
# 368 "data/maps/Route503/scripts.pory"
	walk_right
# 368 "data/maps/Route503/scripts.pory"
	walk_right
# 368 "data/maps/Route503/scripts.pory"
	walk_right
# 369 "data/maps/Route503/scripts.pory"
	walk_up
# 369 "data/maps/Route503/scripts.pory"
	walk_up
# 369 "data/maps/Route503/scripts.pory"
	walk_up
# 369 "data/maps/Route503/scripts.pory"
	walk_up
	step_end

Route503_EventScript_NurseryLady::
# 398 "data/maps/Route503/scripts.pory"
	lock
# 399 "data/maps/Route503/scripts.pory"
	faceplayer
# 400 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_NurseryLady
# 401 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_Toxel::
# 414 "data/maps/Route503/scripts.pory"
	lock
# 415 "data/maps/Route503/scripts.pory"
	faceplayer
# 416 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_TOXEL, CRY_MODE_NORMAL
# 417 "data/maps/Route503/scripts.pory"
	msgbox Route503_EventScript_Toxel_Text_0
# 418 "data/maps/Route503/scripts.pory"
	waitmoncry
# 419 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_Pichu::
# 423 "data/maps/Route503/scripts.pory"
	lock
# 424 "data/maps/Route503/scripts.pory"
	faceplayer
# 425 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 426 "data/maps/Route503/scripts.pory"
	msgbox Route503_EventScript_Pichu_Text_0
# 427 "data/maps/Route503/scripts.pory"
	waitmoncry
# 428 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_FatGuy::
# 432 "data/maps/Route503/scripts.pory"
	lock
# 433 "data/maps/Route503/scripts.pory"
	faceplayer
# 434 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_FatGuy
# 435 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_CamperAndrew::
# 447 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route503_Text_CamperAndrewIntro, Route503_Text_CamperAndrewDefeated
# 448 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_CamperAndrewPostBattle, MSGBOX_AUTOCLOSE
# 449 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_EventScript_YoungsterEric::
# 466 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_ERIC, Route503_Text_YoungsterEricIntro, Route503_Text_YoungsterEricDefeated
# 467 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_YoungsterEricPostBattle, MSGBOX_AUTOCLOSE
# 468 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_EventScript_PicnickerMargaret::
# 485 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_MARGARET, Route503_Text_PicnickerMargaretIntro, Route503_Text_PicnickerMargaretDefeated
# 486 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_PicnickerMargaretPostBattle, MSGBOX_AUTOCLOSE
# 487 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_EventScript_RichboyCarl::
# 504 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_CARL_1, Route503_Text_RichboyCarlIntro, Route503_Text_RichboyCarlDefeated
# 505 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_RichboyCarlPostBattle, MSGBOX_AUTOCLOSE
# 506 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_Trigger_MeetDio1_Text_0:
# 31 "data/maps/Route503/scripts.pory"
	.string "???$"

Route503_Trigger_MeetDio1_Text_1:
# 32 "data/maps/Route503/scripts.pory"
	.string "What a pathetic excuse for a trainer!\n"
	.string "You're not even worth my time!$"

Route503_Trigger_MeetDio1_Text_2:
# 35 "data/maps/Route503/scripts.pory"
	.string "{RIVAL}$"

Route503_Trigger_MeetDio1_Text_3:
# 36 "data/maps/Route503/scripts.pory"
	.string "What did you just say?$"

Route503_MeetDio_Text_0:
# 98 "data/maps/Route503/scripts.pory"
	.string "That's what I thought!$"

Route503_MeetDio_Text_1:
# 102 "data/maps/Route503/scripts.pory"
	.string "Dio$"

Route503_MeetDio_Text_2:
# 124 "data/maps/Route503/scripts.pory"
	.string "Out of my way, stupid Sudowoodo!$"

Route503_Trigger_GetPokeNav1_Text_0:
# 255 "data/maps/Route503/scripts.pory"
	.string "Mrow!$"

Route503_Trigger_GetPokeNav1_Text_1:
# 266 "data/maps/Route503/scripts.pory"
	.string "{PLAYER}! Wait... up!$"

Route503_GetPokeNav_Text_0:
# 307 "data/maps/Route503/scripts.pory"
	.string "Mom$"

Route503_GetPokeNav_Text_1:
# 312 "data/maps/Route503/scripts.pory"
	.string "You received the PokéNav!$"

Route503_GetPokeNav_Text_2:
# 324 "data/maps/Route503/scripts.pory"
	.string "Registered Mom in the PokéNav!$"

Route503_EventScript_Toxel_Text_0:
# 417 "data/maps/Route503/scripts.pory"
	.string "Ssson!$"

Route503_EventScript_Pichu_Text_0:
# 426 "data/maps/Route503/scripts.pory"
	.string "Pichuuu!$"

Route503_Text_MeetDio_Rival1::
# 187 "data/maps/Route503/scripts.pory"
	.string "Oh, it's you, {PLAYER}!\n"
	.string "I'm glad you're here!\p"
	.string "Listen, I was busy working on my\n"
	.string "Pokédex when this guy suddenly\l"
	.string "challenged me to a battle!\p"
	.string "I didn't want to, but he wouldn't take\n"
	.string "no for an answer!\p"
	.string "I tried my best, but I just couldn't\n"
	.string "beat him!$"

Route503_Text_MeetDio_Dio1::
# 197 "data/maps/Route503/scripts.pory"
	.string "That's because you're weak!\n"
	.string "Weak trainers like you need to just give\l"
	.string "up and go home!\p"
	.string "You're not cut out for this!\p"
	.string "I, Dio, on the other hand, am a\n"
	.string "beautiful, powerful trainer!$"

Route503_Text_MeetDio_Rival2::
# 204 "data/maps/Route503/scripts.pory"
	.string "Gah! You're so annoying!\n"
	.string "You know what? I'm going to make you\l"
	.string "pay for this!\p"
	.string "{PLAYER}, go and show him what you're\n"
	.string "made of!\n"
	.string "$"

Route503_Text_MeetDio_Rival3::
# 210 "data/maps/Route503/scripts.pory"
	.string "What's that, {PLAYER}?\n"
	.string "I can't hear you!\p"
	.string "You're going to battle him, right?$"

Route503_Text_MeetDio_Dio2::
# 215 "data/maps/Route503/scripts.pory"
	.string "Hmph! You think you can beat me?\p"
	.string "You don't look AS weak as your friend,\n"
	.string "but you're still no match for me!\p"
	.string "I'll show you what a real trainer is\n"
	.string "capable of!$"

Route503_Text_DioDefeated::
# 222 "data/maps/Route503/scripts.pory"
	.string "What? How could I lose to a weakling\n"
	.string "like you?$"

Route503_Text_MeetDio_Dio3::
# 226 "data/maps/Route503/scripts.pory"
	.string "These Pokémon are all useless!\n"
	.string "Useless, I tell you!\p"
	.string "I need to find more powerful Pokémon to\n"
	.string "add to my team!\p"
	.string "I'll be back, and when I am, you'll see\n"
	.string "just how beautiful a powerful trainer\l"
	.string "can be!$"

Route503_Text_MeetDio_Rival4::
# 233 "data/maps/Route503/scripts.pory"
	.string "...What a jerk!\n"
	.string "I can't believe I lost to him!\p"
	.string "Did you see how he treated his Pokémon?\n"
	.string "He's nothing but a bully!\p"
	.string "But, wow! You're amazing, {PLAYER}!\n"
	.string "You really showed him!\p"
	.string "I'm still not sure about this whole\n"
	.string "battling thing, but I'm glad I have you\l"
	.string "to help me out!\p"
	.string "Oh, and I almost forgot! I found this\n"
	.string "while I was out looking for Pokémon!\p"
	.string "I think it's a held item! You should take\n"
	.string "it! I'm sure you'll put it to good use!$"

Route503_Text_MeetDio_Rival5::
# 243 "data/maps/Route503/scripts.pory"
	.string "OK! That's enough chit-chat!\n"
	.string "Let's get back to training!\p"
	.string "I'll see you later, {PLAYER}! Let's\n"
	.string "battle again soon!$"

Route503_Text_GetPokeNav_Mom1::
# 372 "data/maps/Route503/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Thank goodness I caught you in time!\p"
	.string "I knew you'd be heading into Kismet\n"
	.string "Forest soon, and I wanted to make sure\l"
	.string "you had something important before you\l"
	.string "went any further.\p"
	.string "Here, I got this for you--a Pokémon\n"
	.string "Navigator, or PokéNav for short!$"

Route503_Text_GetPokeNav_Mom2::
# 379 "data/maps/Route503/scripts.pory"
	.string "I ordered it straight from the Devon\n"
	.string "Corporation in Hoenn!\p"
	.string "It's a handy device that has a map, a\n"
	.string "phone, and even the ability to check\l"
	.string "the condition of your Pokémon!\p"
	.string "I thought it would be perfect for you,\n"
	.string "especially since you're just starting\l"
	.string "out on your journey!\p"
	.string "Here, I'll register myself in your\n"
	.string "PokéNav.\n"
	.string "And don't hesitate to call me if you\l"
	.string "need anything!$"

Route503_Text_GetPokeNav_Mom3::
# 388 "data/maps/Route503/scripts.pory"
	.string "{PLAYER}...\p"
	.string "Be careful out there, okay? I know\n"
	.string "you'll do great!\p"
	.string "And remember, no matter how far you go,\n"
	.string "you're never alone. We're all rooting for\l"
	.string "you back home!$"

Route503_Text_NurseryLady::
# 404 "data/maps/Route503/scripts.pory"
	.string "I'm sorry for blocking the path, Toxel\n"
	.string "and Pichu are having a playdate, and I\l"
	.string "don't want to interrupt them!\p"
	.string "The Nursery Man is supposed to be here\n"
	.string "to help me, but he's gone to the Pokémon\l"
	.string "Fan Club in Stemford Town and hasn't\l"
	.string "come back yet.\p"
	.string "I'm worried he might have lost track of\n"
	.string "time. He's always so busy talking about\l"
	.string "Pokémon that he forgets everything\l"
	.string "else!\p"
	.string "If you see him, could you please tell him\n"
	.string "to come back here right away?$"

Route503_Text_FatGuy::
# 438 "data/maps/Route503/scripts.pory"
	.string "Every Route has one or two rare\n"
	.string "Pokémon that are hard to find!\p"
	.string "If you're patient and keep looking, you\n"
	.string "might just find one!\p"
	.string "$"

Route503_Text_CamperAndrewIntro::
# 453 "data/maps/Route503/scripts.pory"
	.string "I love camping out in the wild and\n"
	.string "battling with my Pokémon!$"

Route503_Text_CamperAndrewDefeated::
# 457 "data/maps/Route503/scripts.pory"
	.string "Camping out in the wild is fun, but\n"
	.string "battling with my Pokémon is even\l"
	.string "better!$"

Route503_Text_CamperAndrewPostBattle::
# 461 "data/maps/Route503/scripts.pory"
	.string "Now to set up camp and relax for a bit!$"

Route503_Text_YoungsterEricIntro::
# 472 "data/maps/Route503/scripts.pory"
	.string "1, 2, 3! 1, 2, 3!\n"
	.string "I can beat you in 1, 2, 3 moves!$"

Route503_Text_YoungsterEricDefeated::
# 476 "data/maps/Route503/scripts.pory"
	.string "1, 2, 3!\n"
	.string "I lost in 1, 2, 3 moves!$"

Route503_Text_YoungsterEricPostBattle::
# 480 "data/maps/Route503/scripts.pory"
	.string "1, 2, 3! 1, 2, 3!\n"
	.string "Need to focus!$"

Route503_Text_PicnickerMargaretIntro::
# 491 "data/maps/Route503/scripts.pory"
	.string "Argh! You're getting in the way of my\n"
	.string "picnic!$"

Route503_Text_PicnickerMargaretDefeated::
# 495 "data/maps/Route503/scripts.pory"
	.string "Now my picnic is ruined...$"

Route503_Text_PicnickerMargaretPostBattle::
# 499 "data/maps/Route503/scripts.pory"
	.string "I'll just have to find a new spot for my\n"
	.string "picnic!$"

Route503_Text_RichboyCarlIntro::
# 510 "data/maps/Route503/scripts.pory"
	.string "I love to come here and watch all the\n"
	.string "poor people struggle to train their\l"
	.string "Pokémon!$"

Route503_Text_RichboyCarlDefeated::
# 514 "data/maps/Route503/scripts.pory"
	.string "...Can I pay you to forget that ever\n"
	.string "happened?$"

Route503_Text_RichboyCarlPostBattle::
# 518 "data/maps/Route503/scripts.pory"
	.string "I may have lost, but I'm still rich!$"
