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
	switch VAR_SPINEL_CITY_STATE
# 17 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 18 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 32, 5
	return


StarridgeCity_EventScript_Rival::
# 25 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 26 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 28 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 30 "data/maps/StarridgeCity/scripts.pory"
	checkplayergender
# 31 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarridgeCity_EventScript_Rival_2
# 67 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 68 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1M, MSGBOX_YESNO
# 70 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_8
StarridgeCity_EventScript_Rival_1:
# 96 "data/maps/StarridgeCity/scripts.pory"
	fadedefaultbgm
# 97 "data/maps/StarridgeCity/scripts.pory"
	releaseall
	return

StarridgeCity_EventScript_Rival_2:
# 33 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 34 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1F, MSGBOX_YESNO
# 36 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_5
# 62 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Refuse
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_5:
# 38 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Accept
# 39 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 40 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_12
# 43 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_13
# 46 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_14
StarridgeCity_EventScript_Rival_10:
# 51 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 52 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 54 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 56 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_SPINEL_GYM_MELODY
# 57 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_8:
# 72 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalM_Accept
# 73 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 74 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_17
# 77 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_18
# 80 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_19
StarridgeCity_EventScript_Rival_15:
# 85 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 86 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 88 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 90 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_SPINEL_GYM_MELODY
# 91 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_12:
# 41 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_DOLOMITE_CHESPIN, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_13:
# 44 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_DOLOMITE_FENNEKIN, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_14:
# 47 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_DOLOMITE_FROAKIE, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_17:
# 75 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_DOLOMITE_CHESPIN, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_18:
# 78 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_DOLOMITE_FENNEKIN, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_19:
# 81 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_DOLOMITE_FROAKIE, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15


StarridgeCity_Trigger_HostageSituation1::
# 159 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_304_ETERNITY_GRUNT
# 160 "data/maps/StarridgeCity/scripts.pory"
	addobject 2
# 161 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 29, 9
# 162 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_HostageSituation
# 163 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWait1
# 164 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown
# 165 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 166 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_HostageSituation2::
# 170 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_304_ETERNITY_GRUNT
# 171 "data/maps/StarridgeCity/scripts.pory"
	addobject 2
# 172 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 30, 9
# 173 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_HostageSituation
# 174 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWait2
# 175 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown
# 176 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 177 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_HostageSituation3::
# 181 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_304_ETERNITY_GRUNT
# 182 "data/maps/StarridgeCity/scripts.pory"
	addobject 2
# 183 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 31, 9
# 184 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_HostageSituation
# 185 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWait3
# 186 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown
# 187 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 188 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_GoSaveBoss1::
# 192 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 194 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistApproachPlayer1
# 195 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 2
# 196 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceRight
# 197 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 199 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 200 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Yes
# 201 "data/maps/StarridgeCity/scripts.pory"
	closemessage
# 203 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWalkBack1
# 204 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown2
# 205 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 206 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_GoSaveBoss2::
# 210 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 212 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistApproachPlayer2
# 213 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 2
# 214 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceRight
# 215 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 217 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 218 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Yes
# 219 "data/maps/StarridgeCity/scripts.pory"
	closemessage
# 221 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistWalkBack2
# 222 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown2
# 223 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 224 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_GoSaveBoss3::
# 228 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 230 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistFaceLeft
# 231 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 2
# 232 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceRight
# 233 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 235 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 236 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Yes
# 237 "data/maps/StarridgeCity/scripts.pory"
	closemessage
# 239 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown2
# 240 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 241 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_EventScript_HostageSituation::
# 245 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 246 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_DOLOMITE_GROTTO_GRUNT_AND_GURU
# 248 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_ScientistApproachPlayer
# 249 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceDown
# 252 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 253 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Scientist1, MSGBOX_YESNO
StarridgeCity_EventScript_HostageSituation_2:
# 254 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne StarridgeCity_EventScript_HostageSituation_3
# 258 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Scientist2
# 259 "data/maps/StarridgeCity/scripts.pory"
	setvar VAR_SPINEL_CITY_STATE, 2
# 260 "data/maps/StarridgeCity/scripts.pory"
	closemessage
	return

StarridgeCity_EventScript_HostageSituation_3:
# 256 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_ButWhy, MSGBOX_YESNO
	goto StarridgeCity_EventScript_HostageSituation_2


# 263 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerFaceDown:
# 264 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_down
	step_end

# 267 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerFaceRight:
# 268 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_right
	step_end

# 271 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerWalkDown:
# 272 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 272 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 272 "data/maps/StarridgeCity/scripts.pory"
	walk_down
	step_end

# 275 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerWalkDown2:
# 276 "data/maps/StarridgeCity/scripts.pory"
	walk_down
	step_end

# 279 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistApproachPlayer:
# 280 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 280 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 280 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 280 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 280 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
	step_end

# 283 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistApproachPlayer1:
# 284 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_left
# 284 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_left
	step_end

# 287 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistApproachPlayer2:
# 288 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_left
	step_end

# 291 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWalkBack1:
# 292 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_right
# 292 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_right
	step_end

# 295 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWalkBack2:
# 296 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_right
	step_end

# 299 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistFaceLeft:
# 300 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_fast_left
	step_end

# 303 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWait1:
# 304 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 305 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 305 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 305 "data/maps/StarridgeCity/scripts.pory"
	walk_right
	step_end

# 308 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWait2:
# 309 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 310 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 310 "data/maps/StarridgeCity/scripts.pory"
	walk_right
	step_end

# 313 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_ScientistWait3:
# 314 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 315 "data/maps/StarridgeCity/scripts.pory"
	walk_right
	step_end

StarridgeCity_EventScript_Scientist::
# 345 "data/maps/StarridgeCity/scripts.pory"
	lock
# 346 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 348 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveBoss1_Text_0
# 349 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_HostageSituation_Yes
# 351 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_EventScript_ShadyMan::
# 355 "data/maps/StarridgeCity/scripts.pory"
	lock
# 356 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 358 "data/maps/StarridgeCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DUSK_BALL, StarridgeCity_EventScript_ShadyMan_2
# 370 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_EventScript_ShadyMan_Text_1
StarridgeCity_EventScript_ShadyMan_1:
# 373 "data/maps/StarridgeCity/scripts.pory"
	release
	return

StarridgeCity_EventScript_ShadyMan_2:
# 360 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_EventScript_ShadyMan_Text_0
# 365 "data/maps/StarridgeCity/scripts.pory"
	giveitem ITEM_DUSK_BALL, 1
# 366 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_RECEIVED_DUSK_BALL
	goto StarridgeCity_EventScript_ShadyMan_1


StarridgeCity_EventScript_Rival_Text_0:
# 28 "data/maps/StarridgeCity/scripts.pory"
	.string "{RIVAL}$"

StarridgeCity_Trigger_GoSaveBoss1_Text_0:
# 199 "data/maps/StarridgeCity/scripts.pory"
	.string "Scientist$"

StarridgeCity_EventScript_ShadyMan_Text_0:
# 360 "data/maps/StarridgeCity/scripts.pory"
	.string "...Hey, kid.\n"
	.string "You look like you could use this.\p"
	.string "It's a Dusk Ball. It's good for catching\n"
	.string "Pokémon in dark places.\p"
	.string "You never know when you might need it.\p"
	.string "Take it. It's on the house.$"

StarridgeCity_EventScript_ShadyMan_Text_1:
# 370 "data/maps/StarridgeCity/scripts.pory"
	.string "You already got a free Dusk Ball from\n"
	.string "me.\p"
	.string "Don't be greedy.$"

StarridgeCity_Text_Rival1F::
# 100 "data/maps/StarridgeCity/scripts.pory"
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
# 111 "data/maps/StarridgeCity/scripts.pory"
	.string "{PLAYER}! I'm gonna give you a run for\n"
	.string "your money!$"

StarridgeCity_Text_RivalF_Refuse::
# 115 "data/maps/StarridgeCity/scripts.pory"
	.string "Oh, okay... I guess I'll see you later,\n"
	.string "then!$"

StarridgeCity_Text_HollyDefeated::
# 119 "data/maps/StarridgeCity/scripts.pory"
	.string "Urgh!\n"
	.string "I'm never gonna get better at battling!$"

StarridgeCity_Text_Rival2F::
# 123 "data/maps/StarridgeCity/scripts.pory"
	.string "Man, I even Terastalized and\n"
	.string "everything...\p"
	.string "I've got to figure out what went wrong!\p"
	.string "Thanks for the battle, though,\n"
	.string "{PLAYER}!\n"
	.string "You're an inspiration.\p"
	.string "See you around!$"

StarridgeCity_Text_Rival1M::
# 131 "data/maps/StarridgeCity/scripts.pory"
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
# 140 "data/maps/StarridgeCity/scripts.pory"
	.string "Alright, {PLAYER}! Let's see which of\n"
	.string "us really has the edge!$"

StarridgeCity_Text_RivalM_Refuse::
# 144 "data/maps/StarridgeCity/scripts.pory"
	.string "Really? Not feeling up to it? Guess I'll\n"
	.string "have to save these moves for next time.$"

StarridgeCity_Text_CadenDefeated::
# 148 "data/maps/StarridgeCity/scripts.pory"
	.string "Whoa! You pulled that one off... nice\n"
	.string "job, {PLAYER}!$"

StarridgeCity_Text_Rival2M::
# 152 "data/maps/StarridgeCity/scripts.pory"
	.string "Even with Terastalizing, huh… Guess you\n"
	.string "really came through!\p"
	.string "But hey, this isn't the end of it. Next\n"
	.string "time, it'll be a different story!\p"
	.string "Just you wait!$"

StarridgeCity_Text_HostageSituation_Scientist1::
# 318 "data/maps/StarridgeCity/scripts.pory"
	.string "You there! Please, I need your help!\p"
	.string "T-Team Eternity... they... they barged\n"
	.string "into the ruins on Route 306 and are\l"
	.string "holding our boss hostage...\p"
	.string "It happened so fast! I was about to\n"
	.string "head out when a couple of those Team\l"
	.string "Eternity grunts stormed in.\p"
	.string "They grabbed our boss and ran off! I\n"
	.string "tried to stop them, but they were too\l"
	.string "fast!\p"
	.string "I've been running around trying to find\n"
	.string "someone to help, but no one's been able\l"
	.string "to do anything!\p"
	.string "You look strong--can you go after\n"
	.string "them?$"

StarridgeCity_Text_HostageSituation_Scientist2::
# 328 "data/maps/StarridgeCity/scripts.pory"
	.string "Thank you! Let me tell you what I know...\p"
	.string "They said something about... the ruins\n"
	.string "on Route 306... I think that's where\l"
	.string "they're headed.\p"
	.string "They're using our boss for something...\n"
	.string "something dangerous, I just know it.$"

StarridgeCity_Text_HostageSituation_ButWhy::
# 335 "data/maps/StarridgeCity/scripts.pory"
	.string "I understand... but... please! I'm\n"
	.string "begging you! You're the only one here\l"
	.string "that's strong enough to help!$"

StarridgeCity_Text_HostageSituation_Yes::
# 339 "data/maps/StarridgeCity/scripts.pory"
	.string "They took our boss to the Starridge\n"
	.string "Ruins on Route 306!\p"
	.string "I'll be waiting here in case they come\n"
	.string "back. Please, hurry!$"
