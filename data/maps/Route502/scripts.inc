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


Route502_EventScript_AnnoyedHiker::
# 41 "data/maps/Route502/scripts.pory"
	lock
# 42 "data/maps/Route502/scripts.pory"
	faceplayer
# 43 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_AnnoyedHiker
# 44 "data/maps/Route502/scripts.pory"
	release
	return


Route502_EventScript_Barbara::
# 57 "data/maps/Route502/scripts.pory"
	trainerbattle_single TRAINER_BARBARA, Route502_Text_BarbaraIntro, Route502_Text_BarbaraDefeat
# 58 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_BarbaraPostBattle, MSGBOX_AUTOCLOSE
	return


Route502_EventScript_Daniel::
# 74 "data/maps/Route502/scripts.pory"
	trainerbattle_single TRAINER_DANIEL, Route502_Text_DanielIntro, Route502_Text_DanielDefeat
# 75 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_DanielPostBattle, MSGBOX_AUTOCLOSE
	return


Route502_EventScript_Frank::
# 91 "data/maps/Route502/scripts.pory"
	trainerbattle_single TRAINER_FRANK, Route502_Text_FrankIntro, Route502_Text_FrankDefeat
# 92 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
	return


Route502_EventScript_Ari::
# 108 "data/maps/Route502/scripts.pory"
	trainerbattle_double TRAINER_ARI_AND_ALI_1, Route502_Text_AriIntro, Route502_Text_AriDefeat, Route502_Text_AriNotEnoughMons
# 109 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_AriPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route502/scripts.pory"
	waitmessage
	end


Route502_EventScript_Ali::
# 115 "data/maps/Route502/scripts.pory"
	trainerbattle_double TRAINER_ARI_AND_ALI_1, Route502_Text_AliIntro, Route502_Text_AliDefeat, Route502_Text_AliNotEnoughMons
# 116 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_AliPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route502/scripts.pory"
	waitmessage
	end


Route502_EventScript_Susan::
# 159 "data/maps/Route502/scripts.pory"
	trainerbattle_single TRAINER_SUSAN, Route502_Text_SusanIntro, Route502_Text_SusanDefeat
# 160 "data/maps/Route502/scripts.pory"
	msgbox Route502_Text_SusanPostBattle, MSGBOX_AUTOCLOSE
	return


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

Route502_Text_AnnoyedHiker::
# 47 "data/maps/Route502/scripts.pory"
	.string "What? Did you think I was a Pokémon\n"
	.string "Trainer?\p"
	.string "Not everyone who stands around is\n"
	.string "looking for a battle, you know!\p"
	.string "I'm just a hiker who likes to walk around\n"
	.string "and enjoy the scenery.\p"
	.string "$"

Route502_Text_BarbaraIntro::
# 61 "data/maps/Route502/scripts.pory"
	.string "My Pokémon are cute and strong, just\n"
	.string "like me!$"

Route502_Text_BarbaraDefeat::
# 65 "data/maps/Route502/scripts.pory"
	.string "OK, so we're not as strong as we are\n"
	.string "cute.$"

Route502_Text_BarbaraPostBattle::
# 69 "data/maps/Route502/scripts.pory"
	.string "I think our strength is in our cuteness!$"

Route502_Text_DanielIntro::
# 78 "data/maps/Route502/scripts.pory"
	.string "I just lost against a wild Pokémon, but\n"
	.string "I won't lose against you!$"

Route502_Text_DanielDefeat::
# 82 "data/maps/Route502/scripts.pory"
	.string "I lose against a lot of things, don't I?$"

Route502_Text_DanielPostBattle::
# 86 "data/maps/Route502/scripts.pory"
	.string "Maybe I should go back to Pokémon\n"
	.string "School...$"

Route502_Text_FrankIntro::
# 95 "data/maps/Route502/scripts.pory"
	.string "Wow! I just caught a big one!\p"
	.string "$"

Route502_Text_FrankDefeat::
# 99 "data/maps/Route502/scripts.pory"
	.string "That was a big one, alright!$"

Route502_Text_FrankPostBattle::
# 103 "data/maps/Route502/scripts.pory"
	.string "I think I'll need a bigger rod if I want\n"
	.string "to win against trainers like you!$"

Route502_Text_AriIntro::
# 121 "data/maps/Route502/scripts.pory"
	.string "Hey! I'm Ari, and this is my sister Ali!\p"
	.string "We're twins, and we love to battle\n"
	.string "together!\p"
	.string "Let's have a double battle!$"

Route502_Text_AriDefeat::
# 127 "data/maps/Route502/scripts.pory"
	.string "This is all your fault, Ali!$"

Route502_Text_AriNotEnoughMons::
# 131 "data/maps/Route502/scripts.pory"
	.string "Oh no! You don't have enough Pokémon to\n"
	.string "battle us!\p"
	.string "Come back when you have at least two!$"

Route502_Text_AriPostBattle::
# 136 "data/maps/Route502/scripts.pory"
	.string "Not everything is my fault, Ali!$"

Route502_Text_AliIntro::
# 140 "data/maps/Route502/scripts.pory"
	.string "Um... I'm Ali. I'm Ari's sister.\p"
	.string "I'm not as good at battling as she is,\n"
	.string "but I'll do my best!$"

Route502_Text_AliDefeat::
# 145 "data/maps/Route502/scripts.pory"
	.string "Ari, you're so bad at battling!$"

Route502_Text_AliNotEnoughMons::
# 149 "data/maps/Route502/scripts.pory"
	.string "Um... I don't think we can battle right\n"
	.string "now.\p"
	.string "You need at least two Pokémon to\n"
	.string "battle us.$"

Route502_Text_AliPostBattle::
# 154 "data/maps/Route502/scripts.pory"
	.string "This is why I don't like battling, Ari!$"

Route502_Text_SusanIntro::
# 163 "data/maps/Route502/scripts.pory"
	.string "It's a beautiful day for a picnic!\n"
	.string "It's also a beautiful day for a battle!$"

Route502_Text_SusanDefeat::
# 167 "data/maps/Route502/scripts.pory"
	.string "...I think I'll stick to picnics from now\n"
	.string "on.$"

Route502_Text_SusanPostBattle::
# 171 "data/maps/Route502/scripts.pory"
	.string "Nobody can top my homemade rice balls!$"
