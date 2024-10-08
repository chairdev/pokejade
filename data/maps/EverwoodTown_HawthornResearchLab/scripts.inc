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
# 32 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_2, MSGBOX_YESNO
# 33 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 35 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_2
# 39 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 40 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_3
EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_1:
# 43 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 44 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText2
# 45 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 46 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 47 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 48 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText3
# 50 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_4
# 52 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 54 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 55 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText4
# 56 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmessage
# 59 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 60 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText1
# 62 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 63 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText5
# 65 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 66 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText2
# 69 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 70 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText7
# 71 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 72 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 73 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 75 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 76 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText8
# 77 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 80 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 81 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText_TeraOrb
# 82 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 84 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 85 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText6
# 87 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 88 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement 2, ReceiveStarter_FaceRight
# 89 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceLeft
# 91 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5
# 92 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_RivalText3
# 93 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 95 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceDown
# 96 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement 2, ReceiveStarter_RivalLeave
# 97 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitmovement 0
# 98 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	hideobjectat 2, MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB
# 100 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ReceiveStarter_FaceUp
# 102 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 103 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox ReceiveStarter_HawthorneText9
# 104 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 105 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 106 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	waitfanfare
# 108 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag FLAG_EXP_SHARE
# 109 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag B_FLAG_TERA_ORB_CHARGED
# 110 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 111 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 113 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_MOM_OUTSIDE
# 114 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 115 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 3
# 116 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 3
# 118 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	releaseall
	return

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_2:
# 36 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_0x8004, 0
# 37 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_1


# 207 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceUp:
# 208 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_up
	step_end

# 211 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceDown:
# 212 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_down
	step_end

# 215 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceLeft:
# 216 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_left
	step_end

# 219 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_FaceRight:
# 220 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_in_place_faster_right
	step_end

# 223 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
ReceiveStarter_RivalLeave:
# 224 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 224 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 224 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 224 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
# 224 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	walk_down
	step_end

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne::
# 232 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	lockall
# 233 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	faceplayer
# 234 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	speakername EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0
# 235 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	switch VAR_HAWTHORNE_LAB_STATE
# 237 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 0, EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_3
# 252 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 1, EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_4
EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_1:
# 256 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 257 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	releaseall
	return

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_3:
# 238 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetHawthorneText1
# 240 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	checkplayergender
# 241 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_6
# 247 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetHawthorneText2B
EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_5:
# 250 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 1
# 251 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 2
	goto EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_1

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_4:
# 253 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox GoLookForRivalText1
	goto EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_1

EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_6:
# 243 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetHawthorneText2A
	goto EverwoodTown_HawthornResearchLab_EventScript_Hawthorne_5


EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_0:
# 26 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Hawthorne$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_1:
# 30 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You've received the {STR_VAR_1}!$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_2:
# 32 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Would you like to give it a nickname?$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_3:
# 40 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "That's alright. Please take care of it\n"
	.string "well.$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_4:
# 51 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "You've received the Pokédex!$"

EverwoodTown_HawthornResearchLab_MapScript_ReceiveStarter_Text_5:
# 59 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "{RIVAL}$"

ReceiveStarter_RivalText_TeraOrb::
# 123 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Wow, a Tera Orb, huh?\p"
	.string "I heard those things let your Pokémon\n"
	.string "change its type or something.\p"
	.string "If the original type is the same as its\n"
	.string "Tera type, moves of that type get an\l"
	.string "even bigger boost in power.\p"
	.string "That's what I heard, anyway.$"

ReceiveStarter_HawthorneText1::
# 131 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "...I see. So, that's what happened.\p"
	.string "I'm relieved that both you and\n"
	.string "{RIVAL} are safe.\p"
	.string "By the way, {PLAYER}, may I take a\n"
	.string "look at the Pokémon you've chosen?\p"
	.string "It seems {STR_VAR_1} has already\n"
	.string "taken a liking to you!\p"
	.string "Take good care of it, alright?$"

ReceiveStarter_HawthorneText2::
# 140 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "These are Poké Balls, used for catching\n"
	.string "wild Pokémon.\p"
	.string "Here, take these as well. They'll be\n"
	.string "useful on your journey.$"

ReceiveStarter_HawthorneText3::
# 145 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Now, let's see...\p"
	.string "Ah! I have something else for you.$"

ReceiveStarter_HawthorneText4::
# 151 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "This is a Pokédex.\p"
	.string "It's a high-tech encyclopedia that\n"
	.string "records information on every Pokémon\l"
	.string "you encounter.\p"
	.string "As you travel through Toshou, I'd like\n"
	.string "you to help me with my research by\l"
	.string "filling it with details on the various\l"
	.string "Pokémon species you'll meet.\p"
	.string "I believe you're both more than capable\n"
	.string "of doing so.$"

ReceiveStarter_RivalText1::
# 159 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "(He says that, but I didn't really plan\n"
	.string "on becoming a Trainer...)$"

ReceiveStarter_HawthorneText5::
# 164 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Hm? Did you say something, {RIVAL}?$"

ReceiveStarter_RivalText2::
# 168 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "No, nothing! Let's just do our best,\n"
	.string "{PLAYER}!\p"
	.string "Ahaha...$"

ReceiveStarter_HawthorneText6::
# 173 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "That's right! It lasts until the end of\n"
	.string "battle or until your Pokémon faints.\p"
	.string "Oh, and one more thing!\p"
	.string "Before you two set off, don't forget to\n"
	.string "register for the Toshou League at the\l"
	.string "nearest Pokémon Center.\p"
	.string "The closest one is in Baycrest City,\n"
	.string "just past Route 301.$"

ReceiveStarter_RivalText3::
# 181 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "I'll be waiting for you at the Pokémon\n"
	.string "Center, {PLAYER}!\p"
	.string "See you there!$"

ReceiveStarter_HawthorneText7::
# 187 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "One last thing!\p"
	.string "This is a Tera Orb.\p"
	.string "It allows your Pokémon to Terastalize,\n"
	.string "granting them enhanced power and an\l"
	.string "advantage in battle.$"

ReceiveStarter_HawthorneText8::
# 194 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
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
# 202 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "And lastly, here's an Exp. Share.\p"
	.string "It will help your team grow stronger\n"
	.string "together, even if they don't fight.$"

MeetHawthorneText1::
# 260 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Ah, there you are!\n"
	.string "You must be {PLAYER}.\l"
	.string "I've been waiting for you!\p"
	.string "Where's {RIVAL}?\p"
	.string "... What do you mean you don't know who\n"
	.string "that is?\p"
	.string "But {RIVAL} was supposed to bring\n"
	.string "you the bag with the Poké Balls!$"

MeetHawthorneText2A::
# 269 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "She said she couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}, I'm sorry to ask this of you,\n"
	.string "but could you go find her for me?\p"
	.string "I'm sure she's just around the corner.$"

MeetHawthorneText2B::
# 276 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "He said he couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}, I'm sorry to ask this of you,\n"
	.string "but could you go find him for me?\p"
	.string "I'm sure he's just around the corner.$"

GoLookForRivalText1::
# 283 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Please, {PLAYER}, go look for\n"
	.string "{RIVAL}!\p"
	.string "The bag with the Poké Balls is very\n"
	.string "important!$"
