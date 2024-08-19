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
	applymovement 1, LookDown
# 20 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 22 "data/maps/BaycrestCity/scripts.pory"
	checkplayergender
# 23 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BaycrestCity_Kanami
# 24 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BaycrestCity_Shinji
# 26 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 27 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 28 "data/maps/BaycrestCity/scripts.pory"
	removeobject 1
# 30 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 31 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 33 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Trigger_Rival2::
# 37 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 39 "data/maps/BaycrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachRival2
# 40 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, LookDown
# 42 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/BaycrestCity/scripts.pory"
	checkplayergender
# 45 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BaycrestCity_Kanami
# 46 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BaycrestCity_Shinji
	return


BaycrestCity_Kanami::
# 50 "data/maps/BaycrestCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 52 "data/maps/BaycrestCity/scripts.pory"
	special HealPlayerParty
# 53 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival1F
# 55 "data/maps/BaycrestCity/scripts.pory"
	switch VAR_STARTER_MON
# 56 "data/maps/BaycrestCity/scripts.pory"
	case 0, BaycrestCity_Kanami_3
# 59 "data/maps/BaycrestCity/scripts.pory"
	case 1, BaycrestCity_Kanami_4
# 62 "data/maps/BaycrestCity/scripts.pory"
	case 2, BaycrestCity_Kanami_5
BaycrestCity_Kanami_1:
# 67 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival2F
# 68 "data/maps/BaycrestCity/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 69 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival3F
# 70 "data/maps/BaycrestCity/scripts.pory"
	closemessage
# 72 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 73 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 74 "data/maps/BaycrestCity/scripts.pory"
	removeobject 1
# 76 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 77 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 79 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return

BaycrestCity_Kanami_3:
# 57 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KANAMI_BAYCREST_TURTWIG, BaycrestCity_Text_KanamiDefeated
	goto BaycrestCity_Kanami_1

BaycrestCity_Kanami_4:
# 60 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KANAMI_BAYCREST_FENNEKIN, BaycrestCity_Text_KanamiDefeated
	goto BaycrestCity_Kanami_1

BaycrestCity_Kanami_5:
# 63 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KANAMI_BAYCREST_QUAXLY, BaycrestCity_Text_KanamiDefeated
	goto BaycrestCity_Kanami_1


BaycrestCity_Shinji::
# 83 "data/maps/BaycrestCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 85 "data/maps/BaycrestCity/scripts.pory"
	special HealPlayerParty
# 86 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival1M
# 88 "data/maps/BaycrestCity/scripts.pory"
	switch VAR_STARTER_MON
# 89 "data/maps/BaycrestCity/scripts.pory"
	case 0, BaycrestCity_Shinji_3
# 92 "data/maps/BaycrestCity/scripts.pory"
	case 1, BaycrestCity_Shinji_4
# 95 "data/maps/BaycrestCity/scripts.pory"
	case 2, BaycrestCity_Shinji_5
BaycrestCity_Shinji_1:
# 100 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival2M
# 101 "data/maps/BaycrestCity/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 102 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival3M
# 103 "data/maps/BaycrestCity/scripts.pory"
	closemessage
# 105 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 106 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/BaycrestCity/scripts.pory"
	hideobjectat 1, MAP_BAYCREST_CITY
# 109 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 110 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 112 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return

BaycrestCity_Shinji_3:
# 90 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJI_BAYCREST_TURTWIG, BaycrestCity_Text_ShinjiDefeated
	goto BaycrestCity_Shinji_1

BaycrestCity_Shinji_4:
# 93 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJI_BAYCREST_FENNEKIN, BaycrestCity_Text_ShinjiDefeated
	goto BaycrestCity_Shinji_1

BaycrestCity_Shinji_5:
# 96 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJI_BAYCREST_QUAXLY, BaycrestCity_Text_ShinjiDefeated
	goto BaycrestCity_Shinji_1


# 116 "data/maps/BaycrestCity/scripts.pory"
ApproachRival1:
# 117 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 117 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 118 "data/maps/BaycrestCity/scripts.pory"
	walk_right
# 119 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 122 "data/maps/BaycrestCity/scripts.pory"
ApproachRival2:
# 123 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 123 "data/maps/BaycrestCity/scripts.pory"
	walk_up
	step_end

# 126 "data/maps/BaycrestCity/scripts.pory"
LookLeft:
# 127 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 128 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 131 "data/maps/BaycrestCity/scripts.pory"
LookDown:
# 132 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 133 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 136 "data/maps/BaycrestCity/scripts.pory"
RivalLeave:
# 137 "data/maps/BaycrestCity/scripts.pory"
	walk_left
# 138 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 138 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 138 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 138 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 138 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 138 "data/maps/BaycrestCity/scripts.pory"
	walk_up
	step_end

BaycrestCity_EventScript_TrendyTrainer::
# 199 "data/maps/BaycrestCity/scripts.pory"
	lock
# 200 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 201 "data/maps/BaycrestCity/scripts.pory"
	msgbox Baycrest_Text_TrendyTrainer
# 202 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_NostalgicGrandpa::
# 214 "data/maps/BaycrestCity/scripts.pory"
	lock
# 215 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 216 "data/maps/BaycrestCity/scripts.pory"
	msgbox Baycrest_Text_NostalgicGrandpa
# 217 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_UnsureYoungster::
# 229 "data/maps/BaycrestCity/scripts.pory"
	lock
# 230 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 231 "data/maps/BaycrestCity/scripts.pory"
	msgbox Baycrest_Text_UnsureYoungster
# 232 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_HonestLass::
# 243 "data/maps/BaycrestCity/scripts.pory"
	lock
# 244 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 245 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_HonestLass
# 246 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_Lillipup::
# 257 "data/maps/BaycrestCity/scripts.pory"
	lock
# 258 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 259 "data/maps/BaycrestCity/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 260 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_EventScript_Lillipup_Text_0
# 261 "data/maps/BaycrestCity/scripts.pory"
	waitmoncry
# 262 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_EventScript_HelpfulGentleman::
# 266 "data/maps/BaycrestCity/scripts.pory"
	lock
# 267 "data/maps/BaycrestCity/scripts.pory"
	faceplayer
# 268 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_HelpfulGentleman
# 269 "data/maps/BaycrestCity/scripts.pory"
	release
	return


BaycrestCity_Sign_City::
# 281 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 282 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Sign_City_Text_0
# 283 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Sign_RockSmashManHouse::
# 287 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 288 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Sign_RockSmashManHouse_Text_0
# 289 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Sign_Gym::
# 293 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 294 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_GymSign
# 295 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_EventScript_Lillipup_Text_0:
# 260 "data/maps/BaycrestCity/scripts.pory"
	.string "Lillipup: Terieee!$"

BaycrestCity_Sign_City_Text_0:
# 282 "data/maps/BaycrestCity/scripts.pory"
	.string "Baycrest City\n"
	.string "“A city of the sea breeze and the\l"
	.string "setting sun.”$"

BaycrestCity_Sign_RockSmashManHouse_Text_0:
# 288 "data/maps/BaycrestCity/scripts.pory"
	.string "Rock Smash Man's House$"

BaycrestCity_Text_Rival1F::
# 141 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}{KUN}! I've been\n"
	.string "waiting for you!\p"
	.string "I've already registered for the Toshou\n"
	.string "League, so I need to practice battling.\p"
	.string "You're the perfect person to help me\n"
	.string "with that!\p"
	.string "Let's battle!$"

BaycrestCity_Text_Rival2F::
# 149 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Wow, you're really good at\n"
	.string "this!\p"
	.string "I guess I'll have to train harder if I\n"
	.string "want to beat you!\p"
	.string "Here, take this TM as a thank you for\n"
	.string "the battle!\p"
	.string "$"

BaycrestCity_Text_Rival3F::
# 156 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: It's the TM for Swift! It's\n"
	.string "a great move that never misses!\p"
	.string "I hope you find it useful!\p"
	.string "I'll see you later!$"

BaycrestCity_Text_KanamiDefeated::
# 163 "data/maps/BaycrestCity/scripts.pory"
	.string "My battle career started off with a\n"
	.string "loss...\p"
	.string "Geez, this is the worst!$"

BaycrestCity_Text_ShinjiDefeated::
# 169 "data/maps/BaycrestCity/scripts.pory"
	.string "My first battle ended in a loss...\p"
	.string "I can't believe it!$"

BaycrestCity_Text_Rival1M::
# 175 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Oh, hey, {PLAYER}{KUN}!\n"
	.string "There you are!\p"
	.string "I've been waiting for you!\p"
	.string "Just so you know, I've already\n"
	.string "registered for the Toshou League.\p"
	.string "I need to practice, so you and I are\n"
	.string "going to have a battle!\p"
	.string "Let's do this!$"

BaycrestCity_Text_Rival2M::
# 184 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: You're pretty good at this,\n"
	.string "{PLAYER}{KUN}!\p"
	.string "I'm gonna train hard so I can beat you\n"
	.string "next time!\p"
	.string "I'll give you this since you helped me\n"
	.string "practice!\p"
	.string "$"

BaycrestCity_Text_Rival3M::
# 191 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: This TM is for the move\n"
	.string "Swift!\p"
	.string "It never misses, so it's a great move to\n"
	.string "have!\p"
	.string "I'll see you later, {PLAYER}{KUN}!$"

Baycrest_Text_TrendyTrainer::
# 205 "data/maps/BaycrestCity/scripts.pory"
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
# 220 "data/maps/BaycrestCity/scripts.pory"
	.string "Back in my day, we didn't have fancy\n"
	.string "things like EXP Shares!\p"
	.string "We had to rely on our own strength to\n"
	.string "train our Pokemon!\p"
	.string "It was tough, but it made us stronger!\p"
	.string "I wonder if the kids these days could\n"
	.string "handle it...$"

Baycrest_Text_UnsureYoungster::
# 235 "data/maps/BaycrestCity/scripts.pory"
	.string "I want to challenge the Toshou League,\n"
	.string "but I'm not sure if I'm ready...\p"
	.string "I asked my friend for advice, but she\n"
	.string "told me that my Lillipup is too friendly\l"
	.string "to fight seriously...\p"
	.string "I don't know what to do... I don't want\n"
	.string "to give up on my dream, but I don't want\l"
	.string "to hurt my Pokemon either...$"

BaycrestCity_Text_HonestLass::
# 249 "data/maps/BaycrestCity/scripts.pory"
	.string "My childhood friend wants to challenge\n"
	.string "the Toshou League with a Lillipup!\p"
	.string "I told him that I think he's got a long\n"
	.string "way to go before he's ready, but he\l"
	.string "seemed really discouraged...\p"
	.string "I don't want to see him give up on his\n"
	.string "dream, but I don't want him to give him\l"
	.string "false hope either.$"

BaycrestCity_Text_HelpfulGentleman::
# 272 "data/maps/BaycrestCity/scripts.pory"
	.string "If you're planning to challenge the\n"
	.string "Baycrest City Gym, you should train on\l"
	.string "Route 502 first!\p"
	.string "There are a lot of Pokémon there that\n"
	.string "can help you prepare for the Gym\l"
	.string "Leader's team!$"

BaycrestCity_Text_GymSign::
# 298 "data/maps/BaycrestCity/scripts.pory"
	.string "Baycrest City Pokémon Gym\n"
	.string "Gym Leader: Riku\p"
	.string "“The Grounded Wunderkind”$"
