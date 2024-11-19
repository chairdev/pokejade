BaycrestCity_MapScripts::
# 9 "data/maps/BaycrestCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BaycrestCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BaycrestCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/BaycrestCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


BaycrestCity_Trigger_Rival1::
# 15 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 17 "data/maps/BaycrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachRival1
# 18 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 19 "data/maps/BaycrestCity/scripts.pory"
	playse SE_PIN
# 20 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, LookDown
# 21 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 23 "data/maps/BaycrestCity/scripts.pory"
	checkplayergender
# 24 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BaycrestCity_Holly
# 25 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BaycrestCity_Caden
# 27 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 28 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 29 "data/maps/BaycrestCity/scripts.pory"
	removeobject 1
# 31 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 32 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 34 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Trigger_Rival2::
# 38 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 40 "data/maps/BaycrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachRival2
# 41 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 42 "data/maps/BaycrestCity/scripts.pory"
	playse SE_PIN
# 43 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, LookDown
# 44 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/BaycrestCity/scripts.pory"
	checkplayergender
# 47 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BaycrestCity_Holly
# 48 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BaycrestCity_Caden
	return


BaycrestCity_Holly::
# 52 "data/maps/BaycrestCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 54 "data/maps/BaycrestCity/scripts.pory"
	special HealPlayerParty
# 55 "data/maps/BaycrestCity/scripts.pory"
	speakername BaycrestCity_Holly_Text_0
# 56 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival1F
# 58 "data/maps/BaycrestCity/scripts.pory"
	switch VAR_STARTER_MON
# 59 "data/maps/BaycrestCity/scripts.pory"
	case 0, BaycrestCity_Holly_3
# 62 "data/maps/BaycrestCity/scripts.pory"
	case 1, BaycrestCity_Holly_4
# 65 "data/maps/BaycrestCity/scripts.pory"
	case 2, BaycrestCity_Holly_5
BaycrestCity_Holly_1:
# 70 "data/maps/BaycrestCity/scripts.pory"
	speakername BaycrestCity_Holly_Text_0
# 71 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival2F
# 72 "data/maps/BaycrestCity/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 73 "data/maps/BaycrestCity/scripts.pory"
	speakername BaycrestCity_Holly_Text_0
# 74 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival3F
# 75 "data/maps/BaycrestCity/scripts.pory"
	closemessage
# 77 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 78 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/BaycrestCity/scripts.pory"
	removeobject 1
# 81 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 82 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 84 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return

BaycrestCity_Holly_3:
# 60 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_BAYCREST_TURTWIG, BaycrestCity_Text_HollyDefeated
	goto BaycrestCity_Holly_1

BaycrestCity_Holly_4:
# 63 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_BAYCREST_FENNEKIN, BaycrestCity_Text_HollyDefeated
	goto BaycrestCity_Holly_1

BaycrestCity_Holly_5:
# 66 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_BAYCREST_QUAXLY, BaycrestCity_Text_HollyDefeated
	goto BaycrestCity_Holly_1


BaycrestCity_Caden::
# 88 "data/maps/BaycrestCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 90 "data/maps/BaycrestCity/scripts.pory"
	special HealPlayerParty
# 91 "data/maps/BaycrestCity/scripts.pory"
	speakername BaycrestCity_Holly_Text_0
# 92 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival1M
# 94 "data/maps/BaycrestCity/scripts.pory"
	switch VAR_STARTER_MON
# 95 "data/maps/BaycrestCity/scripts.pory"
	case 0, BaycrestCity_Caden_3
# 98 "data/maps/BaycrestCity/scripts.pory"
	case 1, BaycrestCity_Caden_4
# 101 "data/maps/BaycrestCity/scripts.pory"
	case 2, BaycrestCity_Caden_5
BaycrestCity_Caden_1:
# 106 "data/maps/BaycrestCity/scripts.pory"
	speakername BaycrestCity_Holly_Text_0
# 107 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival2M
# 108 "data/maps/BaycrestCity/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 109 "data/maps/BaycrestCity/scripts.pory"
	speakername BaycrestCity_Holly_Text_0
# 110 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival3M
# 111 "data/maps/BaycrestCity/scripts.pory"
	closemessage
# 113 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 114 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/BaycrestCity/scripts.pory"
	hideobjectat 1, MAP_BAYCREST_CITY
# 117 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 118 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 120 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return

BaycrestCity_Caden_3:
# 96 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_BAYCREST_TURTWIG, BaycrestCity_Text_CadenDefeated
	goto BaycrestCity_Caden_1

BaycrestCity_Caden_4:
# 99 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_BAYCREST_FENNEKIN, BaycrestCity_Text_CadenDefeated
	goto BaycrestCity_Caden_1

BaycrestCity_Caden_5:
# 102 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_BAYCREST_QUAXLY, BaycrestCity_Text_CadenDefeated
	goto BaycrestCity_Caden_1


# 124 "data/maps/BaycrestCity/scripts.pory"
ApproachRival1:
# 125 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 125 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 126 "data/maps/BaycrestCity/scripts.pory"
	walk_right
# 127 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 130 "data/maps/BaycrestCity/scripts.pory"
ApproachRival2:
# 131 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 131 "data/maps/BaycrestCity/scripts.pory"
	walk_up
	step_end

# 134 "data/maps/BaycrestCity/scripts.pory"
LookLeft:
# 135 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 136 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 139 "data/maps/BaycrestCity/scripts.pory"
LookDown:
# 140 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 141 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 144 "data/maps/BaycrestCity/scripts.pory"
RivalLeave:
# 145 "data/maps/BaycrestCity/scripts.pory"
	walk_left
# 146 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 146 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 146 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 146 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 146 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 146 "data/maps/BaycrestCity/scripts.pory"
	walk_up
	step_end

BaycrestCity_EventScript_TrendyTrainer::
# 207 "data/maps/BaycrestCity/scripts.pory"
	lock
# 208 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 209 "data/maps/BaycrestCity/scripts.pory"
	msgbox Baycrest_Text_TrendyTrainer
# 210 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_NostalgicGrandpa::
# 222 "data/maps/BaycrestCity/scripts.pory"
	lock
# 223 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 224 "data/maps/BaycrestCity/scripts.pory"
	msgbox Baycrest_Text_NostalgicGrandpa
# 225 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_UnsureYoungster::
# 237 "data/maps/BaycrestCity/scripts.pory"
	lock
# 238 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 239 "data/maps/BaycrestCity/scripts.pory"
	msgbox Baycrest_Text_UnsureYoungster
# 240 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_HonestLass::
# 251 "data/maps/BaycrestCity/scripts.pory"
	lock
# 252 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 253 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_HonestLass
# 254 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_Lillipup::
# 265 "data/maps/BaycrestCity/scripts.pory"
	lock
# 266 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 267 "data/maps/BaycrestCity/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 268 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_EventScript_Lillipup_Text_0
# 269 "data/maps/BaycrestCity/scripts.pory"
	waitmoncry
# 270 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_HelpfulGentleman::
# 274 "data/maps/BaycrestCity/scripts.pory"
	lock
# 275 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 276 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_HelpfulGentleman
# 277 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_Sign_City::
# 289 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 290 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Sign_City_Text_0
# 291 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Sign_RockSmashManHouse::
# 295 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 296 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Sign_RockSmashManHouse_Text_0
# 297 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Sign_Gym::
# 301 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 302 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_GymSign
# 303 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Holly_Text_0:
# 55 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}$"

BaycrestCity_EventScript_Lillipup_Text_0:
# 268 "data/maps/BaycrestCity/scripts.pory"
	.string "Terieee!$"

BaycrestCity_Sign_City_Text_0:
# 290 "data/maps/BaycrestCity/scripts.pory"
	.string "Baycrest City\n"
	.string "“A city of the sea breeze and the\l"
	.string "setting sun.”$"

BaycrestCity_Sign_RockSmashManHouse_Text_0:
# 296 "data/maps/BaycrestCity/scripts.pory"
	.string "Rock Smash Man's House$"

BaycrestCity_Text_Rival1F::
# 149 "data/maps/BaycrestCity/scripts.pory"
	.string "Hey, {PLAYER}{KUN}! I've been waiting for\n"
	.string "you!\p"
	.string "I've already registered for the Toshou\n"
	.string "League, so I need to practice battling.\p"
	.string "You're the perfect person to help me\n"
	.string "with that!\p"
	.string "Let's battle!$"

BaycrestCity_Text_Rival2F::
# 157 "data/maps/BaycrestCity/scripts.pory"
	.string "Wow, you're really good at this!\p"
	.string "I guess I'll have to train harder if I\n"
	.string "want to beat you!\p"
	.string "Here, take this TM as a thank you for\n"
	.string "the battle!$"

BaycrestCity_Text_Rival3F::
# 164 "data/maps/BaycrestCity/scripts.pory"
	.string "It's the TM for Swift! It's a great move\n"
	.string "that never misses!\p"
	.string "I hope you find it useful!\p"
	.string "I'll see you later!$"

BaycrestCity_Text_HollyDefeated::
# 171 "data/maps/BaycrestCity/scripts.pory"
	.string "My battle career started off with a\n"
	.string "loss...\p"
	.string "Geez, this is the worst!$"

BaycrestCity_Text_CadenDefeated::
# 177 "data/maps/BaycrestCity/scripts.pory"
	.string "My first battle ended in a loss...\p"
	.string "I can't believe it!$"

BaycrestCity_Text_Rival1M::
# 183 "data/maps/BaycrestCity/scripts.pory"
	.string "Oh, hey, {PLAYER}{KUN}!\n"
	.string "There you are!\p"
	.string "I've been waiting for you!\p"
	.string "Just so you know, I've already\n"
	.string "registered for the Toshou League.\p"
	.string "I need to practice, so you and I are\n"
	.string "going to have a battle!\p"
	.string "Let's do this!$"

BaycrestCity_Text_Rival2M::
# 192 "data/maps/BaycrestCity/scripts.pory"
	.string "You're pretty good at this, {PLAYER}{KUN}!\p"
	.string "I'm gonna train hard so I can beat you\n"
	.string "next time!\p"
	.string "I'll give you this since you helped me\n"
	.string "practice!$"

BaycrestCity_Text_Rival3M::
# 199 "data/maps/BaycrestCity/scripts.pory"
	.string "This TM is for the move Swift!\p"
	.string "It never misses, so it's a great move to\n"
	.string "have!\p"
	.string "I'll see you later, {PLAYER}{KUN}!$"

Baycrest_Text_TrendyTrainer::
# 213 "data/maps/BaycrestCity/scripts.pory"
	.string "These days double battles are all the\n"
	.string "rage!\p"
	.string "It's when you and your opponent each\n"
	.string "use two Pokemon in battle... AT THE SAME\l"
	.string "TIME!\p"
	.string "I heard that Hoennians brought the\n"
	.string "idea over to Toshou!\p"
	.string "I wonder if it'll catch on in places like\n"
	.string "Kanto and Johto too!$"

Baycrest_Text_NostalgicGrandpa::
# 228 "data/maps/BaycrestCity/scripts.pory"
	.string "Back in my day, we didn't have fancy\n"
	.string "things like EXP Shares!\p"
	.string "We had to rely on our own strength to\n"
	.string "train our Pokemon!\p"
	.string "It was tough, but it made us stronger!\p"
	.string "I wonder if the kids these days could\n"
	.string "handle it...$"

Baycrest_Text_UnsureYoungster::
# 243 "data/maps/BaycrestCity/scripts.pory"
	.string "I want to challenge the Toshou League,\n"
	.string "but I'm not sure if I'm ready...\p"
	.string "I asked my friend for advice, but she\n"
	.string "told me that my Lillipup is too friendly\l"
	.string "to fight seriously...\p"
	.string "I don't know what to do... I don't want\n"
	.string "to give up on my dream, but I don't want\l"
	.string "to hurt my Pokemon either...$"

BaycrestCity_Text_HonestLass::
# 257 "data/maps/BaycrestCity/scripts.pory"
	.string "My childhood friend wants to challenge\n"
	.string "the Toshou League with a Lillipup!\p"
	.string "I told him that I think he's got a long\n"
	.string "way to go before he's ready, but he\l"
	.string "seemed really discouraged...\p"
	.string "I don't want to see him give up on his\n"
	.string "dream, but I don't want him to give him\l"
	.string "false hope either.$"

BaycrestCity_Text_HelpfulGentleman::
# 280 "data/maps/BaycrestCity/scripts.pory"
	.string "If you're planning to challenge the\n"
	.string "Baycrest City Gym, you should train on\l"
	.string "Route 302 first!\p"
	.string "There are a lot of Pokémon there that\n"
	.string "can help you prepare for the Gym\l"
	.string "Leader's team!$"

BaycrestCity_Text_GymSign::
# 306 "data/maps/BaycrestCity/scripts.pory"
	.string "Baycrest City Pokémon Gym\n"
	.string "Gym Leader: Geo\p"
	.string "“The Grounded Wunderkind”$"
