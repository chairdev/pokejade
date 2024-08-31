StarridgeCity_MelodysHouse_MapScripts::
	.byte 0


StarridgeCity_MelodysHouse_Jasmine::
# 4 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	lock
# 5 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	faceplayer
# 7 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	speakername StarridgeCity_MelodysHouse_Jasmine_Text_0
# 8 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	goto_if_unset VAR_TEMP_0, StarridgeCity_MelodysHouse_Jasmine_2
StarridgeCity_MelodysHouse_Jasmine_1:
# 13 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_JasmineAskForBattle, MSGBOX_YESNO
# 15 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_MelodysHouse_Jasmine_5
# 25 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_JasmineDeclineToBattle
StarridgeCity_MelodysHouse_Jasmine_4:
# 28 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	closemessage
# 29 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	release
	return

StarridgeCity_MelodysHouse_Jasmine_2:
# 10 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_Jasmine1
# 11 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	setflag VAR_TEMP_0
	goto StarridgeCity_MelodysHouse_Jasmine_1

StarridgeCity_MelodysHouse_Jasmine_5:
# 17 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_JasmineAcceptToBattle
# 18 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	closemessage
# 19 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_JASMINE, StarridgeCity_MelodysHouse_Text_JasmineDefeat
# 20 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	speakername StarridgeCity_MelodysHouse_Jasmine_Text_0
# 21 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_JasminePostBattle
	goto StarridgeCity_MelodysHouse_Jasmine_4


StarridgeCity_MelodysHouse_Jasmine_Text_0:
# 7 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Jasmine$"

StarridgeCity_MelodysHouse_Text_Jasmine1::
# 32 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Oh... {PLAYER}, it's you.\n"
	.string "I'm... glad to see you again\p"
	.string "I...didn't mention it before, but I'm\n"
	.string "actually the Gym Leader of Olivine City\l"
	.string "in the Johto region.\p"
	.string "People call me... the “Steel-Clad\n"
	.string "Defense Girl.”\p"
	.string "I come to Starridge Town often since\n"
	.string "Cianwood is so close by.\p"
	.string "I've been spending some time here in\n"
	.string "Starridge Town because Melody...\l"
	.string "recently moved here from Johto to\l"
	.string "become the new Fairy-type Gym Leader.\p"
	.string "Melody is a very talented trainer, but...\n"
	.string "taking on the role of a Gym Leader is a\l"
	.string "big responsibility and she's... a bit of a\l"
	.string "crybaby.\p"
	.string "I've been helping her get settled in and\n"
	.string "giving her some advice.\p"
	.string "It's... been nice, spending time here\n"
	.string "with her and her grandmother.\p"
	.string "I... I'm sorry, I... I'm just rambling.$"

StarridgeCity_MelodysHouse_Text_JasmineAskForBattle::
# 45 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "I... I wanted to ask you something,\n"
	.string "{PLAYER}.\p"
	.string "Would you... battle me?$"

StarridgeCity_MelodysHouse_Text_JasmineAcceptToBattle::
# 51 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Thank you, {PLAYER}.\n"
	.string "I... I appreciate it.\p"
	.string "Let's... let's have a good battle.$"

StarridgeCity_MelodysHouse_Text_JasmineDeclineToBattle::
# 57 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Oh... I see.\n"
	.string "I... I understand.\p"
	.string "I... I hope we can battle another time.$"

StarridgeCity_MelodysHouse_Text_JasmineDefeat::
# 63 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "You're... very strong.\n"
	.string "I... I'm impressed.\p"
	.string "I... I'm glad I got to battle you.\n"
	.string "Thank you, {PLAYER}.$"

StarridgeCity_MelodysHouse_Text_JasminePostBattle::
# 69 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Your bond with your Pokémon is strong...\n"
	.string "and it shows in the way you battle.\p"
	.string "I... I hope we can battle again sometime.$"
