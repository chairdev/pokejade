EverwoodTown_PlayersHouse_1F_MapScripts::
# 4 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverwoodTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EverwoodTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_EVERWOOD_TOWN_STATE, 0, EverwoodTown_PlayersHouse_1F_MapScript_MeetMom
	.2byte 0


EverwoodTown_PlayersHouse_1F_MapScript_MeetMom::
# 12 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	lockall
# 13 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVERWOOD_TOWN
# 14 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 15 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomApproachPlayer1
# 16 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	speakername EverwoodTown_PlayersHouse_1F_MapScript_MeetMom_Text_0
# 19 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox MeetMomText1
# 20 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 22 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 23 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomMoveBack
# 24 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 1
# 29 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return


# 44 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
MomApproachPlayer1:
# 45 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 46 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 46 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 47 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 50 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
MomMoveBack:
# 51 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 51 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 52 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 53 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
	step_end

EverwoodTown_PlayersHouse_1F_EventScript_Mom::
# 57 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	lockall
# 58 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 60 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	compare VAR_EVERWOOD_TOWN_STATE, 4
	goto_if_lt EverwoodTown_PlayersHouse_1F_EventScript_Mom_2
# 74 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox EverwoodTown_PlayersHouse_1F_Text_MomHealsParty
# 75 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 76 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 77 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 78 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox EverwoodTown_PlayersHouse_1F_Text_GoGetEm
# 79 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	release
EverwoodTown_PlayersHouse_1F_EventScript_Mom_1:
# 84 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return

EverwoodTown_PlayersHouse_1F_EventScript_Mom_2:
# 62 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 63 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverwoodTown_PlayersHouse_1F_EventScript_Mom_5
# 69 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalCameByText1B
	goto EverwoodTown_PlayersHouse_1F_EventScript_Mom_1

EverwoodTown_PlayersHouse_1F_EventScript_Mom_5:
# 65 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalCameByText1A
	goto EverwoodTown_PlayersHouse_1F_EventScript_Mom_1


EverwoodTown_PlayersHouse_1F_EventScript_Delcatty::
# 115 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	lock
# 116 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 117 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 118 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	msgbox EverwoodTown_PlayersHouse_1F_EventScript_Delcatty_Text_0
# 119 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	waitmoncry
# 120 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	release
	return


EverwoodTown_PlayersHouse_1F_MapScript_MeetMom_Text_0:
# 18 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Mom$"

EverwoodTown_PlayersHouse_1F_EventScript_Delcatty_Text_0:
# 118 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Mreeeow!$"

MeetMomText1::
# 32 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Oh! Good morning, {PLAYER}!\p"
	.string "You sure are up early today.\p"
	.string "I guess you're just as excited as I am!\p"
	.string "Today is the day you become a Pokémon\n"
	.string "Trainer!\p"
	.string "You'll get your first Pokémon from\n"
	.string "Professor Hawthorne at the Research\l"
	.string "Lab.\p"
	.string "I can't wait to see which one you\n"
	.string "choose!\p"
	.string "I won't keep you any longer. I'm sure\n"
	.string "Professor Hawthorne is waiting for you!$"

EverwoodTown_PlayersHouse_1F_Text_MomHealsParty::
# 87 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Welcome home, {PLAYER}!\p"
	.string "You look tired.\n"
	.string "Why don't you rest a bit?$"

EverwoodTown_PlayersHouse_1F_Text_GoGetEm::
# 92 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "There! You look like you're ready to\n"
	.string "take on the world!\p"
	.string "Go get 'em, {PLAYER}!$"

RivalCameByText1A::
# 100 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Our neighbor {RIVAL} came looking\n"
	.string "for you earlier.\p"
	.string "I told her you were still asleep.\p"
	.string "...I wonder what she wanted?$"

RivalCameByText1B::
# 107 "data/maps/EverwoodTown_PlayersHouse_1F/scripts.pory"
	.string "Our neighbor {RIVAL} came looking\n"
	.string "for you earlier.\p"
	.string "I told him you were still asleep.\p"
	.string "...I wonder what he wanted?$"
