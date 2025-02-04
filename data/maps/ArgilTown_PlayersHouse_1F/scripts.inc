ArgilTown_PlayersHouse_1F_MapScripts::
# 4 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArgilTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ArgilTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_ARGIL_TOWN_STATE, 0, ArgilTown_PlayersHouse_1F_MapScript_MeetMom
# 6 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_ROUTE301_STATE, 2, ArgilTown_PlayersHouse_1F_MapScript_MomErrand
	.2byte 0


ArgilTown_PlayersHouse_1F_MapScript_MomErrand::
# 11 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	lockall
# 13 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 14 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 15 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitse
# 16 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 18 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 22 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	speakername ArgilTown_PlayersHouse_1F_MapScript_MomErrand_Text_0
# 23 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_Errand_Mom1
# 24 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 26 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 27 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ArgilTown_PlayersHouse_1F_Movement_Errand_ApproachMom
# 28 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	speakername ArgilTown_PlayersHouse_1F_MapScript_MomErrand_Text_0
# 31 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_Errand_Mom2
# 32 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 34 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 36 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_MapScript_MomErrand_Text_1
# 37 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 39 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 40 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 41 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_ARGIL_TOWN_STATE, 3
# 42 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_ROUTE301_STATE, 3
# 45 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_Errand_Mom3
# 47 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return


# 52 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
ArgilTown_PlayersHouse_1F_Movement_Errand_ApproachMom:
# 53 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 53 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 53 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 54 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 54 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 54 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 54 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 55 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 55 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 56 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 57 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	delay_16
	step_end

ArgilTown_PlayersHouse_1F_MapScript_MeetMom::
# 83 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	lockall
# 84 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ARGIL_TOWN
# 85 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 86 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, ArgilTown_PlayersHouse_1F_Movement_MomApproachPlayer1
# 87 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	speakername ArgilTown_PlayersHouse_1F_MapScript_MomErrand_Text_0
# 90 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_MeetMom
# 91 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 93 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 94 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomMoveBack
# 95 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 97 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_ARGIL_TOWN_STATE, 1
# 100 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return


# 114 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
ArgilTown_PlayersHouse_1F_Movement_MomApproachPlayer1:
# 115 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 116 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 116 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 117 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 120 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
MomMoveBack:
# 121 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 121 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 122 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 123 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
	step_end

ArgilTown_PlayersHouse_1F_EventScript_Mom::
# 127 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	lockall
# 128 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 130 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	compare VAR_ARGIL_TOWN_STATE, 2
	goto_if_lt ArgilTown_PlayersHouse_1F_EventScript_Mom_2
# 138 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_MomHealsParty
# 139 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 140 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 141 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 142 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_Text_GoGetEm
# 143 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	release
ArgilTown_PlayersHouse_1F_EventScript_Mom_1:
# 148 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return

ArgilTown_PlayersHouse_1F_EventScript_Mom_2:
# 132 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	speakername ArgilTown_PlayersHouse_1F_MapScript_MomErrand_Text_0
# 133 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_EventScript_Mom_Text_0
# 134 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	closemessage
	goto ArgilTown_PlayersHouse_1F_EventScript_Mom_1


ArgilTown_PlayersHouse_1F_EventScript_Delcatty::
# 163 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	lock
# 164 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 165 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 166 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	msgbox ArgilTown_PlayersHouse_1F_EventScript_Delcatty_Text_0
# 167 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	waitmoncry
# 168 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	release
	return


ArgilTown_PlayersHouse_1F_MapScript_MomErrand_Text_0:
# 22 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Mom$"

ArgilTown_PlayersHouse_1F_MapScript_MomErrand_Text_1:
# 36 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "You put on the Running Shoes!$"

ArgilTown_PlayersHouse_1F_EventScript_Mom_Text_0:
# 133 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Take your time exploring, too.\n"
	.string "It's a beautiful day, and you never know\l"
	.string "what you might find.$"

ArgilTown_PlayersHouse_1F_EventScript_Delcatty_Text_0:
# 166 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Mreeeow!$"

ArgilTown_PlayersHouse_1F_Text_Errand_Mom1::
# 61 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, back already?\n"
	.string "How was your new neighbor?\p"
	.string "I hope you two hit it off!\n"
	.string "It's always nice to have a friend\l"
	.string "nearby.$"

ArgilTown_PlayersHouse_1F_Text_Errand_Mom2::
# 66 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "What? You met Professor Hawthorne?\n"
	.string "That's wonderful!\p"
	.string "Is that why you have that cute little\n"
	.string "Pokémon with you?\p"
	.string "...Ah, so you're already helping out!\n"
	.string "That's just like you.\p"
	.string "You know, this reminds me of when I used\n"
	.string "to travel for Pokémon Contests... but\l"
	.string "that's a story for another time.\p"
	.string "Before you go, I have something for\n"
	.string "you! I found it while I was unpacking\l"
	.string "yesterday.$"

ArgilTown_PlayersHouse_1F_Text_Errand_Mom3::
# 74 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "These will help you get around\n"
	.string "faster--just hold the B Button while\l"
	.string "walking, and you'll be zooming around in\l"
	.string "no time!\p"
	.string "I'll be here if you need me, sweetie.\n"
	.string "Good luck on your errand!$"

ArgilTown_PlayersHouse_1F_Text_MeetMom::
# 103 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
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
	.string "It might be nice to make a new friend!$"

ArgilTown_PlayersHouse_1F_Text_MomHealsParty::
# 151 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "Welcome home, {PLAYER}!\p"
	.string "You look tired.\n"
	.string "Why don't you rest a bit?$"

ArgilTown_PlayersHouse_1F_Text_GoGetEm::
# 156 "data/maps/ArgilTown_PlayersHouse_1F/scripts.pory"
	.string "There! You look like you're ready to\n"
	.string "take on the world!\p"
	.string "Go get 'em, {PLAYER}!$"
