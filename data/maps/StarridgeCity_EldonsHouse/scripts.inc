StarridgeCity_EldonsHouse_MapScripts::
	.byte 0


StarridgeCity_EventScript_Trade_Honedge::
# 4 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	lock
# 5 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	faceplayer
# 6 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	goto_if_set FLAG_STARRIDGE_NPC_TRADE_COMPLETED, StarridgeCity_EventScript_Trade_Honedge_2
# 12 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HONEDGE
# 13 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 14 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	msgbox StarridgeCity_Text_Trade_Honedge_AskToTrade, MSGBOX_YESNO
# 15 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq StarridgeCity_EventScript_Trade_Honedge_5
# 22 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 23 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_lt StarridgeCity_EventScript_Trade_Honedge_8
StarridgeCity_EventScript_Trade_Honedge_7:
# 35 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	msgbox StarridgeCity_Text_Trade_Honedge_Refuse
# 36 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	release
	return

StarridgeCity_EventScript_Trade_Honedge_2:
# 8 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	msgbox StarridgeCity_Text_Trade_Honedge_AfterTrade
# 9 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	release
	end

StarridgeCity_EventScript_Trade_Honedge_5:
# 17 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	msgbox StarridgeCity_Text_Trade_Honedge_Refuse
# 18 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	release
	end

StarridgeCity_EventScript_Trade_Honedge_8:
# 25 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 26 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq StarridgeCity_EventScript_Trade_Honedge_10
	goto StarridgeCity_EventScript_Trade_Honedge_7

StarridgeCity_EventScript_Trade_Honedge_10:
# 28 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	call EventScript_DoInGameTrade
# 29 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	msgbox StarridgeCity_Text_Trade_Honedge_After
# 30 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	setflag FLAG_TRADE_RATTATA
# 31 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	release
	return


StarridgeCity_Text_Trade_Honedge_AskToTrade::
# 39 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	.string "Hey, kid. Do you ever trade Pokémon with\n"
	.string "people?\p"
	.string "It's always fun to see what kind of\n"
	.string "bonds form with a new partner.\p"
	.string "Why do I ask?\n"
	.string "You see, I've got this Honedge and he's\l"
	.string "a trusty blade, but...\p"
	.string "I think he's looking for a new\n"
	.string "adventure.\p"
	.string "Maybe you could be the one to guide him\n"
	.string "to his next challenge.\p"
	.string "If you could trade me a rare Pokemon\n"
	.string "like Dunsparce I'd trade you him.\p"
	.string "What do you say?$"

StarridgeCity_Text_Trade_Honedge_AfterTrade::
# 50 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	.string "Sh'ding is in good hands, I can tell.\p"
	.string "He's been with me for a while, but I\n"
	.string "think he'll grow even stronger with you.\p"
	.string "Treat him well, yeah?\p"
	.string "And don't worry about Dunsparce--it'll\n"
	.string "fit in perfectly here.$"

StarridgeCity_Text_Trade_Honedge_After::
# 58 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	.string "I've finally got a Dunsparce! I can't\n"
	.string "wait to see what it can do!$"

StarridgeCity_Text_Trade_Honedge_Refuse::
# 62 "data/maps/StarridgeCity_EldonsHouse/scripts.pory"
	.string "What? you changed your mind\p"
	.string "Ah, no worries!\n"
	.string "Maybe you'll change your mind later.$"
