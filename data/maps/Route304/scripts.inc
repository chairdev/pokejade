Route304_MapScripts::
	.byte 0


Route304_EventScript_UpsilonGrunt::
# 4 "data/maps/Route304/scripts.pory"
	lock
# 5 "data/maps/Route304/scripts.pory"
	faceplayer
# 7 "data/maps/Route304/scripts.pory"
	goto_if_unset FLAG_HIDE_STARRIDGE_RUINS_B1F_UPSILON_GRUNTS, Route304_EventScript_UpsilonGrunt_1
	return

Route304_EventScript_UpsilonGrunt_1:
	return


Route304_EventScript_LassCarol::
# 16 "data/maps/Route304/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route304_Text_LassCarolIntro, Route304_Text_LassCarolDefeated
# 17 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_LassCarolPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Route304/scripts.pory"
	waitmessage
	end


Route304_EventScript_LadyDonna::
# 35 "data/maps/Route304/scripts.pory"
	trainerbattle_single TRAINER_DONNA, Route304_Text_LadyDonnaIntro, Route304_Text_LadyDonnaDefeated
# 36 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_LadyDonnaPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route304/scripts.pory"
	waitmessage
	end


Route304_EventScript_TuberSandra::
# 54 "data/maps/Route304/scripts.pory"
	trainerbattle_single TRAINER_SANDRA, Route304_Text_TuberSandraIntro, Route304_Text_TuberSandraDefeated
# 55 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_TuberSandraPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route304/scripts.pory"
	waitmessage
	end


Route304_EventScript_FishermanBuck::
# 73 "data/maps/Route304/scripts.pory"
	trainerbattle_single TRAINER_BUCK, Route304_Text_FishermanBuckIntro, Route304_Text_FishermanBuckDefeated
# 74 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_FishermanBuckPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route304/scripts.pory"
	waitmessage
	end


Route304_Text_LassCarolIntro::
# 22 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LassCarolDefeated::
# 26 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LassCarolPostBattle::
# 30 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LadyDonnaIntro::
# 41 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LadyDonnaDefeated::
# 45 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LadyDonnaPostBattle::
# 49 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_TuberSandraIntro::
# 60 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_TuberSandraDefeated::
# 64 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_TuberSandraPostBattle::
# 68 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_FishermanBuckIntro::
# 79 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_FishermanBuckDefeated::
# 83 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_FishermanBuckPostBattle::
# 87 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"
