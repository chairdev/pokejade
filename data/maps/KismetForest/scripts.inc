KismetForest_MapScripts::
	.byte 0


KismetForest_Trigger_Jasmine1::
# 5 "data/maps/KismetForest/scripts.pory"
	lockall
	return


KismetForest_Trigger_Jasmine2::
# 9 "data/maps/KismetForest/scripts.pory"
	lockall
	return


KismetForest_EventScript_Boy::
# 16 "data/maps/KismetForest/scripts.pory"
	lock
# 17 "data/maps/KismetForest/scripts.pory"
	faceplayer
# 18 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Boy
# 19 "data/maps/KismetForest/scripts.pory"
	release
	return


KismetForest_EventScript_BugCatcherRaymond::
# 32 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_RAYMOND, KismetForest_Text_RaymondIntro, KismetForest_Text_RaymondDefeat
# 33 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_RaymondPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherGregory::
# 49 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_GREGORY, KismetForest_Text_GregoryIntro, KismetForest_Text_GregoryDefeat
# 50 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_LassDorothy::
# 66 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_DOROTHY, KismetForest_Text_DorothyIntro, KismetForest_Text_DorothyDefeat
# 67 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_DorothyPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_PsychicJoshua::
# 83 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, KismetForest_Text_JoshuaIntro, KismetForest_Text_JoshuaDefeat
# 84 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_HexManiacLisa::
# 100 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_LISA, KismetForest_Text_LisaIntro, KismetForest_Text_LisaDefeat
# 101 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherJerry::
# 117 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, KismetForest_Text_JerryIntro, KismetForest_Text_JerryDefeat
# 118 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_Text_Boy::
# 22 "data/maps/KismetForest/scripts.pory"
	.string "This place is crawling with trainers\n"
	.string "doing double battles.\p"
	.string "On top of that, there are strong wild\n"
	.string "Pokémon here too.\p"
	.string "If you're not careful, you could get\n"
	.string "overwhelmed.\p"
	.string "Make sure to buy lots of items from the\n"
	.string "Poké Mart before you go any further.$"

KismetForest_Text_RaymondIntro::
# 36 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_RaymondDefeat::
# 40 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_RaymondPostBattle::
# 44 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryIntro::
# 53 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryDefeat::
# 57 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryPostBattle::
# 61 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyIntro::
# 70 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyDefeat::
# 74 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyPostBattle::
# 78 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JoshuaIntro::
# 87 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JoshuaDefeat::
# 91 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JoshuaPostBattle::
# 95 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_LisaIntro::
# 104 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_LisaDefeat::
# 108 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_LisaPostBattle::
# 112 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JerryIntro::
# 121 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JerryDefeat::
# 125 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JerryPostBattle::
# 129 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"
