Route502_MapScripts::
	.byte 0


Route502_EventScript_Rui::
# 4 "data/maps/Route502/scripts.pory"
	trainerbattle_double TRAINER_RUI_AND_YUI_1, Route502_Text_RuiIntro, Route502_Text_RuiDefeat, Route502_Text_RuiNotEnoughMons
# 5 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_RuiPostBattle, MSGBOX_AUTOCLOSE
# 6 "data/maps/Route502/scripts.pory"
	waitmessage
	end


Route502_EventScript_Yui::
# 11 "data/maps/Route502/scripts.pory"
	trainerbattle_double TRAINER_RUI_AND_YUI_1, Route502_Text_YuiIntro, Route502_Text_YuiDefeat, Route502_Text_YuiNotEnoughMons
# 12 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_YuiPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/Route502/scripts.pory"
	waitmessage
	end


Route502_Text_RuiIntro::
# 17 "data/maps/Route502/scripts.pory"
	.string "Hey! I'm Rui, and this is my sister Yui!\p"
	.string "We're twins, and we love to battle\n"
	.string "together!\p"
	.string "Let's have a double battle!$"

Route502_Text_RuiDefeat::
# 23 "data/maps/Route502/scripts.pory"
	.string "This is all your fault, Yui!$"

Route502_Text_RuiNotEnoughMons::
# 27 "data/maps/Route502/scripts.pory"
	.string "Oh no! You don't have enough Pokémon to\n"
	.string "battle us!\p"
	.string "Come back when you have at least two!$"

Route502_Text_RuiPostBattle::
# 32 "data/maps/Route502/scripts.pory"
	.string "Not everything is my fault, Yui!$"

Route502_Text_YuiIntro::
# 36 "data/maps/Route502/scripts.pory"
	.string "Um... I'm Yui. I'm Rui's sister.\p"
	.string "I'm not as good at battling as she is,\n"
	.string "but I'll do my best!$"

Route502_Text_YuiDefeat::
# 41 "data/maps/Route502/scripts.pory"
	.string "Rui, you're so bad at battling!$"

Route502_Text_YuiNotEnoughMons::
# 45 "data/maps/Route502/scripts.pory"
	.string "Um... I don't think we can battle right\n"
	.string "now.\p"
	.string "You need at least two Pokémon to\n"
	.string "battle us.$"

Route502_Text_YuiPostBattle::
# 50 "data/maps/Route502/scripts.pory"
	.string "This is why I don't like battling, Rui!$"
