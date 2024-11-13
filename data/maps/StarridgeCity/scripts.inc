StarridgeCity_MapScripts::
# 12 "data/maps/StarridgeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/StarridgeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/StarridgeCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 16 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARRIDGE_CITY_STATE
# 17 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 20 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 18 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_LIGHTHOUSE_UPSILON_GRUNTS
	return

StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 21 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 32, 5
	return


StarridgeCity_EventScript_Rival::
# 28 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 29 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 31 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 33 "data/maps/StarridgeCity/scripts.pory"
	checkplayergender
# 34 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarridgeCity_EventScript_Rival_2
# 70 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 71 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1M, MSGBOX_YESNO
# 73 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_8
StarridgeCity_EventScript_Rival_1:
# 99 "data/maps/StarridgeCity/scripts.pory"
	fadedefaultbgm
# 100 "data/maps/StarridgeCity/scripts.pory"
	releaseall
	return

StarridgeCity_EventScript_Rival_2:
# 36 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 37 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1F, MSGBOX_YESNO
# 39 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_5
# 65 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Refuse
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_5:
# 41 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Accept
# 42 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 43 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_12
# 46 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_13
# 49 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_14
StarridgeCity_EventScript_Rival_10:
# 54 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 55 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 57 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 59 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
# 60 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_8:
# 75 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalM_Accept
# 76 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 77 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_17
# 80 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_18
# 83 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_19
StarridgeCity_EventScript_Rival_15:
# 88 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 89 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 91 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 93 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
# 94 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_12:
# 44 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_TURTWIG, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_13:
# 47 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_FENNEKIN, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_14:
# 50 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_QUAXLY, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_17:
# 78 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_TURTWIG, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_18:
# 81 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_FENNEKIN, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_19:
# 84 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_QUAXLY, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15


StarridgeCity_Trigger_HostageSituation1::
# 162 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_LIGHTHOUSE_UPSILON_GRUNTS
# 163 "data/maps/StarridgeCity/scripts.pory"
	addobject 2
# 164 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 29, 9
# 165 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_HostageSituation
# 166 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWait1
# 167 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown
# 168 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 169 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_HostageSituation2::
# 173 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_LIGHTHOUSE_UPSILON_GRUNTS
# 174 "data/maps/StarridgeCity/scripts.pory"
	addobject 2
# 175 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 30, 9
# 176 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_HostageSituation
# 177 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWait2
# 178 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown
# 179 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 180 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_HostageSituation3::
# 184 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_LIGHTHOUSE_UPSILON_GRUNTS
# 185 "data/maps/StarridgeCity/scripts.pory"
	addobject 2
# 186 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 31, 9
# 187 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_HostageSituation
# 188 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWait3
# 189 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown
# 190 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 191 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_GoSaveBoss1::
# 195 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 197 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistApproachPlayer1
# 198 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 2
# 199 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceRight
# 200 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 202 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 203 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Yes
# 204 "data/maps/StarridgeCity/scripts.pory"
	closemessage
# 206 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWalkBack1
# 207 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown2
# 208 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 209 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_GoSaveBoss2::
# 213 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 215 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistApproachPlayer2
# 216 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 2
# 217 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceRight
# 218 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 220 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 221 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Yes
# 222 "data/maps/StarridgeCity/scripts.pory"
	closemessage
# 224 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWalkBack2
# 225 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown2
# 226 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 227 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_GoSaveBoss3::
# 231 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 233 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistFaceLeft
# 234 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 2
# 235 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceRight
# 236 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 238 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 239 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Yes
# 240 "data/maps/StarridgeCity/scripts.pory"
	closemessage
# 242 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown2
# 243 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 244 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_EventScript_HostageSituation::
# 248 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 249 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_304_UPSILON_GRUNT
# 251 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistApproachPlayer
# 252 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceDown
# 255 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 256 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Scientist1, MSGBOX_YESNO
StarridgeCity_EventScript_HostageSituation_2:
# 257 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne StarridgeCity_EventScript_HostageSituation_3
# 261 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Scientist2
# 262 "data/maps/StarridgeCity/scripts.pory"
	setvar VAR_STARRIDGE_CITY_STATE, 2
# 263 "data/maps/StarridgeCity/scripts.pory"
	closemessage
	return

StarridgeCity_EventScript_HostageSituation_3:
# 259 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_ButWhy, MSGBOX_YESNO
	goto StarridgeCity_EventScript_HostageSituation_2


# 266 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerFaceDown:
# 267 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_down
	step_end

# 270 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerFaceRight:
# 271 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_right
	step_end

# 274 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerWalkDown:
# 275 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 275 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 275 "data/maps/StarridgeCity/scripts.pory"
	walk_down
	step_end

# 278 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerWalkDown2:
# 279 "data/maps/StarridgeCity/scripts.pory"
	walk_down
	step_end

# 282 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistApproachPlayer:
# 283 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 283 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 283 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 283 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 283 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
	step_end

# 286 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistApproachPlayer1:
# 287 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_left
# 287 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_left
	step_end

# 290 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistApproachPlayer2:
# 291 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_left
	step_end

# 294 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWalkBack1:
# 295 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_right
# 295 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_right
	step_end

# 298 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWalkBack2:
# 299 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_right
	step_end

# 302 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistFaceLeft:
# 303 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_fast_left
	step_end

# 306 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWait1:
# 307 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 308 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 308 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 308 "data/maps/StarridgeCity/scripts.pory"
	walk_right
	step_end

# 311 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWait2:
# 312 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 313 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 313 "data/maps/StarridgeCity/scripts.pory"
	walk_right
	step_end

# 316 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWait3:
# 317 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 318 "data/maps/StarridgeCity/scripts.pory"
	walk_right
	step_end

StarridgeCity_EventScript_Scientist::
# 348 "data/maps/StarridgeCity/scripts.pory"
	lock
# 349 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 351 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 352 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Yes
# 354 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_EventScript_ShadyMan::
# 358 "data/maps/StarridgeCity/scripts.pory"
	lock
# 359 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 361 "data/maps/StarridgeCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DUSK_BALL, StarridgeCity_EventScript_ShadyMan_2
# 373 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_EventScript_ShadyMan_Text_1
StarridgeCity_EventScript_ShadyMan_1:
# 376 "data/maps/StarridgeCity/scripts.pory"
	release
	return

StarridgeCity_EventScript_ShadyMan_2:
# 363 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_EventScript_ShadyMan_Text_0
# 368 "data/maps/StarridgeCity/scripts.pory"
	giveitem ITEM_DUSK_BALL, 1
# 369 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_RECEIVED_DUSK_BALL
	goto StarridgeCity_EventScript_ShadyMan_1


StarridgeCity_EventScript_Rival_Text_0:
# 31 "data/maps/StarridgeCity/scripts.pory"
	.string "{RIVAL}$"

StarridgeCity_Trigger_GoSaveBoss1_Text_0:
# 202 "data/maps/StarridgeCity/scripts.pory"
	.string "Scientist$"

StarridgeCity_EventScript_ShadyMan_Text_0:
# 363 "data/maps/StarridgeCity/scripts.pory"
	.string "...Hey, kid.\n"
	.string "You look like you could use this.\p"
	.string "It's a Dusk Ball. It's good for catching\n"
	.string "Pokémon in dark places.\p"
	.string "You never know when you might need it.\p"
	.string "Take it. It's on the house.$"

StarridgeCity_EventScript_ShadyMan_Text_1:
# 373 "data/maps/StarridgeCity/scripts.pory"
	.string "You already got a free Dusk Ball from\n"
	.string "me.\p"
	.string "Don't be greedy.$"

StarridgeCity_Text_Rival1F::
# 103 "data/maps/StarridgeCity/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Have you been fighting lots of\n"
	.string "Trainers?\p"
	.string "I'm sure you have! I think that's why\n"
	.string "you and your Pokémon are so\l"
	.string "strong-looking!\p"
	.string "I wish I could say the same about\n"
	.string "myself, though...\p"
	.string "I'm still not sure if I'm training my\n"
	.string "Pokémon the right way.\p"
	.string "But I'm getting better every day!\p"
	.string "Hey, I know!\n"
	.string "Let's have a battle!$"

StarridgeCity_Text_RivalF_Accept::
# 114 "data/maps/StarridgeCity/scripts.pory"
	.string "{PLAYER}! I'm gonna give you a run for\n"
	.string "your money!$"

StarridgeCity_Text_RivalF_Refuse::
# 118 "data/maps/StarridgeCity/scripts.pory"
	.string "Oh, okay... I guess I'll see you later,\n"
	.string "then!$"

StarridgeCity_Text_HollyDefeated::
# 122 "data/maps/StarridgeCity/scripts.pory"
	.string "Urgh!\n"
	.string "I'm never gonna get better at battling!$"

StarridgeCity_Text_Rival2F::
# 126 "data/maps/StarridgeCity/scripts.pory"
	.string "Man, I even Terastalized and\n"
	.string "everything...\p"
	.string "I've got to figure out what went wrong!\p"
	.string "Thanks for the battle, though,\n"
	.string "{PLAYER}!\n"
	.string "You're an inspiration.\p"
	.string "See you around!$"

StarridgeCity_Text_Rival1M::
# 134 "data/maps/StarridgeCity/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "How's it going with all the battling?\n"
	.string "Hope you're keeping up!\p"
	.string "I've been pushing hard too--think I've\n"
	.string "got some new moves that might surprise\l"
	.string "you.\p"
	.string "Want to see how you stack up against me\n"
	.string "now? Let's have a quick battle!\p"
	.string "Bet it'll be close!$"

StarridgeCity_Text_RivalM_Accept::
# 143 "data/maps/StarridgeCity/scripts.pory"
	.string "Alright, {PLAYER}! Let's see which of\n"
	.string "us really has the edge!$"

StarridgeCity_Text_RivalM_Refuse::
# 147 "data/maps/StarridgeCity/scripts.pory"
	.string "Really? Not feeling up to it? Guess I'll\n"
	.string "have to save these moves for next time.$"

StarridgeCity_Text_CadenDefeated::
# 151 "data/maps/StarridgeCity/scripts.pory"
	.string "Whoa! You pulled that one off... nice\n"
	.string "job, {PLAYER}!$"

StarridgeCity_Text_Rival2M::
# 155 "data/maps/StarridgeCity/scripts.pory"
	.string "Even with Terastalizing, huh… Guess you\n"
	.string "really came through!\p"
	.string "But hey, this isn't the end of it. Next\n"
	.string "time, it'll be a different story!\p"
	.string "Just you wait!$"

StarridgeCity_Text_HostageSituation_Scientist1::
# 321 "data/maps/StarridgeCity/scripts.pory"
	.string "You there! Please, I need your help!\p"
	.string "T-Team Upsilon... they... they barged\n"
	.string "into the ruins on Route 306 and are\l"
	.string "holding our boss hostage...\p"
	.string "It happened so fast! I was about to\n"
	.string "head out when a couple of those Team\l"
	.string "Upsilon grunts stormed in.\p"
	.string "They grabbed our boss and ran off! I\n"
	.string "tried to stop them, but they were too\l"
	.string "fast!\p"
	.string "I've been running around trying to find\n"
	.string "someone to help, but no one's been able\l"
	.string "to do anything!\p"
	.string "You look strong--can you go after\n"
	.string "them?$"

StarridgeCity_Text_HostageSituation_Scientist2::
# 331 "data/maps/StarridgeCity/scripts.pory"
	.string "Thank you! Let me tell you what I know...\p"
	.string "They said something about... the ruins\n"
	.string "on Route 306... I think that's where\l"
	.string "they're headed.\p"
	.string "They're using our boss for something...\n"
	.string "something dangerous, I just know it.$"

StarridgeCity_Text_HostageSituation_ButWhy::
# 338 "data/maps/StarridgeCity/scripts.pory"
	.string "I understand... but... please! I'm\n"
	.string "begging you! You're the only one here\l"
	.string "that's strong enough to help!$"

StarridgeCity_Text_HostageSituation_Yes::
# 342 "data/maps/StarridgeCity/scripts.pory"
	.string "They took our boss to the Starridge\n"
	.string "Ruins on Route 306!\p"
	.string "I'll be waiting here in case they come\n"
	.string "back. Please, hurry!$"
