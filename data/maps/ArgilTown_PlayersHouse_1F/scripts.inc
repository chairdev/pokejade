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
	applymovement 1, ArgilTown_PlayersHouse_1F_Movement_MomApproachPlayer1
# 16 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	speakername ArgilTown_PlayersHouse_1F_MapScript_MeetMom_Text_0
# 19 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_MeetMom
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


# 43 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
ArgilTown_PlayersHouse_1F_Movement_MomApproachPlayer1:
# 44 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 45 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 45 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 46 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 49 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
MomMoveBack:
# 50 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 50 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 51 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 52 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
	step_end

ArgilTown_PlayersHouse_1F_EventScript_Mom::
# 56 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	lockall
# 57 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 59 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	compare VAR_ARGIL_TOWN_STATE, 4
	goto_if_lt ArgilTown_PlayersHouse_1F_EventScript_Mom_2
# 67 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_MomHealsParty
# 68 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 69 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 70 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 71 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_GoGetEm
# 72 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	release
ArgilTown_PlayersHouse_1F_EventScript_Mom_1:
# 77 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return

ArgilTown_PlayersHouse_1F_EventScript_Mom_2:
# 61 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	speakername ArgilTown_PlayersHouse_1F_MapScript_MeetMom_Text_0
# 62 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_EventScript_Mom_Text_0
# 63 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
	goto ArgilTown_PlayersHouse_1F_EventScript_Mom_1


ArgilTown_PlayersHouse_1F_EventScript_Delcatty::
# 92 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	lock
# 93 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 94 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 95 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_EventScript_Delcatty_Text_0
# 96 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmoncry
# 97 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	release
	return


ArgilTown_PlayersHouse_1F_MapScript_MeetMom_Text_0:
# 18 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Mom$"

ArgilTown_PlayersHouse_1F_EventScript_Mom_Text_0:
# 62 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Take your time exploring, too.\n"
	.string "It's a beautiful day, and you never know\l"
	.string "what you might find.$"

ArgilTown_PlayersHouse_1F_EventScript_Delcatty_Text_0:
# 95 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Mreeeow!$"

ArgilTown_PlayersHouse_1F_Text_MeetMom::
# 32 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, good morning, sweetie!\n"
	.string "Up already?\p"
	.string "You must be full of energy today--I\n"
	.string "thought you'd be sleeping in after all\l"
	.string "the unpacking yesterday.\p"
	.string "It's strange, isn't it?\n"
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
	.string "$"

ArgilTown_PlayersHouse_1F_Text_MomHealsParty::
# 80 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Welcome home, {PLAYER}!\p"
	.string "You look tired.\n"
	.string "Why don't you rest a bit?$"

ArgilTown_PlayersHouse_1F_Text_GoGetEm::
# 85 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "There! You look like you're ready to\n"
	.string "take on the world!\p"
	.string "Go get 'em, {PLAYER}!$"
