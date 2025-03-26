DolomiteCity_TrainerSchool_MapScripts::
# 6 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DolomiteCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DolomiteCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DolomiteCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

DolomiteCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	map_script_2 VAR_DOLOMITE_CITY_STATE, 0, DolomiteCity_TrainerSchool_MapScript_DeliverParcel
	.2byte 0


DolomiteCity_TrainerSchool_MapScript_DeliverParcel::
# 16 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	lockall
# 18 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DolomiteCity_TrainerSchool_Movement_DeliverParcel_WalkIn
# 20 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru1
# 21 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 23 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	call DolomiteCity_TrainerSchool_MapScript_MegaEvoGuruExclamation
# 25 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru2
# 26 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 28 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DolomiteCity_TrainerSchool_Movement_DeliverParcel_ApproachMegaEvoGuru
# 29 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 31 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 32 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 34 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru3
# 36 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	call DolomiteCity_TrainerSchool_MapScript_MegaEvoGuruExclamation
# 38 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru4
# 39 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 40 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	setflag FLAG_EXP_SHARE
# 41 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 43 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru5
# 44 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 46 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	setvar VAR_DOLOMITE_CITY_STATE, 1
# 47 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 3
# 48 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	removeitem ITEM_PARCEL
# 50 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	releaseall
	return


DolomiteCity_TrainerSchool_MapScript_MegaEvoGuruExclamation::
# 54 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_PIN
# 55 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 56 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitse
# 57 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 58 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	delay 16
	return


# 61 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
DolomiteCity_TrainerSchool_Movement_DeliverParcel_WalkIn:
# 62 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_slow_up
# 62 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_slow_up
# 62 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_slow_up
# 62 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_slow_up
	step_end

# 65 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
DolomiteCity_TrainerSchool_Movement_DeliverParcel_ApproachMegaEvoGuru:
# 66 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_right
# 66 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_right
# 67 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_up
# 67 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_up
# 67 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_up
# 68 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_in_place_faster_left
	step_end

DolomiteCity_TrainerSchool_EventScript_MegaEvoGuru::
# 98 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	lock
# 99 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	faceplayer
# 100 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_MegaEvoGuru
# 101 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 102 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	release
	return


DolomiteCity_TrainerSchool_EventScript_Geo::
# 110 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	lockall
# 111 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	faceplayer
# 113 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	speakername DolomiteCity_TrainerSchool_EventScript_Geo_Text_0
# 114 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Geo_Text1
# 116 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 117 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 119 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	speakername DolomiteCity_TrainerSchool_EventScript_Geo_Text_1
# 120 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Geo_Text2
# 122 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	faceplayer
# 124 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Geo_Text3
# 126 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, DolomiteCity_TrainerSchool_EventScript_Geo_Text_2, DolomiteCity_TrainerSchool_EventScript_Geo_Text_3
# 129 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DolomiteCity_TrainerSchool_EventScript_Geo_2
DolomiteCity_TrainerSchool_EventScript_Geo_1:
# 230 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	releaseall
	return

DolomiteCity_TrainerSchool_EventScript_Geo_2:
# 130 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Geo_Text_Accept
# 131 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 133 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_PIN
# 134 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 135 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitse
# 136 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 137 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	delay 16
# 139 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Geo_Text_RivalIntro
# 140 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 142 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	checkplayergender
# 143 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DolomiteCity_TrainerSchool_EventScript_Geo_6
# 149 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
DolomiteCity_TrainerSchool_EventScript_Geo_5:
# 152 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement 3, DolomiteCity_TrainerSchool_Movement_RivalApproachPlayer
# 153 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 154 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 156 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	speakername DolomiteCity_TrainerSchool_EventScript_Geo_Text_4
# 157 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DolomiteCity_TrainerSchool_EventScript_Geo_10
# 176 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Rival_Text1_Holly
# 177 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 179 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	switch VAR_STARTER_MON
# 180 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	case 0, DolomiteCity_TrainerSchool_EventScript_Geo_18
# 183 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	case 1, DolomiteCity_TrainerSchool_EventScript_Geo_19
# 186 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	case 2, DolomiteCity_TrainerSchool_EventScript_Geo_20
DolomiteCity_TrainerSchool_EventScript_Geo_9:
# 192 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 194 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	speakername DolomiteCity_TrainerSchool_EventScript_Geo_Text_1
# 195 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Geo_Text_AfterBattle
# 196 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 198 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	delay 16
# 200 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_EXIT
# 201 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	removeobject 2
# 202 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitse
# 203 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 204 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 205 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	delay 16
# 206 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 208 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	speakername DolomiteCity_TrainerSchool_EventScript_Geo_Text_4
# 209 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_EventScript_Geo_Text_5
# 211 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 213 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement 3, DolomiteCity_TrainerSchool_Movement_RivalLeave
# 214 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 216 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	fadescreen FADE_TO_BLACK
# 217 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	delay 16
# 218 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_EXIT
# 219 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	removeobject 3
# 220 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitse
# 221 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	delay 16
# 222 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	setflag FLAG_HIDE_TRAINER_SCHOOL_GEO_RIVAL
# 223 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 225 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	setflag FLAG_HIDE_DOLOMITE_CITY_GYM_GUIDE
	goto DolomiteCity_TrainerSchool_EventScript_Geo_1

DolomiteCity_TrainerSchool_EventScript_Geo_6:
# 145 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	goto DolomiteCity_TrainerSchool_EventScript_Geo_5

DolomiteCity_TrainerSchool_EventScript_Geo_10:
# 159 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Rival_Text1_Caden
# 160 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 162 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	switch VAR_STARTER_MON
# 163 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	case 0, DolomiteCity_TrainerSchool_EventScript_Geo_14
# 166 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	case 1, DolomiteCity_TrainerSchool_EventScript_Geo_15
# 169 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	case 2, DolomiteCity_TrainerSchool_EventScript_Geo_16
	goto DolomiteCity_TrainerSchool_EventScript_Geo_9

DolomiteCity_TrainerSchool_EventScript_Geo_14:
# 164 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_DOLOMITE_CHIKORITA, DolomiteCity_TrainerSchool_CadenDefeated
	goto DolomiteCity_TrainerSchool_EventScript_Geo_9

DolomiteCity_TrainerSchool_EventScript_Geo_15:
# 167 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_DOLOMITE_CYNDAQUIL, DolomiteCity_TrainerSchool_CadenDefeated
	goto DolomiteCity_TrainerSchool_EventScript_Geo_9

DolomiteCity_TrainerSchool_EventScript_Geo_16:
# 170 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_DOLOMITE_TOTODILE, DolomiteCity_TrainerSchool_CadenDefeated
	goto DolomiteCity_TrainerSchool_EventScript_Geo_9

DolomiteCity_TrainerSchool_EventScript_Geo_18:
# 181 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_DOLOMITE_CHIKORITA, DolomiteCity_TrainerSchool_HollyDefeated
	goto DolomiteCity_TrainerSchool_EventScript_Geo_9

DolomiteCity_TrainerSchool_EventScript_Geo_19:
# 184 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_DOLOMITE_CYNDAQUIL, DolomiteCity_TrainerSchool_HollyDefeated
	goto DolomiteCity_TrainerSchool_EventScript_Geo_9

DolomiteCity_TrainerSchool_EventScript_Geo_20:
# 187 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_DOLOMITE_TOTODILE, DolomiteCity_TrainerSchool_HollyDefeated
	goto DolomiteCity_TrainerSchool_EventScript_Geo_9


# 233 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
DolomiteCity_TrainerSchool_Movement_RivalApproachPlayer:
# 234 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_left
# 235 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_up
	step_end

# 238 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
DolomiteCity_TrainerSchool_Movement_RivalLeave:
# 239 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_left
# 240 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_down
# 240 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_down
# 240 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_down
# 240 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_down
# 240 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_down
	step_end

DolomiteCity_TrainerSchool_EventScript_Teacher::
# 296 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	lock
# 297 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	faceplayer
# 299 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	goto_if_unset FLAG_RECEIVED_QUICK_CLAW, DolomiteCity_TrainerSchool_EventScript_Teacher_2
# 340 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher_FeelFreeToStudy
DolomiteCity_TrainerSchool_EventScript_Teacher_1:
# 343 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	release
	return

DolomiteCity_TrainerSchool_EventScript_Teacher_2:
# 301 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher1, MSGBOX_YESNO
# 302 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DolomiteCity_TrainerSchool_EventScript_Teacher_5
# 305 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher3
# 306 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	dynmultichoice 20, 4, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, DolomiteCity_TrainerSchool_EventScript_Teacher_Text_0, DolomiteCity_TrainerSchool_EventScript_Teacher_Text_1, DolomiteCity_TrainerSchool_EventScript_Teacher_Text_2
# 309 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne DolomiteCity_TrainerSchool_EventScript_Teacher_8
# 313 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_DING_DONG
# 314 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher4
# 315 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	dynmultichoice 20, 4, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, DolomiteCity_TrainerSchool_EventScript_Teacher_Text_3, DolomiteCity_TrainerSchool_EventScript_Teacher_Text_4, DolomiteCity_TrainerSchool_EventScript_Teacher_Text_5
# 317 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne DolomiteCity_TrainerSchool_EventScript_Teacher_11
# 321 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_DING_DONG
# 322 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher5
# 323 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	dynmultichoice 20, 4, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, DolomiteCity_TrainerSchool_EventScript_Teacher_Text_5, DolomiteCity_TrainerSchool_EventScript_Teacher_Text_6, DolomiteCity_TrainerSchool_EventScript_Teacher_Text_7
# 325 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DolomiteCity_TrainerSchool_EventScript_Teacher_14
# 329 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_DING_DONG
# 330 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher_AllCorrect
# 331 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 332 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
	goto DolomiteCity_TrainerSchool_EventScript_Teacher_1

DolomiteCity_TrainerSchool_EventScript_Teacher_5:
# 303 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher2
	goto DolomiteCity_TrainerSchool_EventScript_Teacher_1

DolomiteCity_TrainerSchool_EventScript_Teacher_8:
# 310 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_BOO
# 311 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher_ThatsWrong
	goto DolomiteCity_TrainerSchool_EventScript_Teacher_1

DolomiteCity_TrainerSchool_EventScript_Teacher_11:
# 318 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_BOO
# 319 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher_ThatsWrong
	goto DolomiteCity_TrainerSchool_EventScript_Teacher_1

DolomiteCity_TrainerSchool_EventScript_Teacher_14:
# 326 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_BOO
# 327 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_Teacher_ThatsWrong
	goto DolomiteCity_TrainerSchool_EventScript_Teacher_1


DolomiteCity_TrainerSchool_EventScript_Geo_Text_0:
# 113 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "???$"

DolomiteCity_TrainerSchool_EventScript_Geo_Text_1:
# 119 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Geo$"

DolomiteCity_TrainerSchool_EventScript_Geo_Text_2:
# 127 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Absolutely!$"

DolomiteCity_TrainerSchool_EventScript_Geo_Text_3:
# 127 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Not yet.$"

DolomiteCity_TrainerSchool_EventScript_Geo_Text_4:
# 156 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "{RIVAL}$"

DolomiteCity_TrainerSchool_EventScript_Geo_Text_5:
# 209 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "I'm going to train hard and challenge\n"
	.string "the Dolomite Gym!\p"
	.string "I'll see you later, {PLAYER}!$"

DolomiteCity_TrainerSchool_EventScript_Teacher_Text_0:
# 307 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Fairy$"

DolomiteCity_TrainerSchool_EventScript_Teacher_Text_1:
# 307 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Ground$"

DolomiteCity_TrainerSchool_EventScript_Teacher_Text_2:
# 307 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Electric$"

DolomiteCity_TrainerSchool_EventScript_Teacher_Text_3:
# 316 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Rock$"

DolomiteCity_TrainerSchool_EventScript_Teacher_Text_4:
# 316 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Flying$"

DolomiteCity_TrainerSchool_EventScript_Teacher_Text_5:
# 316 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Steel$"

DolomiteCity_TrainerSchool_EventScript_Teacher_Text_6:
# 324 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Poison$"

DolomiteCity_TrainerSchool_EventScript_Teacher_Text_7:
# 324 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Ghost$"

DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru1::
# 71 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "--and that is why only certain Pokémon\n"
	.string "species are capable of Mega Evolution.\p"
	.string "However, simply possessing a Mega\n"
	.string "Stone is not enough. The bond between\l"
	.string "Trainer and Pokémon--$"

DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru2::
# 76 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Ah, a visitor! Can I help you with\n"
	.string "something?$"

DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru3::
# 80 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Oh? A delivery from Professor\n"
	.string "Hawthorne?\p"
	.string "Let me see...$"

DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru4::
# 85 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Incredible... These are never before\n"
	.string "seen Mega Stones!\p"
	.string "Professor Hawthorne must trust you a\n"
	.string "great deal to handle something so\l"
	.string "valuable.\p"
	.string "I must thank you for delivering these\n"
	.string "to me. Please, take this as a token of\l"
	.string "my gratitude.$"

DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru5::
# 91 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "You can turn the Exp. Share on or off by\n"
	.string "selecting it from your Bag.\p"
	.string "Please give Professor Hawthorne my\n"
	.string "regards. I must get back to my\l"
	.string "research.\p"
	.string "I hope to see you again soon.$"

DolomiteCity_TrainerSchool_Text_MegaEvoGuru::
# 105 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Thank you again for delivering these.\p"
	.string "If you ever wish to learn more about\n"
	.string "Mega Evolution, my door is always open.$"

DolomiteCity_TrainerSchool_Geo_Text1::
# 244 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Hi there!\n"
	.string "Welcome to the Pokémon Trainer's\l"
	.string "School.$"

DolomiteCity_TrainerSchool_Geo_Text2::
# 248 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "I'm Geo, the Gym Leader here.\p"
	.string "Right now, I'm teaching these students\n"
	.string "about Pokémon battles and why type\l"
	.string "matchups are super important.$"

DolomiteCity_TrainerSchool_Geo_Text3::
# 253 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "But I bet you're not here for a lesson,\n"
	.string "just like Challenger {RIVAL} over\l"
	.string "there.\p"
	.string "You want a Gym Challenge, don't you?$"

DolomiteCity_TrainerSchool_Geo_Text_Accept::
# 258 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "You're excited to prove yourself, huh?\n"
	.string "That's great!\p"
	.string "But before you can battle me, you need\n"
	.string "to show me your skills in a battle.\p"
	.string "Challenger {RIVAL} has been learning\n"
	.string "a lot from my lessons.\p"
	.string "Why don't you two have a battle and\n"
	.string "show me what you've got?$"

DolomiteCity_TrainerSchool_Geo_Text_RivalIntro::
# 265 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Challenger {RIVAL}, come on up.\n"
	.string "Show me what you've learned.$"

DolomiteCity_TrainerSchool_Geo_Text_AfterBattle::
# 269 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Wow, that was impressive, Challenger\n"
	.string "{PLAYER}.\n"
	.string "You did really well in that battle.\p"
	.string "Now, come meet me at the Dolomite Gym.\n"
	.string "Let's see if you have what it takes to\l"
	.string "earn my badge.$"

DolomiteCity_TrainerSchool_Rival_Text1_Caden::
# 274 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Oh, you're in for it now, {PLAYER}.\p"
	.string "I've been paying attention, and I've\n"
	.string "got a few new tricks up my sleeve!$"

DolomiteCity_TrainerSchool_Rival_Text1_Holly::
# 279 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "This is perfect, {PLAYER}!\p"
	.string "A real battle in front of a Gym Leader?\n"
	.string "Let's give it everything we've got!$"

DolomiteCity_TrainerSchool_CadenDefeated::
# 284 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "What?! No way!\p"
	.string "Ugh, alright, alright. You got me this\n"
	.string "time.$"

DolomiteCity_TrainerSchool_HollyDefeated::
# 289 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Wow, {PLAYER}, you're a real natural!\p"
	.string "I've got a lot to learn.$"

DolomiteCity_TrainerSchool_Text_Teacher1::
# 346 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "I'm the teacher here at the Trainer's\n"
	.string "School.\p"
	.string "I'm going to ask you a few questions\n"
	.string "about type matchups.\p"
	.string "Are you ready?$"

DolomiteCity_TrainerSchool_Text_Teacher2::
# 352 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "No worries! I'll be here if you want to\n"
	.string "try again.$"

DolomiteCity_TrainerSchool_Text_Teacher_ThatsWrong::
# 356 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "That's not quite right. You should\n"
	.string "study up on your type matchups and try\l"
	.string "again.$"

DolomiteCity_TrainerSchool_Text_Teacher3::
# 360 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Great! Here's the first question:\p"
	.string "What type is super effective against\n"
	.string "Water-type Pokémon?$"

DolomiteCity_TrainerSchool_Text_Teacher4::
# 365 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "That's correct!\p"
	.string "Here's the next question:\p"
	.string "What type is weak to Electric-type\n"
	.string "moves?$"

DolomiteCity_TrainerSchool_Text_Teacher5::
# 371 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "That's correct!\p"
	.string "Here's the final question:\p"
	.string "What type is immune to Poison-type\n"
	.string "moves?$"

DolomiteCity_TrainerSchool_Text_Teacher_AllCorrect::
# 377 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Wow! You got all the questions right!\p"
	.string "Here, take this held item as a reward\n"
	.string "for your participation.$"

DolomiteCity_TrainerSchool_Text_Teacher_FeelFreeToStudy::
# 382 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Feel free to study up as much as you\n"
	.string "like.$"
