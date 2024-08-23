EverwoodTown_HawthornResearchLab_MapScripts::
# 10 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverwoodTown_HawthornResearchLab_MapScript_On_Transition
# 11 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverwoodTown_HawthornResearchLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EverwoodTown_HawthornResearchLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	map_script_2 VAR_HAWTHORNE_LAB_STATE, 2, EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter
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
	msgbox ReceiveStarter_HawthorneText1
# 27 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 28 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 29 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmessage
# 30 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 31 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 32 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1
# 33 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_2, MSGBOX_YESNO
# 34 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 36 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_2
# 43 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1
# 44 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_3
EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_1:
# 47 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 48 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 49 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText2
# 51 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText3
# 52 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 53 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_4
# 55 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 56 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1
# 57 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText4
# 58 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmessage
# 59 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 60 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText1
# 61 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1
# 62 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText5
# 63 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 64 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText2
# 65 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1
# 66 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText6
# 67 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 68 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement 2, ReceiveStarter_FaceRight
# 69 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceLeft
# 70 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 71 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText3
# 72 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 74 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceDown
# 75 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement 2, ReceiveStarter_RivalLeave
# 76 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmovement 0
# 77 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	hideobjectat 2, MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB
# 79 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceUp
# 80 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1
# 81 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText7
# 82 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 83 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 85 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag FLAG_EXP_SHARE
# 86 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 87 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 88 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 89 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_MOM_OUTSIDE
# 90 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 91 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 3
# 92 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 3
# 95 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	releaseall
	return

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_2:
# 38 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_0x8004, 0
# 39 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_1


# 165 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceUp:
# 166 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

# 169 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceDown:
# 170 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_down
	step_end

# 173 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceLeft:
# 174 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_left
	step_end

# 177 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceRight:
# 178 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_right
	step_end

# 181 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_RivalLeave:
# 182 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 182 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 182 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 182 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 182 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
	step_end

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne::
# 190 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	lockall
# 191 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	faceplayer
# 192 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1
# 193 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	switch VAR_HAWTHORNE_LAB_STATE
# 195 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 0, EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_3
# 210 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 1, EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_4
EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_1:
# 214 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 215 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	releaseall
	return

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_3:
# 196 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetHawthorneText1
# 198 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	checkplayergender
# 199 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_6
# 205 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetHawthorneText2B
EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_5:
# 208 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 1
# 209 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 2
	goto EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_1

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_4:
# 211 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox GoLookForRivalText1
	goto EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_1

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_6:
# 201 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetHawthorneText2A
	goto EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_5


EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0:
# 28 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You received the {STR_VAR_1}!$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1:
# 32 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Hawthorne$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_2:
# 33 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "By the way, would you like to give it a\n"
	.string "nickname?$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_3:
# 44 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "That's fine. I hope you'll take good\n"
	.string "care of it.$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_4:
# 54 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You received the Pokédex!$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5:
# 59 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "{RIVAL}$"

ReceiveStarter_HawthorneText1::
# 98 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "...\p"
	.string "...I see. So that's what happened.\p"
	.string "I'm glad you're both safe.\p"
	.string "By the way, {PLAYER}{KUN}, may I see the\n"
	.string "Pokémon you chose?\p"
	.string "I'd like to see how it's doing.\p"
	.string "Ah, I see. You chose {STR_VAR_1}.\n"
	.string "It seems to have taken a liking to you.\p"
	.string "I hope you'll take good care of it.$"

ReceiveStarter_HawthorneText2::
# 109 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "These are Poké Balls.\nThey're used to catch wild Pokémon.\p"
	.string "Please, take these with you.$"

ReceiveStarter_HawthorneText3::
# 114 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Let's see...what else?\p"
	.string "Ah, yes! This!$"

ReceiveStarter_HawthorneText4::
# 120 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "This is a Pokédex.\n"
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
# 130 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "(He says that, but I didn't really intend\n"
	.string "to become a Trainer...)$"

ReceiveStarter_HawthorneText5::
# 135 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Hm? Did you say something, {RIVAL}?$"

ReceiveStarter_RivalText2::
# 140 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "No, nothing!\n"
	.string "Let's go do our best, {PLAYER}{KUN}!\p"
	.string "Ahaha...ha...$"

ReceiveStarter_HawthorneText6::
# 146 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You two must first register for the\n"
	.string "Toshou League at the Pokémon Center.\p"
	.string "The nearest one is in Baycrest City,\n"
	.string "past Route 501.$"

ReceiveStarter_RivalText3::
# 152 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "I'll be waiting for you at the Pokémon\n"
	.string "Center, {PLAYER}{KUN}!\p"
	.string "See you!$"

ReceiveStarter_HawthorneText7::
# 158 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "I almost forgot! I have something else\n"
	.string "for you.\p"
	.string "This is an Exp. Share.\n"
	.string "It's a special item that allows Pokémon\l"
	.string "to gain experience points even if they\l"
	.string "don't participate in battle.\p"
	.string "I hope you'll find it useful on your\n"
	.string "journey.$"

MeetHawthorneText1::
# 218 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Ah, there you are!\n"
	.string "You must be {PLAYER}{KUN}.\l"
	.string "I've been waiting for you!\p"
	.string "Where's {RIVAL}?\p"
	.string "... What do you mean you don't know who\n"
	.string "that is?\p"
	.string "But {RIVAL} was supposed to bring\n"
	.string "you the bag with the Poké Balls!$"

MeetHawthorneText2A::
# 227 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "She said she couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}{KUN}, I'm sorry to ask this of you,\n"
	.string "but could you go find her for me?\p"
	.string "I'm sure she's just around the corner.$"

MeetHawthorneText2B::
# 234 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "He said he couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}{KUN}, I'm sorry to ask this of you,\n"
	.string "but could you go find him for me?\p"
	.string "I'm sure he's just around the corner.$"

GoLookForRivalText1::
# 241 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Please, {PLAYER}{KUN}, go look for\n"
	.string "{RIVAL}!\p"
	.string "The bag with the Poké Balls is very\n"
	.string "important!$"
