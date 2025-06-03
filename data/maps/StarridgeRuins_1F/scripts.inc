StarridgeRuins_1F_MapScripts::
# 6 "data/maps/StarridgeRuins_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StarridgeRuins_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/StarridgeRuins_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, StarridgeRuins_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

StarridgeRuins_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/StarridgeRuins_1F/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

StarridgeRuins_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 11 "data/maps/StarridgeRuins_1F/scripts.pory"
	compare VAR_SPINEL_CITY_STATE, 3
	goto_if_eq StarridgeRuins_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

StarridgeRuins_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 12 "data/maps/StarridgeRuins_1F/scripts.pory"
	setobjectxy 4, 7, 8
	return


StarridgeRuins_1F_EventScript_Grunts::
# 19 "data/maps/StarridgeRuins_1F/scripts.pory"
	lock
# 20 "data/maps/StarridgeRuins_1F/scripts.pory"
	faceplayer
# 22 "data/maps/StarridgeRuins_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/StarridgeRuins_1F/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 7
# 24 "data/maps/StarridgeRuins_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 26 "data/maps/StarridgeRuins_1F/scripts.pory"
	applymovement 3, StarridgeRuins_1F_Movement_GruntA_Approach
# 27 "data/maps/StarridgeRuins_1F/scripts.pory"
	waitmovement 3
# 29 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Grunts_GruntA_1
# 30 "data/maps/StarridgeRuins_1F/scripts.pory"
	closemessage
# 32 "data/maps/StarridgeRuins_1F/scripts.pory"
	compare VAR_SPINEL_CITY_STATE, 2
	goto_if_eq StarridgeRuins_1F_EventScript_Grunts_2
# 120 "data/maps/StarridgeRuins_1F/scripts.pory"
	applymovement 3, StarridgeRuins_1F_Movement_GruntA_Push
# 121 "data/maps/StarridgeRuins_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeRuins_1F_Movement_Player_Push
# 122 "data/maps/StarridgeRuins_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 123 "data/maps/StarridgeRuins_1F/scripts.pory"
	applymovement 3, StarridgeRuins_1F_Movement_GruntA_WalkBack
# 124 "data/maps/StarridgeRuins_1F/scripts.pory"
	waitmovement 3
StarridgeRuins_1F_EventScript_Grunts_1:
# 127 "data/maps/StarridgeRuins_1F/scripts.pory"
	release
	return

StarridgeRuins_1F_EventScript_Grunts_2:
# 33 "data/maps/StarridgeRuins_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 34 "data/maps/StarridgeRuins_1F/scripts.pory"
	applymovement 2, StarridgeRuins_1F_Movement_GruntB_Exclamation
# 35 "data/maps/StarridgeRuins_1F/scripts.pory"
	waitmovement 2
# 37 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Grunts_GruntB_1
# 38 "data/maps/StarridgeRuins_1F/scripts.pory"
	closemessage
# 40 "data/maps/StarridgeRuins_1F/scripts.pory"
	applymovement 2, StarridgeRuins_1F_Movement_GruntB_Approach
# 41 "data/maps/StarridgeRuins_1F/scripts.pory"
	waitmovement 2
# 43 "data/maps/StarridgeRuins_1F/scripts.pory"
	setobjectxy 4, 4, 12
# 44 "data/maps/StarridgeRuins_1F/scripts.pory"
	applymovement 4, StarridgeRuins_1F_Movement_Rival_WalkIn2
# 45 "data/maps/StarridgeRuins_1F/scripts.pory"
	waitmovement 4
# 47 "data/maps/StarridgeRuins_1F/scripts.pory"
	checkplayergender
# 48 "data/maps/StarridgeRuins_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarridgeRuins_1F_EventScript_Grunts_6
# 80 "data/maps/StarridgeRuins_1F/scripts.pory"
	speakername StarridgeRuins_1F_EventScript_Grunts_Text_0
# 81 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Grunts_Caden_Entrance
# 82 "data/maps/StarridgeRuins_1F/scripts.pory"
	closemessage
# 84 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Grunts_GruntA_Response
# 86 "data/maps/StarridgeRuins_1F/scripts.pory"
	speakername StarridgeRuins_1F_EventScript_Grunts_Text_0
# 87 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Grunts_Caden_Taunt
# 88 "data/maps/StarridgeRuins_1F/scripts.pory"
	closemessage
# 90 "data/maps/StarridgeRuins_1F/scripts.pory"
	choose_mons
# 91 "data/maps/StarridgeRuins_1F/scripts.pory"
	setdynamicaifunc AI_TagBattlePreferFoe
# 93 "data/maps/StarridgeRuins_1F/scripts.pory"
	switch VAR_STARTER_MON
# 94 "data/maps/StarridgeRuins_1F/scripts.pory"
	case 0, StarridgeRuins_1F_EventScript_Grunts_16
# 97 "data/maps/StarridgeRuins_1F/scripts.pory"
	case 1, StarridgeRuins_1F_EventScript_Grunts_17
# 100 "data/maps/StarridgeRuins_1F/scripts.pory"
	case 2, StarridgeRuins_1F_EventScript_Grunts_18
StarridgeRuins_1F_EventScript_Grunts_14:
# 105 "data/maps/StarridgeRuins_1F/scripts.pory"
	speakername StarridgeRuins_1F_EventScript_Grunts_Text_0
# 106 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Caden_Response
StarridgeRuins_1F_EventScript_Grunts_5:
# 109 "data/maps/StarridgeRuins_1F/scripts.pory"
	closemessage
# 110 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_GruntA_Retreat
# 111 "data/maps/StarridgeRuins_1F/scripts.pory"
	closemessage
# 112 "data/maps/StarridgeRuins_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/StarridgeRuins_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_304_ETERNITY_GRUNT
# 114 "data/maps/StarridgeRuins_1F/scripts.pory"
	removeobject 3
# 115 "data/maps/StarridgeRuins_1F/scripts.pory"
	removeobject 2
# 116 "data/maps/StarridgeRuins_1F/scripts.pory"
	setvar VAR_SPINEL_CITY_STATE, 3
# 117 "data/maps/StarridgeRuins_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeRuins_1F_EventScript_Grunts_1

StarridgeRuins_1F_EventScript_Grunts_6:
# 49 "data/maps/StarridgeRuins_1F/scripts.pory"
	speakername StarridgeRuins_1F_EventScript_Grunts_Text_0
# 50 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Grunts_Holly_Entrance
# 51 "data/maps/StarridgeRuins_1F/scripts.pory"
	closemessage
# 53 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Grunts_GruntA_Response
# 55 "data/maps/StarridgeRuins_1F/scripts.pory"
	speakername StarridgeRuins_1F_EventScript_Grunts_Text_0
# 56 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Grunts_Holly_Determination
# 57 "data/maps/StarridgeRuins_1F/scripts.pory"
	closemessage
# 59 "data/maps/StarridgeRuins_1F/scripts.pory"
	choose_mons
# 60 "data/maps/StarridgeRuins_1F/scripts.pory"
	setdynamicaifunc AI_TagBattlePreferFoe
# 62 "data/maps/StarridgeRuins_1F/scripts.pory"
	switch VAR_STARTER_MON
# 63 "data/maps/StarridgeRuins_1F/scripts.pory"
	case 0, StarridgeRuins_1F_EventScript_Grunts_11
# 66 "data/maps/StarridgeRuins_1F/scripts.pory"
	case 1, StarridgeRuins_1F_EventScript_Grunts_12
# 69 "data/maps/StarridgeRuins_1F/scripts.pory"
	case 2, StarridgeRuins_1F_EventScript_Grunts_13
StarridgeRuins_1F_EventScript_Grunts_9:
# 74 "data/maps/StarridgeRuins_1F/scripts.pory"
	speakername StarridgeRuins_1F_EventScript_Grunts_Text_0
# 75 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Holly_Response
# 76 "data/maps/StarridgeRuins_1F/scripts.pory"
	closemessage
	goto StarridgeRuins_1F_EventScript_Grunts_5

StarridgeRuins_1F_EventScript_Grunts_11:
# 64 "data/maps/StarridgeRuins_1F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_STARRIDGE_RUINS_1, StarridgeRuins_1F_Text_Grunts_GruntA_Defeated, TRAINER_GRUNT_STARRIDGE_RUINS_2, StarridgeRuins_1F_Text_Grunts_GruntB_Defeated, PARTNER_HOLLY_STARRIDGE_RUINS_TURTWIG
	goto StarridgeRuins_1F_EventScript_Grunts_9

StarridgeRuins_1F_EventScript_Grunts_12:
# 67 "data/maps/StarridgeRuins_1F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_STARRIDGE_RUINS_1, StarridgeRuins_1F_Text_Grunts_GruntA_Defeated, TRAINER_GRUNT_STARRIDGE_RUINS_2, StarridgeRuins_1F_Text_Grunts_GruntB_Defeated, PARTNER_HOLLY_STARRIDGE_RUINS_FENNEKIN
	goto StarridgeRuins_1F_EventScript_Grunts_9

StarridgeRuins_1F_EventScript_Grunts_13:
# 70 "data/maps/StarridgeRuins_1F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_STARRIDGE_RUINS_1, StarridgeRuins_1F_Text_Grunts_GruntA_Defeated, TRAINER_GRUNT_STARRIDGE_RUINS_2, StarridgeRuins_1F_Text_Grunts_GruntB_Defeated, PARTNER_HOLLY_STARRIDGE_RUINS_QUAXLY
	goto StarridgeRuins_1F_EventScript_Grunts_9

StarridgeRuins_1F_EventScript_Grunts_16:
# 95 "data/maps/StarridgeRuins_1F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_STARRIDGE_RUINS_1, StarridgeRuins_1F_Text_Grunts_GruntA_Defeated, TRAINER_GRUNT_STARRIDGE_RUINS_2, StarridgeRuins_1F_Text_Grunts_GruntB_Defeated, PARTNER_CADEN_STARRIDGE_RUINS_TURTWIG
	goto StarridgeRuins_1F_EventScript_Grunts_14

StarridgeRuins_1F_EventScript_Grunts_17:
# 98 "data/maps/StarridgeRuins_1F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_STARRIDGE_RUINS_1, StarridgeRuins_1F_Text_Grunts_GruntA_Defeated, TRAINER_GRUNT_STARRIDGE_RUINS_2, StarridgeRuins_1F_Text_Grunts_GruntB_Defeated, PARTNER_CADEN_STARRIDGE_RUINS_FENNEKIN
	goto StarridgeRuins_1F_EventScript_Grunts_14

StarridgeRuins_1F_EventScript_Grunts_18:
# 101 "data/maps/StarridgeRuins_1F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_STARRIDGE_RUINS_1, StarridgeRuins_1F_Text_Grunts_GruntA_Defeated, TRAINER_GRUNT_STARRIDGE_RUINS_2, StarridgeRuins_1F_Text_Grunts_GruntB_Defeated, PARTNER_CADEN_STARRIDGE_RUINS_QUAXLY
	goto StarridgeRuins_1F_EventScript_Grunts_14


# 192 "data/maps/StarridgeRuins_1F/scripts.pory"
StarridgeRuins_1F_Movement_GruntA_Approach:
# 193 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_left
	step_end

# 196 "data/maps/StarridgeRuins_1F/scripts.pory"
StarridgeRuins_1F_Movement_GruntA_Push:
# 197 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 200 "data/maps/StarridgeRuins_1F/scripts.pory"
StarridgeRuins_1F_Movement_GruntA_WalkBack:
# 201 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_right
# 202 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 205 "data/maps/StarridgeRuins_1F/scripts.pory"
StarridgeRuins_1F_Movement_Player_Push:
# 206 "data/maps/StarridgeRuins_1F/scripts.pory"
	lock_facing_direction
# 207 "data/maps/StarridgeRuins_1F/scripts.pory"
	jump_left
# 208 "data/maps/StarridgeRuins_1F/scripts.pory"
	face_right
# 209 "data/maps/StarridgeRuins_1F/scripts.pory"
	unlock_facing_direction
	step_end

# 212 "data/maps/StarridgeRuins_1F/scripts.pory"
StarridgeRuins_1F_Movement_GruntB_Exclamation:
# 213 "data/maps/StarridgeRuins_1F/scripts.pory"
	emote_exclamation_mark
# 214 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 217 "data/maps/StarridgeRuins_1F/scripts.pory"
StarridgeRuins_1F_Movement_GruntB_Approach:
# 218 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_left
# 218 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_left
	step_end

# 221 "data/maps/StarridgeRuins_1F/scripts.pory"
StarridgeRuins_1F_Movement_Rival_WalkIn1:
# 222 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_up
# 222 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_up
# 222 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_up
# 222 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_up
# 222 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_up
# 223 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_right
# 223 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_right
# 223 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_right
	step_end

# 226 "data/maps/StarridgeRuins_1F/scripts.pory"
StarridgeRuins_1F_Movement_Rival_WalkIn2:
# 227 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_up
# 227 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_up
# 227 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_up
# 227 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_up
# 228 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_right
# 228 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_right
# 228 "data/maps/StarridgeRuins_1F/scripts.pory"
	walk_fast_right
	step_end

StarridgeRuins_1F_EventScript_Rival::
# 232 "data/maps/StarridgeRuins_1F/scripts.pory"
	lock
# 233 "data/maps/StarridgeRuins_1F/scripts.pory"
	faceplayer
# 235 "data/maps/StarridgeRuins_1F/scripts.pory"
	speakername StarridgeRuins_1F_EventScript_Grunts_Text_0
# 236 "data/maps/StarridgeRuins_1F/scripts.pory"
	msgbox StarridgeRuins_1F_Text_Rival
# 238 "data/maps/StarridgeRuins_1F/scripts.pory"
	release
	return


StarridgeRuins_1F_EventScript_Grunts_Text_0:
# 49 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "{RIVAL}$"

StarridgeRuins_1F_Text_Grunts_GruntA_1::
# 130 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Can't you see we're busy here?\p"
	.string "We're trying to find the treasure in\n"
	.string "this place!\p"
	.string "Why don't you go mind the business that\n"
	.string "pays you, huh?$"

StarridgeRuins_1F_Text_Grunts_GruntB_1::
# 136 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Hey, wait a minute!\p"
	.string "You're the kid that beat me in that\n"
	.string "stupid nerd club!\p"
	.string "I'm not going to let you get in my way\n"
	.string "again!\p"
	.string "I've got backup this time, so you're\n"
	.string "going down!$"

StarridgeRuins_1F_Text_Grunts_Caden_Entrance::
# 142 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Hey! Did I just hear you threaten my\n"
	.string "friend?\p"
	.string "I don't know who you are, but that's not\n"
	.string "happening on my watch!$"

StarridgeRuins_1F_Text_Grunts_GruntA_Response::
# 147 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "You think you can just stroll in here\n"
	.string "and stop us?\p"
	.string "Well, think again!\p"
	.string "It's Eternity and beyond for us, kid!\n"
	.string "Prepare to lose!$"

StarridgeRuins_1F_Text_Grunts_Caden_Taunt::
# 153 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Team Eternity, huh? Big talk for a\n"
	.string "couple of grunts.\p"
	.string "Let's see if you're as tough as you\n"
	.string "think!$"

StarridgeRuins_1F_Text_Grunts_Holly_Entrance::
# 158 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Is everything okay?\p"
	.string "It sounds like you're in trouble, and I'm\n"
	.string "not going to stand by and watch!$"

StarridgeRuins_1F_Text_Grunts_Holly_Determination::
# 163 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "I don't know what you two bozos are up\n"
	.string "to, but we're not letting you push us\l"
	.string "around!\p"
	.string "Ready, {PLAYER}? Let's show them\n"
	.string "what we can do together!$"

StarridgeRuins_1F_Text_Grunts_GruntA_Defeated::
# 168 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "No way!\n"
	.string "How did we lose to a couple of kids?$"

StarridgeRuins_1F_Text_Grunts_GruntB_Defeated::
# 172 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Wuh-oh!\n"
	.string "Boss is not gonna like this...$"

StarridgeRuins_1F_Text_Caden_Response::
# 176 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Ha! Thought you were tough?\p"
	.string "Guess you can't handle the 'kids' after\n"
	.string "all!$"

StarridgeRuins_1F_Text_Holly_Response::
# 181 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Looks like you underestimated us.\p"
	.string "Maybe next time you'll think twice!$"

StarridgeRuins_1F_Text_GruntA_Retreat::
# 186 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Fine! You may have won this time,\p"
	.string "but Team Eternity doesn't back down\n"
	.string "that easily!\p"
	.string "Let's go tell the boss. This isn't over!$"

StarridgeRuins_1F_Text_Rival::
# 241 "data/maps/StarridgeRuins_1F/scripts.pory"
	.string "Let's keep moving, {PLAYER}!\p"
	.string "We need to find out what's going on\n"
	.string "here!$"
