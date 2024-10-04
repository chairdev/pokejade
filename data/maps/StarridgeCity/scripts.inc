StarridgeCity_MapScripts::
# 8 "data/maps/StarridgeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/StarridgeCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


StarridgeCity_EventScript_Rival::
# 14 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 15 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 17 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 19 "data/maps/StarridgeCity/scripts.pory"
	checkplayergender
# 20 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarridgeCity_EventScript_Rival_2
# 56 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 57 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1M, MSGBOX_YESNO
# 59 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_8
StarridgeCity_EventScript_Rival_1:
# 85 "data/maps/StarridgeCity/scripts.pory"
	fadedefaultbgm
# 86 "data/maps/StarridgeCity/scripts.pory"
	releaseall
	return

StarridgeCity_EventScript_Rival_2:
# 22 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 23 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1F, MSGBOX_YESNO
# 25 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_5
# 51 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Refuse
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_5:
# 27 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Accept
# 28 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 29 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_12
# 32 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_13
# 35 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_14
StarridgeCity_EventScript_Rival_10:
# 40 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 41 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 43 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 45 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
# 46 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_8:
# 61 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalM_Accept
# 62 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 63 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_17
# 66 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_18
# 69 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_19
StarridgeCity_EventScript_Rival_15:
# 74 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 75 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival2F
# 77 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/StarridgeCity/scripts.pory"
	removeobject 1
# 79 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
# 80 "data/maps/StarridgeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_12:
# 30 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_TURTWIG, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_13:
# 33 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_FENNEKIN, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_14:
# 36 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_QUAXLY, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_10

StarridgeCity_EventScript_Rival_17:
# 64 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_TURTWIG, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_18:
# 67 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_FENNEKIN, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15

StarridgeCity_EventScript_Rival_19:
# 70 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_CADEN_STARRIDGE_QUAXLY, StarridgeCity_Text_CadenDefeated
	goto StarridgeCity_EventScript_Rival_15


StarridgeCity_EventScript_AmphyKidnapped::
# 153 "data/maps/StarridgeCity/scripts.pory"
	lockall
	return


StarridgeCity_EventScript_Rival_Text_0:
# 17 "data/maps/StarridgeCity/scripts.pory"
	.string "{RIVAL}$"

StarridgeCity_Text_Rival1F::
# 89 "data/maps/StarridgeCity/scripts.pory"
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
# 100 "data/maps/StarridgeCity/scripts.pory"
	.string "{PLAYER}! I'm gonna give you a run for\n"
	.string "your money!$"

StarridgeCity_Text_RivalF_Refuse::
# 104 "data/maps/StarridgeCity/scripts.pory"
	.string "Oh, okay... I guess I'll see you later,\n"
	.string "then!$"

StarridgeCity_Text_HollyDefeated::
# 108 "data/maps/StarridgeCity/scripts.pory"
	.string "Urgh!\n"
	.string "I'm never gonna get better at battling!$"

StarridgeCity_Text_Rival2F::
# 113 "data/maps/StarridgeCity/scripts.pory"
	.string "Man, I even Terastalized and\n"
	.string "everything...\p"
	.string "...Oh, right.\n"
	.string "The Fairy-type Gym is just behind me.\p"
	.string "The Gym Leader is pretty young and was\n"
	.string "recently appointed to that position.\p"
	.string "But after losing to you, I don't feel\n"
	.string "very ready.\p"
	.string "I'm gonna go train so my Pokémon and I\n"
	.string "can give it our all!\p"
	.string "See you later, {PLAYER}!$"

StarridgeCity_Text_Rival1M::
# 123 "data/maps/StarridgeCity/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "I see you've been training hard! I've\n"
	.string "been doing the same!\p"
	.string "But... I'm still not sure if I'm training\n"
	.string "my Pokémon the right way.\p"
	.string "I'm getting better every day, though!\p"
	.string "Show me what you've learned... in a\n"
	.string "battle!$"

StarridgeCity_Text_RivalM_Accept::
# 131 "data/maps/StarridgeCity/scripts.pory"
	.string "All right!\n"
	.string "Let's do this, {PLAYER}!$"

StarridgeCity_Text_RivalM_Refuse::
# 135 "data/maps/StarridgeCity/scripts.pory"
	.string "...That's okay. I'll see you around, then.$"

StarridgeCity_Text_CadenDefeated::
# 139 "data/maps/StarridgeCity/scripts.pory"
	.string "Yeah, you're good.\n"
	.string "I guess.$"

StarridgeCity_Text_Rival2M::
# 143 "data/maps/StarridgeCity/scripts.pory"
	.string "Our battle was a great opportunity to\n"
	.string "mess around with Terastalization a bit.\l"
	.string "So don't think it counts, OK? Anyway,\l"
	.string "you're curious about the Gym behind me,\l"
	.string "right?\p"
	.string "Well, it's the Fairy-type Gym!\n"
	.string "And guess what? The Gym Leader is cute!\l"
	.string "Young too!\p"
	.string "Haha! {PLAYER}, you head in first.\n"
	.string "I'm off to get even stronger!$"

StarridgeCity_Text_AmphyKidnapped_Jasmine1::
# 157 "data/maps/StarridgeCity/scripts.pory"
	.string "{PLAYER}! T-Team Upsilon... they...\n"
	.string "they took Amphy...\p"
	.string "It happened so fast! I was about to\n"
	.string "head out when a couple of those Team\l"
	.string "Upsilon grunts stormed in.\p"
	.string "They grabbed Amphy and ran off! I tried\n"
	.string "to stop them, but they were too fast!\p"
	.string "Something about... a lighthouse near\n"
	.string "Stemford Town... I think that's where\l"
	.string "they're headed.\p"
	.string "Amphy's special light... they're using it\n"
	.string "for something… something dangerous, I\l"
	.string "just know it.\p"
	.string "I'd go myself, but I have to stay here in\n"
	.string "case they come back for something else.\p"
	.string "{PLAYER}...I know you're strong--can\n"
	.string "you go after them?\p"
	.string "$"
