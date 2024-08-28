KismetForest_MapScripts::
	.byte 0


KismetForest_EventScript_Boy::
# 6 "data/maps/KismetForest/scripts.pory"
	lock
# 7 "data/maps/KismetForest/scripts.pory"
	faceplayer
# 8 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Boy
# 9 "data/maps/KismetForest/scripts.pory"
	release
	return


KismetForest_EventScript_BugCatcherRaymond::
# 22 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_RAYMOND, KismetForest_Text_RaymondIntro, KismetForest_Text_RaymondDefeat
# 23 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_RaymondPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherGregory::
# 39 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_GREGORY, KismetForest_Text_GregoryIntro, KismetForest_Text_GregoryDefeat
# 40 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_LassDorothy::
# 56 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_DOROTHY, KismetForest_Text_DorothyIntro, KismetForest_Text_DorothyDefeat
# 57 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_DorothyPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_PsychicJoshua::
# 73 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, KismetForest_Text_JoshuaIntro, KismetForest_Text_JoshuaDefeat
# 74 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_HexManiacLisa::
# 90 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_LISA, KismetForest_Text_LisaIntro, KismetForest_Text_LisaDefeat
# 91 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherJerry::
# 107 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, KismetForest_Text_JerryIntro, KismetForest_Text_JerryDefeat
# 108 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_Text_Boy::
# 12 "data/maps/KismetForest/scripts.pory"
	.string "This place is crawling with trainers\n"
	.string "doing double battles.\p"
	.string "On top of that, there are strong wild\n"
	.string "Pokémon here too.\p"
	.string "If you're not careful, you could get\n"
	.string "overwhelmed.\p"
	.string "Make sure to buy lots of items from the\n"
	.string "Poké Mart before you go any further.$"

KismetForest_Text_RaymondIntro::
# 26 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_RaymondDefeat::
# 30 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_RaymondPostBattle::
# 34 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryIntro::
# 43 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryDefeat::
# 47 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryPostBattle::
# 51 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyIntro::
# 60 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyDefeat::
# 64 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyPostBattle::
# 68 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JoshuaIntro::
# 77 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JoshuaDefeat::
# 81 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JoshuaPostBattle::
# 85 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_LisaIntro::
# 94 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_LisaDefeat::
# 98 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_LisaPostBattle::
# 102 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JerryIntro::
# 111 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JerryDefeat::
# 115 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JerryPostBattle::
# 119 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"
