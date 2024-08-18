BaycrestCity_Mart_MapScripts::
	.byte 0


BaycrestCity_Mart_EventScript_Clerk::
# 4 "data/maps/BaycrestCity_Mart/scripts.pory"
	lock
# 5 "data/maps/BaycrestCity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/BaycrestCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/BaycrestCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/BaycrestCity_Mart/scripts.pory"
	pokemart 0
# 9 "data/maps/BaycrestCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/BaycrestCity_Mart/scripts.pory"
	release
	return


BaycrestCity_Mart_EventScript_Woman::
# 14 "data/maps/BaycrestCity_Mart/scripts.pory"
	lock
# 15 "data/maps/BaycrestCity_Mart/scripts.pory"
	faceplayer
# 16 "data/maps/BaycrestCity_Mart/scripts.pory"
	msgbox BaycrestCity_Mart_Text_Woman
# 17 "data/maps/BaycrestCity_Mart/scripts.pory"
	release
	return


BaycrestCity_Mart_Text_Woman::
# 20 "data/maps/BaycrestCity_Mart/scripts.pory"
	.string "Recently the Poké Marts in Toshou have\n"
	.string "started changing their stock depending\l"
	.string "on how strong you are as a Trainer.\p"
	.string "Now I finally don't have to go to\n"
	.string "another city just for some Ultra Balls!$"
