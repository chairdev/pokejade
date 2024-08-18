BaycrestCity_House1_MapScripts::
	.byte 0


BaycrestCity_House1_EventScript_OldMan::
# 4 "data/maps/BaycrestCity_House1/scripts.pory"
	lock
# 5 "data/maps/BaycrestCity_House1/scripts.pory"
	faceplayer
# 6 "data/maps/BaycrestCity_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_QUICK_CLAW, BaycrestCity_House1_EventScript_OldMan_2
BaycrestCity_House1_EventScript_OldMan_1:
# 11 "data/maps/BaycrestCity_House1/scripts.pory"
	msgbox BaycrestCity_House1_Text_OldMan2
# 12 "data/maps/BaycrestCity_House1/scripts.pory"
	release
	return

BaycrestCity_House1_EventScript_OldMan_2:
# 7 "data/maps/BaycrestCity_House1/scripts.pory"
	msgbox BaycrestCity_House1_Text_OldMan1
# 8 "data/maps/BaycrestCity_House1/scripts.pory"
	giveitem ITEM_QUICK_CLAW, 1
# 9 "data/maps/BaycrestCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
	goto BaycrestCity_House1_EventScript_OldMan_1


BaycrestCity_House1_EventScript_OldWoman::
# 25 "data/maps/BaycrestCity_House1/scripts.pory"
	lock
# 26 "data/maps/BaycrestCity_House1/scripts.pory"
	faceplayer
# 27 "data/maps/BaycrestCity_House1/scripts.pory"
	msgbox BaycrestCity_House1_Text_OldWoman
# 28 "data/maps/BaycrestCity_House1/scripts.pory"
	release
	return


BaycrestCity_House1_Text_OldMan1::
# 15 "data/maps/BaycrestCity_House1/scripts.pory"
	.string "Are you a rookie trainer?\n"
	.string "Don't answer, I can tell by the look in\l"
	.string "your eyes.\p"
	.string "I'll give you this Quick Claw. It's a\n"
	.string "useful held item that occasionally lets\l"
	.string "your Pokémon move first in battle\l"
	.string "regardless of their speed.$"

BaycrestCity_House1_Text_OldMan2::
# 20 "data/maps/BaycrestCity_House1/scripts.pory"
	.string "I'm sure you'll put it to good use.\p"
	.string "$"

BaycrestCity_House1_Text_OldWoman::
# 31 "data/maps/BaycrestCity_House1/scripts.pory"
	.string "Held items are a great way to give your\n"
	.string "Pokémon an edge in battle.\p"
	.string "Some items can increase the power of\n"
	.string "certain types of moves, while others\l"
	.string "can heal your Pokémon during battle.\p"
	.string "You can only give one held item to each\n"
	.string "Pokémon, so choose wisely! Speaking of\l"
	.string "which, my husband has tons of items\l"
	.string "he's collected over the years.\p"
	.string "Maybe you should ask him for some\n"
	.string "advice.$"
