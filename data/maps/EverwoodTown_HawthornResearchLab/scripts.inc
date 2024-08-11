EverwoodTown_HawthornResearchLab_MapScripts::
	.byte 0


EverwoodTown_HawthornResearchLab_EventScript_Sanzashi::
# 4 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	lockall
# 5 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	faceplayer
# 7 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	switch VAR_SANZASHI_LAB_STATE
# 9 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 0, EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_3
# 24 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	case 1, EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_4
EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_1:
# 28 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	closemessage
# 29 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	releaseall
	return

EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_3:
# 10 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetSanzashiText1
# 12 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	checkplayergender
# 13 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_6
# 19 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetSanzashiText2B
EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_5:
# 22 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_SANZASHI_LAB_STATE, 1
# 23 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 2
	goto EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_1

EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_4:
# 25 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox GoLookForRivalText1
	goto EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_1

EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_6:
# 15 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	msgbox MeetSanzashiText2A
	goto EverwoodTown_HawthornResearchLab_EventScript_Sanzashi_5


MeetSanzashiText1::
# 32 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Ah, there you are {PLAYER}{KUN}?\l"
	.string "I've been waiting for you!\p"
	.string "Where's {RIVAL}?\p"
	.string "... What do you mean you don't know who\n"
	.string "that is?\p"
	.string "But {RIVAL} was supposed to bring\n"
	.string "you the bag with the Poké Balls!$"

MeetSanzashiText2A::
# 41 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "She said she couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}{KUN}, I'm sorry to ask this of you,\n"
	.string "but could you go find her for me?\p"
	.string "I'm sure she's just around the corner.$"

MeetSanzashiText2B::
# 48 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "He said he couldn't sit still and wait\n"
	.string "for you to arrive and took off.\p"
	.string "{PLAYER}{KUN}I'm sorry to ask this of you,\n"
	.string "but could you go find him for me?\p"
	.string "I'm sure he's just around the corner.$"

GoLookForRivalText1::
# 55 "data/maps/EverwoodTown_HawthornResearchLab/scripts.pory"
	.string "Please, {PLAYER}{KUN}, go look for\n"
	.string "{RIVAL}!\p"
	.string "The bag with the Poké Balls is very\n"
	.string "important!$"
