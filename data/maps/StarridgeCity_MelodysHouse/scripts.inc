StarridgeCity_MelodysHouse_MapScripts::
	.byte 0


StarridgeCity_MelodysHouse_MelodysGrandma::
# 4 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	lock
# 5 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	faceplayer
# 6 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, StarridgeCity_MelodysHouse_MelodysGrandma_2
# 22 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_MelodysGrandma
StarridgeCity_MelodysHouse_MelodysGrandma_1:
# 24 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	release
	return

StarridgeCity_MelodysHouse_MelodysGrandma_2:
# 8 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_CUT, StarridgeCity_MelodysHouse_MelodysGrandma_5
# 17 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_MelodysGrandmaExplainCut
	goto StarridgeCity_MelodysHouse_MelodysGrandma_1

StarridgeCity_MelodysHouse_MelodysGrandma_5:
# 10 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_MelodysGrandmaGiveCut
# 11 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 12 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 13 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_MelodysGrandmaExplainCut
	goto StarridgeCity_MelodysHouse_MelodysGrandma_1


StarridgeCity_MelodysHouse_Jasmine::
# 54 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	lock
# 55 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	faceplayer
# 57 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	speakername StarridgeCity_MelodysHouse_Jasmine_Text_0
# 58 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	goto_if_unset FLAG_DEFEATED_JASMINE_STARRIDGE, StarridgeCity_MelodysHouse_Jasmine_2
# 84 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	speakername StarridgeCity_MelodysHouse_Jasmine_Text_0
# 85 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_JasminePostBattle
StarridgeCity_MelodysHouse_Jasmine_1:
# 88 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	closemessage
# 89 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	release
	return

StarridgeCity_MelodysHouse_Jasmine_2:
# 60 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	goto_if_unset VAR_TEMP_0, StarridgeCity_MelodysHouse_Jasmine_6
StarridgeCity_MelodysHouse_Jasmine_5:
# 65 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_JasmineAskForBattle, MSGBOX_YESNO
# 67 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarridgeCity_MelodysHouse_Jasmine_8
# 78 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_JasmineDeclineToBattle
	goto StarridgeCity_MelodysHouse_Jasmine_1

StarridgeCity_MelodysHouse_Jasmine_6:
# 62 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_Jasmine1
# 63 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	setflag VAR_TEMP_0
	goto StarridgeCity_MelodysHouse_Jasmine_5

StarridgeCity_MelodysHouse_Jasmine_8:
# 69 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_JasmineAcceptToBattle
# 70 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	closemessage
# 71 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_JASMINE, StarridgeCity_MelodysHouse_Text_JasmineDefeat
# 72 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	speakername StarridgeCity_MelodysHouse_Jasmine_Text_0
# 73 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	msgbox StarridgeCity_MelodysHouse_Text_JasminePostBattle
# 74 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	setflag FLAG_DEFEATED_JASMINE_STARRIDGE
	goto StarridgeCity_MelodysHouse_Jasmine_1


StarridgeCity_MelodysHouse_Jasmine_Text_0:
# 57 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Jasmine$"

StarridgeCity_MelodysHouse_Text_MelodysGrandma::
# 27 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Oh, hello there.\n"
	.string "I'm Gym Leader Melody's grandmother.\p"
	.string "I'm so proud of my granddaughter for\n"
	.string "becoming a Gym Leader here in Toshou.\p"
	.string "She's... a bit of unsure of herself, but\n"
	.string "she's a very kind and caring person.\p"
	.string "Not to mention, she's a very talented\n"
	.string "trainer.\p"
	.string "I'm sure she'll do great things here in\n"
	.string "Starridge City.$"

StarridgeCity_MelodysHouse_Text_MelodysGrandmaGiveCut::
# 36 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Oh, you've defeated Melody in battle?\n"
	.string "That's wonderful!\p"
	.string "...I'm sure she's crying her eyes out\n"
	.string "right now.\p"
	.string "...What? She's not? You say she's\n"
	.string "actually motivated to get stronger?\p"
	.string "Oh, that's a relief.\n"
	.string "I was worried she'd give up after losing\l"
	.string "to multiple trainers.\p"
	.string "Thank you for giving her the confidence\n"
	.string "to keep going.\p"
	.string "I want to give you this as a token of my\n"
	.string "gratitude.$"

StarridgeCity_MelodysHouse_Text_MelodysGrandmaExplainCut::
# 46 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "This is the HM for Cut.\p"
	.string "You can use it to cut down small trees\n"
	.string "blocking your path.\p"
	.string "It's a very useful field move to have\n"
	.string "when you're out exploring.\p"
	.string "$"

StarridgeCity_MelodysHouse_Text_Jasmine1::
# 92 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
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
# 105 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "I... I wanted to ask you something,\n"
	.string "{PLAYER}.\p"
	.string "Would you... battle me?$"

StarridgeCity_MelodysHouse_Text_JasmineAcceptToBattle::
# 111 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Thank you, {PLAYER}.\n"
	.string "I... I appreciate it.\p"
	.string "Let's... let's have a good battle.$"

StarridgeCity_MelodysHouse_Text_JasmineDeclineToBattle::
# 117 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Oh... I see.\n"
	.string "I... I understand.\p"
	.string "I... I hope we can battle another time.$"

StarridgeCity_MelodysHouse_Text_JasmineDefeat::
# 123 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "You're... very strong.\n"
	.string "I... I'm impressed.\p"
	.string "I... I'm glad I got to battle you.\n"
	.string "Thank you, {PLAYER}.$"

StarridgeCity_MelodysHouse_Text_JasminePostBattle::
# 129 "data/maps/StarridgeCity_MelodysHouse/scripts.pory"
	.string "Your bond with your Pokémon is strong...\n"
	.string "and it shows in the way you battle.\p"
	.string "I... I hope we can battle again sometime.$"
