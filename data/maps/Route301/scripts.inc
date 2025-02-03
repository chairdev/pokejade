Route301_MapScripts::
# 10 "data/maps/Route301/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route301_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route301/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route301_Trigger_MeetRival1::
# 16 "data/maps/Route301/scripts.pory"
	lockall
# 17 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 19 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival1
# 20 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_MeetRival2::
# 24 "data/maps/Route301/scripts.pory"
	lockall
# 25 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_CalledByRival
# 27 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_CalledByRival_Player_MoveToRival2
# 28 "data/maps/Route301/scripts.pory"
	call Route301_Trigger_GoToLabWithRival
	return


Route301_Trigger_CalledByRival::
# 32 "data/maps/Route301/scripts.pory"
	special SpawnCameraObject
# 33 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan1
# 34 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 36 "data/maps/Route301/scripts.pory"
	playse SE_PIN
# 37 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 38 "data/maps/Route301/scripts.pory"
	waitse
# 39 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route301/scripts.pory"
	delay 40
# 41 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_CalledByRival_2
# 50 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
Route301_Trigger_CalledByRival_1:
# 53 "data/maps/Route301/scripts.pory"
	speakername Route301_Trigger_CalledByRival_Text_0
# 54 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Rival1
# 55 "data/maps/Route301/scripts.pory"
	closemessage
	return

Route301_Trigger_CalledByRival_2:
# 46 "data/maps/Route301/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	goto Route301_Trigger_CalledByRival_1


Route301_Trigger_GoToLabWithRival::
# 60 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 61 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route301_Movement_CalledByRival_CameraPan2
# 62 "data/maps/Route301/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 63 "data/maps/Route301/scripts.pory"
	special RemoveCameraObject
# 65 "data/maps/Route301/scripts.pory"
	speakername Route301_Trigger_CalledByRival_Text_0
# 66 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_2
# 77 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly1
# 78 "data/maps/Route301/scripts.pory"
	closemessage
# 80 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 81 "data/maps/Route301/scripts.pory"
	speakername Route301_Trigger_CalledByRival_Text_0
# 82 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly2
Route301_Trigger_GoToLabWithRival_1:
# 84 "data/maps/Route301/scripts.pory"
	closemessage
# 86 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_Movement_GoToLabWithRival_RivalPath
# 87 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route301_Movement_GoToLabWithRival_PlayerPath
# 88 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route301/scripts.pory"
	speakername Route301_Trigger_CalledByRival_Text_0
# 91 "data/maps/Route301/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route301_Trigger_GoToLabWithRival_6
# 97 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Holly3
Route301_Trigger_GoToLabWithRival_5:
# 99 "data/maps/Route301/scripts.pory"
	closemessage
# 101 "data/maps/Route301/scripts.pory"
	opendoor 17, 21
# 102 "data/maps/Route301/scripts.pory"
	waitdooranim
# 103 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 104 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route301/scripts.pory"
	removeobject 1
# 106 "data/maps/Route301/scripts.pory"
	waitse
# 108 "data/maps/Route301/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 109 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route301/scripts.pory"
	warp MAP_ROUTE301_HAWTHORNE_RESEARCH_LAB, 6, 12
	return

Route301_Trigger_GoToLabWithRival_2:
# 68 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden1
# 69 "data/maps/Route301/scripts.pory"
	closemessage
# 71 "data/maps/Route301/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 72 "data/maps/Route301/scripts.pory"
	speakername Route301_Trigger_CalledByRival_Text_0
# 73 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden2
	goto Route301_Trigger_GoToLabWithRival_1

Route301_Trigger_GoToLabWithRival_6:
# 93 "data/maps/Route301/scripts.pory"
	msgbox Route301_Text_GoToLabWithRival_Caden3
	goto Route301_Trigger_GoToLabWithRival_5


# 113 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan1:
# 114 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 114 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 114 "data/maps/Route301/scripts.pory"
	walk_fast_down
# 114 "data/maps/Route301/scripts.pory"
	walk_fast_down
	step_end

# 117 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_CameraPan2:
# 118 "data/maps/Route301/scripts.pory"
	walk_up
	step_end

# 121 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival1:
# 122 "data/maps/Route301/scripts.pory"
	walk_right
# 123 "data/maps/Route301/scripts.pory"
	walk_down
# 123 "data/maps/Route301/scripts.pory"
	walk_down
# 123 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 126 "data/maps/Route301/scripts.pory"
Route301_Movement_CalledByRival_Player_MoveToRival2:
# 127 "data/maps/Route301/scripts.pory"
	walk_down
# 127 "data/maps/Route301/scripts.pory"
	walk_down
# 127 "data/maps/Route301/scripts.pory"
	walk_down
	step_end

# 130 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_RivalPath:
# 131 "data/maps/Route301/scripts.pory"
	walk_down
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 132 "data/maps/Route301/scripts.pory"
	walk_right
# 133 "data/maps/Route301/scripts.pory"
	walk_up
# 134 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_down
	step_end

# 137 "data/maps/Route301/scripts.pory"
Route301_Movement_GoToLabWithRival_PlayerPath:
# 138 "data/maps/Route301/scripts.pory"
	walk_down
# 138 "data/maps/Route301/scripts.pory"
	walk_down
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 139 "data/maps/Route301/scripts.pory"
	walk_right
# 140 "data/maps/Route301/scripts.pory"
	walk_in_place_faster_up
	step_end

Route301_Trigger_CalledByRival_Text_0:
# 53 "data/maps/Route301/scripts.pory"
	.string "{RIVAL}$"

Route301_Text_GoToLabWithRival_Rival1::
# 144 "data/maps/Route301/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Over here!$"

Route301_Text_GoToLabWithRival_Caden1::
# 148 "data/maps/Route301/scripts.pory"
	.string "Man, this route is kinda small, huh?\n"
	.string "Guess I should've expected that from a\l"
	.string "place so close to Argil Town...$"

Route301_Text_GoToLabWithRival_Caden2::
# 152 "data/maps/Route301/scripts.pory"
	.string "Anyway, we should hurry.\n"
	.string "The professor said he needed something\l"
	.string "delivered, right?\p"
	.string "Hope it's not just some boring\n"
	.string "package...$"

Route301_Text_GoToLabWithRival_Caden3::
# 157 "data/maps/Route301/scripts.pory"
	.string "Guess we'll find out soon enough.\n"
	.string "Let's go$"

Route301_Text_GoToLabWithRival_Holly1::
# 161 "data/maps/Route301/scripts.pory"
	.string "It's so quiet out here!\n"
	.string "Not exactly the thrilling adventure I\l"
	.string "was hoping for, but hey, it's a start!$"

Route301_Text_GoToLabWithRival_Holly2::
# 165 "data/maps/Route301/scripts.pory"
	.string "I wonder what the professor needs help\n"
	.string "with...\n"
	.string "I hope it's something exciting!$"

Route301_Text_GoToLabWithRival_Holly3::
# 169 "data/maps/Route301/scripts.pory"
	.string "Come on, {PLAYER}!\n"
	.string "The professor's waiting, and I wanna\l"
	.string "get moving!$"
