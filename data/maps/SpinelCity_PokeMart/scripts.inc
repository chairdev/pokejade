SpinelCity_PokeMart_MapScripts::
	.byte 0


SpinelCity_PokeMart_EventScript_Clerk::
# 4 "data/maps/SpinelCity_PokeMart/scripts.pory"
	lock
# 5 "data/maps/SpinelCity_PokeMart/scripts.pory"
	faceplayer
# 6 "data/maps/SpinelCity_PokeMart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/SpinelCity_PokeMart/scripts.pory"
	waitmessage
# 8 "data/maps/SpinelCity_PokeMart/scripts.pory"
	pokemart 0
# 9 "data/maps/SpinelCity_PokeMart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/SpinelCity_PokeMart/scripts.pory"
	release
	return


SpinelCity_PokeMart_EventScript_SpecialClerk::
# 14 "data/maps/SpinelCity_PokeMart/scripts.pory"
	lock
# 15 "data/maps/SpinelCity_PokeMart/scripts.pory"
	faceplayer
# 16 "data/maps/SpinelCity_PokeMart/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/SpinelCity_PokeMart/scripts.pory"
	waitmessage
# 18 "data/maps/SpinelCity_PokeMart/scripts.pory"
	msgbox SpinelCity_PokeMart_EventScript_SpecialClerk_Text_0
# 19 "data/maps/SpinelCity_PokeMart/scripts.pory"
	pokemart SpinelCity_Mart
# 20 "data/maps/SpinelCity_PokeMart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 21 "data/maps/SpinelCity_PokeMart/scripts.pory"
	release
	return


	.align 2
# 24 "data/maps/SpinelCity_PokeMart/scripts.pory"
SpinelCity_Mart:
# 26 "data/maps/SpinelCity_PokeMart/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 30 "data/maps/SpinelCity_PokeMart/scripts.pory"
	.2byte ITEM_TM_RETURN
# 32 "data/maps/SpinelCity_PokeMart/scripts.pory"
	.2byte ITEM_TM_BULLDOZE
	.2byte ITEM_NONE

SpinelCity_PokeMart_EventScript_SpecialClerk_Text_0:
# 18 "data/maps/SpinelCity_PokeMart/scripts.pory"
	.string "wip this the tms are gone$"
