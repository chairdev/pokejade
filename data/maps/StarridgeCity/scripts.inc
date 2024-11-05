StarridgeCity_MapScripts::
# 11 "data/maps/StarridgeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/StarridgeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/StarridgeCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 15 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARRIDGE_CITY_STATE
# 16 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 19 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 17 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_LIGHTHOUSE_UPSILON_GRUNTS
	return

StarridgeCity_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 20 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 32, 5
	return


StarridgeCity_EventScript_Rival::
# 27 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 28 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 30 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 32 "data/maps/StarridgeCity/scripts.pory"
	checkplayergender
# 33 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarridgeCity_EventScript_Rival_2
# 69 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 70 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1M, MSGBOX_YESNO
# 72 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_8
StarridgeCity_EventScript_Rival_1:
# 98 "data/maps/StarridgeCity/scripts.pory"
	fadedefaultbgm
# 99 "data/maps/StarridgeCity/scripts.pory"
	releaseall
	return

StarridgeCity_EventScript_Rival_2:
# 35 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 36 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1F, MSGBOX_YESNO
# 38 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_5
# 64 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Refuse
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_5:
# 40 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Accept
# 41 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 42 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_12
# 45 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_13
# 48 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_14
StarridgeCity_EventScript_Rival_10:
# 53 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 54 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 56 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 57 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 58 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
# 59 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_8:
# 74 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalM_Accept
# 75 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 76 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_17
# 79 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_18
# 82 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_19
StarridgeCity_EventScript_Rival_15:
# 87 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 88 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 90 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 91 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 92 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
# 93 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_12:
# 43 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_TURTWIG, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_13:
# 46 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_FENNEKIN, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_14:
# 49 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_QUAXLY, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_17:
# 77 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_TURTWIG, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_18:
# 80 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_FENNEKIN, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_19:
# 83 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_QUAXLY, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15


StarridgeCity_Trigger_AmphyKidnapped1::
# 161 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_LIGHTHOUSE_UPSILON_GRUNTS
# 162 "data/maps/StarridgeCity/scripts.pory"
	addobject 2
# 163 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 29, 9
# 164 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_AmphyKidnapped
# 165 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineWait1
# 166 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown
# 167 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 168 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_AmphyKidnapped2::
# 172 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_LIGHTHOUSE_UPSILON_GRUNTS
# 173 "data/maps/StarridgeCity/scripts.pory"
	addobject 2
# 174 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 30, 9
# 175 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_AmphyKidnapped
# 176 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineWait2
# 177 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown
# 178 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 179 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_AmphyKidnapped3::
# 183 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_LIGHTHOUSE_UPSILON_GRUNTS
# 184 "data/maps/StarridgeCity/scripts.pory"
	addobject 2
# 185 "data/maps/StarridgeCity/scripts.pory"
	setobjectxy 2, 31, 9
# 186 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_AmphyKidnapped
# 187 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineWait3
# 188 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown
# 189 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 190 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_GoSaveAmphy1::
# 194 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 196 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineApproachPlayer1
# 197 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 2
# 198 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceRight
# 199 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 201 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveAmphy1_Text_0
# 202 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_Yes
# 203 "data/maps/StarridgeCity/scripts.pory"
	closemessage
# 205 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineWalkBack1
# 206 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown2
# 207 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 208 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_GoSaveAmphy2::
# 212 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 214 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineApproachPlayer2
# 215 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 2
# 216 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceRight
# 217 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 219 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveAmphy1_Text_0
# 220 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_Yes
# 221 "data/maps/StarridgeCity/scripts.pory"
	closemessage
# 223 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineWalkBack2
# 224 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown2
# 225 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 226 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_Trigger_GoSaveAmphy3::
# 230 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 232 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineFaceLeft
# 233 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 2
# 234 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceRight
# 235 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 237 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveAmphy1_Text_0
# 238 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_Yes
# 239 "data/maps/StarridgeCity/scripts.pory"
	closemessage
# 241 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerWalkDown2
# 242 "data/maps/StarridgeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 243 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_EventScript_AmphyKidnapped::
# 247 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 248 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_304_UPSILON_GRUNT
# 250 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineApproachPlayer
# 251 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceDown
# 254 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveAmphy1_Text_0
# 255 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_Jasmine1, MSGBOX_YESNO
StarridgeCity_EventScript_AmphyKidnapped_2:
# 256 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne StarridgeCity_EventScript_AmphyKidnapped_3
# 260 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_Jasmine2
# 261 "data/maps/StarridgeCity/scripts.pory"
	setvar VAR_STARRIDGE_CITY_STATE, 2
# 262 "data/maps/StarridgeCity/scripts.pory"
	closemessage
	return

StarridgeCity_EventScript_AmphyKidnapped_3:
# 258 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_ButWhy, MSGBOX_YESNO
	goto StarridgeCity_EventScript_AmphyKidnapped_2


# 265 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerFaceDown:
# 266 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_down
	step_end

# 269 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerFaceRight:
# 270 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_right
	step_end

# 273 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerWalkDown:
# 274 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 274 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 274 "data/maps/StarridgeCity/scripts.pory"
	walk_down
	step_end

# 277 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerWalkDown2:
# 278 "data/maps/StarridgeCity/scripts.pory"
	walk_down
	step_end

# 281 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineApproachPlayer:
# 282 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 282 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 282 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 282 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 282 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
	step_end

# 285 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineApproachPlayer1:
# 286 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_left
# 286 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_left
	step_end

# 289 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineApproachPlayer2:
# 290 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_left
	step_end

# 293 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineWalkBack1:
# 294 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_right
# 294 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_right
	step_end

# 297 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineWalkBack2:
# 298 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_right
	step_end

# 301 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineFaceLeft:
# 302 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_fast_left
	step_end

# 305 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineWait1:
# 306 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 307 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 307 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 307 "data/maps/StarridgeCity/scripts.pory"
	walk_right
	step_end

# 310 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineWait2:
# 311 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 312 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 312 "data/maps/StarridgeCity/scripts.pory"
	walk_right
	step_end

# 315 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineWait3:
# 316 "data/maps/StarridgeCity/scripts.pory"
	walk_down
# 317 "data/maps/StarridgeCity/scripts.pory"
	walk_right
	step_end

StarridgeCity_EventScript_Jasmine::
# 347 "data/maps/StarridgeCity/scripts.pory"
	lock
# 348 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 350 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_Trigger_GoSaveAmphy1_Text_0
# 351 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_Yes
# 353 "data/maps/StarridgeCity/scripts.pory"
	release
	return


StarridgeCity_EventScript_Rival_Text_0:
# 30 "data/maps/StarridgeCity/scripts.pory"
	.string "{RIVAL}$"

StarridgeCity_Trigger_GoSaveAmphy1_Text_0:
# 201 "data/maps/StarridgeCity/scripts.pory"
	.string "Jasmine$"

StarridgeCity_Text_Rival1F::
# 102 "data/maps/StarridgeCity/scripts.pory"
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
# 113 "data/maps/StarridgeCity/scripts.pory"
	.string "{PLAYER}! I'm gonna give you a run for\n"
	.string "your money!$"

StarridgeCity_Text_RivalF_Refuse::
# 117 "data/maps/StarridgeCity/scripts.pory"
	.string "Oh, okay... I guess I'll see you later,\n"
	.string "then!$"

StarridgeCity_Text_HollyDefeated::
# 121 "data/maps/StarridgeCity/scripts.pory"
	.string "Urgh!\n"
	.string "I'm never gonna get better at battling!$"

StarridgeCity_Text_Rival2F::
# 125 "data/maps/StarridgeCity/scripts.pory"
	.string "Man, I even Terastalized and\n"
	.string "everything...\p"
	.string "I've got to figure out what went wrong!\p"
	.string "Thanks for the battle, though,\n"
	.string "{PLAYER}!\n"
	.string "You're an inspiration.\p"
	.string "See you around!$"

StarridgeCity_Text_Rival1M::
# 133 "data/maps/StarridgeCity/scripts.pory"
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
# 142 "data/maps/StarridgeCity/scripts.pory"
	.string "Alright, {PLAYER}! Let's see which of\n"
	.string "us really has the edge!$"

StarridgeCity_Text_RivalM_Refuse::
# 146 "data/maps/StarridgeCity/scripts.pory"
	.string "Really? Not feeling up to it? Guess I'll\n"
	.string "have to save these moves for next time.$"

StarridgeCity_Text_CadenDefeated::
# 150 "data/maps/StarridgeCity/scripts.pory"
	.string "Whoa! You pulled that one off... nice\n"
	.string "job, {PLAYER}!$"

StarridgeCity_Text_Rival2M::
# 154 "data/maps/StarridgeCity/scripts.pory"
	.string "Even with Terastalizing, huh… Guess you\n"
	.string "really came through!\p"
	.string "But hey, this isn't the end of it. Next\n"
	.string "time, it'll be a different story!\p"
	.string "Just you wait!$"

StarridgeCity_Text_AmphyKidnapped_Jasmine1::
# 320 "data/maps/StarridgeCity/scripts.pory"
	.string "{PLAYER}! T-Team Upsilon... they...\n"
	.string "they took Amphy...\p"
	.string "It happened so fast! I was about to\n"
	.string "head out when a couple of those Team\l"
	.string "Upsilon grunts stormed in.\p"
	.string "They grabbed Amphy and ran off! I tried\n"
	.string "to stop them, but they were too fast!\p"
	.string "I'd go after them myself, but I have to\n"
	.string "stay here in case they come back for\l"
	.string "something else.\p"
	.string "{PLAYER}...I know you're strong--can\n"
	.string "you go after them?$"

StarridgeCity_Text_AmphyKidnapped_Jasmine2::
# 330 "data/maps/StarridgeCity/scripts.pory"
	.string "Thank you, {PLAYER}!\n"
	.string "Let me tell you what I know...\p"
	.string "They said something about... a\n"
	.string "lighthouse near Stemford Town... I think\l"
	.string "that's where they're headed.\p"
	.string "They're using Amphy for something...\n"
	.string "something dangerous, I just know it.$"

StarridgeCity_Text_AmphyKidnapped_ButWhy::
# 337 "data/maps/StarridgeCity/scripts.pory"
	.string "I understand... but... please,\n"
	.string "{PLAYER}! I'm begging you! You're the\l"
	.string "only one here that's strong enough to\l"
	.string "help!$"

StarridgeCity_Text_AmphyKidnapped_Yes::
# 341 "data/maps/StarridgeCity/scripts.pory"
	.string "They took Amphy to the lighthouse near\n"
	.string "Stemford Town!\p"
	.string "I'll be waiting here in case they come\n"
	.string "back. Please, hurry!$"
