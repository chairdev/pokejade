Route301_HawthorneResearchLab_MapScripts::
# 15 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route301_HawthorneResearchLab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route301_HawthorneResearchLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route301_HawthorneResearchLab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

Route301_HawthorneResearchLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	map_script_2 VAR_HAWTHORNE_LAB_STATE, 0, Route301_HawthorneResearchLab_MapScript_MeetProf
# 21 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	map_script_2 VAR_HAWTHORNE_LAB_STATE, 3, Route301_HawthorneResearchLab_MapScript_ReportBack
	.2byte 0


Route301_HawthorneResearchLab_MapScript_ReportBack::
# 26 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lockall
# 28 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_HawthorneResearchLab_Movement_Player_WalkIntoLab
# 29 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 32 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 33 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne1
# 34 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 36 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	delay 16
# 38 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 41 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne2
# 42 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 44 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	delay 16
# 46 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_1
# 47 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Rival1
# 48 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 50 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	addobject 2
# 51 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setobjectxy 2, 5, 6
# 52 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 54 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 55 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne3
# 56 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playbgm MUS_ROUTE122, TRUE
# 57 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 58 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne4
# 59 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 61 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 62 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_ReportBack_Text_2
# 63 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitfanfare
# 65 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 66 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne5
# 67 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 69 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 71 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 72 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne6
# 74 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_1
# 75 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	checkplayergender
# 76 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_MapScript_ReportBack_2
# 82 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Holly1
Route301_HawthorneResearchLab_MapScript_ReportBack_1:
# 85 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 86 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne7
# 88 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_1
# 89 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_MapScript_ReportBack_6
# 95 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Holly2
Route301_HawthorneResearchLab_MapScript_ReportBack_5:
# 98 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 99 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne8
# 100 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 102 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadedefaultbgm
# 104 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 105 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Route301_HawthorneResearchLab_Movement_Rival_RunOutOfLab
# 106 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadedefaultbgm
# 108 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playse SE_EXIT
# 109 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 2
# 110 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitse
# 112 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 4
# 113 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_ROUTE301_STATE, 4
# 114 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_301_RIVAL
# 115 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 116 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_301_MOM_OUTSIDE
# 117 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 119 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	releaseall
	return

Route301_HawthorneResearchLab_MapScript_ReportBack_2:
# 78 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Caden1
	goto Route301_HawthorneResearchLab_MapScript_ReportBack_1

Route301_HawthorneResearchLab_MapScript_ReportBack_6:
# 91 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReportBack_Caden2
	goto Route301_HawthorneResearchLab_MapScript_ReportBack_5


# 123 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_Rival_RunOutOfLab:
# 124 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
	step_end

Route301_HawthorneResearchLab_MapScript_MeetProf::
# 210 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lockall
# 212 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	addobject 2
# 213 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	addobject 3
# 214 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	addobject 4
# 215 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	addobject 5
# 217 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Route301_HawthorneResearchLab_Movement_Rival_WalkIntoLab
# 218 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_HawthorneResearchLab_Movement_Player_WalkIntoLab
# 219 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 221 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_0
# 222 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne1
# 224 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_1
# 225 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	checkplayergender
# 226 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_MapScript_MeetProf_2
# 232 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_Holly1
Route301_HawthorneResearchLab_MapScript_MeetProf_1:
# 235 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_HawthorneResearchLab_MapScript_MeetProf_Text_1, Route301_HawthorneResearchLab_MapScript_MeetProf_Text_2
# 238 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_0
# 239 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route301_HawthorneResearchLab_MapScript_MeetProf_6
# 242 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_MeetProf_Text_4
Route301_HawthorneResearchLab_MapScript_MeetProf_5:
# 244 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 245 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne2
# 247 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 248 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 249 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne3
# 250 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 252 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_MapScript_StarterIntro
# 254 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 256 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 257 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne4
# 259 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 1
# 260 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 261 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 262 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 264 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	releaseall
	return

Route301_HawthorneResearchLab_MapScript_MeetProf_2:
# 228 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_Caden1
	goto Route301_HawthorneResearchLab_MapScript_MeetProf_1

Route301_HawthorneResearchLab_MapScript_MeetProf_6:
# 240 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_MeetProf_Text_3
	goto Route301_HawthorneResearchLab_MapScript_MeetProf_5


Route301_HawthorneResearchLab_MapScript_StarterIntro::
# 268 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	special SpawnCameraObject
# 269 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_HawthorneResearchLab_Movement_CameraPan1
# 270 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 272 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 273 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 3, Route301_HawthorneResearchLab_Movement_StarterHop
# 274 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmoncry
# 275 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 277 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 278 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_0
# 279 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 281 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_HawthorneResearchLab_Movement_CameraPan2
# 283 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 284 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 4, Route301_HawthorneResearchLab_Movement_StarterHop
# 285 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmoncry
# 286 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 289 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_1
# 290 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 292 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_HawthorneResearchLab_Movement_CameraPan2
# 294 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 295 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 5, Route301_HawthorneResearchLab_Movement_StarterHop
# 296 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmoncry
# 297 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 299 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 300 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_2
# 301 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 303 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_HawthorneResearchLab_Movement_CameraPan3
# 304 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 305 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	special RemoveCameraObject
	return


Route301_HawthorneResearchLab_Trigger_WhereAreYouGoing::
# 309 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lock
# 310 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 311 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 313 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 314 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Trigger_WhereAreYouGoing_Text_0
# 315 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 317 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 318 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 319 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	release
	return


Route301_HawthorneResearchLab_EventScript_ReceiveStarter::
# 323 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 324 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 325 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_0
# 326 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitfanfare
# 327 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_1, MSGBOX_YESNO
# 328 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 330 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route301_HawthorneResearchLab_EventScript_ReceiveStarter_2
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_1:
# 335 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	switch VAR_STARTER_MON
# 336 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 0, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_6
# 338 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 1, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_7
# 340 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 2, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_8
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_4:
# 344 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 345 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 347 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_1
# 348 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	checkplayergender
# 349 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_EventScript_ReceiveStarter_10
# 355 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Holly1
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_9:
# 357 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 359 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	switch VAR_STARTER_MON
# 360 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 0, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_15
# 363 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 1, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_16
# 366 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 2, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_17
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_13:
# 370 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 372 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_EventScript_ReceiveStarter_19
# 378 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Holly2
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_18:
# 381 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	switch VAR_STARTER_MON
# 382 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 0, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_24
# 393 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 1, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_25
# 404 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 2, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_26
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_22:
# 416 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 417 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 418 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 419 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 422 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Hawthorne1
# 424 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 425 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_EventScript_ExplainErrand
	return

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_2:
# 331 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_0x8004, 0
# 332 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_1

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_6:
# 337 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOTODILE
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_4

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_7:
# 339 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHIKORITA
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_4

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_8:
# 341 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CYNDAQUIL
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_4

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_10:
# 351 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Caden1
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_9

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_15:
# 361 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 362 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToTotodile
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_13

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_16:
# 364 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 365 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToChikorita
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_13

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_17:
# 367 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 368 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToCyndaquil
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_13

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_19:
# 374 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Caden2
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_18

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_24:
# 383 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 384 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 5, Route301_HawthorneResearchLab_Movement_StarterHop
# 386 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_2
# 387 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_3
# 388 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 389 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 390 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 5
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_22

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_25:
# 394 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 395 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 3, Route301_HawthorneResearchLab_Movement_StarterHop
# 397 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_4
# 398 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_5
# 399 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 400 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 3
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_22

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_26:
# 405 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 406 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 4, Route301_HawthorneResearchLab_Movement_StarterHop
# 408 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_6
# 409 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_7
# 410 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 411 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 4
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_22


# 454 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToChikorita:
# 455 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 455 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 455 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 456 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

# 459 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToCyndaquil:
# 460 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 460 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 460 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 461 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_right
# 462 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

# 465 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToTotodile:
# 466 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_right
# 466 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_right
# 467 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 467 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 467 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 468 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

Route301_HawthorneResearchLab_EventScript_ExplainErrand::
# 472 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 473 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ExplainErrand_Hawthorne1
# 474 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 476 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 477 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_1
# 478 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	checkplayergender
# 479 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_EventScript_ExplainErrand_2
# 485 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ExplainErrand_Holly1
Route301_HawthorneResearchLab_EventScript_ExplainErrand_1:
# 488 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 489 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ExplainErrand_Hawthorne2
# 490 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 492 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	giveitem ITEM_PARCEL
# 494 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 495 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 2
# 496 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_ROUTE301_STATE, 1
# 497 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setflag FLAG_CHOSE_STARTER
# 498 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 3
# 499 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 4
# 500 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 5
# 501 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

Route301_HawthorneResearchLab_EventScript_ExplainErrand_2:
# 481 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ExplainErrand_Caden1
	goto Route301_HawthorneResearchLab_EventScript_ExplainErrand_1


Route301_HawthorneResearchLab_EventScript_Chikorita::
# 537 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lock
# 539 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 540 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 542 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_4
# 543 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Chikorita_Text_0
# 545 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 546 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Chikorita_Text_1, MSGBOX_YESNO
# 550 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	hidemonpic
# 552 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route301_HawthorneResearchLab_EventScript_Chikorita_2
Route301_HawthorneResearchLab_EventScript_Chikorita_1:
# 567 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	releaseall
	return

Route301_HawthorneResearchLab_EventScript_Chikorita_2:
# 553 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 554 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 3, Route301_HawthorneResearchLab_Movement_StarterHop
# 556 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_4
# 557 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_5
# 558 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 559 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 561 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 562 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 564 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 3
# 565 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_EventScript_ReceiveStarter
	goto Route301_HawthorneResearchLab_EventScript_Chikorita_1


Route301_HawthorneResearchLab_EventScript_Cyndaquil::
# 571 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lock
# 573 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 574 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 576 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_6
# 577 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Cyndaquil_Text_0
# 579 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 580 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Cyndaquil_Text_1, MSGBOX_YESNO
# 584 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	hidemonpic
# 586 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route301_HawthorneResearchLab_EventScript_Cyndaquil_2
Route301_HawthorneResearchLab_EventScript_Cyndaquil_1:
# 601 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	releaseall
	return

Route301_HawthorneResearchLab_EventScript_Cyndaquil_2:
# 587 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 588 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 4, Route301_HawthorneResearchLab_Movement_StarterHop
# 590 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_6
# 591 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_7
# 592 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 593 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 595 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 596 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 598 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 4
# 599 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_EventScript_ReceiveStarter
	goto Route301_HawthorneResearchLab_EventScript_Cyndaquil_1


Route301_HawthorneResearchLab_EventScript_Totodile::
# 605 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lock
# 607 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 608 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 610 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_2
# 611 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Totodile_Text_0
# 613 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0
# 614 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Totodile_Text_1, MSGBOX_YESNO
# 618 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	hidemonpic
# 620 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route301_HawthorneResearchLab_EventScript_Totodile_2
Route301_HawthorneResearchLab_EventScript_Totodile_1:
# 635 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	releaseall
	return

Route301_HawthorneResearchLab_EventScript_Totodile_2:
# 621 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 622 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 5, Route301_HawthorneResearchLab_Movement_StarterHop
# 624 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_2
# 625 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_3
# 626 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 627 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 629 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 630 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 632 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 5
# 633 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_EventScript_ReceiveStarter
	goto Route301_HawthorneResearchLab_EventScript_Totodile_1


# 638 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_Rival_WalkIntoLab:
# 639 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 639 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 639 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 639 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 639 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 640 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_left
# 641 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_in_place_up
	step_end

# 644 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_Player_WalkIntoLab:
# 645 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 645 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 645 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 645 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 645 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 645 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
	step_end

# 677 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_CameraPan1:
# 678 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_left
# 679 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_up
# 679 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_up
# 679 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_up
# 679 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_up
	step_end

# 682 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_CameraPan2:
# 683 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_slow_right
	step_end

# 686 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_CameraPan3:
# 687 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 687 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 687 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 687 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 688 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_left
	step_end

# 691 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_StarterHop:
# 692 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	jump_in_place_up_down
# 693 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	delay_16
# 693 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	delay_16
	step_end

Route301_HawthorneResearchLab_MapScript_ReportBack_Text_0:
# 32 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Hawthorne$"

Route301_HawthorneResearchLab_MapScript_ReportBack_Text_1:
# 46 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "{RIVAL}$"

Route301_HawthorneResearchLab_MapScript_ReportBack_Text_2:
# 62 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "You obtained the Pokédex!$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_0:
# 221 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "???$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_1:
# 236 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Nice to meet you!$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_2:
# 236 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Sorry for intruding!$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_3:
# 240 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Well, it's nice to meet you too!$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_4:
# 242 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Oh, don't worry about it!\n"
	.string "I'm always happy to meet new people.$"

Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_0:
# 278 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Chikorita, the Leaf Pokémon.$"

Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_1:
# 289 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Cyndaquil, the Fire Mouse Pokémon.$"

Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_2:
# 300 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "And last but not least,\n"
	.string "Totodile, the Big Jaw Pokémon.$"

Route301_HawthorneResearchLab_Trigger_WhereAreYouGoing_Text_0:
# 314 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Where are you going?\n"
	.string "Don't you want to choose a Pokémon?$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_0:
# 325 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "You chose {STR_VAR_1}!$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_1:
# 327 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Would you like to give {STR_VAR_1} a\n"
	.string "nickname?$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_2:
# 386 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Totodile$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_3:
# 387 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Ararara!$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_4:
# 397 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Chikorita$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_5:
# 398 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Ritarara!$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_6:
# 408 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Cyndaquil$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_7:
# 409 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Quililil!$"

Route301_HawthorneResearchLab_EventScript_Chikorita_Text_0:
# 543 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Pakaan?$"

Route301_HawthorneResearchLab_EventScript_Chikorita_Text_1:
# 546 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Chikorita is a Grass-type Pokémon.\p"
	.string "It uses the leaf on its head to\n"
	.string "determine the air's temperature and\l"
	.string "humidity. It loves to sunbathe.\p"
	.string "Would you like to choose the\n"
	.string "Grass-type Pokémon, Chikorita?$"

Route301_HawthorneResearchLab_EventScript_Cyndaquil_Text_0:
# 577 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "...Quil?$"

Route301_HawthorneResearchLab_EventScript_Cyndaquil_Text_1:
# 580 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Cyndaquil is a Fire-type Pokémon.\p"
	.string "It has a timid nature. If it is startled,\n"
	.string "the flames on its back burn more\l"
	.string "vigorously.\p"
	.string "Would you like to choose the Fire-type\n"
	.string "Pokémon, Cyndaquil?$"

Route301_HawthorneResearchLab_EventScript_Totodile_Text_0:
# 611 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Aradun!$"

Route301_HawthorneResearchLab_EventScript_Totodile_Text_1:
# 614 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Totodile is a Water-type Pokémon.\p"
	.string "It has a habit of biting everything with\n"
	.string "its well-developed jaws. Even its\l"
	.string "Trainer needs to be careful.\p"
	.string "Would you like to choose the\n"
	.string "Water-type Pokémon, Totodile?$"

Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne1::
# 127 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Ah, {PLAYER}! Welcome back!\n"
	.string "How did the delivery go?$"

Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne2::
# 131 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Excellent work! I knew I could count on\n"
	.string "you.\p"
	.string "The Mega Evolution Guru will be able to\n"
	.string "put those stones to good use.\p"
	.string "It may seem like a simple errand, but\n"
	.string "every great journey starts with small\l"
	.string "steps!\p"
	.string "Now then, let's wait for {RIVAL} to\n"
	.string "return and we can get started on your\l"
	.string "next assignment.$"

Route301_HawthorneResearchLab_Text_ReportBack_Rival1::
# 138 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Professor, I'm back!\n"
	.string "Fieldwork is way more exhausting than I\l"
	.string "expected.$"

Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne3::
# 142 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Ah, just in time, {RIVAL}! You and\n"
	.string "{PLAYER} have both done a fine job\l"
	.string "with your first tasks.\p"
	.string "But I have one more important request\n"
	.string "for you both.$"

Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne4::
# 147 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "The world of Pokémon is vast, and\n"
	.string "there's still so much we don't know.\p"
	.string "As you already know, my research\n"
	.string "focuses on understanding Pokémon\l"
	.string "habitats, behaviors, and how they grow\l"
	.string "alongside humans.\p"
	.string "But no single researcher can explore\n"
	.string "every corner of the region alone.\p"
	.string "This is where you two come in.\n"
	.string "I'd like you both to help me complete\l"
	.string "the Avaro Region's Pokédex.\p"
	.string "By traveling, battling, and capturing\n"
	.string "Pokémon, you'll be contributing\l"
	.string "valuable data to Pokémon research!\p"
	.string "And who knows? You might even discover\n"
	.string "something new about Pokémon in the\l"
	.string "process.\p"
	.string "Here, you'll need this.$"

Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne5::
# 157 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "This fancy gadget is called a Pokédex.\p"
	.string "It's a high-tech device that records\n"
	.string "data on any Pokémon you encounter or\l"
	.string "catch.\p"
	.string "It's a valuable tool for any Trainer, and\n"
	.string "I'm entrusting you both with it.\p"
	.string "Oh, and before I forget--here, take\n"
	.string "these as well.$"

Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne6::
# 164 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "These'll help you catch Pokémon out in\n"
	.string "the wild.\p"
	.string "The more Pokémon you catch, the more\n"
	.string "we'll learn about their behaviors and\l"
	.string "habitats.\p"
	.string "If you run out them, you can always buy\n"
	.string "more at Poké Marts.$"

Route301_HawthorneResearchLab_Text_ReportBack_Caden1::
# 170 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Oh, now this is what I'm talking about!\p"
	.string "Exploring the entire region, catching\n"
	.string "tons of Pokémon--I'm in!$"

Route301_HawthorneResearchLab_Text_ReportBack_Holly1::
# 174 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "That sounds amazing!\p"
	.string "I've always wanted to see more of the\n"
	.string "world, and this is the perfect excuse!$"

Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne7::
# 178 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "I'm glad to hear you're both excited!\p"
	.string "Of course, traveling the region isn't\n"
	.string "just about research--it's about making\l"
	.string "memories, meeting new people, and\l"
	.string "growing as Trainers.\p"
	.string "Perhaps you two should also consider\n"
	.string "taking on the Pokémon League.\p"
	.string "The League challenge is a test of skill,\n"
	.string "strategy, and perseverance.\p"
	.string "If you collect all eight Gym Badges,\n"
	.string "you'll earn the right to compete in the\l"
	.string "Paragon Conference, challenge the\l"
	.string "Elite Four--and perhaps even take on\l"
	.string "the Champion!\p"
	.string "Many of the world's greatest Trainers\n"
	.string "began as Pokédex researchers.\p"
	.string "After all, battling and studying\n"
	.string "Pokémon go hand in hand!$"

Route301_HawthorneResearchLab_Text_ReportBack_Caden2::
# 188 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "The Pokémon League, huh?\p"
	.string "That actually sounds kinda awesome...\n"
	.string "I mean, if we're already traveling, why\l"
	.string "not prove we're the best along the way?$"

Route301_HawthorneResearchLab_Text_ReportBack_Holly2::
# 194 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Taking on the League sounds like a huge\n"
	.string "challenge...\p"
	.string "But honestly? I think it could be really\n"
	.string "fun!\p"
	.string "I'd love to see just how strong I can\n"
	.string "become.$"

Route301_HawthorneResearchLab_Text_ReportBack_Hawthorne8::
# 200 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "That's the spirit!\p"
	.string "Whatever path you choose, I have no\n"
	.string "doubt you'll both grow into remarkable\l"
	.string "Trainers.\p"
	.string "The first Gym is in Dolomite City. I\n"
	.string "suggest you start there.$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Caden1::
# 428 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Oh, {STR_VAR_1}, huh? Yeah, I can\n"
	.string "see it.\p"
	.string "You two look like a good match.$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Caden2::
# 433 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "You know what? A challenge is good!\n"
	.string "Makes things more exciting, right?\l"
	.string "Alright, then... I'll pick {STR_VAR_2}\p"
	.string "I can't wait to see how we both grow\n"
	.string "together!$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Holly1::
# 439 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Wow, {PLAYER}! Nice choice!\p"
	.string "I think {STR_VAR_1} suits you\n"
	.string "perfectly.$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Holly2::
# 444 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Hmm, I think I'll go with {STR_VAR_2}!\n"
	.string "It looks so strong--and cute, too!\p"
	.string "I can't wait to see how we both grow\n"
	.string "together!$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Hawthorne1::
# 449 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Excellent choices!\n"
	.string "These Pokémon will be your partners\l"
	.string "through thick and thin.\p"
	.string "Treat them well, and they'll be sure to\n"
	.string "grow alongside you.$"

Route301_HawthorneResearchLab_Text_ExplainErrand_Hawthorne1::
# 504 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Now that you've both chosen your\n"
	.string "Pokémon, I have a favor to ask of you\l"
	.string "two.\p"
	.string "{RIVAL}, I need this package\n"
	.string "delivered to the Pokémon Trainer School\l"
	.string "in Dolomite City.\p"
	.string "It contains some very important\n"
	.string "materials, and I trust you to handle it\l"
	.string "carefully.\p"
	.string "As for you, {PLAYER}, I could use some\n"
	.string "help cataloging Pokémon habitats on\l"
	.string "Route 301.\p"
	.string "Think of it as a chance to get to know\n"
	.string "your new partner better!$"

Route301_HawthorneResearchLab_Text_ExplainErrand_Caden1::
# 518 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Wait, hang on--why don't I do the\n"
	.string "fieldwork and let {PLAYER} deliver\l"
	.string "the package?\p"
	.string "You're the one who always says I need\n"
	.string "more experience in the field!$"

Route301_HawthorneResearchLab_Text_ExplainErrand_Holly1::
# 523 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Oh, Professor, wouldn't it make more\n"
	.string "sense if I stayed to help with the\l"
	.string "fieldwork?\p"
	.string "You always say it's important to study\n"
	.string "Pokémon up close!$"

Route301_HawthorneResearchLab_Text_ExplainErrand_Hawthorne2::
# 528 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Hahaha! Fair enough.\n"
	.string "Let's switch things around.\p"
	.string "{RIVAL}, you'll stay here for\n"
	.string "fieldwork. And you, {PLAYER}, can\l"
	.string "deliver the package to Dolomite City's\l"
	.string "Trainer School.\p"
	.string "Once you're both done, come back here\n"
	.string "and we'll get started on your second\l"
	.string "research assignment.\p"
	.string "Oh, but before you go, don't forget to\n"
	.string "tell your parents where you're headed!\p"
	.string "I don't want to be the one to get a call\n"
	.string "from them asking where you've run off\l"
	.string "to... again!$"

Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne1::
# 648 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Ah, {RIVAL}! Right on time, as usual.\n"
	.string "I was just about to--oh?\l"
	.string "Who's this with you?$"

Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne2::
# 652 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Welcome to my Research Lab, {PLAYER}!\n"
	.string "I'm Professor Hawthorne, and I study\l"
	.string "Pokémon habitats and how they interact\l"
	.string "with human communities here in Avaro.$"

Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne3::
# 656 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "You've come at the perfect time.\n"
	.string "I was just about to let {RIVAL}\l"
	.string "choose their first Pokémon.\p"
	.string "{PLAYER}, since you're here, why don't\n"
	.string "you take one too?\p"
	.string "A Trainer's journey is always better\n"
	.string "with a partner by your side.$"

Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne4::
# 662 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Each one is a unique species with its\n"
	.string "own strengths and weaknesses.\p"
	.string "Take your time and choose the one that\n"
	.string "speaks to you the most.$"

Route301_HawthorneResearchLab_Text_MeetProf_Caden1::
# 667 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "This is my new neighbor,\n"
	.string "{PLAYER}--the one I told you moved in\l"
	.string "yesterday.\p"
	.string "Thought I'd bring her along to see the\n"
	.string "lab.$"

Route301_HawthorneResearchLab_Text_MeetProf_Holly1::
# 672 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Oh, this is my new neighbor, {PLAYER}!\n"
	.string "He just moved here from Hoenn.\p"
	.string "I thought you wouldn't mind if they\n"
	.string "tagged along.$"
