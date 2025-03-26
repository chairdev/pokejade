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
	goto_if_unset FLAG_HIDE_ROUTE_302_RIVAL, Route503_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
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
	trainerbattle_no_intro TRAINER_ASTER_ROUTE_302, Route503_Text_AsterDefeated
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
	closemessage
# 142 "data/maps/Route503/scripts.pory"
	waitse
# 143 "data/maps/Route503/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 145 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_2
# 146 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Rival5
# 148 "data/maps/Route503/scripts.pory"
	switch VAR_STARTER_MON
# 149 "data/maps/Route503/scripts.pory"
	case 0, Route503_MeetAster_6
# 152 "data/maps/Route503/scripts.pory"
	case 1, Route503_MeetAster_7
# 155 "data/maps/Route503/scripts.pory"
	case 2, Route503_MeetAster_8
Route503_MeetAster_4:
# 160 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_2
# 161 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetAster_Rival6
# 162 "data/maps/Route503/scripts.pory"
	closemessage
# 164 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalLeave
# 165 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route503/scripts.pory"
	removeobject 9
# 168 "data/maps/Route503/scripts.pory"
	setvar VAR_ROUTE503_STATE, 1
# 169 "data/maps/Route503/scripts.pory"
	setflag FLAG_HIDE_ROUTE_302_ASTER
# 171 "data/maps/Route503/scripts.pory"
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
# 150 "data/maps/Route503/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
	goto Route503_MeetAster_4

Route503_MeetAster_7:
# 153 "data/maps/Route503/scripts.pory"
	giveitem ITEM_CHARCOAL
	goto Route503_MeetAster_4

Route503_MeetAster_8:
# 156 "data/maps/Route503/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
	goto Route503_MeetAster_4

Route503_MeetAster_11:
	goto Route503_MeetAster_1


# 174 "data/maps/Route503/scripts.pory"
Route503_Movement_PlayerFaceDown:
# 175 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 178 "data/maps/Route503/scripts.pory"
Route503_RivalFaceUp:
# 179 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_up
	step_end

# 182 "data/maps/Route503/scripts.pory"
Route503_RivalFaceRight:
# 183 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_right
	step_end

# 186 "data/maps/Route503/scripts.pory"
Route503_AsterStepBack:
# 187 "data/maps/Route503/scripts.pory"
	lock_facing_direction
# 188 "data/maps/Route503/scripts.pory"
	walk_right
# 189 "data/maps/Route503/scripts.pory"
	unlock_facing_direction
	step_end

# 192 "data/maps/Route503/scripts.pory"
Route503_AsterLeave:
# 193 "data/maps/Route503/scripts.pory"
	walk_left
# 194 "data/maps/Route503/scripts.pory"
	walk_up
# 194 "data/maps/Route503/scripts.pory"
	walk_up
# 194 "data/maps/Route503/scripts.pory"
	walk_up
# 194 "data/maps/Route503/scripts.pory"
	walk_up
# 194 "data/maps/Route503/scripts.pory"
	walk_up
# 194 "data/maps/Route503/scripts.pory"
	walk_up
	step_end

# 197 "data/maps/Route503/scripts.pory"
Route503_RivalLeave:
# 198 "data/maps/Route503/scripts.pory"
	walk_right
# 198 "data/maps/Route503/scripts.pory"
	walk_right
# 198 "data/maps/Route503/scripts.pory"
	walk_right
# 198 "data/maps/Route503/scripts.pory"
	walk_right
# 198 "data/maps/Route503/scripts.pory"
	walk_right
# 198 "data/maps/Route503/scripts.pory"
	walk_right
# 198 "data/maps/Route503/scripts.pory"
	walk_right
# 199 "data/maps/Route503/scripts.pory"
	walk_down
# 199 "data/maps/Route503/scripts.pory"
	walk_down
# 199 "data/maps/Route503/scripts.pory"
	walk_down
# 199 "data/maps/Route503/scripts.pory"
	walk_down
	step_end

Route503_Trigger_GetPokeNav1::
# 272 "data/maps/Route503/scripts.pory"
	lockall
# 273 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 274 "data/maps/Route503/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_503_MOM_DELCATTY
# 276 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 277 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_0
# 278 "data/maps/Route503/scripts.pory"
	waitmoncry
# 279 "data/maps/Route503/scripts.pory"
	closemessage
# 281 "data/maps/Route503/scripts.pory"
	addobject 15, MAP_ROUTE503
# 282 "data/maps/Route503/scripts.pory"
	addobject 16, MAP_ROUTE503
# 283 "data/maps/Route503/scripts.pory"
	applymovement 16, Route503_Movement_DelcattyApproachPlayer1
# 284 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_FaceLeft
# 287 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_0
# 288 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_1
# 289 "data/maps/Route503/scripts.pory"
	closemessage
# 291 "data/maps/Route503/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 293 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 294 "data/maps/Route503/scripts.pory"
	applymovement 15, Route503_Movement_MomApproachPlayer1
# 295 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 297 "data/maps/Route503/scripts.pory"
	goto Route503_GetPokeNav
	return


Route503_Trigger_GetPokeNav2::
# 301 "data/maps/Route503/scripts.pory"
	lockall
# 302 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 304 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 305 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_0
# 306 "data/maps/Route503/scripts.pory"
	waitmoncry
# 307 "data/maps/Route503/scripts.pory"
	closemessage
# 309 "data/maps/Route503/scripts.pory"
	addobject 15, MAP_ROUTE503
# 310 "data/maps/Route503/scripts.pory"
	addobject 16, MAP_ROUTE503
# 311 "data/maps/Route503/scripts.pory"
	applymovement 16, Route503_Movement_DelcattyApproachPlayer2
# 312 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 313 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_FaceLeft
# 315 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetAster1_Text_0
# 316 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_GetPokeNav1_Text_1
# 317 "data/maps/Route503/scripts.pory"
	closemessage
# 319 "data/maps/Route503/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 321 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 322 "data/maps/Route503/scripts.pory"
	applymovement 15, Route503_Movement_MomApproachPlayer2
# 323 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route503/scripts.pory"
	goto Route503_GetPokeNav
	return


Route503_GetPokeNav::
# 329 "data/maps/Route503/scripts.pory"
	speakername Route503_GetPokeNav_Text_0
# 330 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_GetPokeNav_Mom1
# 331 "data/maps/Route503/scripts.pory"
	closemessage
# 333 "data/maps/Route503/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 334 "data/maps/Route503/scripts.pory"
	msgbox Route503_GetPokeNav_Text_1
# 335 "data/maps/Route503/scripts.pory"
	waitfanfare
# 336 "data/maps/Route503/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 337 "data/maps/Route503/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 338 "data/maps/Route503/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 340 "data/maps/Route503/scripts.pory"
	speakername Route503_GetPokeNav_Text_0
# 341 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_GetPokeNav_Mom2
# 342 "data/maps/Route503/scripts.pory"
	closemessage
# 344 "data/maps/Route503/scripts.pory"
	delay 30
# 345 "data/maps/Route503/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 346 "data/maps/Route503/scripts.pory"
	msgbox Route503_GetPokeNav_Text_2
# 347 "data/maps/Route503/scripts.pory"
	waitfanfare
# 348 "data/maps/Route503/scripts.pory"
	closemessage
# 349 "data/maps/Route503/scripts.pory"
	delay 30
# 350 "data/maps/Route503/scripts.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 352 "data/maps/Route503/scripts.pory"
	speakername Route503_GetPokeNav_Text_0
# 353 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_GetPokeNav_Mom3
# 354 "data/maps/Route503/scripts.pory"
	closemessage
# 356 "data/maps/Route503/scripts.pory"
	setvar VAR_ROUTE503_STATE, 2
# 358 "data/maps/Route503/scripts.pory"
	fadedefaultbgm
# 359 "data/maps/Route503/scripts.pory"
	fadescreen FADE_TO_BLACK
# 360 "data/maps/Route503/scripts.pory"
	removeobject 15
# 361 "data/maps/Route503/scripts.pory"
	removeobject 16
# 362 "data/maps/Route503/scripts.pory"
	setflag FLAG_HIDE_ROUTE_503_MOM_DELCATTY
# 363 "data/maps/Route503/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 365 "data/maps/Route503/scripts.pory"
	releaseall
	return


# 368 "data/maps/Route503/scripts.pory"
Route503_Movement_FaceLeft:
# 369 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_left
	step_end

# 372 "data/maps/Route503/scripts.pory"
Route503_Movement_DelcattyApproachPlayer1:
# 373 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 374 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 374 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 374 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 374 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 374 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 375 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 378 "data/maps/Route503/scripts.pory"
Route503_Movement_DelcattyApproachPlayer2:
# 379 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 379 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 379 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 379 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 379 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 379 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 379 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 379 "data/maps/Route503/scripts.pory"
	walk_fast_right
# 380 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 380 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 380 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 380 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 380 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 381 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 384 "data/maps/Route503/scripts.pory"
Route503_Movement_MomApproachPlayer1:
# 385 "data/maps/Route503/scripts.pory"
	walk_right
# 385 "data/maps/Route503/scripts.pory"
	walk_right
# 385 "data/maps/Route503/scripts.pory"
	walk_right
# 385 "data/maps/Route503/scripts.pory"
	walk_right
# 385 "data/maps/Route503/scripts.pory"
	walk_right
# 385 "data/maps/Route503/scripts.pory"
	walk_right
# 385 "data/maps/Route503/scripts.pory"
	walk_right
# 385 "data/maps/Route503/scripts.pory"
	walk_right
# 386 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 386 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 386 "data/maps/Route503/scripts.pory"
	walk_fast_up
# 386 "data/maps/Route503/scripts.pory"
	walk_fast_up
	step_end

# 389 "data/maps/Route503/scripts.pory"
Route503_Movement_MomApproachPlayer2:
# 390 "data/maps/Route503/scripts.pory"
	walk_right
# 390 "data/maps/Route503/scripts.pory"
	walk_right
# 390 "data/maps/Route503/scripts.pory"
	walk_right
# 390 "data/maps/Route503/scripts.pory"
	walk_right
# 390 "data/maps/Route503/scripts.pory"
	walk_right
# 390 "data/maps/Route503/scripts.pory"
	walk_right
# 390 "data/maps/Route503/scripts.pory"
	walk_right
# 390 "data/maps/Route503/scripts.pory"
	walk_right
# 390 "data/maps/Route503/scripts.pory"
	walk_right
# 391 "data/maps/Route503/scripts.pory"
	walk_up
# 391 "data/maps/Route503/scripts.pory"
	walk_up
# 391 "data/maps/Route503/scripts.pory"
	walk_up
# 391 "data/maps/Route503/scripts.pory"
	walk_up
	step_end

Route503_EventScript_NurseryLady::
# 420 "data/maps/Route503/scripts.pory"
	lock
# 421 "data/maps/Route503/scripts.pory"
	faceplayer
# 422 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_NurseryLady
# 423 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_Toxel::
# 436 "data/maps/Route503/scripts.pory"
	lock
# 437 "data/maps/Route503/scripts.pory"
	faceplayer
# 438 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_TOXEL, CRY_MODE_NORMAL
# 439 "data/maps/Route503/scripts.pory"
	msgbox Route503_EventScript_Toxel_Text_0
# 440 "data/maps/Route503/scripts.pory"
	waitmoncry
# 441 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_Sudowoodo::
# 445 "data/maps/Route503/scripts.pory"
	lock
# 446 "data/maps/Route503/scripts.pory"
	faceplayer
# 447 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_NORMAL
# 448 "data/maps/Route503/scripts.pory"
	msgbox Route503_EventScript_Sudowoodo_Text_0
# 449 "data/maps/Route503/scripts.pory"
	waitmoncry
# 450 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_Pichu::
# 454 "data/maps/Route503/scripts.pory"
	lock
# 455 "data/maps/Route503/scripts.pory"
	faceplayer
# 456 "data/maps/Route503/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 457 "data/maps/Route503/scripts.pory"
	msgbox Route503_EventScript_Pichu_Text_0
# 458 "data/maps/Route503/scripts.pory"
	waitmoncry
# 459 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_FatGuy::
# 463 "data/maps/Route503/scripts.pory"
	lock
# 464 "data/maps/Route503/scripts.pory"
	faceplayer
# 465 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_FatGuy
# 466 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_Woman::
# 477 "data/maps/Route503/scripts.pory"
	lock
# 478 "data/maps/Route503/scripts.pory"
	faceplayer
# 479 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_Woman
# 480 "data/maps/Route503/scripts.pory"
	release
	return


Route503_EventScript_CamperAndrew::
# 491 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route503_Text_CamperAndrewIntro, Route503_Text_CamperAndrewDefeated
# 492 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_CamperAndrewPostBattle, MSGBOX_AUTOCLOSE
# 493 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_EventScript_YoungsterEric::
# 510 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_ERIC, Route503_Text_YoungsterEricIntro, Route503_Text_YoungsterEricDefeated
# 511 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_YoungsterEricPostBattle, MSGBOX_AUTOCLOSE
# 512 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_EventScript_PicnickerMargaret::
# 529 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_MARGARET, Route503_Text_PicnickerMargaretIntro, Route503_Text_PicnickerMargaretDefeated
# 530 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_PicnickerMargaretPostBattle, MSGBOX_AUTOCLOSE
# 531 "data/maps/Route503/scripts.pory"
	waitmessage
	end


Route503_EventScript_RichboyCarl::
# 548 "data/maps/Route503/scripts.pory"
	trainerbattle_single TRAINER_CARL_1, Route503_Text_RichboyCarlIntro, Route503_Text_RichboyCarlDefeated
# 549 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_RichboyCarlPostBattle, MSGBOX_AUTOCLOSE
# 550 "data/maps/Route503/scripts.pory"
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
	.string "Sudo!\nWoo...$"

Route503_MeetAster_Text_4:
# 140 "data/maps/Route503/scripts.pory"
	.string "{RIVAL} healed your Pokémon!$"

Route503_Trigger_GetPokeNav1_Text_0:
# 277 "data/maps/Route503/scripts.pory"
	.string "Mrow!$"

Route503_Trigger_GetPokeNav1_Text_1:
# 288 "data/maps/Route503/scripts.pory"
	.string "{PLAYER}! Wait... up!$"

Route503_GetPokeNav_Text_0:
# 329 "data/maps/Route503/scripts.pory"
	.string "Mom$"

Route503_GetPokeNav_Text_1:
# 334 "data/maps/Route503/scripts.pory"
	.string "You received the PokéNav!$"

Route503_GetPokeNav_Text_2:
# 346 "data/maps/Route503/scripts.pory"
	.string "Registered Mom in the PokéNav!$"

Route503_EventScript_Toxel_Text_0:
# 439 "data/maps/Route503/scripts.pory"
	.string "Ssson!$"

Route503_EventScript_Sudowoodo_Text_0:
# 448 "data/maps/Route503/scripts.pory"
	.string "Sudooo!$"

Route503_EventScript_Pichu_Text_0:
# 457 "data/maps/Route503/scripts.pory"
	.string "Pichuuu!$"

Route503_Text_MeetAster_Rival1::
# 202 "data/maps/Route503/scripts.pory"
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
# 210 "data/maps/Route503/scripts.pory"
	.string "Hah! You really think you've got what it\n"
	.string "takes?\p"
	.string "Weak trainers like you are better off\n"
	.string "cheering from the sidelines.\p"
	.string "A real trainer has strength and skill,\n"
	.string "and that's why I'm the best around.\p"
	.string "I'm Aster.\n"
	.string "Try to keep up, if you can!$"

Route503_Text_MeetAster_Rival2::
# 218 "data/maps/Route503/scripts.pory"
	.string "Gah! You're so annoying!\n"
	.string "You know what? I'm going to make you\l"
	.string "pay for this!\p"
	.string "{PLAYER}, go and show him what you're\n"
	.string "made of!\n"
	.string "$"

Route503_Text_MeetAster_Rival3::
# 224 "data/maps/Route503/scripts.pory"
	.string "What's that, {PLAYER}?\n"
	.string "I can't hear you!\p"
	.string "You're going to battle him.\n"
	.string "...Right?$"

Route503_Text_MeetAster_Aster2::
# 230 "data/maps/Route503/scripts.pory"
	.string "Oh, so you think you're tough?\p"
	.string "You might be better than your friend\n"
	.string "here, but that's not saying much!\p"
	.string "Let me show you what a real battle\n"
	.string "looks like.$"

Route503_Text_AsterDefeated::
# 237 "data/maps/Route503/scripts.pory"
	.string "What? No way!\n"
	.string "Losing to you? That shouldn't happen!$"

Route503_Text_MeetAster_Aster3::
# 241 "data/maps/Route503/scripts.pory"
	.string "These Pokémon just didn't cut it!\n"
	.string "I need stronger ones, that's all.\p"
	.string "Next time, you'll see what I can really\n"
	.string "do.$"

Route503_Text_MeetAster_Rival4::
# 247 "data/maps/Route503/scripts.pory"
	.string "...What a jerk!\n"
	.string "I can't believe I lost to him!\p"
	.string "Did you see how he treated his Pokémon?\n"
	.string "He's nothing but a bully!\p"
	.string "But, wow! You're amazing, {PLAYER}!\n"
	.string "You really showed him!\p"
	.string "Oh, I almost forgot!\n"
	.string "Your Pokémon must be tired after that\l"
	.string "battle!\p"
	.string "I'll heal them up for you!$"

Route503_Text_MeetAster_Rival5::
# 256 "data/maps/Route503/scripts.pory"
	.string "There we go! All healed up!\p"
	.string "...I'm still not sure about this whole\n"
	.string "battling thing, but I'm glad I have you\l"
	.string "to help me out!\p"
	.string "Oh, and I almost forgot! I found this\n"
	.string "while I was out looking for Pokémon!\p"
	.string "I think it's a held item! You should take\n"
	.string "it! I'm sure you'll put it to good use!$"

Route503_Text_MeetAster_Rival6::
# 264 "data/maps/Route503/scripts.pory"
	.string "OK! That's enough chit-chat!\n"
	.string "Let's get back to training!\p"
	.string "I'll see you later, {PLAYER}! Let's\n"
	.string "battle again soon!$"

Route503_Text_GetPokeNav_Mom1::
# 394 "data/maps/Route503/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Thank goodness I caught you in time!\p"
	.string "I knew you'd be heading into Kismet\n"
	.string "Forest soon, and I wanted to make sure\l"
	.string "you had something important before you\l"
	.string "went any further.\p"
	.string "Here, I got this for you--a Pokémon\n"
	.string "Navigator, or PokéNav for short!$"

Route503_Text_GetPokeNav_Mom2::
# 401 "data/maps/Route503/scripts.pory"
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
# 410 "data/maps/Route503/scripts.pory"
	.string "{PLAYER}...\p"
	.string "Be careful out there, okay? I know\n"
	.string "you'll do great!\p"
	.string "And remember, no matter how far you go,\n"
	.string "you're never alone. We're all rooting for\l"
	.string "you back home!$"

Route503_Text_NurseryLady::
# 426 "data/maps/Route503/scripts.pory"
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
# 469 "data/maps/Route503/scripts.pory"
	.string "Every Route has one or two rare\n"
	.string "Pokémon that are hard to find!\p"
	.string "If you're patient and keep looking, you\n"
	.string "might just find one!\p"
	.string "$"

Route503_Text_Woman::
# 483 "data/maps/Route503/scripts.pory"
	.string "When you're in a wild battle, you can\n"
	.string "quickly move the cursor to the Run\l"
	.string "button by pressing the B button!\p"
	.string "It's a handy trick if you're in a hurry\n"
	.string "to get away from a Pokémon!$"

Route503_Text_CamperAndrewIntro::
# 497 "data/maps/Route503/scripts.pory"
	.string "I love camping out in the wild and\n"
	.string "battling with my Pokémon!$"

Route503_Text_CamperAndrewDefeated::
# 501 "data/maps/Route503/scripts.pory"
	.string "Camping out in the wild is fun, but\n"
	.string "battling with my Pokémon is even\l"
	.string "better!$"

Route503_Text_CamperAndrewPostBattle::
# 505 "data/maps/Route503/scripts.pory"
	.string "Now to set up camp and relax for a bit!$"

Route503_Text_YoungsterEricIntro::
# 516 "data/maps/Route503/scripts.pory"
	.string "1, 2, 3! 1, 2, 3!\n"
	.string "I can beat you in 1, 2, 3 moves!$"

Route503_Text_YoungsterEricDefeated::
# 520 "data/maps/Route503/scripts.pory"
	.string "1, 2, 3!\n"
	.string "I lost in 1, 2, 3 moves!$"

Route503_Text_YoungsterEricPostBattle::
# 524 "data/maps/Route503/scripts.pory"
	.string "1, 2, 3! 1, 2, 3!\n"
	.string "Need to focus!$"

Route503_Text_PicnickerMargaretIntro::
# 535 "data/maps/Route503/scripts.pory"
	.string "Argh! You're getting in the way of my\n"
	.string "picnic!$"

Route503_Text_PicnickerMargaretDefeated::
# 539 "data/maps/Route503/scripts.pory"
	.string "Now my picnic is ruined...$"

Route503_Text_PicnickerMargaretPostBattle::
# 543 "data/maps/Route503/scripts.pory"
	.string "I'll just have to find a new spot for my\n"
	.string "picnic!$"

Route503_Text_RichboyCarlIntro::
# 554 "data/maps/Route503/scripts.pory"
	.string "I love to come here and watch all the\n"
	.string "poor people struggle to train their\l"
	.string "Pokémon!$"

Route503_Text_RichboyCarlDefeated::
# 558 "data/maps/Route503/scripts.pory"
	.string "...Can I pay you to forget that ever\n"
	.string "happened?$"

Route503_Text_RichboyCarlPostBattle::
# 562 "data/maps/Route503/scripts.pory"
	.string "I may have lost, but I'm still rich!$"
