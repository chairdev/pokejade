EverwoodTown_PlayersHouse_1F_MapScripts::
# 4 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverwoodTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EverwoodTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_EVERWOOD_TOWN_STATE, 0, PlayersHouse_1F_MapScript_MeetMom
	.2byte 0


PlayersHouse_1F_MapScript_MeetMom::
# 12 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	lockall
# 13 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 14 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomApproachPlayer1
# 15 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox MeetMomText1
# 18 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 19 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomMoveBack
# 20 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 1
# 25 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return


# 40 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
MomApproachPlayer1:
# 41 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 42 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 42 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 43 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 46 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
MomMoveBack:
# 47 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 47 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 48 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 49 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	face_right
	step_end

PlayersHouse_1F_EventScript_MomN::
# 53 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	lockall
# 54 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 56 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 57 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayersHouse_1F_EventScript_MomN_2
# 63 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalCameByText1B
PlayersHouse_1F_EventScript_MomN_1:
# 66 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return

PlayersHouse_1F_EventScript_MomN_2:
# 59 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalCameByText1A
	goto PlayersHouse_1F_EventScript_MomN_1


MeetMomText1::
# 28 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Oh! Good morning, {PLAYER}!\p"
	.string "You sure are up early today.\p"
	.string "I guess you're just as excited as I am!\p"
	.string "Today is the day you become a Pokémon\n"
	.string "Trainer!\p"
	.string "You'll get your first Pokémon from\n"
	.string "Professor Sanzashi at the Research\l"
	.string "Lab.\p"
	.string "I can't wait to see which one you\n"
	.string "choose!\p"
	.string "I won't keep you any longer. I'm sure\n"
	.string "Professor Sanzashi is waiting for you!$"

RivalCameByText1A::
# 69 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Our neighbor {RIVAL} came looking\n"
	.string "for you earlier.\p"
	.string "I told her you were still asleep.\p"
	.string "...I wonder what she wanted?$"

RivalCameByText1B::
# 76 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Our neighbor {RIVAL} came looking\n"
	.string "for you earlier.\p"
	.string "I told him you were still asleep.\p"
	.string "...I wonder what he wanted?$"
