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
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 27 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText1
# 28 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 29 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 30 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1
# 31 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 33 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 34 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText2
# 35 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 37 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_2, MSGBOX_YESNO
# 38 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 40 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_2
# 44 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 45 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_3
EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_1:
# 48 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 49 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 50 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText3
# 52 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 53 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_4
# 54 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 56 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 57 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText4
# 58 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmessage
# 61 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 62 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText1
# 64 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 65 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText5
# 67 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 68 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText2
# 71 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 72 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText7
# 73 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 74 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 75 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_6
# 76 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 78 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 79 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText8
# 80 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 83 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 84 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText_TeraOrb
# 85 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 87 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 88 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText6
# 90 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 91 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement 2, ReceiveStarter_FaceRight
# 92 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceLeft
# 94 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 95 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText3
# 96 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 98 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceDown
# 99 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement 2, ReceiveStarter_RivalLeave
# 100 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmovement 0
# 101 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	hideobjectat 2, MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB
# 103 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceUp
# 105 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 106 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText9
# 107 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 108 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 109 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_7
# 110 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 112 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag FLAG_EXP_SHARE
# 113 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag B_FLAG_TERA_ORB_CHARGED
# 114 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 115 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 117 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_MOM_OUTSIDE
# 118 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 119 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 3
# 120 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 3
# 122 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	releaseall
	return

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_2:
# 41 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_0x8004, 0
# 42 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_1


# 211 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceUp:
# 212 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

# 215 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceDown:
# 216 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_down
	step_end

# 219 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceLeft:
# 220 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_left
	step_end

# 223 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceRight:
# 224 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_right
	step_end

# 227 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_RivalLeave:
# 228 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 228 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 228 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 228 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 228 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
	step_end

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne::
# 236 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	lockall
# 237 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	faceplayer
# 238 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 239 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	switch VAR_HAWTHORNE_LAB_STATE
# 241 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 0, EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_3
# 256 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 1, EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_4
EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_1:
# 260 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 261 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	releaseall
	return

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_3:
# 242 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetHawthorneText1
# 244 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	checkplayergender
# 245 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_6
# 251 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetHawthorneText2B
EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_5:
# 254 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 1
# 255 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 2
	goto EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_1

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_4:
# 257 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox GoLookForRivalText1
	goto EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_1

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_6:
# 247 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetHawthorneText2A
	goto EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_5


EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0:
# 26 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Hawthorne$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1:
# 30 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You've received the {STR_VAR_1}!$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_2:
# 37 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Would you like to give it a nickname?$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_3:
# 45 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "That's alright. Please take care of it\n"
	.string "well.$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_4:
# 53 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You've received the Pokédex!$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5:
# 61 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "{RIVAL}$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_6:
# 75 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You've received the Tera Orb!$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_7:
# 109 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You've received the Exp. Share!$"

ReceiveStarter_RivalText_TeraOrb::
# 127 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Wow, a Tera Orb, huh?\p"
	.string "I heard those things let your Pokémon\n"
	.string "change its type or something.\p"
	.string "If the original type is the same as its\n"
	.string "Tera type, moves of that type get an\l"
	.string "even bigger boost in power.\p"
	.string "That's what I heard, anyway.$"

ReceiveStarter_HawthorneText1::
# 135 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "...I see. So, that's what happened.\p"
	.string "I'm relieved that both you and\n"
	.string "{RIVAL} are safe.\p"
	.string "By the way, {PLAYER}, may I take a\n"
	.string "look at the Pokémon you've chosen?\p"
	.string "It seems {STR_VAR_1} has already\n"
	.string "taken a liking to you!\p"
	.string "Take good care of it, alright?$"

ReceiveStarter_HawthorneText2::
# 144 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "These are Poké Balls, used for catching\n"
	.string "wild Pokémon.\p"
	.string "Here, take these as well. They'll be\n"
	.string "useful on your journey.$"

ReceiveStarter_HawthorneText3::
# 149 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Now, let's see...\p"
	.string "Ah! I have something else for you.$"

ReceiveStarter_HawthorneText4::
# 155 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "This is a Pokédex.\p"
	.string "It's a high-tech encyclopedia that\n"
	.string "records information on every Pokémon\l"
	.string "you encounter.\p"
	.string "As you travel through Toshou, I'd like\n"
	.string "you to help me with my research by\l"
	.string "filling it with details on the various\l"
	.string "Pokémon species you'll meet.\p"
	.string "I believe you're both more than capable\n"
	.string "of doing so.\p"
	.string "$"

ReceiveStarter_RivalText1::
# 163 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "(He says that, but I didn't really plan\n"
	.string "on becoming a Trainer...)$"

ReceiveStarter_HawthorneText5::
# 168 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Hm? Did you say something, {RIVAL}?$"

ReceiveStarter_RivalText2::
# 172 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "No, nothing! Let's just do our best,\n"
	.string "{PLAYER}!\p"
	.string "Ahaha...$"

ReceiveStarter_HawthorneText6::
# 177 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "That's right! It lasts until the end of\n"
	.string "battle or until your Pokémon faints.\p"
	.string "Oh, and one more thing!\p"
	.string "Before you two set off, don't forget to\n"
	.string "register for the Toshou League at the\l"
	.string "nearest Pokémon Center.\p"
	.string "The closest one is in Baycrest City,\n"
	.string "just past Route 301.$"

ReceiveStarter_RivalText3::
# 185 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "I'll be waiting for you at the Pokémon\n"
	.string "Center, {PLAYER}!\p"
	.string "See you there!$"

ReceiveStarter_HawthorneText7::
# 191 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "One last thing!\p"
	.string "This is a Tera Orb.\p"
	.string "It allows your Pokémon to Terastalize,\n"
	.string "granting them enhanced power and an\l"
	.string "advantage in battle.$"

ReceiveStarter_HawthorneText8::
# 198 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Though Terastal energy was originally\n"
	.string "discovered in Paldea, recent research\l"
	.string "has revealed that it exists in other\l"
	.string "regions as well, like Kitakami.\p"
	.string "Here in Toshou, the energy flows\n"
	.string "through certain areas, much like the ley\l"
	.string "lines of nature.\p"
	.string "With this Tera Orb, your Pokémon can\n"
	.string "harness this energy by pressing the\l"
	.string "START Button while choosing a move in\l"
	.string "battle.\p"
	.string "Use it wisely, as it can only be used\n"
	.string "once before needing to be recharged at\l"
	.string "a Pokémon Center.$"

ReceiveStarter_HawthorneText9::
# 206 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "And lastly, here's an Exp. Share.\p"
	.string "It will help your team grow stronger\n"
	.string "together, even if they don't fight.$"

MeetHawthorneText1::
# 264 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Ah, there you are!\n"
	.string "You must be {PLAYER}.\l"
	.string "I've been waiting for you!\p"
	.string "Where's {RIVAL}?\p"
	.string "... What do you mean you don't know who\n"
	.string "that is?\p"
	.string "But {RIVAL} was supposed to bring\n"
	.string "you the bag with the Poké Balls!$"

MeetHawthorneText2A::
# 273 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "She said she couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}, I'm sorry to ask this of you,\n"
	.string "but could you go find her for me?\p"
	.string "I'm sure she's just around the corner.$"

MeetHawthorneText2B::
# 280 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "He said he couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}, I'm sorry to ask this of you,\n"
	.string "but could you go find him for me?\p"
	.string "I'm sure he's just around the corner.$"

GoLookForRivalText1::
# 287 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Please, {PLAYER}, go look for\n"
	.string "{RIVAL}!\p"
	.string "The bag with the Poké Balls is very\n"
	.string "important!$"
