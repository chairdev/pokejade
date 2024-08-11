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
	msgbox MeetMomText1, MSGBOX_YESNO
# 19 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayersHouse_1F_MapScript_MeetMom_2
# 25 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_MapScript_MeetMom_Text_1
PlayersHouse_1F_MapScript_MeetMom_1:
# 28 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox MeetMomText2
# 29 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 30 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomMoveBack
# 31 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 1
# 35 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return

PlayersHouse_1F_MapScript_MeetMom_2:
# 21 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_MapScript_MeetMom_Text_0
	goto PlayersHouse_1F_MapScript_MeetMom_1


# 49 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
MomApproachPlayer1:
# 50 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 51 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 51 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 52 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 55 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
MomMoveBack:
# 56 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 56 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 57 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 58 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	face_right
	step_end

PlayersHouse_1F_EventScript_MomN::
# 62 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	lockall
# 63 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_MomN_Text_0
# 64 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_1F_MapScript_MeetMom_Text_0:
# 21 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "I'm so excited for you! I can't wait to\n"
	.string "see what you choose!\p"
	.string "$"

PlayersHouse_1F_MapScript_MeetMom_Text_1:
# 25 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Nervous, huh? That's okay! I'm sure\n"
	.string "everything will be fine!\p"
	.string "$"

PlayersHouse_1F_EventScript_MomN_Text_0:
# 63 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "fortnite$"

MeetMomText1::
# 38 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Oh! Good morning, {PLAYER}!\p"
	.string "You sure are up early today.\p"
	.string "Are you all ready to receive your first\n"
	.string "Pokémon?\p"
	.string "$"

MeetMomText2::
# 44 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Now, you should head over to the\n"
	.string "Hawthorn Research Lab!\p"
	.string "I'm sure Professor Hawthorn is waiting\n"
	.string "for you!\p"
	.string "$"
