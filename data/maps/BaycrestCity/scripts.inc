BaycrestCity_MapScripts::
# 4 "data/maps/BaycrestCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BaycrestCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BaycrestCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/BaycrestCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


BaycrestCity_Trigger_Rival1::
# 10 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 12 "data/maps/BaycrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachRival1
# 13 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 14 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, LookDown
# 15 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 17 "data/maps/BaycrestCity/scripts.pory"
	checkplayergender
# 18 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BaycrestCity_Kanami
# 19 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BaycrestCity_Shinji
# 21 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 22 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 23 "data/maps/BaycrestCity/scripts.pory"
	hideobjectat 1, MAP_BAYCREST_CITY
# 25 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 26 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 28 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return


BaycrestCity_Trigger_Rival2::
# 32 "data/maps/BaycrestCity/scripts.pory"
	lockall
# 34 "data/maps/BaycrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachRival2
# 35 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 36 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, LookDown
# 37 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 39 "data/maps/BaycrestCity/scripts.pory"
	checkplayergender
# 40 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BaycrestCity_Kanami
# 41 "data/maps/BaycrestCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BaycrestCity_Shinji
	return


BaycrestCity_Kanami::
# 45 "data/maps/BaycrestCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 47 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival1F
# 49 "data/maps/BaycrestCity/scripts.pory"
	switch VAR_STARTER_MON
# 50 "data/maps/BaycrestCity/scripts.pory"
	case 0, BaycrestCity_Kanami_3
# 53 "data/maps/BaycrestCity/scripts.pory"
	case 1, BaycrestCity_Kanami_4
# 56 "data/maps/BaycrestCity/scripts.pory"
	case 2, BaycrestCity_Kanami_5
BaycrestCity_Kanami_1:
# 61 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival2F
# 62 "data/maps/BaycrestCity/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 63 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival3F
# 64 "data/maps/BaycrestCity/scripts.pory"
	closemessage
# 66 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 67 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/BaycrestCity/scripts.pory"
	hideobjectat 1, MAP_BAYCREST_CITY
# 70 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 71 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 73 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return

BaycrestCity_Kanami_3:
# 51 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KANAMI_BAYCREST_TURTWIG, BaycrestCity_Text_KanamiDefeated
	goto BaycrestCity_Kanami_1

BaycrestCity_Kanami_4:
# 54 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KANAMI_BAYCREST_FENNEKIN, BaycrestCity_Text_KanamiDefeated
	goto BaycrestCity_Kanami_1

BaycrestCity_Kanami_5:
# 57 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KANAMI_BAYCREST_QUAXLY, BaycrestCity_Text_KanamiDefeated
	goto BaycrestCity_Kanami_1


BaycrestCity_Shinji::
# 77 "data/maps/BaycrestCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 79 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival1M
# 81 "data/maps/BaycrestCity/scripts.pory"
	switch VAR_STARTER_MON
# 82 "data/maps/BaycrestCity/scripts.pory"
	case 0, BaycrestCity_Shinji_3
# 85 "data/maps/BaycrestCity/scripts.pory"
	case 1, BaycrestCity_Shinji_4
# 88 "data/maps/BaycrestCity/scripts.pory"
	case 2, BaycrestCity_Shinji_5
BaycrestCity_Shinji_1:
# 93 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival2M
# 94 "data/maps/BaycrestCity/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 95 "data/maps/BaycrestCity/scripts.pory"
	msgbox BaycrestCity_Text_Rival3M
# 96 "data/maps/BaycrestCity/scripts.pory"
	closemessage
# 98 "data/maps/BaycrestCity/scripts.pory"
	applymovement 1, RivalLeave
# 99 "data/maps/BaycrestCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/BaycrestCity/scripts.pory"
	hideobjectat 1, MAP_BAYCREST_CITY
# 102 "data/maps/BaycrestCity/scripts.pory"
	setvar VAR_BAYCREST_CITY_STATE, 1
# 103 "data/maps/BaycrestCity/scripts.pory"
	setflag FLAG_HIDE_BAYCREST_CITY_RIVAL
# 105 "data/maps/BaycrestCity/scripts.pory"
	releaseall
	return

BaycrestCity_Shinji_3:
# 83 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJI_BAYCREST_TURTWIG, BaycrestCity_Text_ShinjiDefeated
	goto BaycrestCity_Shinji_1

BaycrestCity_Shinji_4:
# 86 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJI_BAYCREST_FENNEKIN, BaycrestCity_Text_ShinjiDefeated
	goto BaycrestCity_Shinji_1

BaycrestCity_Shinji_5:
# 89 "data/maps/BaycrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJI_BAYCREST_QUAXLY, BaycrestCity_Text_ShinjiDefeated
	goto BaycrestCity_Shinji_1


# 109 "data/maps/BaycrestCity/scripts.pory"
ApproachRival1:
# 110 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 110 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 111 "data/maps/BaycrestCity/scripts.pory"
	walk_right
# 112 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 115 "data/maps/BaycrestCity/scripts.pory"
ApproachRival2:
# 116 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 116 "data/maps/BaycrestCity/scripts.pory"
	walk_up
	step_end

# 119 "data/maps/BaycrestCity/scripts.pory"
LookLeft:
# 120 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 121 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 124 "data/maps/BaycrestCity/scripts.pory"
LookDown:
# 125 "data/maps/BaycrestCity/scripts.pory"
	emote_exclamation_mark
# 126 "data/maps/BaycrestCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 129 "data/maps/BaycrestCity/scripts.pory"
RivalLeave:
# 130 "data/maps/BaycrestCity/scripts.pory"
	walk_left
# 131 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 131 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 131 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 131 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 131 "data/maps/BaycrestCity/scripts.pory"
	walk_up
# 131 "data/maps/BaycrestCity/scripts.pory"
	walk_up
	step_end

BaycrestCity_Text_Rival1F::
# 134 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}{KUN}! I've been\n"
	.string "waiting for you!\p"
	.string "I've already registered for the Toshou\n"
	.string "League, so I need to practice battling.\p"
	.string "You're the perfect person to help me\n"
	.string "with that!\p"
	.string "Let's battle!$"

BaycrestCity_Text_Rival2F::
# 142 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Wow, you're really good at\n"
	.string "this!\p"
	.string "I guess I'll have to train harder if I\n"
	.string "want to beat you!\p"
	.string "Here, take this TM as a thank you for\n"
	.string "the battle!\p"
	.string "$"

BaycrestCity_Text_Rival3F::
# 149 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: It's the TM for Swift! It's\n"
	.string "a great move that never misses!\p"
	.string "I hope you find it useful!\p"
	.string "I'll see you later!$"

BaycrestCity_Text_KanamiDefeated::
# 156 "data/maps/BaycrestCity/scripts.pory"
	.string "My battle career started off with a\n"
	.string "loss...\p"
	.string "Geez, this is the worst!$"

BaycrestCity_Text_ShinjiDefeated::
# 162 "data/maps/BaycrestCity/scripts.pory"
	.string "My first battle ended in a loss...\p"
	.string "I can't believe it!$"

BaycrestCity_Text_Rival1M::
# 168 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: Oh, hey, {PLAYER}{KUN}!\n"
	.string "There you are!\p"
	.string "I've been waiting for you!\p"
	.string "Just so you know, I've already\n"
	.string "registered for the Toshou League.\p"
	.string "I need to practice, so you and I are\n"
	.string "going to have a battle!\p"
	.string "Let's do this!$"

BaycrestCity_Text_Rival2M::
# 177 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: You're pretty good at this,\n"
	.string "{PLAYER}{KUN}!\p"
	.string "I'm gonna train hard so I can beat you\n"
	.string "next time!\p"
	.string "I'll give you this since you helped me\n"
	.string "practice!\p"
	.string "$"

BaycrestCity_Text_Rival3M::
# 184 "data/maps/BaycrestCity/scripts.pory"
	.string "{RIVAL}: This TM is for the move\n"
	.string "Swift!\p"
	.string "It never misses, so it's a great move to\n"
	.string "have!\p"
	.string "I'll see you later, {PLAYER}{KUN}!$"
