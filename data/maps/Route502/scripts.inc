Route502_MapScripts::
	.byte 0


Route502_EventScript_RodMan::
# 4 "data/maps/Route502/scripts.pory"
	lock
# 5 "data/maps/Route502/scripts.pory"
	faceplayer
# 7 "data/maps/Route502/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SUPER_ROD, Route502_EventScript_RodMan_2
Route502_EventScript_RodMan_1:
# 14 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_RodMan3
# 16 "data/maps/Route502/scripts.pory"
	release
	return

Route502_EventScript_RodMan_2:
# 9 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_RodMan1
# 10 "data/maps/Route502/scripts.pory"
	giveitem ITEM_SUPER_ROD, 1
# 11 "data/maps/Route502/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 12 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_RodMan2
	goto Route502_EventScript_RodMan_1


Route502_EventScript_Emiri::
# 41 "data/maps/Route502/scripts.pory"
	trainerbattle_single TRAINER_EMIRI, Route502_Text_EmiriIntro, Route502_Text_EmiriDefeat
# 42 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_EmiriPostBattle, MSGBOX_AUTOCLOSE
	return


Route502_EventScript_Takao::
# 58 "data/maps/Route502/scripts.pory"
	trainerbattle_single TRAINER_MASAKI, Route502_Text_TakaoIntro, Route502_Text_TakaoDefeat
# 59 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	return


Route502_EventScript_Keiichi::
# 75 "data/maps/Route502/scripts.pory"
	trainerbattle_single TRAINER_KEIICHI, Route502_Text_KeiichiIntro, Route502_Text_KeiichiDefeat
# 76 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_KeiichiPostBattle, MSGBOX_AUTOCLOSE
	return


Route502_EventScript_Rui::
# 93 "data/maps/Route502/scripts.pory"
	trainerbattle_double TRAINER_RUI_AND_YUI_1, Route502_Text_RuiIntro, Route502_Text_RuiDefeat, Route502_Text_RuiNotEnoughMons
# 94 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_RuiPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route502/scripts.pory"
	waitmessage
	end


Route502_EventScript_Yui::
# 100 "data/maps/Route502/scripts.pory"
	trainerbattle_double TRAINER_RUI_AND_YUI_1, Route502_Text_YuiIntro, Route502_Text_YuiDefeat, Route502_Text_YuiNotEnoughMons
# 101 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_YuiPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route502/scripts.pory"
	waitmessage
	end


Route502_Text_RodMan1::
# 19 "data/maps/Route502/scripts.pory"
	.string "Hey, kid.\n"
	.string "Could you stop stomping around so\l"
	.string "much?\p"
	.string "You're scaring away all the fish!\p"
	.string "I'm trying to catch something here!\p"
	.string "... ... ...\p"
	.string "You're not going to leave me alone, are\n"
	.string "you?\p"
	.string "If I give you this, will you go away?$"

Route502_Text_RodMan2::
# 29 "data/maps/Route502/scripts.pory"
	.string "With that Super Rod, you can catch some\n"
	.string "really cool Pokémon!\p"
	.string "Just don't scare them away like you did\n"
	.string "to me!\p"
	.string "So uh...$"

Route502_Text_RodMan3::
# 35 "data/maps/Route502/scripts.pory"
	.string "Go away and let me fish in peace!\p"
	.string "Man, kids these days...$"

Route502_Text_EmiriIntro::
# 45 "data/maps/Route502/scripts.pory"
	.string "My Pokémon are cute and strong, just\n"
	.string "like me!$"

Route502_Text_EmiriDefeat::
# 49 "data/maps/Route502/scripts.pory"
	.string "OK, so we're not as strong as we are\n"
	.string "cute.$"

Route502_Text_EmiriPostBattle::
# 53 "data/maps/Route502/scripts.pory"
	.string "I think our strength is in our cuteness!$"

Route502_Text_TakaoIntro::
# 62 "data/maps/Route502/scripts.pory"
	.string "I just lost against a wild Pokémon, but\n"
	.string "I won't lose against you!$"

Route502_Text_TakaoDefeat::
# 66 "data/maps/Route502/scripts.pory"
	.string "I lose against a lot of things, don't I?$"

Route502_Text_TakaoPostBattle::
# 70 "data/maps/Route502/scripts.pory"
	.string "Maybe I should go back to Pokémon\n"
	.string "School...$"

Route502_Text_KeiichiIntro::
# 79 "data/maps/Route502/scripts.pory"
	.string "Wow! I just caught a big one!\p"
	.string "$"

Route502_Text_KeiichiDefeat::
# 83 "data/maps/Route502/scripts.pory"
	.string "That was a big one, alright!$"

Route502_Text_KeiichiPostBattle::
# 87 "data/maps/Route502/scripts.pory"
	.string "I think I'll need a bigger rod if I want\n"
	.string "to win against trainers like you!$"

Route502_Text_RuiIntro::
# 106 "data/maps/Route502/scripts.pory"
	.string "Hey! I'm Rui, and this is my sister Yui!\p"
	.string "We're twins, and we love to battle\n"
	.string "together!\p"
	.string "Let's have a double battle!$"

Route502_Text_RuiDefeat::
# 112 "data/maps/Route502/scripts.pory"
	.string "This is all your fault, Yui!$"

Route502_Text_RuiNotEnoughMons::
# 116 "data/maps/Route502/scripts.pory"
	.string "Oh no! You don't have enough Pokémon to\n"
	.string "battle us!\p"
	.string "Come back when you have at least two!$"

Route502_Text_RuiPostBattle::
# 121 "data/maps/Route502/scripts.pory"
	.string "Not everything is my fault, Yui!$"

Route502_Text_YuiIntro::
# 125 "data/maps/Route502/scripts.pory"
	.string "Um... I'm Yui. I'm Rui's sister.\p"
	.string "I'm not as good at battling as she is,\n"
	.string "but I'll do my best!$"

Route502_Text_YuiDefeat::
# 130 "data/maps/Route502/scripts.pory"
	.string "Rui, you're so bad at battling!$"

Route502_Text_YuiNotEnoughMons::
# 134 "data/maps/Route502/scripts.pory"
	.string "Um... I don't think we can battle right\n"
	.string "now.\p"
	.string "You need at least two Pokémon to\n"
	.string "battle us.$"

Route502_Text_YuiPostBattle::
# 139 "data/maps/Route502/scripts.pory"
	.string "This is why I don't like battling, Rui!$"
