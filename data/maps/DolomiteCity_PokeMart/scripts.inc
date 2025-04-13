DolomiteCity_PokeMart_MapScripts::
	.byte 0


DolomiteCity_PokeMart_EventScript_Clerk::
# 4 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	lock
# 5 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	faceplayer
# 6 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	waitmessage
# 8 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	pokemart 0
# 9 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	release
	return


DolomiteCity_PokeMart_EventScript_SpecialClerk::
# 14 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	lock
# 15 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	faceplayer
# 16 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	waitmessage
# 18 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	pokemart DolomiteCity_Mart
# 19 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	release
	return


	.align 2
# 23 "data/maps/DolomiteCity_PokeMart/scripts.pory"
DolomiteCity_Mart:
# 24 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 25 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 26 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 27 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 28 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	.2byte ITEM_X_SPEED
# 29 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 30 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 31 "data/maps/DolomiteCity_PokeMart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE
