FortuneCave_MapScripts::
# 3 "data/maps/FortuneCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FortuneCave_OnLoad
	.byte 0


FortuneCave_OnLoad::
# 7 "data/maps/FortuneCave/scripts.pory"
	gettime
# 8 "data/maps/FortuneCave/scripts.pory"
	compare VAR_0x8003, DAY_SATURDAY
	goto_if_ne FortuneCave_OnLoad_1
	return

FortuneCave_OnLoad_1:
# 10 "data/maps/FortuneCave/scripts.pory"
	removeobject 9
# 11 "data/maps/FortuneCave/scripts.pory"
	setflag FLAG_DAILY_DEFEATED_ONIX
	return


FortuneCave_EventScript_Static_Onix::
# 16 "data/maps/FortuneCave/scripts.pory"
	lock
# 17 "data/maps/FortuneCave/scripts.pory"
	faceplayer
# 19 "data/maps/FortuneCave/scripts.pory"
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
# 20 "data/maps/FortuneCave/scripts.pory"
	msgbox FortuneCave_EventScript_Static_Onix_Text_0
# 21 "data/maps/FortuneCave/scripts.pory"
	waitmoncry
# 23 "data/maps/FortuneCave/scripts.pory"
	setwildbattle SPECIES_ONIX, 15
# 24 "data/maps/FortuneCave/scripts.pory"
	dowildbattle
# 26 "data/maps/FortuneCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/FortuneCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/FortuneCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FortuneCave_EventScript_Static_Onix_2
# 29 "data/maps/FortuneCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FortuneCave_EventScript_Static_Onix_2
FortuneCave_EventScript_Static_Onix_1:
# 34 "data/maps/FortuneCave/scripts.pory"
	removeobject 9
# 35 "data/maps/FortuneCave/scripts.pory"
	setflag FLAG_DAILY_DEFEATED_ONIX
# 37 "data/maps/FortuneCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 39 "data/maps/FortuneCave/scripts.pory"
	release
	return

FortuneCave_EventScript_Static_Onix_2:
# 31 "data/maps/FortuneCave/scripts.pory"
	msgbox FortuneCave_EventScript_Static_Onix_Text_1
	goto FortuneCave_EventScript_Static_Onix_1


FortuneCave_EventScript_StrandedCamper::
# 43 "data/maps/FortuneCave/scripts.pory"
	lock
# 44 "data/maps/FortuneCave/scripts.pory"
	faceplayer
# 45 "data/maps/FortuneCave/scripts.pory"
	msgbox FortuneCave_Text_StrandedCamper
# 46 "data/maps/FortuneCave/scripts.pory"
	release
	return


FortuneCave_EventScript_HikerGary::
# 57 "data/maps/FortuneCave/scripts.pory"
	trainerbattle_single TRAINER_GARY, FortuneCave_Text_HikerGaryIntro, FortuneCave_Text_HikerGaryDefeat
# 58 "data/maps/FortuneCave/scripts.pory"
	msgbox FortuneCave_Text_HikerGaryPostBattle, MSGBOX_AUTOCLOSE
	return


FortuneCave_EventScript_BlackBeltItoshi::
# 74 "data/maps/FortuneCave/scripts.pory"
	trainerbattle_single TRAINER_ITOSHI, FortuneCave_Text_BlackBeltItoshiIntro, FortuneCave_Text_BlackBeltItoshiDefeat
# 75 "data/maps/FortuneCave/scripts.pory"
	msgbox FortuneCave_Text_BlackBeltItoshiPostBattle, MSGBOX_AUTOCLOSE
	return


FortuneCave_EventScript_Static_Onix_Text_0:
# 20 "data/maps/FortuneCave/scripts.pory"
	.string "Raoorgh!$"

FortuneCave_EventScript_Static_Onix_Text_1:
# 31 "data/maps/FortuneCave/scripts.pory"
	.string "Onix ran into the depths of the cave.$"

FortuneCave_Text_StrandedCamper::
# 49 "data/maps/FortuneCave/scripts.pory"
	.string "Gah! I'm such an idiot!\p"
	.string "I was so excited to explore this cave\n"
	.string "that I didn't even think about how I'd\l"
	.string "get out!\p"
	.string "I need the HM Rock Smash to get past\n"
	.string "these rocks, but I don't have it!\p"
	.string "This is the worst!$"

FortuneCave_Text_HikerGaryIntro::
# 61 "data/maps/FortuneCave/scripts.pory"
	.string "You! Trainer!\n"
	.string "You scared away the Glimmet I was\l"
	.string "trying to catch!$"

FortuneCave_Text_HikerGaryDefeat::
# 65 "data/maps/FortuneCave/scripts.pory"
	.string "I guess I'll have to find another one...$"

FortuneCave_Text_HikerGaryPostBattle::
# 69 "data/maps/FortuneCave/scripts.pory"
	.string "I'll find one eventually!$"

FortuneCave_Text_BlackBeltItoshiIntro::
# 78 "data/maps/FortuneCave/scripts.pory"
	.string "My Pokémon and I come here to train\n"
	.string "every day!$"

FortuneCave_Text_BlackBeltItoshiDefeat::
# 82 "data/maps/FortuneCave/scripts.pory"
	.string "To lose is to learn!$"

FortuneCave_Text_BlackBeltItoshiPostBattle::
# 86 "data/maps/FortuneCave/scripts.pory"
	.string "I must learn from this loss and become\n"
	.string "stronger!$"
