StemfordTown_MapScripts::
	.byte 0


StemfordTown_EventScript_Man::
# 4 "data/maps/StemfordTown/scripts.pory"
	lock
# 5 "data/maps/StemfordTown/scripts.pory"
	faceplayer
# 6 "data/maps/StemfordTown/scripts.pory"
	msgbox StemfordTown_EventScript_Man_Text_0
# 8 "data/maps/StemfordTown/scripts.pory"
	release
	return


StemfordTown_EventScript_Man_Text_0:
# 6 "data/maps/StemfordTown/scripts.pory"
	.string "During battle you can press the L\n"
	.string "BUTTON to see all of a move's details!\p"
	.string "You should always check the details of\n"
	.string "a move before using it!$"
