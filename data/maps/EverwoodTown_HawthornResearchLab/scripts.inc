EverwoodTown_HawthornResearchLab_MapScripts::
# 10 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverwoodTown_HawthornResearchLab_MapScript_On_Transition
# 11 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverwoodTown_HawthornResearchLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EverwoodTown_HawthornResearchLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	map_script_2 VAR_SANZASHI_LAB_STATE, 2, EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter
	.2byte 0


EverwoodTown_HawthornResearchLab_MapScript_On_Transition::
# 17 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter::
# 21 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	lockall
# 23 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceUp
# 25 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 26 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_SanzashiText1
# 27 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmessage
# 28 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 30 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0, MSGBOX_YESNO
# 32 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_2
# 39 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1
EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_1:
# 42 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 43 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_SanzashiText2
# 45 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_SanzashiText3
# 46 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_2
# 47 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmessage
# 48 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 50 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_SanzashiText4
# 51 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmessage
# 52 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText1
# 53 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_SanzashiText5
# 54 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText2
# 55 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_SanzashiText6
# 56 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement 2, ReceiveStarter_FaceRight
# 57 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceLeft
# 58 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText3
# 60 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceDown
# 61 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement 2, ReceiveStarter_RivalLeave
# 62 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmovement 0
# 63 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	hideobjectat 2, MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB
# 65 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 66 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 67 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 68 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_MOM_OUTSIDE
# 69 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 70 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 3
# 71 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_SANZASHI_LAB_STATE, 3
# 74 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	releaseall
	return

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_2:
# 34 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_0x8004, 0
# 35 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_1


# 137 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceUp:
# 138 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

# 141 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceDown:
# 142 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_down
	step_end

# 145 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceLeft:
# 146 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_left
	step_end

# 149 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceRight:
# 150 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_right
	step_end

# 153 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_RivalLeave:
# 154 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 154 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 154 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 154 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 154 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
	step_end

EverwoodTown_HawthornResearchLab_EventScript_Sanzashi::
# 162 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	lockall
# 163 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	faceplayer
# 165 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	switch VAR_SANZASHI_LAB_STATE
# 167 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 0, EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_3
# 182 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 1, EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_4
EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_1:
# 186 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 187 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	releaseall
	return

EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_3:
# 168 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetSanzashiText1
# 170 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	checkplayergender
# 171 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_6
# 177 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetSanzashiText2B
EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_5:
# 180 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_SANZASHI_LAB_STATE, 1
# 181 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 2
	goto EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_1

EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_4:
# 183 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox GoLookForRivalText1
	goto EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_1

EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_6:
# 173 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetSanzashiText2A
	goto EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_5


EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0:
# 30 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: By the way, would you\n"
	.string "like to give it a nickname?$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1:
# 39 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: That's fine. I hope\n"
	.string "you'll take good care of it.$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_2:
# 46 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You received the Pokédex!$"

ReceiveStarter_SanzashiText1::
# 77 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: ...\p"
	.string "...I see. So that's what happened.\p"
	.string "I'm glad you're both safe.\p"
	.string "By the way, {PLAYER}{KUN}, may I see the\n"
	.string "Pokémon you chose?\p"
	.string "I'd like to see how it's doing.\p"
	.string "Ah, I see. You chose {STR_VAR_1}.\n"
	.string "It seems to have taken a liking to you.\p"
	.string "I hope you'll take good care of it.\p"
	.string "You received the {STR_VAR_1}!$"

ReceiveStarter_SanzashiText2::
# 89 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: These are Poké Balls.\nThey're used to catch wild Pokémon.\p"
	.string "Please, take these with you.$"

ReceiveStarter_SanzashiText3::
# 94 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: Now, there's one more\n"
	.string "thing.\p"
	.string "$"

ReceiveStarter_SanzashiText4::
# 99 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: This is a Pokédex.\n"
	.string "It's a high-tech encyclopedia that\l"
	.string "records data on every Pokémon you\l"
	.string "encounter.\p"
	.string "As you travel through Toshou, I'd like\n"
	.string "you to help me with my research by\l"
	.string "filling it with information on the\l"
	.string "various Pokémon species that inhabit\l"
	.string "this region.\p"
	.string "You two have already proven that you're\n"
	.string "ready to take on the responsibilities\l"
	.string "of a Pokémon Trainer.\p"
	.string "I'm sure that if you try your best,\n"
	.string "you'll both become great Trainers.\p"
	.string "I wish you both the best of luck on your\n"
	.string "journey!$"

ReceiveStarter_RivalText1::
# 109 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "{RIVAL}: (He says that, but I didn't\n"
	.string "really intend to become a Trainer...)$"

ReceiveStarter_SanzashiText5::
# 114 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: Hm? Did you say\n"
	.string "something, {RIVAL}?\p"
	.string "$"

ReceiveStarter_RivalText2::
# 119 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "{RIVAL}: No, nothing!\n"
	.string "Let's go do our best, {PLAYER}{KUN}!\p"
	.string "Ahaha...ha...$"

ReceiveStarter_SanzashiText6::
# 125 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: You two must first\n"
	.string "register for the Toshou League at the\l"
	.string "Pokémon Center.\p"
	.string "The nearest one is in NAME City, past\n"
	.string "Route 501.$"

ReceiveStarter_RivalText3::
# 131 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "{RIVAL}: I'll be waiting for you at\n"
	.string "the Pokémon Center, {PLAYER}{KUN}!\p"
	.string "See you!$"

MeetSanzashiText1::
# 190 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: Ah, there you are!\n"
	.string "You must be {PLAYER}{KUN}.\l"
	.string "I've been waiting for you!\p"
	.string "Where's {RIVAL}?\p"
	.string "... What do you mean you don't know who\n"
	.string "that is?\p"
	.string "But {RIVAL} was supposed to bring\n"
	.string "you the bag with the Poké Balls!$"

MeetSanzashiText2A::
# 199 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "She said she couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}{KUN}, I'm sorry to ask this of you,\n"
	.string "but could you go find her for me?\p"
	.string "I'm sure she's just around the corner.$"

MeetSanzashiText2B::
# 206 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "He said he couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}{KUN}, I'm sorry to ask this of you,\n"
	.string "but could you go find him for me?\p"
	.string "I'm sure he's just around the corner.$"

GoLookForRivalText1::
# 213 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Prof. Sanzashi: Please, {PLAYER}{KUN}, go\n"
	.string "look for {RIVAL}!\p"
	.string "The bag with the Poké Balls is very\n"
	.string "important!$"
