BaycrestCity_RockSmashMansHouse_MapScripts::
	.byte 0


BaycrestCity_RockSmashMansHouse_EventScript_RockSmashMan::
# 4 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	lock
# 5 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	faceplayer
# 7 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_ROCK_SMASH, BaycrestCity_RockSmashMansHouse_EventScript_RockSmashMan_2
# 18 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	msgbox BaycrestCity_RockSmashMansHouse_Text_RockSmashMan4
BaycrestCity_RockSmashMansHouse_EventScript_RockSmashMan_1:
# 21 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	release
	return

BaycrestCity_RockSmashMansHouse_EventScript_RockSmashMan_2:
# 8 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	msgbox BaycrestCity_RockSmashMansHouse_Text_RockSmashMan1
# 10 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, BaycrestCity_RockSmashMansHouse_EventScript_RockSmashMan_5
	goto BaycrestCity_RockSmashMansHouse_EventScript_RockSmashMan_1

BaycrestCity_RockSmashMansHouse_EventScript_RockSmashMan_5:
# 11 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	msgbox BaycrestCity_RockSmashMansHouse_Text_RockSmashMan2
# 12 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 13 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	msgbox BaycrestCity_RockSmashMansHouse_Text_RockSmashMan3
# 14 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	goto BaycrestCity_RockSmashMansHouse_EventScript_RockSmashMan_1


BaycrestCity_RockSmashMansHouse_EventScript_Machamp::
# 54 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	lock
# 55 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	faceplayer
# 56 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 57 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	msgbox BaycrestCity_RockSmashMansHouse_EventScript_Machamp_Text_0
# 58 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	waitmoncry
# 59 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	release
	return


BaycrestCity_RockSmashMansHouse_EventScript_Machamp_Text_0:
# 57 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	.string "Machamp: Rikiii!$"

BaycrestCity_RockSmashMansHouse_Text_RockSmashMan1::
# 24 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	.string "I'm the one they call the “Rock Smash\n"
	.string "Man”!\p"
	.string "I've been training my Pokémon to use\n"
	.string "Rock Smash for years, and now they're\l"
	.string "the best in the business!\p"
	.string "But the truth is, I'm getting too old for\n"
	.string "this.\p"
	.string "I can't keep up with the daily training\n"
	.string "anymore.\p"
	.string "If only there was a young, promising\n"
	.string "trainer with a Gym Badge out there who\l"
	.string "could take over for me...$"

BaycrestCity_RockSmashMansHouse_Text_RockSmashMan2::
# 33 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	.string "Oh, you have a Gym Badge? That's\n"
	.string "fantastic!\p"
	.string "I think you're just the trainer I've\n"
	.string "been looking for!\p"
	.string "I'll give you the HM Rock Smash, but only\n"
	.string "if you promise to use it to help others!$"

BaycrestCity_RockSmashMansHouse_Text_RockSmashMan3::
# 40 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	.string "You don't even need to teach it to a\n"
	.string "Pokémon to use it!\p"
	.string "Just have a Pokémon that can learn it\n"
	.string "in your party, and you'll be able to\l"
	.string "break rocks that are blocking your\l"
	.string "path.\p"
	.string "The Pokémon of the Toshou Region are\n"
	.string "just smart like that, I guess.$"

BaycrestCity_RockSmashMansHouse_Text_RockSmashMan4::
# 47 "data/maps/BaycrestCity_RockSmashMansHouse/scripts.pory"
	.string "I'm counting on you to use Rock Smash\n"
	.string "to help others, young trainer!\p"
	.string "Good luck on your journey!$"
