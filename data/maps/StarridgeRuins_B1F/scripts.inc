StarridgeRuins_B1F_MapScripts::
	.byte 0


StarridgeRuins_B1F_EventScript_Grunt_1::
# 11 "data/maps/StarridgeRuins_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_STARRIDGE_RUINS_3, StarridgeRuins_B1F_Text_Grunt1Intro, StarridgeRuins_B1F_Text_Grunt1Defeat
# 12 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeRuins_B1F_EventScript_Grunt_2::
# 28 "data/maps/StarridgeRuins_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_STARRIDGE_RUINS_4, StarridgeRuins_B1F_Text_Grunt2Intro, StarridgeRuins_B1F_Text_Grunt2Defeat
# 29 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeRuins_B1F_Text_AmelioDefeated::
# 3 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Defeated by a kid that doesn't look\n"
	.string "older\p"
	.string "Ugh, I'm going to hear about this for\n"
	.string "weeks.$"

StarridgeRuins_B1F_Text_Grunt1Intro::
# 15 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Hey! What are you doing down here?$"

StarridgeRuins_B1F_Text_Grunt1Defeat::
# 19 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "...Kidding. I already know what you're\n"
	.string "doing down here.$"

StarridgeRuins_B1F_Text_Grunt1PostBattle::
# 23 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "At least I didn't get 1v2'd by a kid.$"

StarridgeRuins_B1F_Text_Grunt2Intro::
# 32 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "I'm not going to let you get in our way!$"

StarridgeRuins_B1F_Text_Grunt2Defeat::
# 36 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "...My bonus just went down the drain.$"

StarridgeRuins_B1F_Text_Grunt2PostBattle::
# 40 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "I'm going to have to work overtime to\n"
	.string "make up for this, you know.$"
