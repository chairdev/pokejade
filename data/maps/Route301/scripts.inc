Route301_MapScripts::
# 10 "data/maps/Route301/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/Route301/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route301_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route301/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

Route301_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/Route301/scripts.pory"
	map_script_2 VAR_ROUTE301_STATE, 1, Route301_MapScript_FirstRivalBattle
	.2byte 0


Route301_MapScript_FirstRivalBattle::
# 20 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 21 "data/maps/Route301/scripts.pory"
	msgbox Route301_MapScript_FirstRivalBattle_Text_1
# 23 "data/maps/Route301/scripts.pory"
	opendoor 17, 21
# 24 "data/maps/Route301/scripts.pory"
	waitdooranim
# 26 "data/maps/Route301/scripts.pory"
	setobjectxy 1, 17, 21
# 27 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_FirstRivalBattle_WalkDown
# 28 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_FirstRivalBattle_WalkDown
# 29 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 31 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 34 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 35 "data/maps/Route301/scripts.pory"
	checkplayergender
# 36 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_MapScript_FirstRivalBattle_1
# 64 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly1
# 65 "data/maps/Route301/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_MapScript_FirstRivalBattle_Text_2, Route301_MapScript_FirstRivalBattle_Text_3
# 68 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route301_MapScript_FirstRivalBattle_8
Route301_MapScript_FirstRivalBattle_7:
# 73 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Holly2
# 74 "data/maps/Route301/scripts.pory"
	closemessage
# 76 "data/maps/Route301/scripts.pory"
	switch VAR_STARTER_MON
# 77 "data/maps/Route301/scripts.pory"
	case 0, Route301_MapScript_FirstRivalBattle_15
# 80 "data/maps/Route301/scripts.pory"
	case 1, Route301_MapScript_FirstRivalBattle_16
# 83 "data/maps/Route301/scripts.pory"
	case 2, Route301_MapScript_FirstRivalBattle_17
	return

Route301_MapScript_FirstRivalBattle_1:
# 38 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden1
# 39 "data/maps/Route301/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route301_MapScript_FirstRivalBattle_Text_2, Route301_MapScript_FirstRivalBattle_Text_3
# 42 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route301_MapScript_FirstRivalBattle_5
Route301_MapScript_FirstRivalBattle_4:
# 47 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_Caden2
# 48 "data/maps/Route301/scripts.pory"
	closemessage
# 50 "data/maps/Route301/scripts.pory"
	switch VAR_STARTER_MON
# 51 "data/maps/Route301/scripts.pory"
	case 0, Route301_MapScript_FirstRivalBattle_11
# 54 "data/maps/Route301/scripts.pory"
	case 1, Route301_MapScript_FirstRivalBattle_12
# 57 "data/maps/Route301/scripts.pory"
	case 2, Route301_MapScript_FirstRivalBattle_13
	return

Route301_MapScript_FirstRivalBattle_5:
# 44 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_CadenNo
	goto Route301_MapScript_FirstRivalBattle_4

Route301_MapScript_FirstRivalBattle_8:
# 70 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_FirstRivalBattle_HollyNo
	goto Route301_MapScript_FirstRivalBattle_7

Route301_MapScript_FirstRivalBattle_11:
# 52 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_CHIKORITA, BaycrestCity_Text_CadenDefeated
	return

Route301_MapScript_FirstRivalBattle_12:
# 55 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_CYNDAQUIL, BaycrestCity_Text_CadenDefeated
	return

Route301_MapScript_FirstRivalBattle_13:
# 58 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_ROUTE_301_TOTODILE, BaycrestCity_Text_CadenDefeated
	return

Route301_MapScript_FirstRivalBattle_15:
# 78 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_CHIKORITA, BaycrestCity_Text_HollyDefeated
	return

Route301_MapScript_FirstRivalBattle_16:
# 81 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_CYNDAQUIL, BaycrestCity_Text_HollyDefeated
	return

Route301_MapScript_FirstRivalBattle_17:
# 84 "data/maps/Route301/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_ROUTE_301_TOTODILE, BaycrestCity_Text_HollyDefeated
	return


# 90 "data/maps/Route301/scripts.pory"
Route301_Movement_FirstRivalBattle_WalkDown:
# 91 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

Route301_Trigger_MeetRival1::
# 123 "data/maps/Route301/scripts.pory"
	lockall
# 124 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 126 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival1
# 127 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_MeetRival2::
# 131 "data/maps/Route301/scripts.pory"
	lockall
# 132 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 134 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival2
# 135 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_CalledByRival::
# 139 "data/maps/Route301/scripts.pory"
	special SpawnCameraObject
# 140 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan1
# 141 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 143 "data/maps/Route301/scripts.pory"
	playse SE_PIN
# 144 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 145 "data/maps/Route301/scripts.pory"
	waitse
# 146 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route301/scripts.pory"
	delay 40
# 148 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 149 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 152 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Rival1
# 153 "data/maps/Route301/scripts.pory"
	closemessage
# 155 "data/maps/Route301/scripts.pory"
	checkplayergender
# 156 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_CalledByRival_1
# 162 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

Route301_Trigger_CalledByRival_1:
# 158 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return


Route301_Trigger_GoToLabWithRival::
# 168 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 169 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan2
# 170 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 171 "data/maps/Route301/scripts.pory"
	special RemoveCameraObject
# 173 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 174 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_2
# 185 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly1
# 186 "data/maps/Route301/scripts.pory"
	closemessage
# 188 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 189 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 190 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly2
Route301_Trigger_GoToLabWithRival_1:
# 192 "data/maps/Route301/scripts.pory"
	closemessage
# 194 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_GoToLabWithRival_RivalPath
# 195 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_GoToLabWithRival_PlayerPath
# 196 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 199 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_6
# 205 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly3
Route301_Trigger_GoToLabWithRival_5:
# 207 "data/maps/Route301/scripts.pory"
	closemessage
# 209 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 210 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route301/scripts.pory"
	opendoor 17, 21
# 212 "data/maps/Route301/scripts.pory"
	waitdooranim
# 213 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 214 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route301/scripts.pory"
	removeobject 1
# 216 "data/maps/Route301/scripts.pory"
	waitse
# 218 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 219 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route301/scripts.pory"
	warp MAP_ROUTE301_HAWTHORNE_RESEARCH_LAB, 6, 12
	return

Route301_Trigger_GoToLabWithRival_2:
# 176 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden1
# 177 "data/maps/Route301/scripts.pory"
	closemessage
# 179 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 180 "data/maps/Route301/scripts.pory"
	speakername Route301_MapScript_FirstRivalBattle_Text_0
# 181 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden2
	goto Route301_Trigger_GoToLabWithRival_1

Route301_Trigger_GoToLabWithRival_6:
# 201 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden3
	goto Route301_Trigger_GoToLabWithRival_5


# 223 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan1:
# 224 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 224 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 224 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 224 "data/maps/Route301/scripts.pory"
	walk_fast_down
	step_end

# 227 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan2:
# 228 "data/maps/Route301/scripts.pory"
	walk_up
	step_end

# 231 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival1:
# 232 "data/maps/Route301/scripts.pory"
	walk_right
# 233 "data/maps/Route301/scripts.pory"
	walk_down
# 233 "data/maps/Route301/scripts.pory"
	walk_down
# 233 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 236 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival2:
# 237 "data/maps/Route301/scripts.pory"
	walk_down
# 237 "data/maps/Route301/scripts.pory"
	walk_down
# 237 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 240 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_RivalPath:
# 241 "data/maps/Route301/scripts.pory"
	walk_down
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 242 "data/maps/Route301/scripts.pory"
	walk_right
# 243 "data/maps/Route301/scripts.pory"
	walk_up
# 244 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_down
	step_end

# 247 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_PlayerPath:
# 248 "data/maps/Route301/scripts.pory"
	walk_down
# 248 "data/maps/Route301/scripts.pory"
	walk_down
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 249 "data/maps/Route301/scripts.pory"
	walk_right
# 250 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_up
	step_end

Route301_MapScript_FirstRivalBattle_Text_0:
# 20 "data/maps/Route301/scripts.pory"
	.string "{RIVAL}$"

Route301_MapScript_FirstRivalBattle_Text_1:
# 21 "data/maps/Route301/scripts.pory"
	.string "{PLAYER}!\nHey, wait up!$"

Route301_MapScript_FirstRivalBattle_Text_2:
# 40 "data/maps/Route301/scripts.pory"
	.string "Sure!$"

Route301_MapScript_FirstRivalBattle_Text_3:
# 40 "data/maps/Route301/scripts.pory"
	.string "No way!$"

Route301_Text_FirstRivalBattle_Caden1::
# 94 "data/maps/Route301/scripts.pory"
	.string "Hey, before you go running off to\n"
	.string "Dolomite, let's see what you've got.\p"
	.string "We can't call ourselves rivals until\n"
	.string "we've battled, right?$"

Route301_Text_FirstRivalBattle_Holly1::
# 99 "data/maps/Route301/scripts.pory"
	.string "Wait! Before you leave, let's have a\n"
	.string "quick battle.\p"
	.string "It's the best way to get to know each\n"
	.string "other--and our new Pokémon--right?$"

Route301_Text_FirstRivalBattle_CadenNo::
# 104 "data/maps/Route301/scripts.pory"
	.string "Oh, come on! Don't be like that!\p"
	.string "We're both new trainers, so we should\n"
	.string "battle to see who's better!$"

Route301_Text_FirstRivalBattle_HollyNo::
# 109 "data/maps/Route301/scripts.pory"
	.string "But... why not?\p"
	.string "It's just a friendly battle, right?$"

Route301_Text_FirstRivalBattle_Caden2::
# 114 "data/maps/Route301/scripts.pory"
	.string "Ready or not, here I come!$"

Route301_Text_FirstRivalBattle_Holly2::
# 118 "data/maps/Route301/scripts.pory"
	.string "I've made up my mind!\n"
	.string "I'm going to win!$"

Route301_Text_GoToLabWithRival_Rival1::
# 254 "data/maps/Route301/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Over here!$"

Route301_Text_GoToLabWithRival_Caden1::
# 258 "data/maps/Route301/scripts.pory"
	.string "Man, this route is kinda small, huh?\n"
	.string "Guess I should've expected that from a\l"
	.string "place so close to Argil Town...$"

Route301_Text_GoToLabWithRival_Caden2::
# 262 "data/maps/Route301/scripts.pory"
	.string "Anyway, we should hurry.\n"
	.string "The professor said he needed something\l"
	.string "delivered, right?\p"
	.string "Hope it's not just some boring\n"
	.string "package...$"

Route301_Text_GoToLabWithRival_Caden3::
# 267 "data/maps/Route301/scripts.pory"
	.string "Guess we'll find out soon enough.\n"
	.string "Let's go$"

Route301_Text_GoToLabWithRival_Holly1::
# 271 "data/maps/Route301/scripts.pory"
	.string "It's so quiet out here!\n"
	.string "Not exactly the thrilling adventure I\l"
	.string "was hoping for, but hey, it's a start!$"

Route301_Text_GoToLabWithRival_Holly2::
# 275 "data/maps/Route301/scripts.pory"
	.string "I wonder what the professor needs help\n"
	.string "with...\n"
	.string "I hope it's something exciting!$"

Route301_Text_GoToLabWithRival_Holly3::
# 279 "data/maps/Route301/scripts.pory"
	.string "Come on, {PLAYER}!\n"
	.string "The professor's waiting, and I wanna\l"
	.string "get moving!$"
