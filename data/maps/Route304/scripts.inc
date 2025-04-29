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


Route304_EventScript_CamperPatrick::
# 23 "data/maps/Route304/scripts.pory"
	trainerbattle_single TRAINER_PATRICK, Route304_Text_PatrickIntro, Route304_Text_PatrickDefeat
# 24 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_PatrickPostBattle, MSGBOX_AUTOCLOSE
	return


Route304_EventScript_LadyDonna::
# 52 "data/maps/Route304/scripts.pory"
	trainerbattle_single TRAINER_DONNA, Route304_Text_LadyDonnaIntro, Route304_Text_LadyDonnaDefeated
# 53 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_LadyDonnaPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route304/scripts.pory"
	waitmessage
	end


Route304_Text_PatrickIntro::
# 27 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_PatrickDefeat::
# 31 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_PatrickPostBattle::
# 35 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LassCarolIntro::
# 39 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LassCarolDefeated::
# 43 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LassCarolPostBattle::
# 47 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LadyDonnaIntro::
# 58 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LadyDonnaDefeated::
# 62 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LadyDonnaPostBattle::
# 66 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"
