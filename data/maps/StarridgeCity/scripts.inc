StarridgeCity_MapScripts::
# 9 "data/maps/StarridgeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/StarridgeCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 12 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_STARRIDGE_CITY_STATE, 0
	goto_if_eq StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_LIGHTHOUSE_TEAM_UPSILON_GRUNTS
	return


StarridgeCity_EventScript_Rival::
# 20 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 21 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 23 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 25 "data/maps/StarridgeCity/scripts.pory"
	checkplayergender
# 26 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarridgeCity_EventScript_Rival_2
# 62 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 63 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1M, MSGBOX_YESNO
# 65 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_8
StarridgeCity_EventScript_Rival_1:
# 91 "data/maps/StarridgeCity/scripts.pory"
	fadedefaultbgm
# 92 "data/maps/StarridgeCity/scripts.pory"
	releaseall
	return

StarridgeCity_EventScript_Rival_2:
# 28 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 29 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1F, MSGBOX_YESNO
# 31 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_5
# 57 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Refuse
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_5:
# 33 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Accept
# 34 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 35 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_12
# 38 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_13
# 41 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_14
StarridgeCity_EventScript_Rival_10:
# 46 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 47 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 49 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 51 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
# 52 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_8:
# 67 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalM_Accept
# 68 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 69 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_17
# 72 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_18
# 75 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_19
StarridgeCity_EventScript_Rival_15:
# 80 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 81 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 83 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 85 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
# 86 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_12:
# 36 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_TURTWIG, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_13:
# 39 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_FENNEKIN, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_14:
# 42 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_QUAXLY, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_17:
# 70 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_TURTWIG, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_18:
# 73 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_FENNEKIN, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_19:
# 76 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_QUAXLY, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15


StarridgeCity_Trigger_AmphyKidnapped1::
# 154 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_AmphyKidnapped
# 155 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineWait1
# 156 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 0
	return


StarridgeCity_Trigger_AmphyKidnapped2::
# 160 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_AmphyKidnapped
# 161 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineWait2
# 162 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 0
	return


StarridgeCity_Trigger_AmphyKidnapped3::
# 166 "data/maps/StarridgeCity/scripts.pory"
	call StarridgeCity_EventScript_AmphyKidnapped
# 167 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineWait3
# 168 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 0
	return


StarridgeCity_EventScript_AmphyKidnapped::
# 173 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 175 "data/maps/StarridgeCity/scripts.pory"
	clearflag FLAG_HIDE_LIGHTHOUSE_TEAM_UPSILON_GRUNTS
# 177 "data/maps/StarridgeCity/scripts.pory"
	applymovement 2, StarridgeCity_Movement_JasmineApproachPlayer
# 178 "data/maps/StarridgeCity/scripts.pory"
	waitmovement 0
# 179 "data/maps/StarridgeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeCity_Movement_PlayerFaceDown
# 181 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_AmphyKidnapped_Text_0
# 182 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_Jasmine1, MSGBOX_YESNO
StarridgeCity_EventScript_AmphyKidnapped_2:
# 183 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne StarridgeCity_EventScript_AmphyKidnapped_3
# 187 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_Jasmine2
# 188 "data/maps/StarridgeCity/scripts.pory"
	closemessage
	return

StarridgeCity_EventScript_AmphyKidnapped_3:
# 185 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_AmphyKidnapped_ButWhy, MSGBOX_YESNO
	goto StarridgeCity_EventScript_AmphyKidnapped_2


# 191 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_PlayerFaceDown:
# 192 "data/maps/StarridgeCity/scripts.pory"
	walk_in_place_down
	step_end

# 195 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineApproachPlayer:
# 196 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 196 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 196 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 196 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 196 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
# 196 "data/maps/StarridgeCity/scripts.pory"
	walk_fast_up
	step_end

# 199 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineWait1:
# 200 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 200 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 201 "data/maps/StarridgeCity/scripts.pory"
	walk_down
	step_end

# 204 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineWait2:
# 205 "data/maps/StarridgeCity/scripts.pory"
	walk_right
# 206 "data/maps/StarridgeCity/scripts.pory"
	walk_down
	step_end

# 209 "data/maps/StarridgeCity/scripts.pory"
StarridgeCity_Movement_JasmineWait3:
# 210 "data/maps/StarridgeCity/scripts.pory"
	walk_down
	step_end

StarridgeCity_EventScript_Rival_Text_0:
# 23 "data/maps/StarridgeCity/scripts.pory"
	.string "{RIVAL}$"

StarridgeCity_EventScript_AmphyKidnapped_Text_0:
# 181 "data/maps/StarridgeCity/scripts.pory"
	.string "Jasmine$"

StarridgeCity_Text_Rival1F::
# 95 "data/maps/StarridgeCity/scripts.pory"
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
# 106 "data/maps/StarridgeCity/scripts.pory"
	.string "{PLAYER}! I'm gonna give you a run for\n"
	.string "your money!$"

StarridgeCity_Text_RivalF_Refuse::
# 110 "data/maps/StarridgeCity/scripts.pory"
	.string "Oh, okay... I guess I'll see you later,\n"
	.string "then!$"

StarridgeCity_Text_HollyDefeated::
# 114 "data/maps/StarridgeCity/scripts.pory"
	.string "Urgh!\n"
	.string "I'm never gonna get better at battling!$"

StarridgeCity_Text_Rival2F::
# 118 "data/maps/StarridgeCity/scripts.pory"
	.string "Man, I even Terastalized and\n"
	.string "everything...\p"
	.string "I've got to figure out what went wrong!\p"
	.string "Thanks for the battle, though,\n"
	.string "{PLAYER}!\n"
	.string "You're an inspiration.\p"
	.string "See you around!$"

StarridgeCity_Text_Rival1M::
# 126 "data/maps/StarridgeCity/scripts.pory"
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
# 135 "data/maps/StarridgeCity/scripts.pory"
	.string "Alright, {PLAYER}! Let's see which of\n"
	.string "us really has the edge!$"

StarridgeCity_Text_RivalM_Refuse::
# 139 "data/maps/StarridgeCity/scripts.pory"
	.string "Really? Not feeling up to it? Guess I'll\n"
	.string "have to save these moves for next time.$"

StarridgeCity_Text_CadenDefeated::
# 143 "data/maps/StarridgeCity/scripts.pory"
	.string "Whoa! You pulled that one off... nice\n"
	.string "job, {PLAYER}!$"

StarridgeCity_Text_Rival2M::
# 147 "data/maps/StarridgeCity/scripts.pory"
	.string "Even with Terastalizing, huh… Guess you\n"
	.string "really came through!\p"
	.string "But hey, this isn't the end of it. Next\n"
	.string "time, it'll be a different story!\p"
	.string "Just you wait!$"

StarridgeCity_Text_AmphyKidnapped_Jasmine1::
# 213 "data/maps/StarridgeCity/scripts.pory"
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
# 223 "data/maps/StarridgeCity/scripts.pory"
	.string "Something about... a lighthouse near\n"
	.string "Stemford Town... I think that's where\l"
	.string "they're headed.\p"
	.string "Amphy's special light... they're using it\n"
	.string "for something... something dangerous, I\l"
	.string "just know it.$"

StarridgeCity_Text_AmphyKidnapped_ButWhy::
# 229 "data/maps/StarridgeCity/scripts.pory"
	.string "I understand... but... please,\n"
	.string "{PLAYER}! I'm begging you! You're the\l"
	.string "only one here that's strong enough to\l"
	.string "help!$"

StarridgeCity_Text_AmphyKidnapped_Yes::
# 233 "data/maps/StarridgeCity/scripts.pory"
	.string "They took Amphy to the lighthouse near\n"
	.string "Stemford Town!\p"
	.string "I'll be waiting here in case they come\n"
	.string "back. Please, hurry!$"
