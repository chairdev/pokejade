ArgilTown_PlayersHouse_1F_MapScripts::
# 4 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArgilTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ArgilTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_ARGIL_TOWN_STATE, 0, ArgilTown_PlayersHouse_1F_MapScript_MeetMom
	.2byte 0


ArgilTown_PlayersHouse_1F_MapScript_MeetMom::
# 12 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	lockall
# 13 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ARGIL_TOWN
# 14 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 15 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomApproachPlayer1
# 16 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	speakername ArgilTown_PlayersHouse_1F_MapScript_MeetMom_Text_0
# 19 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox MeetMomText1
# 20 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 22 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 23 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomMoveBack
# 24 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_ARGIL_TOWN_STATE, 1
# 29 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return


# 44 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
MomApproachPlayer1:
# 45 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 46 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 46 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 47 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 50 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
MomMoveBack:
# 51 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 51 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 52 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 53 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
	step_end

ArgilTown_PlayersHouse_1F_EventScript_Mom::
# 57 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	lockall
# 58 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 60 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	compare VAR_ARGIL_TOWN_STATE, 4
	goto_if_lt ArgilTown_PlayersHouse_1F_EventScript_Mom_2
# 74 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_MomHealsParty
# 75 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 76 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 77 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 78 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_GoGetEm
# 79 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	release
ArgilTown_PlayersHouse_1F_EventScript_Mom_1:
# 84 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return

ArgilTown_PlayersHouse_1F_EventScript_Mom_2:
# 62 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 63 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ArgilTown_PlayersHouse_1F_EventScript_Mom_5
# 69 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalCameByText1B
	goto ArgilTown_PlayersHouse_1F_EventScript_Mom_1

ArgilTown_PlayersHouse_1F_EventScript_Mom_5:
# 65 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalCameByText1A
	goto ArgilTown_PlayersHouse_1F_EventScript_Mom_1


ArgilTown_PlayersHouse_1F_EventScript_Delcatty::
# 115 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	lock
# 116 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 117 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 118 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_EventScript_Delcatty_Text_0
# 119 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmoncry
# 120 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	release
	return


ArgilTown_PlayersHouse_1F_MapScript_MeetMom_Text_0:
# 18 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Mom$"

ArgilTown_PlayersHouse_1F_EventScript_Delcatty_Text_0:
# 118 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Mreeeow!$"

MeetMomText1::
# 32 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, good morning, sweetie!\n"
	.string "Up already?\p"
	.string "You must be full of energy today--I\n"
	.string "thought you'd be sleeping in after all\l"
	.string "the unpacking yesterday.\p"
	.string "It's strange, isn't it?\l"
	.string "Everything feels so new here...\l"
	.string "different from Hoenn.\p"
	.string "Oh! Before I forget, the neighbors\n"
	.string "across the street stopped by\l"
	.string "yesterday.\p"
	.string "They said they have a child about your\n"
	.string "age.\p"
	.string "Why don't you go over and introduce\n"
	.string "yourself?\l"
	.string "It might be nice to make a new friend!\p"
	.string "Take your time exploring, too.\n"
	.string "It's a beautiful day, and you never know\l"
	.string "what you might find$"

ArgilTown_PlayersHouse_1F_Text_MomHealsParty::
# 87 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Welcome home, {PLAYER}!\p"
	.string "You look tired.\n"
	.string "Why don't you rest a bit?$"

ArgilTown_PlayersHouse_1F_Text_GoGetEm::
# 92 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "There! You look like you're ready to\n"
	.string "take on the world!\p"
	.string "Go get 'em, {PLAYER}!$"

RivalCameByText1A::
# 100 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Our neighbor {RIVAL} came looking\n"
	.string "for you earlier.\p"
	.string "I told her you were still asleep.\p"
	.string "...I wonder what she wanted?$"

RivalCameByText1B::
# 107 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Our neighbor {RIVAL} came looking\n"
	.string "for you earlier.\p"
	.string "I told him you were still asleep.\p"
	.string "...I wonder what he wanted?$"
