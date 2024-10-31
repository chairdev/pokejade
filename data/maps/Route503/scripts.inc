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


Route503_Trigger_MeetAster1::
# 29 "data/maps/Route503/scripts.pory"
	lockall
# 31 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_0
# 32 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetAster1_Text_1
# 33 "data/maps/Route503/scripts.pory"
	closemessage
# 35 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_2
# 36 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetAster1_Text_3
# 37 "data/maps/Route503/scripts.pory"
	closemessage
# 39 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerApproachRival1
# 40 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route503/scripts.pory"
	goto Route503_MeetAster
	return


Route503_Trigger_MeetAster2::
# 46 "data/maps/Route503/scripts.pory"
	lockall
# 48 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_0
# 49 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetAster1_Text_1
# 50 "data/maps/Route503/scripts.pory"
	closemessage
# 52 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_2
# 53 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetAster1_Text_3
# 54 "data/maps/Route503/scripts.pory"
	closemessage
# 56 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerApproachRival2
# 57 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route503/scripts.pory"
	goto Route503_MeetAster
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

Route503_MeetAster::
# 73 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceUp
# 74 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_2
# 77 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Rival1
# 79 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceRight
# 81 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_0
# 82 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Aster1
# 84 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_2
# 85 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Rival2, MSGBOX_YESNO
# 87 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceUp
# 89 "data/maps/Route503/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route503_MeetAster_2
Route503_MeetAster_1:
# 98 "data/maps/Route503/scripts.pory"
	msgbox Route503_MeetAster_Text_0
# 100 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceRight
# 102 "data/maps/Route503/scripts.pory"
	speakername Route503_MeetAster_Text_1
# 103 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Aster2
# 105 "data/maps/Route503/scripts.pory"
	trainerbattle_no_intro TRAINER_ASTER_ROUTE_503, Route503_Text_AsterDefeated
# 107 "data/maps/Route503/scripts.pory"
	applymovement 8, Route503_AsterStepBack
# 108 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route503/scripts.pory"
	speakername Route503_MeetAster_Text_1
# 111 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Aster3
# 112 "data/maps/Route503/scripts.pory"
	closemessage
# 114 "data/maps/Route503/scripts.pory"
	applymovement 8, Route503_AsterLeave
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
	speakername Route503_MeetAster_Text_1
# 124 "data/maps/Route503/scripts.pory"
	msgbox Route503_MeetAster_Text_2
# 125 "data/maps/Route503/scripts.pory"
	closemessage
# 127 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_NORMAL
# 128 "data/maps/Route503/scripts.pory"
	msgbox Route503_MeetAster_Text_3
# 129 "data/maps/Route503/scripts.pory"
	waitmoncry
# 131 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 133 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_2
# 134 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Rival4
# 135 "data/maps/Route503/scripts.pory"
	closemessage
# 137 "data/maps/Route503/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/Route503/scripts.pory"
	special HealPlayerParty
# 139 "data/maps/Route503/scripts.pory"
	playse SE_USE_ITEM
# 140 "data/maps/Route503/scripts.pory"
	msgbox Route503_MeetAster_Text_4
# 141 "data/maps/Route503/scripts.pory"
	waitse
# 142 "data/maps/Route503/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 144 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_2
# 145 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Rival5
# 147 "data/maps/Route503/scripts.pory"
	switch VAR_STARTER_MON
# 148 "data/maps/Route503/scripts.pory"
	case 0, Route503_MeetAster_6
# 151 "data/maps/Route503/scripts.pory"
	case 1, Route503_MeetAster_7
# 154 "data/maps/Route503/scripts.pory"
	case 2, Route503_MeetAster_8
Route503_MeetAster_4:
# 159 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_2
# 160 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Rival6
# 161 "data/maps/Route503/scripts.pory"
	closemessage
# 163 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalLeave
# 164 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route503/scripts.pory"
	removeobject 9
# 167 "data/maps/Route503/scripts.pory"
	setvar VAR_ROUTE503_STATE, 1
# 168 "data/maps/Route503/scripts.pory"
	setflag FLAG_ROUTE_503_METASTER
# 170 "data/maps/Route503/scripts.pory"
	releaseall
	return

Route503_MeetAster_2:
Route503_MeetAster_9:
# 91 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Rival3, MSGBOX_YESNO
# 92 "data/maps/Route503/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route503_MeetAster_11
	goto Route503_MeetAster_9

Route503_MeetAster_6:
# 149 "data/maps/Route503/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
	goto Route503_MeetAster_4

Route503_MeetAster_7:
# 152 "data/maps/Route503/scripts.pory"
	giveitem ITEM_CHARCOAL
	goto Route503_MeetAster_4

Route503_MeetAster_8:
# 155 "data/maps/Route503/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
	goto Route503_MeetAster_4

Route503_MeetAster_11:
	goto Route503_MeetAster_1


# 173 "data/maps/Route503/scripts.pory"
Route503_Movement_PlayerFaceDown:
# 174 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 177 "data/maps/Route503/scripts.pory"
Route503_RivalFaceUp:
# 178 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_up
	step_end

# 181 "data/maps/Route503/scripts.pory"
Route503_RivalFaceRight:
# 182 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_right
	step_end

# 185 "data/maps/Route503/scripts.pory"
Route503_AsterStepBack:
# 186 "data/maps/Route503/scripts.pory"
	lock_facing_direction
# 187 "data/maps/Route503/scripts.pory"
	walk_right
# 188 "data/maps/Route503/scripts.pory"
	unlock_facing_direction
	step_end

# 191 "data/maps/Route503/scripts.pory"
Route503_AsterLeave:
# 192 "data/maps/Route503/scripts.pory"
	walk_left
# 193 "data/maps/Route503/scripts.pory"
	walk_up
# 193 "data/maps/Route503/scripts.pory"
	walk_up
# 193 "data/maps/Route503/scripts.pory"
	walk_up
# 193 "data/maps/Route503/scripts.pory"
	walk_up
# 193 "data/maps/Route503/scripts.pory"
	walk_up
# 193 "data/maps/Route503/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/Route503/scripts.pory"
Route503_RivalLeave:
# 197 "data/maps/Route503/scripts.pory"
	walk_right
# 197 "data/maps/Route503/scripts.pory"
	walk_right
# 197 "data/maps/Route503/scripts.pory"
	walk_right
# 197 "data/maps/Route503/scripts.pory"
	walk_right
# 197 "data/maps/Route503/scripts.pory"
	walk_right
# 197 "data/maps/Route503/scripts.pory"
	walk_right
# 197 "data/maps/Route503/scripts.pory"
	walk_right
# 198 "data/maps/Route503/scripts.pory"
	walk_down
# 198 "data/maps/Route503/scripts.pory"
	walk_down
# 198 "data/maps/Route503/scripts.pory"
	walk_down
# 198 "data/maps/Route503/scripts.pory"
	walk_down
	step_end

Route503_Trigger_GetPokeNav1::
# 270 "data/maps/Route503/scripts.pory"
	lockall
# 271 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 272 "data/maps/Route503/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_503_MOM_DELCATTY
# 274 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 275 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_0
# 276 "data/maps/Route503/scripts.pory"
	waitmoncry
# 277 "data/maps/Route503/scripts.pory"
	closemessage
# 279 "data/maps/Route503/scripts.pory"
	addobject 15, MAP_ROUTE503
# 280 "data/maps/Route503/scripts.pory"
	addobject 16, MAP_ROUTE503
# 281 "data/maps/Route503/scripts.pory"
	applymovement 16, Route503_Movement_DelcattyApproachPlayer1
# 282 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_FaceLeft
# 285 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_0
# 286 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_1
# 287 "data/maps/Route503/scripts.pory"
	closemessage
# 289 "data/maps/Route503/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 291 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 292 "data/maps/Route503/scripts.pory"
	applymovement 15, Route503_Movement_MomApproachPlayer1
# 293 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 295 "data/maps/Route503/scripts.pory"
	goto Route503_GetPokeNav
	return


Route503_Trigger_GetPokeNav2::
# 299 "data/maps/Route503/scripts.pory"
	lockall
# 300 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 302 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 303 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_0
# 304 "data/maps/Route503/scripts.pory"
	waitmoncry
# 305 "data/maps/Route503/scripts.pory"
	closemessage
# 307 "data/maps/Route503/scripts.pory"
	addobject 15, MAP_ROUTE503
# 308 "data/maps/Route503/scripts.pory"
	addobject 16, MAP_ROUTE503
# 309 "data/maps/Route503/scripts.pory"
	applymovement 16, Route503_Movement_DelcattyApproachPlayer2
# 310 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 311 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_FaceLeft
# 313 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_0
# 314 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_1
# 315 "data/maps/Route503/scripts.pory"
	closemessage
# 317 "data/maps/Route503/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 319 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 320 "data/maps/Route503/scripts.pory"
	applymovement 15, Route503_Movement_MomApproachPlayer2
# 321 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 323 "data/maps/Route503/scripts.pory"
	goto Route503_GetPokeNav
	return


Route503_GetPokeNav::
# 327 "data/maps/Route503/scripts.pory"
	speakername Route503_GetPokeNav_Text_0
# 328 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_GetPokeNav_Mom1
# 329 "data/maps/Route503/scripts.pory"
	closemessage
# 331 "data/maps/Route503/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 332 "data/maps/Route503/scripts.pory"
	msgbox Route503_GetPokeNav_Text_1
# 333 "data/maps/Route503/scripts.pory"
	waitfanfare
# 334 "data/maps/Route503/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 335 "data/maps/Route503/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 336 "data/maps/Route503/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 338 "data/maps/Route503/scripts.pory"
	speakername Route503_GetPokeNav_Text_0
# 339 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_GetPokeNav_Mom2
# 340 "data/maps/Route503/scripts.pory"
	closemessage
# 342 "data/maps/Route503/scripts.pory"
	delay 30
# 343 "data/maps/Route503/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 344 "data/maps/Route503/scripts.pory"
	msgbox Route503_GetPokeNav_Text_2
# 345 "data/maps/Route503/scripts.pory"
	waitfanfare
# 346 "data/maps/Route503/scripts.pory"
	closemessage
# 347 "data/maps/Route503/scripts.pory"
	delay 30
# 348 "data/maps/Route503/scripts.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 350 "data/maps/Route503/scripts.pory"
	speakername Route503_GetPokeNav_Text_0
# 351 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_GetPokeNav_Mom3
# 352 "data/maps/Route503/scripts.pory"
	closemessage
# 354 "data/maps/Route503/scripts.pory"
	setvar VAR_ROUTE503_STATE, 2
# 356 "data/maps/Route503/scripts.pory"
	fadedefaultbgm
# 357 "data/maps/Route503/scripts.pory"
	fadescreen FADE_TO_BLACK
# 358 "data/maps/Route503/scripts.pory"
	removeobject 15
# 359 "data/maps/Route503/scripts.pory"
	removeobject 16
# 360 "data/maps/Route503/scripts.pory"
	setflag FLAG_HIDE_ROUTE_503_MOM_DELCATTY
# 361 "data/maps/Route503/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 363 "data/maps/Route503/scripts.pory"
	releaseall
	return


# 366 "data/maps/Route503/scripts.pory"
Route503_Movement_FaceLeft:
# 367 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_left
	step_end

# 370 "data/maps/Route503/scripts.pory"
Route503_Movement_DelcattyApproachPlayer1:
# 371 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 371 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 371 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 371 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 371 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 371 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 371 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 372 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 372 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 372 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 372 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 372 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 373 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 376 "data/maps/Route503/scripts.pory"
Route503_Movement_DelcattyApproachPlayer2:
# 377 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 377 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 377 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 377 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 377 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 377 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 377 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 377 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 378 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 378 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 378 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 378 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 379 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 382 "data/maps/Route503/scripts.pory"
Route503_Movement_MomApproachPlayer1:
# 383 "data/maps/Route503/scripts.pory"
	walk_right
# 383 "data/maps/Route503/scripts.pory"
	walk_right
# 383 "data/maps/Route503/scripts.pory"
	walk_right
# 383 "data/maps/Route503/scripts.pory"
	walk_right
# 383 "data/maps/Route503/scripts.pory"
	walk_right
# 383 "data/maps/Route503/scripts.pory"
	walk_right
# 383 "data/maps/Route503/scripts.pory"
	walk_right
# 383 "data/maps/Route503/scripts.pory"
	walk_right
# 384 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 384 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 384 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 384 "data/maps/Route503/scripts.pory"
	walk_fast_up
	step_end

# 387 "data/maps/Route503/scripts.pory"
Route503_Movement_MomApproachPlayer2:
# 388 "data/maps/Route503/scripts.pory"
	walk_right
# 388 "data/maps/Route503/scripts.pory"
	walk_right
# 388 "data/maps/Route503/scripts.pory"
	walk_right
# 388 "data/maps/Route503/scripts.pory"
	walk_right
# 388 "data/maps/Route503/scripts.pory"
	walk_right
# 388 "data/maps/Route503/scripts.pory"
	walk_right
# 388 "data/maps/Route503/scripts.pory"
	walk_right
# 388 "data/maps/Route503/scripts.pory"
	walk_right
# 388 "data/maps/Route503/scripts.pory"
	walk_right
# 389 "data/maps/Route503/scripts.pory"
	walk_up
# 389 "data/maps/Route503/scripts.pory"
	walk_up
# 389 "data/maps/Route503/scripts.pory"
	walk_up
# 389 "data/maps/Route503/scripts.pory"
	walk_up
	step_end

Route503_EventScript_NurseryLady::
# 418 "data/maps/Route503/scripts.pory"
	lock
# 419 "data/maps/Route503/scripts.pory"
	faceplayer
# 420 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_NurseryLady
# 421 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_Toxel::
# 434 "data/maps/Route503/scripts.pory"
	lock
# 435 "data/maps/Route503/scripts.pory"
	faceplayer
# 436 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_TOXEL, CRY_MODE_NORMAL
# 437 "data/maps/Route503/scripts.pory"
	msgbox Route503_EventScript_Toxel_Text_0
# 438 "data/maps/Route503/scripts.pory"
	waitmoncry
# 439 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_Sudowoodo::
# 443 "data/maps/Route503/scripts.pory"
	lock
# 444 "data/maps/Route503/scripts.pory"
	faceplayer
# 445 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_NORMAL
# 446 "data/maps/Route503/scripts.pory"
	msgbox Route503_MeetAster_Text_3
# 447 "data/maps/Route503/scripts.pory"
	waitmoncry
# 448 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_Pichu::
# 452 "data/maps/Route503/scripts.pory"
	lock
# 453 "data/maps/Route503/scripts.pory"
	faceplayer
# 454 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 455 "data/maps/Route503/scripts.pory"
	msgbox Route503_EventScript_Pichu_Text_0
# 456 "data/maps/Route503/scripts.pory"
	waitmoncry
# 457 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_FatGuy::
# 461 "data/maps/Route503/scripts.pory"
	lock
# 462 "data/maps/Route503/scripts.pory"
	faceplayer
# 463 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_FatGuy
# 464 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_CamperAndrew::
# 476 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route503_Text_CamperAndrewIntro, Route503_Text_CamperAndrewDefeated
# 477 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_CamperAndrewPostBattle, MSGBOX_AUTOCLOSE
# 478 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_EventScript_YoungsterEric::
# 495 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_ERIC, Route503_Text_YoungsterEricIntro, Route503_Text_YoungsterEricDefeated
# 496 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_YoungsterEricPostBattle, MSGBOX_AUTOCLOSE
# 497 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_EventScript_PicnickerMargaret::
# 514 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_MARGARET, Route503_Text_PicnickerMargaretIntro, Route503_Text_PicnickerMargaretDefeated
# 515 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_PicnickerMargaretPostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_EventScript_RichboyCarl::
# 533 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_CARL_1, Route503_Text_RichboyCarlIntro, Route503_Text_RichboyCarlDefeated
# 534 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_RichboyCarlPostBattle, MSGBOX_AUTOCLOSE
# 535 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_Trigger_MeetAster1_Text_0:
# 31 "data/maps/Route503/scripts.pory"
	.string "???$"

Route503_Trigger_MeetAster1_Text_1:
# 32 "data/maps/Route503/scripts.pory"
	.string "What a pathetic excuse for a trainer!\n"
	.string "You're not even worth my time!$"

Route503_Trigger_MeetAster1_Text_2:
# 35 "data/maps/Route503/scripts.pory"
	.string "{RIVAL}$"

Route503_Trigger_MeetAster1_Text_3:
# 36 "data/maps/Route503/scripts.pory"
	.string "What did you just say?$"

Route503_MeetAster_Text_0:
# 98 "data/maps/Route503/scripts.pory"
	.string "That's what I thought!$"

Route503_MeetAster_Text_1:
# 102 "data/maps/Route503/scripts.pory"
	.string "Aster$"

Route503_MeetAster_Text_2:
# 124 "data/maps/Route503/scripts.pory"
	.string "Out of my way, stupid Sudowoodo!$"

Route503_MeetAster_Text_3:
# 128 "data/maps/Route503/scripts.pory"
	.string "Sudooo!$"

Route503_MeetAster_Text_4:
# 140 "data/maps/Route503/scripts.pory"
	.string "{RIVAL} healed your Pokémon!$"

Route503_Trigger_GetPokeNav1_Text_0:
# 275 "data/maps/Route503/scripts.pory"
	.string "Mrow!$"

Route503_Trigger_GetPokeNav1_Text_1:
# 286 "data/maps/Route503/scripts.pory"
	.string "{PLAYER}! Wait... up!$"

Route503_GetPokeNav_Text_0:
# 327 "data/maps/Route503/scripts.pory"
	.string "Mom$"

Route503_GetPokeNav_Text_1:
# 332 "data/maps/Route503/scripts.pory"
	.string "You received the PokéNav!$"

Route503_GetPokeNav_Text_2:
# 344 "data/maps/Route503/scripts.pory"
	.string "Registered Mom in the PokéNav!$"

Route503_EventScript_Toxel_Text_0:
# 437 "data/maps/Route503/scripts.pory"
	.string "Ssson!$"

Route503_EventScript_Pichu_Text_0:
# 455 "data/maps/Route503/scripts.pory"
	.string "Pichuuu!$"

Route503_Text_MeetAster_Rival1::
# 201 "data/maps/Route503/scripts.pory"
	.string "Oh, it's you, {PLAYER}!\n"
	.string "I'm glad you're here!\p"
	.string "Listen, I was busy working on my\n"
	.string "Pokédex when this guy suddenly\l"
	.string "challenged me to a battle!\p"
	.string "I didn't want to, but he wouldn't take\n"
	.string "no for an answer!\p"
	.string "I tried my best, but I just couldn't\n"
	.string "beat him!$"

Route503_Text_MeetAster_Aster1::
# 209 "data/maps/Route503/scripts.pory"
	.string "Hah! You really think you've got what it\n"
	.string "takes?\n"
	.string "Weak trainers like you are better off\l"
	.string "cheering from the sidelines.\p"
	.string "A real trainer has strength and skill,\n"
	.string "and that's why I'm the best around.\p"
	.string "I'm Aster. Try to keep up, if you can!$"

Route503_Text_MeetAster_Rival2::
# 216 "data/maps/Route503/scripts.pory"
	.string "Gah! You're so annoying!\n"
	.string "You know what? I'm going to make you\l"
	.string "pay for this!\p"
	.string "{PLAYER}, go and show him what you're\n"
	.string "made of!\n"
	.string "$"

Route503_Text_MeetAster_Rival3::
# 222 "data/maps/Route503/scripts.pory"
	.string "What's that, {PLAYER}?\n"
	.string "I can't hear you!\p"
	.string "You're going to battle him.\n"
	.string "...Right?$"

Route503_Text_MeetAster_Aster2::
# 228 "data/maps/Route503/scripts.pory"
	.string "Oh, so you think you're tough?\p"
	.string "You might be better than your friend\n"
	.string "here, but that's not saying much!\p"
	.string "Let me show you what a real battle\n"
	.string "looks like.$"

Route503_Text_AsterDefeated::
# 235 "data/maps/Route503/scripts.pory"
	.string "What? No way!\n"
	.string "Losing to you? That shouldn't happen!$"

Route503_Text_MeetAster_Aster3::
# 239 "data/maps/Route503/scripts.pory"
	.string "These Pokémon just didn't cut it!\n"
	.string "I need stronger ones, that's all.\p"
	.string "Next time, youASTERll see what I can\n"
	.string "really do.$"

Route503_Text_MeetAster_Rival4::
# 245 "data/maps/Route503/scripts.pory"
	.string "...What a jerk!\n"
	.string "I can't believe I lost to him!\p"
	.string "Did you see how he treated his Pokémon?\n"
	.string "He's nothing but a bully!\p"
	.string "But, wow! You're amazing, {PLAYER}!\n"
	.string "You really showed him!\p"
	.string "Oh, I almost forgot!\n"
	.string "Your Pokémon must be tired after that\l"
	.string "battle!\p"
	.string "I'll heal them up for you!\p"
	.string "$"

Route503_Text_MeetAster_Rival5::
# 254 "data/maps/Route503/scripts.pory"
	.string "There we go! All healed up!\p"
	.string "...I'm still not sure about this whole\n"
	.string "battling thing, but I'm glad I have you\l"
	.string "to help me out!\p"
	.string "Oh, and I almost forgot! I found this\n"
	.string "while I was out looking for Pokémon!\p"
	.string "I think it's a held item! You should take\n"
	.string "it! I'm sure you'll put it to good use!$"

Route503_Text_MeetAster_Rival6::
# 262 "data/maps/Route503/scripts.pory"
	.string "OK! That's enough chit-chat!\n"
	.string "Let's get back to training!\p"
	.string "I'll see you later, {PLAYER}! Let's\n"
	.string "battle again soon!$"

Route503_Text_GetPokeNav_Mom1::
# 392 "data/maps/Route503/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Thank goodness I caught you in time!\p"
	.string "I knew you'd be heading into Kismet\n"
	.string "Forest soon, and I wanted to make sure\l"
	.string "you had something important before you\l"
	.string "went any further.\p"
	.string "Here, I got this for you--a Pokémon\n"
	.string "Navigator, or PokéNav for short!$"

Route503_Text_GetPokeNav_Mom2::
# 399 "data/maps/Route503/scripts.pory"
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
# 408 "data/maps/Route503/scripts.pory"
	.string "{PLAYER}...\p"
	.string "Be careful out there, okay? I know\n"
	.string "you'll do great!\p"
	.string "And remember, no matter how far you go,\n"
	.string "you're never alone. We're all rooting for\l"
	.string "you back home!$"

Route503_Text_NurseryLady::
# 424 "data/maps/Route503/scripts.pory"
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
# 467 "data/maps/Route503/scripts.pory"
	.string "Every Route has one or two rare\n"
	.string "Pokémon that are hard to find!\p"
	.string "If you're patient and keep looking, you\n"
	.string "might just find one!\p"
	.string "$"

Route503_Text_CamperAndrewIntro::
# 482 "data/maps/Route503/scripts.pory"
	.string "I love camping out in the wild and\n"
	.string "battling with my Pokémon!$"

Route503_Text_CamperAndrewDefeated::
# 486 "data/maps/Route503/scripts.pory"
	.string "Camping out in the wild is fun, but\n"
	.string "battling with my Pokémon is even\l"
	.string "better!$"

Route503_Text_CamperAndrewPostBattle::
# 490 "data/maps/Route503/scripts.pory"
	.string "Now to set up camp and relax for a bit!$"

Route503_Text_YoungsterEricIntro::
# 501 "data/maps/Route503/scripts.pory"
	.string "1, 2, 3! 1, 2, 3!\n"
	.string "I can beat you in 1, 2, 3 moves!$"

Route503_Text_YoungsterEricDefeated::
# 505 "data/maps/Route503/scripts.pory"
	.string "1, 2, 3!\n"
	.string "I lost in 1, 2, 3 moves!$"

Route503_Text_YoungsterEricPostBattle::
# 509 "data/maps/Route503/scripts.pory"
	.string "1, 2, 3! 1, 2, 3!\n"
	.string "Need to focus!$"

Route503_Text_PicnickerMargaretIntro::
# 520 "data/maps/Route503/scripts.pory"
	.string "Argh! You're getting in the way of my\n"
	.string "picnic!$"

Route503_Text_PicnickerMargaretDefeated::
# 524 "data/maps/Route503/scripts.pory"
	.string "Now my picnic is ruined...$"

Route503_Text_PicnickerMargaretPostBattle::
# 528 "data/maps/Route503/scripts.pory"
	.string "I'll just have to find a new spot for my\n"
	.string "picnic!$"

Route503_Text_RichboyCarlIntro::
# 539 "data/maps/Route503/scripts.pory"
	.string "I love to come here and watch all the\n"
	.string "poor people struggle to train their\l"
	.string "Pokémon!$"

Route503_Text_RichboyCarlDefeated::
# 543 "data/maps/Route503/scripts.pory"
	.string "...Can I pay you to forget that ever\n"
	.string "happened?$"

Route503_Text_RichboyCarlPostBattle::
# 547 "data/maps/Route503/scripts.pory"
	.string "I may have lost, but I'm still rich!$"
