ZirconTown_PokeMart_MapScripts::
	.byte 0


ZirconTown_PokeMart_EventScript_Clerk::
# 4 "data/maps/ZirconTown_PokeMart/scripts.pory"
	lock
# 5 "data/maps/ZirconTown_PokeMart/scripts.pory"
	faceplayer
# 6 "data/maps/ZirconTown_PokeMart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/ZirconTown_PokeMart/scripts.pory"
	waitmessage
# 8 "data/maps/ZirconTown_PokeMart/scripts.pory"
	pokemart 0
# 9 "data/maps/ZirconTown_PokeMart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/ZirconTown_PokeMart/scripts.pory"
	release
	return

