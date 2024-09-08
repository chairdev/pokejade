Route305_MapScripts::
	.byte 0


Route305_EventScript_MotivatingTrainer::
# 4 "data/maps/Route305/scripts.pory"
	lock
# 5 "data/maps/Route305/scripts.pory"
	faceplayer
# 6 "data/maps/Route305/scripts.pory"
	msgbox Route305_Text_MotivatingTrainer
# 7 "data/maps/Route305/scripts.pory"
	release
	return


Route305_Text_MotivatingTrainer::
# 10 "data/maps/Route305/scripts.pory"
	.string "Everyone always looks so tired when\n"
	.string "they get here.\p"
	.string "But they always perk up when they\n"
	.string "realize that Starridge City is just up\l"
	.string "ahead.$"
