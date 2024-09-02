StarridgeCity_Mart_MapScripts::
	.byte 0


StarridgeCity_Mart_EventScript_Clerk::
# 4 "data/maps/StarridgeCity_Mart/scripts.pory"
	lock
# 5 "data/maps/StarridgeCity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/StarridgeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/StarridgeCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/StarridgeCity_Mart/scripts.pory"
	pokemart 0
# 9 "data/maps/StarridgeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/StarridgeCity_Mart/scripts.pory"
	release
	return

