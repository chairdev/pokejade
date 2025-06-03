Route304_MapScripts::
	.byte 0


Route304_EventScript_EternityGrunt::
# 9 "data/maps/Route304/scripts.pory"
	lock
# 10 "data/maps/Route304/scripts.pory"
	faceplayer
# 11 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_EternityGrunt
# 12 "data/maps/Route304/scripts.pory"
	release
	end


Route304_EventScript_LassCarol::
# 27 "data/maps/Route304/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route304_Text_LassCarolIntro, Route304_Text_LassCarolDefeated
# 28 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_LassCarolPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route304/scripts.pory"
	waitmessage
	end


Route304_EventScript_CamperPatrick::
# 34 "data/maps/Route304/scripts.pory"
	trainerbattle_single TRAINER_PATRICK, Route304_Text_PatrickIntro, Route304_Text_PatrickDefeat
# 35 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_PatrickPostBattle, MSGBOX_AUTOCLOSE
	return


Route304_EventScript_LadyDonna::
# 63 "data/maps/Route304/scripts.pory"
	trainerbattle_single TRAINER_DONNA, Route304_Text_LadyDonnaIntro, Route304_Text_LadyDonnaDefeated
# 64 "data/maps/Route304/scripts.pory"
	msgbox Route304_Text_LadyDonnaPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route304/scripts.pory"
	waitmessage
	end


Route304_Text_EternityGrunt::
# 16 "data/maps/Route304/scripts.pory"
	.string "Uh... hey, kid!\n"
	.string "You can't go this way!\p"
	.string "There's, uh... construction! Yeah,\n"
	.string "construction!\p"
	.string "Big, scary machines and stuff. Totally\n"
	.string "dangerous.\p"
	.string "So, uh... curry off! I mean, scurry off!$"

Route304_Text_PatrickIntro::
# 38 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_PatrickDefeat::
# 42 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_PatrickPostBattle::
# 46 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LassCarolIntro::
# 50 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LassCarolDefeated::
# 54 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LassCarolPostBattle::
# 58 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LadyDonnaIntro::
# 69 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LadyDonnaDefeated::
# 73 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"

Route304_Text_LadyDonnaPostBattle::
# 77 "data/maps/Route304/scripts.pory"
	.string "PLACEHOLDER$"
