FortuneCave_MapScripts::
	.byte 0


FortuneCave_EventScript_StrandedCamper::
# 4 "data/maps/FortuneCave/scripts.pory"
	lock
# 5 "data/maps/FortuneCave/scripts.pory"
	faceplayer
# 6 "data/maps/FortuneCave/scripts.pory"
	msgbox FortuneCave_Text_StrandedCamper
# 7 "data/maps/FortuneCave/scripts.pory"
	release
	return


FortuneCave_EventScript_HikerGary::
# 18 "data/maps/FortuneCave/scripts.pory"
	trainerbattle_single TRAINER_GARY, FortuneCave_Text_HikerGaryIntro, FortuneCave_Text_HikerGaryDefeat
# 19 "data/maps/FortuneCave/scripts.pory"
	msgbox FortuneCave_Text_HikerGaryPostBattle, MSGBOX_AUTOCLOSE
	return


FortuneCave_EventScript_BlackBeltItoshi::
# 35 "data/maps/FortuneCave/scripts.pory"
	trainerbattle_single TRAINER_ITOSHI, FortuneCave_Text_BlackBeltItoshiIntro, FortuneCave_Text_BlackBeltItoshiDefeat
# 36 "data/maps/FortuneCave/scripts.pory"
	msgbox FortuneCave_Text_BlackBeltItoshiPostBattle, MSGBOX_AUTOCLOSE
	return


FortuneCave_Text_StrandedCamper::
# 10 "data/maps/FortuneCave/scripts.pory"
	.string "Gah! I'm such an idiot!\p"
	.string "I was so excited to explore this cave\n"
	.string "that I didn't even think about how I'd\l"
	.string "get out!\p"
	.string "I need the HM Rock Smash to get past\n"
	.string "these rocks, but I don't have it!\p"
	.string "This is the worst!$"

FortuneCave_Text_HikerGaryIntro::
# 22 "data/maps/FortuneCave/scripts.pory"
	.string "You! Trainer!\n"
	.string "You scared away the Glimmet I was\l"
	.string "trying to catch!$"

FortuneCave_Text_HikerGaryDefeat::
# 26 "data/maps/FortuneCave/scripts.pory"
	.string "I guess I'll have to find another one...$"

FortuneCave_Text_HikerGaryPostBattle::
# 30 "data/maps/FortuneCave/scripts.pory"
	.string "I'll find one eventually!$"

FortuneCave_Text_BlackBeltItoshiIntro::
# 39 "data/maps/FortuneCave/scripts.pory"
	.string "My Pokémon and I come here to train\n"
	.string "every day!$"

FortuneCave_Text_BlackBeltItoshiDefeat::
# 43 "data/maps/FortuneCave/scripts.pory"
	.string "To lose is to learn!$"

FortuneCave_Text_BlackBeltItoshiPostBattle::
# 47 "data/maps/FortuneCave/scripts.pory"
	.string "I must learn from this loss and become\n"
	.string "stronger!$"
