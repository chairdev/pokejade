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
	msgbox BaycrestCity_Text_Rival1F
# 54 "data/maps/BaycrestCity/scripts.pory"
	switch VAR_STARTER_MON
# 55 "data/maps/BaycrestCity/scripts.pory"
	case 0, BaycrestCity_Kanami_3
# 58 "data/maps/BaycrestCity/scripts.pory"
	case 1, BaycrestCity_Kanami_4
# 61 "data/maps/BaycrestCity/scripts.pory"
	case 2, BaycrestCity_Kanami_5
BaycrestCity_Kanami_1:
# 66 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival2F
# 67 "data/maps/BaycrestCity/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 68 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival3F
# 69 "data/maps/BaycrestCity/scripts.pory"
	closemessage
# 71 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 72 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/BaycrestCity/scripts.pory"
	removeobject 1
# 75 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 76 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 78 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return

BaycrestCity_Kanami_3:
# 56 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KANAMI_BAYCREST_TURTWIG, BaycrestCity_Text_KanamiDefeated
	goto BaycrestCity_Kanami_1

BaycrestCity_Kanami_4:
# 59 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KANAMI_BAYCREST_FENNEKIN, BaycrestCity_Text_KanamiDefeated
	goto BaycrestCity_Kanami_1

BaycrestCity_Kanami_5:
# 62 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KANAMI_BAYCREST_QUAXLY, BaycrestCity_Text_KanamiDefeated
	goto BaycrestCity_Kanami_1


BaycrestCity_Shinji::
# 82 "data/maps/BaycrestCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 84 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival1M
# 86 "data/maps/BaycrestCity/scripts.pory"
	switch VAR_STARTER_MON
# 87 "data/maps/BaycrestCity/scripts.pory"
	case 0, BaycrestCity_Shinji_3
# 90 "data/maps/BaycrestCity/scripts.pory"
	case 1, BaycrestCity_Shinji_4
# 93 "data/maps/BaycrestCity/scripts.pory"
	case 2, BaycrestCity_Shinji_5
BaycrestCity_Shinji_1:
# 98 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival2M
# 99 "data/maps/BaycrestCity/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 100 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival3M
# 101 "data/maps/BaycrestCity/scripts.pory"
	closemessage
# 103 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 104 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/BaycrestCity/scripts.pory"
	hideobjectat 1, MAP_BAYCREST_CITY
# 107 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 108 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 110 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return

BaycrestCity_Shinji_3:
# 88 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJI_BAYCREST_TURTWIG, BaycrestCity_Text_ShinjiDefeated
	goto BaycrestCity_Shinji_1

BaycrestCity_Shinji_4:
# 91 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJI_BAYCREST_FENNEKIN, BaycrestCity_Text_ShinjiDefeated
	goto BaycrestCity_Shinji_1

BaycrestCity_Shinji_5:
# 94 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJI_BAYCREST_QUAXLY, BaycrestCity_Text_ShinjiDefeated
	goto BaycrestCity_Shinji_1


# 114 "data/maps/BaycrestCity/scripts.pory"
ApproachRival1:
# 115 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 115 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 116 "data/maps/BaycrestCity/scripts.pory"
	walk_right
# 117 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 120 "data/maps/BaycrestCity/scripts.pory"
ApproachRival2:
# 121 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 121 "data/maps/BaycrestCity/scripts.pory"
	walk_up
	step_end

# 124 "data/maps/BaycrestCity/scripts.pory"
LookLeft:
# 125 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 126 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 129 "data/maps/BaycrestCity/scripts.pory"
LookDown:
# 130 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 131 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 134 "data/maps/BaycrestCity/scripts.pory"
RivalLeave:
# 135 "data/maps/BaycrestCity/scripts.pory"
	walk_left
# 136 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 136 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 136 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 136 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 136 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 136 "data/maps/BaycrestCity/scripts.pory"
	walk_up
	step_end

BaycrestCity_Text_Rival1F::
# 139 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}{KUN}! I've been\n"
	.string "waiting for you!\p"
	.string "I've already registered for the Toshou\n"
	.string "League, so I need to practice battling.\p"
	.string "You're the perfect person to help me\n"
	.string "with that!\p"
	.string "Let's battle!$"

BaycrestCity_Text_Rival2F::
# 147 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Wow, you're really good at\n"
	.string "this!\p"
	.string "I guess I'll have to train harder if I\n"
	.string "want to beat you!\p"
	.string "Here, take this TM as a thank you for\n"
	.string "the battle!\p"
	.string "$"

BaycrestCity_Text_Rival3F::
# 154 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: It's the TM for Swift! It's\n"
	.string "a great move that never misses!\p"
	.string "I hope you find it useful!\p"
	.string "I'll see you later!$"

BaycrestCity_Text_KanamiDefeated::
# 161 "data/maps/BaycrestCity/scripts.pory"
	.string "My battle career started off with a\n"
	.string "loss...\p"
	.string "Geez, this is the worst!$"

BaycrestCity_Text_ShinjiDefeated::
# 167 "data/maps/BaycrestCity/scripts.pory"
	.string "My first battle ended in a loss...\p"
	.string "I can't believe it!$"

BaycrestCity_Text_Rival1M::
# 173 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Oh, hey, {PLAYER}{KUN}!\n"
	.string "There you are!\p"
	.string "I've been waiting for you!\p"
	.string "Just so you know, I've already\n"
	.string "registered for the Toshou League.\p"
	.string "I need to practice, so you and I are\n"
	.string "going to have a battle!\p"
	.string "Let's do this!$"

BaycrestCity_Text_Rival2M::
# 182 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: You're pretty good at this,\n"
	.string "{PLAYER}{KUN}!\p"
	.string "I'm gonna train hard so I can beat you\n"
	.string "next time!\p"
	.string "I'll give you this since you helped me\n"
	.string "practice!\p"
	.string "$"

BaycrestCity_Text_Rival3M::
# 189 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: This TM is for the move\n"
	.string "Swift!\p"
	.string "It never misses, so it's a great move to\n"
	.string "have!\p"
	.string "I'll see you later, {PLAYER}{KUN}!$"
