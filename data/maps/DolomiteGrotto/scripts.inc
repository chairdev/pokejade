DolomiteGrotto_MapScripts::
	.byte 0


DolomiteGrotto_Trigger_EternityEncounter::
# 7 "data/maps/DolomiteGrotto/scripts.pory"
	lockall
# 9 "data/maps/DolomiteGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DolomiteGrotto_Movement_EternityEncounter_PlayerApproach
# 10 "data/maps/DolomiteGrotto/scripts.pory"
	waitmovement 0
# 12 "data/maps/DolomiteGrotto/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 14 "data/maps/DolomiteGrotto/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 15 "data/maps/DolomiteGrotto/scripts.pory"
	waitmovement 0
# 17 "data/maps/DolomiteGrotto/scripts.pory"
	msgbox DolomiteGrotto_Text_EternityEncounter_Grunt_1
# 19 "data/maps/DolomiteGrotto/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
# 20 "data/maps/DolomiteGrotto/scripts.pory"
	waitmovement 0
# 21 "data/maps/DolomiteGrotto/scripts.pory"
	msgbox DolomiteGrotto_Text_EternityEncounter_Guru_1
# 23 "data/maps/DolomiteGrotto/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 24 "data/maps/DolomiteGrotto/scripts.pory"
	waitmovement 0
# 25 "data/maps/DolomiteGrotto/scripts.pory"
	msgbox DolomiteGrotto_Text_EternityEncounter_Grunt_2
# 26 "data/maps/DolomiteGrotto/scripts.pory"
	closemessage
# 28 "data/maps/DolomiteGrotto/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterDown
# 29 "data/maps/DolomiteGrotto/scripts.pory"
	waitmovement 0
# 30 "data/maps/DolomiteGrotto/scripts.pory"
	playse SE_PIN
# 31 "data/maps/DolomiteGrotto/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 32 "data/maps/DolomiteGrotto/scripts.pory"
	waitse
# 33 "data/maps/DolomiteGrotto/scripts.pory"
	waitmovement 0
# 34 "data/maps/DolomiteGrotto/scripts.pory"
	delay 16
# 36 "data/maps/DolomiteGrotto/scripts.pory"
	msgbox DolomiteGrotto_Text_EternityEncounter_Grunt_3
# 37 "data/maps/DolomiteGrotto/scripts.pory"
	closemessage
# 39 "data/maps/DolomiteGrotto/scripts.pory"
	applymovement 5, DolomiteGrotto_Movement_EternityEncounter_GruntApproach
# 40 "data/maps/DolomiteGrotto/scripts.pory"
	waitmovement 0
# 42 "data/maps/DolomiteGrotto/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_DOLOMITE_GROTTO, DolomiteGrotto_Text_GruntDefeated
# 44 "data/maps/DolomiteGrotto/scripts.pory"
	msgbox DolomiteGrotto_Text_EternityEncounter_Grunt_4
# 45 "data/maps/DolomiteGrotto/scripts.pory"
	closemessage
# 47 "data/maps/DolomiteGrotto/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/DolomiteGrotto/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/DolomiteGrotto/scripts.pory"
	removeobject 5
# 50 "data/maps/DolomiteGrotto/scripts.pory"
	setobjectxy 4, 24, 8
# 51 "data/maps/DolomiteGrotto/scripts.pory"
	turnobject 4, DIR_SOUTH
# 52 "data/maps/DolomiteGrotto/scripts.pory"
	playse SE_EXIT
# 53 "data/maps/DolomiteGrotto/scripts.pory"
	waitse
# 54 "data/maps/DolomiteGrotto/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 56 "data/maps/DolomiteGrotto/scripts.pory"
	msgbox DolomiteGrotto_Text_EternityEncounter_Guru_2
# 58 "data/maps/DolomiteGrotto/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, DolomiteGrotto_Trigger_EternityEncounter_Text_0, DolomiteGrotto_Trigger_EternityEncounter_Text_1
# 61 "data/maps/DolomiteGrotto/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DolomiteGrotto_Trigger_EternityEncounter_2
DolomiteGrotto_Trigger_EternityEncounter_1:
# 65 "data/maps/DolomiteGrotto/scripts.pory"
	msgbox DolomiteGrotto_Text_EternityEncounter_Guru_4
# 67 "data/maps/DolomiteGrotto/scripts.pory"
	switch VAR_STARTER_MON
# 68 "data/maps/DolomiteGrotto/scripts.pory"
	case 0, DolomiteGrotto_Trigger_EternityEncounter_6
# 71 "data/maps/DolomiteGrotto/scripts.pory"
	case 1, DolomiteGrotto_Trigger_EternityEncounter_7
# 74 "data/maps/DolomiteGrotto/scripts.pory"
	case 2, DolomiteGrotto_Trigger_EternityEncounter_8
DolomiteGrotto_Trigger_EternityEncounter_4:
# 79 "data/maps/DolomiteGrotto/scripts.pory"
	msgbox DolomiteGrotto_Text_EternityEncounter_Guru_5
# 80 "data/maps/DolomiteGrotto/scripts.pory"
	closemessage
# 82 "data/maps/DolomiteGrotto/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/DolomiteGrotto/scripts.pory"
	removeobject 4
# 84 "data/maps/DolomiteGrotto/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/DolomiteGrotto/scripts.pory"
	waitse
# 86 "data/maps/DolomiteGrotto/scripts.pory"
	setflag FLAG_HIDE_DOLOMITE_GROTTO_GRUNT_AND_GURU
# 87 "data/maps/DolomiteGrotto/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 89 "data/maps/DolomiteGrotto/scripts.pory"
	setflag FLAG_HIDE_DOLOMITE_CITY_RIVAL
# 90 "data/maps/DolomiteGrotto/scripts.pory"
	setflag FLAG_HIDE_ROUTE_302_RIVAL
# 91 "data/maps/DolomiteGrotto/scripts.pory"
	setvar VAR_DOLOMITE_CITY_STATE, 4
# 92 "data/maps/DolomiteGrotto/scripts.pory"
	releaseall
	return

DolomiteGrotto_Trigger_EternityEncounter_2:
# 63 "data/maps/DolomiteGrotto/scripts.pory"
	msgbox DolomiteGrotto_Text_EternityEncounter_Guru_3
	goto DolomiteGrotto_Trigger_EternityEncounter_1

DolomiteGrotto_Trigger_EternityEncounter_6:
# 69 "data/maps/DolomiteGrotto/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
	goto DolomiteGrotto_Trigger_EternityEncounter_4

DolomiteGrotto_Trigger_EternityEncounter_7:
# 72 "data/maps/DolomiteGrotto/scripts.pory"
	giveitem ITEM_CHARCOAL
	goto DolomiteGrotto_Trigger_EternityEncounter_4

DolomiteGrotto_Trigger_EternityEncounter_8:
# 75 "data/maps/DolomiteGrotto/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
	goto DolomiteGrotto_Trigger_EternityEncounter_4


# 95 "data/maps/DolomiteGrotto/scripts.pory"
DolomiteGrotto_Movement_EternityEncounter_PlayerApproach:
# 96 "data/maps/DolomiteGrotto/scripts.pory"
	walk_fast_right
# 96 "data/maps/DolomiteGrotto/scripts.pory"
	walk_fast_right
# 96 "data/maps/DolomiteGrotto/scripts.pory"
	walk_fast_right
# 96 "data/maps/DolomiteGrotto/scripts.pory"
	walk_fast_right
# 96 "data/maps/DolomiteGrotto/scripts.pory"
	walk_fast_right
# 96 "data/maps/DolomiteGrotto/scripts.pory"
	walk_fast_right
# 96 "data/maps/DolomiteGrotto/scripts.pory"
	walk_fast_right
# 96 "data/maps/DolomiteGrotto/scripts.pory"
	walk_fast_right
# 97 "data/maps/DolomiteGrotto/scripts.pory"
	walk_in_place_up
	step_end

# 100 "data/maps/DolomiteGrotto/scripts.pory"
DolomiteGrotto_Movement_EternityEncounter_GruntApproach:
# 101 "data/maps/DolomiteGrotto/scripts.pory"
	walk_down
# 101 "data/maps/DolomiteGrotto/scripts.pory"
	walk_down
# 102 "data/maps/DolomiteGrotto/scripts.pory"
	delay_16
	step_end

DolomiteGrotto_Trigger_EternityEncounter_Text_0:
# 59 "data/maps/DolomiteGrotto/scripts.pory"
	.string "What was she after?$"

DolomiteGrotto_Trigger_EternityEncounter_Text_1:
# 59 "data/maps/DolomiteGrotto/scripts.pory"
	.string "Who are they?$"

DolomiteGrotto_Text_EternityEncounter_Grunt_1::
# 105 "data/maps/DolomiteGrotto/scripts.pory"
	.string "Listen, old man, let's not make this\n"
	.string "difficult.\p"
	.string "Just hand over whatever Mega Stones\n"
	.string "you've got, and maybe I won't have to\l"
	.string "get rough!$"

DolomiteGrotto_Text_EternityEncounter_Guru_1::
# 110 "data/maps/DolomiteGrotto/scripts.pory"
	.string "Stealing what you do not understand... a\n"
	.string "predictable path for the misguided.\p"
	.string "Mega Evolution is not some tool to be\n"
	.string "snatched up by greedy hands.\p"
	.string "It is a bond--one that cannot be\n"
	.string "stolen, only earned.$"

DolomiteGrotto_Text_EternityEncounter_Grunt_2::
# 116 "data/maps/DolomiteGrotto/scripts.pory"
	.string "Yeah, yeah, save the speech!\n"
	.string "We don't care about 'bonds'--We only\l"
	.string "care about power!\p"
	.string "And Team Eternity will be the ones\n"
	.string "holding all of it soon enough!$"

DolomiteGrotto_Text_EternityEncounter_Grunt_3::
# 121 "data/maps/DolomiteGrotto/scripts.pory"
	.string "Huh? Who're you supposed to be?\p"
	.string "Another trainer poking their nose where\n"
	.string "it doesn't belong?\p"
	.string "Tch. Doesn't matter.\p"
	.string "If you're here to get in my way, then I'll\n"
	.string "just have to show you what Team\l"
	.string "Eternity is all about!$"

DolomiteGrotto_Text_EternityEncounter_Grunt_4::
# 128 "data/maps/DolomiteGrotto/scripts.pory"
	.string "This isn't over.\n"
	.string "Team Eternity always gets what we\l"
	.string "want!$"

DolomiteGrotto_Text_EternityEncounter_Guru_2::
# 132 "data/maps/DolomiteGrotto/scripts.pory"
	.string "Thank you for your help, young one.\p"
	.string "That woman... Team Eternity, was it?\n"
	.string "They are a dangerous group.$"

DolomiteGrotto_Text_EternityEncounter_Guru_3::
# 137 "data/maps/DolomiteGrotto/scripts.pory"
	.string "They came for my research on Mega\n"
	.string "Evolution. But not just the\l"
	.string "research--they were after something\l"
	.string "far more dangerous...\p"
	.string "This time they were after Mega Stones,\n"
	.string "specifically. Such stones are not meant\l"
	.string "to be misused for the selfish desires\l"
	.string "of people like them.$"

DolomiteGrotto_Text_EternityEncounter_Guru_4::
# 142 "data/maps/DolomiteGrotto/scripts.pory"
	.string "Team Eternity is a shadowy group with a\n"
	.string "dangerous agenda. They seek to exploit\l"
	.string "the powers of Pokémon for control.\p"
	.string "Their leader believes that power should\n"
	.string "be in the hands of the few, not the\l"
	.string "many.\p"
	.string "They are a growing threat, and I fear\n"
	.string "they will stop at nothing to get what\l"
	.string "they want.\p"
	.string "You were able to defeat this grunt...\n"
	.string "but know that you'll surely run into\l"
	.string "more of them.\p"
	.string "I suggest you remain vigilant.\p"
	.string "Here... take this. It will help you on\n"
	.string "your journey. I can see the potential in\l"
	.string "you.$"

DolomiteGrotto_Text_EternityEncounter_Guru_5::
# 151 "data/maps/DolomiteGrotto/scripts.pory"
	.string "You should give that to your starter\n"
	.string "Pokémon to hold. It will help them in\l"
	.string "battle.\p"
	.string "...Oh, how rude of me. I never asked your\n"
	.string "name.\p"
	.string "Ah, {PLAYER}... a name that will be\n"
	.string "remembered, I'm sure.\p"
	.string "I must return to my research.\n"
	.string "But should you ever wish to learn more\l"
	.string "about Mega Evolution, you may find me\l"
	.string "again.\p"
	.string "I'm truly grateful for your bravery\n"
	.string "today and hope to see you again soon.$"

DolomiteGrotto_Text_GruntDefeated::
# 159 "data/maps/DolomiteGrotto/scripts.pory"
	.string "Ugh, you're tougher than I thought...\n"
	.string "but don't get too cocky, alright?$"
