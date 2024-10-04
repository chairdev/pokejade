StarridgeCity_MapScripts::
# 6 "data/maps/StarridgeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

StarridgeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/StarridgeCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


StarridgeCity_EventScript_Rival::
# 12 "data/maps/StarridgeCity/scripts.pory"
	lockall
# 13 "data/maps/StarridgeCity/scripts.pory"
	faceplayer
# 15 "data/maps/StarridgeCity/scripts.pory"
	speakername StarridgeCity_EventScript_Rival_Text_0
# 17 "data/maps/StarridgeCity/scripts.pory"
	checkplayergender
# 18 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarridgeCity_EventScript_Rival_2
# 48 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 49 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1M, MSGBOX_YESNO
StarridgeCity_EventScript_Rival_1:
# 53 "data/maps/StarridgeCity/scripts.pory"
	fadedefaultbgm
# 54 "data/maps/StarridgeCity/scripts.pory"
	releaseall
	return

StarridgeCity_EventScript_Rival_2:
# 20 "data/maps/StarridgeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 21 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_Rival1F, MSGBOX_YESNO
# 23 "data/maps/StarridgeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_EventScript_Rival_5
# 42 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Refuse
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_5:
# 25 "data/maps/StarridgeCity/scripts.pory"
	msgbox StarridgeCity_Text_RivalF_Accept
# 26 "data/maps/StarridgeCity/scripts.pory"
	switch VAR_STARTER_MON
# 27 "data/maps/StarridgeCity/scripts.pory"
	case 0, StarridgeCity_EventScript_Rival_10
# 30 "data/maps/StarridgeCity/scripts.pory"
	case 1, StarridgeCity_EventScript_Rival_11
# 33 "data/maps/StarridgeCity/scripts.pory"
	case 2, StarridgeCity_EventScript_Rival_12
StarridgeCity_EventScript_Rival_8:
# 38 "data/maps/StarridgeCity/scripts.pory"
	setflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
	goto StarridgeCity_EventScript_Rival_1

StarridgeCity_EventScript_Rival_10:
# 28 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_TURTWIG, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_8

StarridgeCity_EventScript_Rival_11:
# 31 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_FENNEKIN, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_8

StarridgeCity_EventScript_Rival_12:
# 34 "data/maps/StarridgeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_HOLLY_STARRIDGE_QUAXLY, StarridgeCity_Text_HollyDefeated
	goto StarridgeCity_EventScript_Rival_8


StarridgeCity_EventScript_AmphyKidnapped::
# 98 "data/maps/StarridgeCity/scripts.pory"
	lockall
	return


StarridgeCity_EventScript_Rival_Text_0:
# 15 "data/maps/StarridgeCity/scripts.pory"
	.string "{RIVAL}$"

StarridgeCity_Text_Rival1F::
# 57 "data/maps/StarridgeCity/scripts.pory"
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
	.string "Hey, I know! Let's have a battle!$"

StarridgeCity_Text_RivalF_Accept::
# 68 "data/maps/StarridgeCity/scripts.pory"
	.string "Great! Let's get started!\p"
	.string "{PLAYER}! I'm gonna give you a run for\n"
	.string "your money!$"

StarridgeCity_Text_RivalF_Refuse::
# 73 "data/maps/StarridgeCity/scripts.pory"
	.string "Oh, okay... I guess I'll see you later,\n"
	.string "then!$"

StarridgeCity_Text_HollyDefeated::
# 77 "data/maps/StarridgeCity/scripts.pory"
	.string "Ugh\n"
	.string "!I'm never gonna understand how to be\l"
	.string "good Trainer!$"

StarridgeCity_Text_Rival1M::
# 81 "data/maps/StarridgeCity/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "I see you've been training hard! I've\n"
	.string "been doing the same!\p"
	.string "But... I'm still not sure if I'm training\n"
	.string "my Pokémon the right way.\p"
	.string "I'm getting better every day, though!\p"
	.string "Show me what you've learned... in a\n"
	.string "battle!$"

StarridgeCity_Text_RivalM_Accept::
# 89 "data/maps/StarridgeCity/scripts.pory"
	.string "All right!\n"
	.string "Let's do this, {PLAYER}!$"

StarridgeCity_Text_RivalM_Refuse::
# 93 "data/maps/StarridgeCity/scripts.pory"
	.string "...That's okay. I'll see you around, then.$"

StarridgeCity_Text_AmphyKidnapped_Jasmine1::
# 102 "data/maps/StarridgeCity/scripts.pory"
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
