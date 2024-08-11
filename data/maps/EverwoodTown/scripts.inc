EverwoodTown_MapScripts::
	.byte 0


EverwoodTown_Trigger_DontGoIntoRouteLeft::
# 11 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 13 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_DontGoIntoRouteLeft_Text_0
# 14 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 16 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 17 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManApproachPlayer1
# 18 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 1
# 20 "data/maps/EverwoodTown/scripts.pory"
	msgbox DontGoIntoRouteText
# 21 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 23 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManMoveBack1
# 24 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 26 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_DontGoIntoRouteRight::
# 30 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 32 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_DontGoIntoRouteLeft_Text_0
# 34 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 35 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManApproachPlayer2
# 36 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 1
# 38 "data/maps/EverwoodTown/scripts.pory"
	msgbox DontGoIntoRouteText
# 40 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManMoveBack2
# 41 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


# 54 "data/maps/EverwoodTown/scripts.pory"
PlayerMoveDown:
# 55 "data/maps/EverwoodTown/scripts.pory"
	walk_down
	step_end

# 58 "data/maps/EverwoodTown/scripts.pory"
FatManApproachPlayer1:
# 59 "data/maps/EverwoodTown/scripts.pory"
	walk_left
# 59 "data/maps/EverwoodTown/scripts.pory"
	walk_left
# 60 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 60 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 61 "data/maps/EverwoodTown/scripts.pory"
	face_up
	step_end

# 64 "data/maps/EverwoodTown/scripts.pory"
FatManApproachPlayer2:
# 65 "data/maps/EverwoodTown/scripts.pory"
	walk_left
# 66 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 66 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 67 "data/maps/EverwoodTown/scripts.pory"
	face_up
	step_end

# 70 "data/maps/EverwoodTown/scripts.pory"
FatManMoveBack1:
# 71 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 71 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 72 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 72 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 73 "data/maps/EverwoodTown/scripts.pory"
	face_down
	step_end

# 76 "data/maps/EverwoodTown/scripts.pory"
FatManMoveBack2:
# 77 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 77 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 78 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 79 "data/maps/EverwoodTown/scripts.pory"
	face_down
	step_end

EverwoodTown_Trigger_DontGoIntoRouteLeft_Text_0:
# 13 "data/maps/EverwoodTown/scripts.pory"
	.string "Wait, wait, wait, wait, waaait!!$"

DontGoIntoRouteText::
# 46 "data/maps/EverwoodTown/scripts.pory"
	.string "You can't go that way!\p"
	.string "It's not safe to head out onto Route\n"
	.string "501 without a Pokémon by your side.\p"
	.string "Wild Pokémon might jump out at you, you\n"
	.string "know!\p"
	.string "You'll need a partner to help keep you\n"
	.string "safe.$"
