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


Route306_EventScript_BlackBeltHarold::
# 39 "data/maps/Route306/scripts.pory"
	trainerbattle_single TRAINER_HAROLD, Route306_Text_HaroldIntro, Route306_Text_HaroldDefeat
# 40 "data/maps/Route306/scripts.pory"
	msgbox Route306_Text_HaroldPostBattle, MSGBOX_AUTOCLOSE
	return


Route306_EventScript_BattleGirlNancy::
# 56 "data/maps/Route306/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route306_Text_NancyIntro, Route306_Text_NancyDefeat
# 57 "data/maps/Route306/scripts.pory"
	msgbox Route306_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
	return


Route306_EventScript_HikerPeter::
# 73 "data/maps/Route306/scripts.pory"
	trainerbattle_single TRAINER_PETER, Route306_Text_PeterIntro, Route306_Text_PeterDefeat
# 74 "data/maps/Route306/scripts.pory"
	msgbox Route306_Text_PeterPostBattle, MSGBOX_AUTOCLOSE
	return


Route306_EventScript_RichboyDouglas::
# 90 "data/maps/Route306/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route306_Text_DouglasIntro, Route306_Text_DouglasDefeat
# 91 "data/maps/Route306/scripts.pory"
	msgbox Route306_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
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

Route306_Text_HaroldIntro::
# 43 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_HaroldDefeat::
# 47 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_HaroldPostBattle::
# 51 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_NancyIntro::
# 60 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_NancyDefeat::
# 64 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_NancyPostBattle::
# 68 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_PeterIntro::
# 77 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_PeterDefeat::
# 81 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_PeterPostBattle::
# 85 "data/maps/Route306/scripts.pory"
	.string "PLACEHOLDER$"

Route306_Text_DouglasIntro::
# 94 "data/maps/Route306/scripts.pory"
	.string "I buy my Pokémon from the best\n"
	.string "breeders in the world!$"

Route306_Text_DouglasDefeat::
# 98 "data/maps/Route306/scripts.pory"
	.string "They're the best for everything except\n"
	.string "battling, apparently.$"

Route306_Text_DouglasPostBattle::
# 102 "data/maps/Route306/scripts.pory"
	.string "I'm going to have to have a word with my\n"
	.string "breeder.$"
