StemfordTown_Mart_MapScripts::
	.byte 0


StemfordTown_Mart_EventScript_Clerk::
# 4 "data/maps/StemfordTown_Mart/scripts.pory"
	lock
# 5 "data/maps/StemfordTown_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/StemfordTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/StemfordTown_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/StemfordTown_Mart/scripts.pory"
	pokemart 0
# 9 "data/maps/StemfordTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/StemfordTown_Mart/scripts.pory"
	release
	return

