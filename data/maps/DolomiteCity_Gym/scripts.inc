DolomiteCity_Gym_MapScripts::
	.byte 0


DolomiteCity_Gym_EventScript_GymGuide::
# 4 "data/maps/DolomiteCity_Gym/scripts.pory"
	lock
# 5 "data/maps/DolomiteCity_Gym/scripts.pory"
	faceplayer
# 7 "data/maps/DolomiteCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DOLOMITE_GYM, DolomiteCity_Gym_EventScript_GymGuide_2
# 13 "data/maps/DolomiteCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, DolomiteCity_Gym_EventScript_GymGuide_6
# 19 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_GymGuide1
DolomiteCity_Gym_EventScript_GymGuide_5:
# 22 "data/maps/DolomiteCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SODA_POP_DOLOMITE_GYM, DolomiteCity_Gym_EventScript_GymGuide_10
DolomiteCity_Gym_EventScript_GymGuide_9:
# 29 "data/maps/DolomiteCity_Gym/scripts.pory"
	setflag FLAG_TEMP_1
DolomiteCity_Gym_EventScript_GymGuide_1:
# 31 "data/maps/DolomiteCity_Gym/scripts.pory"
	release
	return

DolomiteCity_Gym_EventScript_GymGuide_2:
# 9 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_GymGuideWin
	goto DolomiteCity_Gym_EventScript_GymGuide_1

DolomiteCity_Gym_EventScript_GymGuide_6:
# 15 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_GymGuide3
	goto DolomiteCity_Gym_EventScript_GymGuide_5

DolomiteCity_Gym_EventScript_GymGuide_10:
# 24 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_GymGuide2
# 25 "data/maps/DolomiteCity_Gym/scripts.pory"
	giveitem ITEM_SODA_POP
# 26 "data/maps/DolomiteCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_SODA_POP_DOLOMITE_GYM
	goto DolomiteCity_Gym_EventScript_GymGuide_9


DolomiteCity_Gym_EventScript_Geo::
# 74 "data/maps/DolomiteCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEO_1, DolomiteCity_Gym_Text_GeoIntro, DolomiteCity_Gym_Text_GeoDefeat, DolomiteCity_Gym_EventScript_GeoDefeated, NO_MUSIC
# 75 "data/maps/DolomiteCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SAND_TOMB, DolomiteCity_Gym_EventScript_Geo_2
DolomiteCity_Gym_EventScript_Geo_1:
# 80 "data/maps/DolomiteCity_Gym/scripts.pory"
	speakername DolomiteCity_Gym_EventScript_Geo_Text_0
# 81 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_GeoPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/DolomiteCity_Gym/scripts.pory"
	release
	return

DolomiteCity_Gym_EventScript_Geo_2:
# 77 "data/maps/DolomiteCity_Gym/scripts.pory"
	goto DolomiteCity_Gym_EventScript_GiveSandTomb
	goto DolomiteCity_Gym_EventScript_Geo_1


DolomiteCity_Gym_EventScript_GeoDefeated::
# 86 "data/maps/DolomiteCity_Gym/scripts.pory"
	speakername DolomiteCity_Gym_EventScript_Geo_Text_0
# 87 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_GeoDefeated
# 88 "data/maps/DolomiteCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 89 "data/maps/DolomiteCity_Gym/scripts.pory"
	closemessage
# 90 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_ReceivedFoundationBadge
# 91 "data/maps/DolomiteCity_Gym/scripts.pory"
	waitfanfare
# 92 "data/maps/DolomiteCity_Gym/scripts.pory"
	speakername DolomiteCity_Gym_EventScript_Geo_Text_0
# 93 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_FoundationBadgeInfo
# 95 "data/maps/DolomiteCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DOLOMITE_GYM
# 96 "data/maps/DolomiteCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 97 "data/maps/DolomiteCity_Gym/scripts.pory"
	setvar VAR_DOLOMITE_CITY_STATE, 2
# 98 "data/maps/DolomiteCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DOLOMITE_CITY_RIVAL
# 99 "data/maps/DolomiteCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DOLOMITE_CITY_ETERNITY_GRUNT
# 100 "data/maps/DolomiteCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DOLOMITE_CITY_ETERNITY_GRUNT
# 101 "data/maps/DolomiteCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DOLOMITE_GROTTO_MEGA_GURU
# 103 "data/maps/DolomiteCity_Gym/scripts.pory"
	goto DolomiteCity_Gym_EventScript_GiveSandTomb
# 105 "data/maps/DolomiteCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 106 "data/maps/DolomiteCity_Gym/scripts.pory"
	release
	return


DolomiteCity_Gym_EventScript_GiveSandTomb::
# 110 "data/maps/DolomiteCity_Gym/scripts.pory"
	closemessage
# 111 "data/maps/DolomiteCity_Gym/scripts.pory"
	giveitem ITEM_TM_SAND_TOMB
# 113 "data/maps/DolomiteCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DolomiteCity_Gym_EventScript_GiveSandTomb_2
DolomiteCity_Gym_EventScript_GiveSandTomb_1:
# 118 "data/maps/DolomiteCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SAND_TOMB
# 119 "data/maps/DolomiteCity_Gym/scripts.pory"
	speakername DolomiteCity_Gym_EventScript_Geo_Text_0
# 120 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_ExplainSandTomb
# 121 "data/maps/DolomiteCity_Gym/scripts.pory"
	release
	return

DolomiteCity_Gym_EventScript_GiveSandTomb_2:
# 115 "data/maps/DolomiteCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DolomiteCity_Gym_EventScript_GiveSandTomb_1


DolomiteCity_Gym_EventScript_Kenneth::
# 174 "data/maps/DolomiteCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KENNETH, DolomiteCity_Gym_Text_KennethIntro, DolomiteCity_Gym_Text_KennethDefeated
# 175 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_KennethPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/DolomiteCity_Gym/scripts.pory"
	waitmessage
	end


DolomiteCity_Gym_EventScript_Christopher::
# 193 "data/maps/DolomiteCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHRISTOPHER, DolomiteCity_Gym_Text_ChristopherIntro, DolomiteCity_Gym_Text_ChristopherDefeated
# 194 "data/maps/DolomiteCity_Gym/scripts.pory"
	msgbox DolomiteCity_Gym_Text_ChristopherPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/DolomiteCity_Gym/scripts.pory"
	waitmessage
	end


DolomiteCity_Gym_EventScript_Geo_Text_0:
# 80 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "Geo$"

DolomiteCity_Gym_Text_GymGuide1::
# 34 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "Yo!\n"
	.string "Champion-to-be!\p"
	.string "This is your first gym, right?\n"
	.string "How could I tell?\p"
	.string "Well, you look like a total newbie!\p"
	.string "But don't worry!\n"
	.string "My name is Gyde, and I'm here to help!\p"
	.string "The trainers in this gym all use\n"
	.string "Ground-type Pokémon.\p"
	.string "That means Water, Grass, and Ice-type\n"
	.string "moves are super effective against\l"
	.string "them!\p"
	.string "But be careful!\n"
	.string "Ground-types are immune to\l"
	.string "Electric-type moves!\p"
	.string "And if you're using a Fire-type, watch\n"
	.string "out for their Rock-type moves!\p"
	.string "Oh, and one more thing!\n"
	.string "There's a sandstorm in effect in this\l"
	.string "gym.\p"
	.string "It will damage any Pokémon that isn't\n"
	.string "Rock, Ground, or Steel-type each turn!\p"
	.string "You got all that?\n"
	.string "Good luck!$"

DolomiteCity_Gym_Text_GymGuide2::
# 49 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "...Hey, relax!\n"
	.string "You still look nervous!\p"
	.string "Take this to calm your nerves!$"

DolomiteCity_Gym_Text_GymGuide3::
# 55 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "The trainers in this gym all use\n"
	.string "Ground-type Pokémon.\p"
	.string "That means Water, Grass, and Ice-type\n"
	.string "moves are super effective against\l"
	.string "them!\p"
	.string "But be careful!\n"
	.string "Ground-types are immune to\l"
	.string "Electric-type moves!\p"
	.string "And if you're using a Fire-type, watch\n"
	.string "out for their Rock-type moves!\p"
	.string "Oh, and one more thing!\n"
	.string "There's a sandstorm in effect in this\l"
	.string "gym.\p"
	.string "It will damage any Pokémon that isn't\n"
	.string "Rock, Ground, or Steel-type each turn!\p"
	.string "You got all that?\n"
	.string "Good luck!$"

DolomiteCity_Gym_Text_GymGuideWin::
# 66 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "You won?\n"
	.string "That's amazing!\p"
	.string "You're on your way to becoming a real\n"
	.string "champ!\p"
	.string "Keep it up, kid!$"

DolomiteCity_Gym_Text_GeoIntro::
# 124 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "I had faith you'd make it here since the\n"
	.string "moment I saw you fight Challenger\l"
	.string "{RIVAL}!\p"
	.string "As you know, my name's Geo, and I'm the\n"
	.string "Gym Leader here in Dolomite City!\p"
	.string "Some people think I'm just a kid, but I\n"
	.string "study really hard.\p"
	.string "I graduated from the Trainer School\n"
	.string "really fast because I love learning\l"
	.string "about Pokémon and battles!\p"
	.string "So much so that they let me be the Gym\n"
	.string "Leader here and teach classes!\p"
	.string "You know, Ground-types are my\n"
	.string "favorite! They're really strong and\l"
	.string "solid, like the earth itself.\p"
	.string "I hope you're ready!\n"
	.string "I'm going to show you just how strong\l"
	.string "Ground-types can be!$"

DolomiteCity_Gym_Text_GeoDefeat::
# 135 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "Whoa... I guess my plans weren't as\n"
	.string "strong as I thought.\p"
	.string "Thank you, Challenger\n"
	.string "{PLAYER}--you've given me a lot to\l"
	.string "think about!$"

DolomiteCity_Gym_Text_GeoDefeated::
# 140 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "Oh! You really did it--great job,\n"
	.string "Challenger {PLAYER}!\p"
	.string "As the Gym Leader, I officially give you\n"
	.string "this Gym Badge to show you've beaten me\l"
	.string "fair and square.\p"
	.string "This is the Foundation Badge!\n"
	.string "You've earned it with your hard work!$"

DolomiteCity_Gym_Text_ReceivedFoundationBadge::
# 146 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "You received the Foundation Badge from\n"
	.string "Geo!$"

DolomiteCity_Gym_Text_FoundationBadgeInfo::
# 150 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "With one badge, Pokémon of up to level\n"
	.string "25 will be easier to catch and will\l"
	.string "listen to your commands!\p"
	.string "And hey, you can use the HM Rock Smash\n"
	.string "outside of battles now too!\p"
	.string "Oh, and here's something else for\n"
	.string "you--this TM!$"

DolomiteCity_Gym_Text_ExplainSandTomb::
# 157 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "This TM teaches Sand Tomb, a\n"
	.string "Ground-type move. It traps the\l"
	.string "opponent in a vortex of sand for 4-5\l"
	.string "turns!\p"
	.string "It's a great move if you want to keep\n"
	.string "your opponent from switching out.\p"
	.string "And, well, it's pretty cool, don't you\n"
	.string "think?$"

DolomiteCity_Gym_Text_GeoPostBattle::
# 165 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "You were really awesome, Challenger\n"
	.string "{PLAYER}! I hope you'll come back and\l"
	.string "battle me again sometime! And good luck\l"
	.string "with your next Gym!$"

DolomiteCity_Gym_Text_KennethIntro::
# 180 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "I'm a rock-solid trainer!\n"
	.string "You'll never break through my defenses!$"

DolomiteCity_Gym_Text_KennethDefeated::
# 184 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "My offense broke and my defense\n"
	.string "crumbled...$"

DolomiteCity_Gym_Text_KennethPostBattle::
# 188 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "Maybe I should take extra battle\n"
	.string "classes...$"

DolomiteCity_Gym_Text_ChristopherIntro::
# 199 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "The sandstorm in this gym raises my\n"
	.string "Pokémon's Special Defense!\p"
	.string "But I bet you didn't know that!$"

DolomiteCity_Gym_Text_ChristopherDefeated::
# 204 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "I lost?\n"
	.string "Even with my speed advantage?$"

DolomiteCity_Gym_Text_ChristopherPostBattle::
# 208 "data/maps/DolomiteCity_Gym/scripts.pory"
	.string "Weather effects can be a real game\n"
	.string "changer, huh?$"
