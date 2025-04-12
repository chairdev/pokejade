ArgilTown_MapScripts::
	.byte 0


ArgilTown_Trigger_DontLeave1::
# 13 "data/maps/ArgilTown/scripts.pory"
	lockall
# 15 "data/maps/ArgilTown/scripts.pory"
	call ArgilTown_Trigger_DontLeaveExclamation
# 16 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 17 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 18 "data/maps/ArgilTown/scripts.pory"
	call ArgilTown_Trigger_DontLeave
# 19 "data/maps/ArgilTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ArgilTown_Movement_DontLeave_WalkBackIntoTown1
# 20 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 21 "data/maps/ArgilTown/scripts.pory"
	releaseall
	return


ArgilTown_Trigger_DontLeave2::
# 25 "data/maps/ArgilTown/scripts.pory"
	lockall
# 27 "data/maps/ArgilTown/scripts.pory"
	call ArgilTown_Trigger_DontLeaveExclamation
# 28 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, ArgilTown_Movement_DontLeave_ApproachPlayer1
# 29 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 31 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 32 "data/maps/ArgilTown/scripts.pory"
	call ArgilTown_Trigger_DontLeave
# 33 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, ArgilTown_Movement_DontLeave_GoBack1
# 35 "data/maps/ArgilTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ArgilTown_Movement_DontLeave_WalkBackIntoTown2
# 36 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/ArgilTown/scripts.pory"
	releaseall
	return


ArgilTown_Trigger_DontLeave3::
# 41 "data/maps/ArgilTown/scripts.pory"
	lockall
# 43 "data/maps/ArgilTown/scripts.pory"
	call ArgilTown_Trigger_DontLeaveExclamation
# 44 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, ArgilTown_Movement_DontLeave_ApproachPlayer2
# 45 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 47 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 48 "data/maps/ArgilTown/scripts.pory"
	call ArgilTown_Trigger_DontLeave
# 49 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, ArgilTown_Movement_DontLeave_GoBack2
# 51 "data/maps/ArgilTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ArgilTown_Movement_DontLeave_WalkBackIntoTown2
# 52 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/ArgilTown/scripts.pory"
	releaseall
	return


ArgilTown_Trigger_DontLeave4::
# 57 "data/maps/ArgilTown/scripts.pory"
	lockall
# 59 "data/maps/ArgilTown/scripts.pory"
	call ArgilTown_Trigger_DontLeaveExclamation
# 60 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, ArgilTown_Movement_DontLeave_ApproachPlayer3
# 61 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 63 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/ArgilTown/scripts.pory"
	call ArgilTown_Trigger_DontLeave
# 65 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, ArgilTown_Movement_DontLeave_GoBack3
# 67 "data/maps/ArgilTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ArgilTown_Movement_DontLeave_WalkBackIntoTown2
# 68 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/ArgilTown/scripts.pory"
	releaseall
	return


ArgilTown_Trigger_DontLeaveExclamation::
# 73 "data/maps/ArgilTown/scripts.pory"
	playse SE_PIN
# 74 "data/maps/ArgilTown/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 75 "data/maps/ArgilTown/scripts.pory"
	waitse
# 76 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
	return


ArgilTown_Trigger_DontLeave::
# 80 "data/maps/ArgilTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/ArgilTown/scripts.pory"
	waitmovement 0
# 83 "data/maps/ArgilTown/scripts.pory"
	msgbox ArgilTown_Trigger_DontLeave_Text_0
# 87 "data/maps/ArgilTown/scripts.pory"
	closemessage
	return


# 90 "data/maps/ArgilTown/scripts.pory"
ArgilTown_Movement_DontLeave_ApproachPlayer1:
# 91 "data/maps/ArgilTown/scripts.pory"
	walk_down
	step_end

# 94 "data/maps/ArgilTown/scripts.pory"
ArgilTown_Movement_DontLeave_ApproachPlayer2:
# 95 "data/maps/ArgilTown/scripts.pory"
	walk_down
# 95 "data/maps/ArgilTown/scripts.pory"
	walk_down
	step_end

# 98 "data/maps/ArgilTown/scripts.pory"
ArgilTown_Movement_DontLeave_ApproachPlayer3:
# 99 "data/maps/ArgilTown/scripts.pory"
	walk_down
# 99 "data/maps/ArgilTown/scripts.pory"
	walk_down
# 99 "data/maps/ArgilTown/scripts.pory"
	walk_down
	step_end

# 102 "data/maps/ArgilTown/scripts.pory"
ArgilTown_Movement_DontLeave_WalkBackIntoTown1:
# 103 "data/maps/ArgilTown/scripts.pory"
	walk_down
# 104 "data/maps/ArgilTown/scripts.pory"
	walk_left
	step_end

# 107 "data/maps/ArgilTown/scripts.pory"
ArgilTown_Movement_DontLeave_WalkBackIntoTown2:
# 108 "data/maps/ArgilTown/scripts.pory"
	walk_left
	step_end

# 111 "data/maps/ArgilTown/scripts.pory"
ArgilTown_Movement_DontLeave_GoBack1:
# 112 "data/maps/ArgilTown/scripts.pory"
	walk_up
# 113 "data/maps/ArgilTown/scripts.pory"
	walk_in_place_down
	step_end

# 116 "data/maps/ArgilTown/scripts.pory"
ArgilTown_Movement_DontLeave_GoBack2:
# 117 "data/maps/ArgilTown/scripts.pory"
	walk_up
# 117 "data/maps/ArgilTown/scripts.pory"
	walk_up
# 118 "data/maps/ArgilTown/scripts.pory"
	walk_in_place_down
	step_end

# 121 "data/maps/ArgilTown/scripts.pory"
ArgilTown_Movement_DontLeave_GoBack3:
# 122 "data/maps/ArgilTown/scripts.pory"
	walk_up
# 122 "data/maps/ArgilTown/scripts.pory"
	walk_up
# 122 "data/maps/ArgilTown/scripts.pory"
	walk_up
# 123 "data/maps/ArgilTown/scripts.pory"
	walk_in_place_down
	step_end

ArgilTown_EventScript_TechnologyGuy::
# 127 "data/maps/ArgilTown/scripts.pory"
	lock
# 128 "data/maps/ArgilTown/scripts.pory"
	faceplayer
# 129 "data/maps/ArgilTown/scripts.pory"
	msgbox ArgilTown_EventScript_TechnologyGuy_Text_0
# 130 "data/maps/ArgilTown/scripts.pory"
	closemessage
# 131 "data/maps/ArgilTown/scripts.pory"
	release
	return


ArgilTown_Trigger_DontLeave_Text_0:
# 83 "data/maps/ArgilTown/scripts.pory"
	.string "You can't go that way!\p"
	.string "It's not safe to head out onto Route\n"
	.string "301 without a Pokémon by your side.\p"
	.string "Wild Pokémon might jump out at you, you\n"
	.string "know!$"

ArgilTown_EventScript_TechnologyGuy_Text_0:
# 129 "data/maps/ArgilTown/scripts.pory"
	.string "Technology these days is amazing!\p"
	.string "You can access your Pokémon Boxes\n"
	.string "right from the START Menu.\p"
	.string "Gone are the days of having to visit a\n"
	.string "Pokémon Center to switch out your\l"
	.string "team!$"
