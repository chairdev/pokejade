Route306_MapScripts::
	.byte 0


Route306_EventScript_HikerDennis::
# 5 "data/maps/Route306/scripts.pory"
	trainerbattle_single TRAINER_DENNIS_1, Route306_Text_DennisIntro, Route306_Text_DennisDefeat
# 6 "data/maps/Route306/scripts.pory"
	msgbox Route306_Text_DennisPostBattle, MSGBOX_AUTOCLOSE
	return


Route306_EventScript_CamperPatrick::
# 22 "data/maps/Route306/scripts.pory"
	trainerbattle_single TRAINER_PATRICK, Route306_Text_PatrickIntro, Route306_Text_PatrickDefeat
# 23 "data/maps/Route306/scripts.pory"
	msgbox Route306_Text_PatrickPostBattle, MSGBOX_AUTOCLOSE
	return


Route306_Text_DennisIntro::
# 9 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_DennisDefeat::
# 13 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_DennisPostBattle::
# 17 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_PatrickIntro::
# 26 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_PatrickDefeat::
# 30 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_PatrickPostBattle::
# 34 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"
