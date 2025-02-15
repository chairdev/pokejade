DolomiteCity_MapScripts::
	.byte 0


DolomiteCity_EventScript_GymGuide::
# 4 "data/maps/DolomiteCity/scripts.pory"
	lock
# 5 "data/maps/DolomiteCity/scripts.pory"
	faceplayer
# 7 "data/maps/DolomiteCity/scripts.pory"
	goto_if_unset FLAG_HIDE_ROUTE_301_MOM_OUTSIDE, DolomiteCity_EventScript_GymGuide_2
# 13 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_EventScript_GymGuide_Text_1
DolomiteCity_EventScript_GymGuide_1:
# 17 "data/maps/DolomiteCity/scripts.pory"
	release
	return

DolomiteCity_EventScript_GymGuide_2:
# 9 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_EventScript_GymGuide_Text_0
	goto DolomiteCity_EventScript_GymGuide_1


DolomiteCity_EventScript_GymGuide_Text_0:
# 9 "data/maps/DolomiteCity/scripts.pory"
	.string "Sorry, the gym is closed right now.$"

DolomiteCity_EventScript_GymGuide_Text_1:
# 13 "data/maps/DolomiteCity/scripts.pory"
	.string "Welcome to the Dolomite City Gym!\n"
	.string "The Gym Leader isn't in right now.\p"
	.string "He's out teaching at the Trainer's\n"
	.string "School.$"
