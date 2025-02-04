Route301_HawthorneResearchLab_MapScripts::
# 13 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route301_HawthorneResearchLab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 17 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route301_HawthorneResearchLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route301_HawthorneResearchLab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

Route301_HawthorneResearchLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	map_script_2 VAR_HAWTHORNE_LAB_STATE, 0, Route301_HawthorneResearchLab_MapScript_MeetProf
	.2byte 0


Route301_HawthorneResearchLab_MapScript_MeetProf::
# 23 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lockall
# 25 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	addobject 2
# 26 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	addobject 3
# 27 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	addobject 4
# 28 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	addobject 5
# 30 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Route301_HawthorneResearchLab_Movement_Rival_WalkIntoLab
# 31 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_HawthorneResearchLab_Movement_Player_WalkIntoLab
# 32 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_0
# 35 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne1
# 37 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_1
# 38 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	checkplayergender
# 39 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_MapScript_MeetProf_2
# 45 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_Holly1
Route301_HawthorneResearchLab_MapScript_MeetProf_1:
# 48 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_HawthorneResearchLab_MapScript_MeetProf_Text_2, Route301_HawthorneResearchLab_MapScript_MeetProf_Text_3
# 51 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_0
# 52 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route301_HawthorneResearchLab_MapScript_MeetProf_6
# 55 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_MeetProf_Text_5
Route301_HawthorneResearchLab_MapScript_MeetProf_5:
# 57 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 58 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne2
# 60 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 62 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne3
# 63 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 65 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_MapScript_StarterIntro
# 67 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 69 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 70 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne4
# 72 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 1
# 73 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 74 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 75 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 77 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	releaseall
	return

Route301_HawthorneResearchLab_MapScript_MeetProf_2:
# 41 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_MeetProf_Caden1
	goto Route301_HawthorneResearchLab_MapScript_MeetProf_1

Route301_HawthorneResearchLab_MapScript_MeetProf_6:
# 53 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_MeetProf_Text_4
	goto Route301_HawthorneResearchLab_MapScript_MeetProf_5


Route301_HawthorneResearchLab_MapScript_StarterIntro::
# 81 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	special SpawnCameraObject
# 82 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_HawthorneResearchLab_Movement_CameraPan1
# 83 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 85 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 86 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 3, Route301_HawthorneResearchLab_Movement_StarterHop
# 87 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmoncry
# 88 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 91 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_0
# 92 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 94 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_HawthorneResearchLab_Movement_CameraPan2
# 96 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 97 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 4, Route301_HawthorneResearchLab_Movement_StarterHop
# 98 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmoncry
# 99 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 102 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_1
# 103 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 105 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_HawthorneResearchLab_Movement_CameraPan2
# 107 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 108 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 5, Route301_HawthorneResearchLab_Movement_StarterHop
# 109 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmoncry
# 110 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 113 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_2
# 114 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 116 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_HawthorneResearchLab_Movement_CameraPan3
# 117 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 118 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	special RemoveCameraObject
	return


Route301_HawthorneResearchLab_Trigger_WhereAreYouGoing::
# 122 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lock
# 123 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 124 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 127 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Trigger_WhereAreYouGoing_Text_0
# 128 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 130 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 131 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	release
	return


Route301_HawthorneResearchLab_EventScript_ReceiveStarter::
# 136 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 137 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 138 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_0
# 139 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitfanfare
# 140 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_1, MSGBOX_YESNO
# 141 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 143 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route301_HawthorneResearchLab_EventScript_ReceiveStarter_2
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_1:
# 148 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	switch VAR_STARTER_MON
# 149 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 0, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_6
# 151 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 1, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_7
# 153 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 2, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_8
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_4:
# 157 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 158 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_1
# 161 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	checkplayergender
# 162 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_EventScript_ReceiveStarter_10
# 168 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Holly1
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_9:
# 170 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 172 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	switch VAR_STARTER_MON
# 173 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 0, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_15
# 176 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 1, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_16
# 179 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 2, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_17
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_13:
# 183 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_EventScript_ReceiveStarter_19
# 191 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Holly2
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_18:
# 194 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	switch VAR_STARTER_MON
# 195 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 0, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_24
# 206 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 1, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_25
# 217 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	case 2, Route301_HawthorneResearchLab_EventScript_ReceiveStarter_26
Route301_HawthorneResearchLab_EventScript_ReceiveStarter_22:
# 229 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 230 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 231 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 232 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 235 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Hawthorne1
# 237 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 238 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_EventScript_ExplainErrand
	return

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_2:
# 144 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_0x8004, 0
# 145 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_1

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_6:
# 150 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOTODILE
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_4

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_7:
# 152 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHIKORITA
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_4

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_8:
# 154 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CYNDAQUIL
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_4

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_10:
# 164 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Caden1
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_9

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_15:
# 174 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 175 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToTotodile
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_13

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_16:
# 177 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 178 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToChikorita
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_13

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_17:
# 180 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 181 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToCyndaquil
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_13

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_19:
# 187 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ReceiveStarter_Caden2
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_18

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_24:
# 196 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 197 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 5, Route301_HawthorneResearchLab_Movement_StarterHop
# 199 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_2
# 200 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_3
# 201 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 202 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 5
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_22

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_25:
# 207 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 208 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 3, Route301_HawthorneResearchLab_Movement_StarterHop
# 210 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_4
# 211 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_5
# 212 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 213 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 3
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_22

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_26:
# 218 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 219 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 4, Route301_HawthorneResearchLab_Movement_StarterHop
# 221 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_6
# 222 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_7
# 223 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 224 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 4
	goto Route301_HawthorneResearchLab_EventScript_ReceiveStarter_22


# 267 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToChikorita:
# 268 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 268 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 268 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 269 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

# 272 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToCyndaquil:
# 273 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 273 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 273 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 274 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_right
# 275 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

# 278 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_ReceiveStarter_RivalWalkToTotodile:
# 279 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_right
# 279 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_right
# 280 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 280 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 280 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 281 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

Route301_HawthorneResearchLab_EventScript_ExplainErrand::
# 285 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 286 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 287 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 288 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 289 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ExplainErrand_Hawthorne1
# 290 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 296 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 297 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_1
# 298 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	checkplayergender
# 299 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_HawthorneResearchLab_EventScript_ExplainErrand_2
# 305 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ExplainErrand_Holly1
Route301_HawthorneResearchLab_EventScript_ExplainErrand_1:
# 308 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 309 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ExplainErrand_Hawthorne2
# 313 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 314 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 2
# 315 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_ROUTE301_STATE, 1
# 316 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setflag FLAG_CHOSE_STARTER
# 317 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 3
# 318 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 4
# 319 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 5
# 320 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

Route301_HawthorneResearchLab_EventScript_ExplainErrand_2:
# 301 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_Text_ExplainErrand_Caden1
	goto Route301_HawthorneResearchLab_EventScript_ExplainErrand_1


Route301_HawthorneResearchLab_EventScript_Chikorita::
# 363 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lock
# 365 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 366 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 368 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_4
# 369 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Chikorita_Text_0
# 371 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 372 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Chikorita_Text_1, MSGBOX_YESNO
# 376 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	hidemonpic
# 378 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route301_HawthorneResearchLab_EventScript_Chikorita_2
Route301_HawthorneResearchLab_EventScript_Chikorita_1:
# 393 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	releaseall
	return

Route301_HawthorneResearchLab_EventScript_Chikorita_2:
# 379 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 380 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 3, Route301_HawthorneResearchLab_Movement_StarterHop
# 382 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_4
# 383 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_5
# 384 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 385 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 387 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 388 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 390 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 3
# 391 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_EventScript_ReceiveStarter
	goto Route301_HawthorneResearchLab_EventScript_Chikorita_1


Route301_HawthorneResearchLab_EventScript_Cyndaquil::
# 397 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lock
# 399 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 400 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 402 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_6
# 403 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Cyndaquil_Text_0
# 405 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 406 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Cyndaquil_Text_1, MSGBOX_YESNO
# 410 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	hidemonpic
# 412 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route301_HawthorneResearchLab_EventScript_Cyndaquil_2
Route301_HawthorneResearchLab_EventScript_Cyndaquil_1:
# 427 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	releaseall
	return

Route301_HawthorneResearchLab_EventScript_Cyndaquil_2:
# 413 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 414 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 4, Route301_HawthorneResearchLab_Movement_StarterHop
# 416 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_6
# 417 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_7
# 418 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 419 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 422 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 424 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 4
# 425 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_EventScript_ReceiveStarter
	goto Route301_HawthorneResearchLab_EventScript_Cyndaquil_1


Route301_HawthorneResearchLab_EventScript_Totodile::
# 431 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	lock
# 433 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 434 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 436 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_2
# 437 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Totodile_Text_0
# 439 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6
# 440 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_Totodile_Text_1, MSGBOX_YESNO
# 444 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	hidemonpic
# 446 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route301_HawthorneResearchLab_EventScript_Totodile_2
Route301_HawthorneResearchLab_EventScript_Totodile_1:
# 461 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	releaseall
	return

Route301_HawthorneResearchLab_EventScript_Totodile_2:
# 447 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 448 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	applymovement 5, Route301_HawthorneResearchLab_Movement_StarterHop
# 450 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	speakername Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_2
# 451 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	msgbox Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_3
# 452 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	closemessage
# 453 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	waitmovement 0
# 455 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 456 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 458 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	removeobject 5
# 459 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	call Route301_HawthorneResearchLab_EventScript_ReceiveStarter
	goto Route301_HawthorneResearchLab_EventScript_Totodile_1


# 464 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_Rival_WalkIntoLab:
# 465 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 465 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 465 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 465 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 465 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 466 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_left
# 467 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_in_place_up
	step_end

# 470 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_Player_WalkIntoLab:
# 471 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 471 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 471 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 471 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 471 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
# 471 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_up
	step_end

# 503 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_CameraPan1:
# 504 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_left
# 505 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_up
# 505 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_up
# 505 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_up
# 505 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_up
	step_end

# 508 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_CameraPan2:
# 509 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_slow_right
	step_end

# 512 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_CameraPan3:
# 513 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 513 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 513 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 513 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_down
# 514 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	walk_fast_left
	step_end

# 517 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
Route301_HawthorneResearchLab_Movement_StarterHop:
# 518 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	jump_in_place_up_down
# 519 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	delay_16
# 519 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	delay_16
	step_end

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_0:
# 34 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "???$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_1:
# 37 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "{RIVAL}$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_2:
# 49 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Nice to meet you!$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_3:
# 49 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Sorry for intruding!$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_4:
# 53 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Well, it's nice to meet you too!$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_5:
# 55 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Oh, don't worry about it!\n"
	.string "I'm always happy to meet new people.$"

Route301_HawthorneResearchLab_MapScript_MeetProf_Text_6:
# 57 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Hawthorne$"

Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_0:
# 91 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Chikorita, the Leaf Pokémon.$"

Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_1:
# 102 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Cyndaquil, the Fire Mouse Pokémon.$"

Route301_HawthorneResearchLab_MapScript_StarterIntro_Text_2:
# 113 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "And last but not least,\n"
	.string "Totodile, the Big Jaw Pokémon.$"

Route301_HawthorneResearchLab_Trigger_WhereAreYouGoing_Text_0:
# 127 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Where are you going?\n"
	.string "Don't you want to choose a Pokémon?$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_0:
# 138 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "You chose {STR_VAR_1}!$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_1:
# 140 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Would you like to give {STR_VAR_1} a\n"
	.string "nickname?$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_2:
# 199 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Totodile$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_3:
# 200 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Ararara!$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_4:
# 210 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Chikorita$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_5:
# 211 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Ritarara!$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_6:
# 221 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Cyndaquil$"

Route301_HawthorneResearchLab_EventScript_ReceiveStarter_Text_7:
# 222 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Quililil!$"

Route301_HawthorneResearchLab_EventScript_Chikorita_Text_0:
# 369 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Pakaan?$"

Route301_HawthorneResearchLab_EventScript_Chikorita_Text_1:
# 372 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Chikorita is a Grass-type Pokémon.\p"
	.string "It uses the leaf on its head to\n"
	.string "determine the air's temperature and\l"
	.string "humidity. It loves to sunbathe.\p"
	.string "Would you like to choose the\n"
	.string "Grass-type Pokémon, Chikorita?$"

Route301_HawthorneResearchLab_EventScript_Cyndaquil_Text_0:
# 403 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "...Quil?$"

Route301_HawthorneResearchLab_EventScript_Cyndaquil_Text_1:
# 406 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Cyndaquil is a Fire-type Pokémon.\p"
	.string "It has a timid nature. If it is startled,\n"
	.string "the flames on its back burn more\l"
	.string "vigorously.\p"
	.string "Would you like to choose the Fire-type\n"
	.string "Pokémon, Cyndaquil?$"

Route301_HawthorneResearchLab_EventScript_Totodile_Text_0:
# 437 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Aradun!$"

Route301_HawthorneResearchLab_EventScript_Totodile_Text_1:
# 440 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Totodile is a Water-type Pokémon.\p"
	.string "It has a habit of biting everything with\n"
	.string "its well-developed jaws. Even its\l"
	.string "Trainer needs to be careful.\p"
	.string "Would you like to choose the\n"
	.string "Water-type Pokémon, Totodile?$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Caden1::
# 241 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Oh, {STR_VAR_1}, huh? Yeah, I can\n"
	.string "see it.\p"
	.string "You two look like a good match.$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Caden2::
# 246 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "You know what? A challenge is good!\n"
	.string "Makes things more exciting, right?\l"
	.string "Alright, then... I'll pick {STR_VAR_2}\p"
	.string "I can't wait to see how we both grow\n"
	.string "together!$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Holly1::
# 252 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Wow, {PLAYER}! Nice choice!\p"
	.string "I think {STR_VAR_1} suits you\n"
	.string "perfectly.$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Holly2::
# 257 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Hmm, I think I'll go with {STR_VAR_2}!\n"
	.string "It looks so strong--and cute, too!\p"
	.string "I can't wait to see how we both grow\n"
	.string "together!$"

Route301_HawthorneResearchLab_Text_ReceiveStarter_Hawthorne1::
# 262 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Excellent choices!\n"
	.string "These Pokémon will be your partners\l"
	.string "through thick and thin.\p"
	.string "Treat them well, and they'll be sure to\n"
	.string "grow alongside you.$"

Route301_HawthorneResearchLab_Text_ExplainErrand_Hawthorne1::
# 323 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
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
# 344 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Wait, hang on--why don't I do the\n"
	.string "fieldwork and let {PLAYER} deliver\l"
	.string "the package?\p"
	.string "You're the one who always says I need\n"
	.string "more experience in the field!$"

Route301_HawthorneResearchLab_Text_ExplainErrand_Holly1::
# 349 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Oh, Professor, wouldn't it make more\n"
	.string "sense if I stayed to help with the\l"
	.string "fieldwork?\p"
	.string "You always say it's important to study\n"
	.string "Pokémon up close!$"

Route301_HawthorneResearchLab_Text_ExplainErrand_Hawthorne2::
# 354 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
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
# 474 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Ah, {RIVAL}! Right on time, as usual.\n"
	.string "I was just about to--oh?\l"
	.string "Who's this with you?$"

Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne2::
# 478 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Welcome to my Research Lab, {PLAYER}!\n"
	.string "I'm Professor Hawthorne, and I study\l"
	.string "Pokémon habitats and how they interact\l"
	.string "with human communities here in Avaro.$"

Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne3::
# 482 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "You've come at the perfect time.\n"
	.string "I was just about to let {RIVAL}\l"
	.string "choose their first Pokémon.\p"
	.string "{PLAYER}, since you're here, why don't\n"
	.string "you take one too?\p"
	.string "A Trainer's journey is always better\n"
	.string "with a partner by your side.$"

Route301_HawthorneResearchLab_Text_MeetProf_ProfHawthorne4::
# 488 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Each one is a unique species with its\n"
	.string "own strengths and weaknesses.\p"
	.string "Take your time and choose the one that\n"
	.string "speaks to you the most.$"

Route301_HawthorneResearchLab_Text_MeetProf_Caden1::
# 493 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "This is my new neighbor,\n"
	.string "{PLAYER}--the one I told you moved in\l"
	.string "yesterday.\p"
	.string "Thought I'd bring her along to see the\n"
	.string "lab.$"

Route301_HawthorneResearchLab_Text_MeetProf_Holly1::
# 498 "data/maps/Route301_HawthorneResearchLab/scripts.pory"
	.string "Oh, this is my new neighbor, {PLAYER}!\n"
	.string "He just moved here from Hoenn.\p"
	.string "I thought you wouldn't mind if they\n"
	.string "tagged along.$"
