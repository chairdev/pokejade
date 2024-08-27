StemfordTown_PokemonFanClub_MapScripts::
# 5 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StemfordTown_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

StemfordTown_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	map_script_2 VAR_STEMFORD_TOWN_STATE, 0, StemfordTown_PokemonFanClub_TeamUpsilonIntro
	.2byte 0


StemfordTown_PokemonFanClub_TeamUpsilonIntro::
# 11 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	lockall
# 12 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 13 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 15 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	speakername StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_0
# 16 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_1
# 17 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	closemessage
# 19 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_2
# 20 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	closemessage
# 22 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_UpsilonIntro_Chairman1
# 24 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	speakername StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_0
# 25 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_UpsilonGrunt1
# 27 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	speakername StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_0
# 28 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_UpsilonGrunt2
# 29 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	closemessage
# 31 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_NurseryMan1
# 32 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	setvar VAR_STEMFORD_TOWN_STATE, 1
# 34 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	goto StemfordTown_PokemonFanClub_NurseryMan
	return


StemfordTown_PokemonFanClub_NurseryMan::
# 38 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	lockall
# 39 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	faceplayer
# 41 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	showmonpic SPECIES_EGG, 10, 3
# 42 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_0, MSGBOX_YESNO
# 44 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq StemfordTown_PokemonFanClub_NurseryMan_2
StemfordTown_PokemonFanClub_NurseryMan_1:
# 52 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	hidemonpic
# 53 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	getpartysize
# 55 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq StemfordTown_PokemonFanClub_NurseryMan_5
# 61 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_3
# 63 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	setflag FLAG_SYS_FORCE_SHINY
# 64 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	giveegg SPECIES_TOGEPI
# 65 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	setmonmove PARTY_SIZE, 2, MOVE_MOONBLAST
# 66 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	setmonmove PARTY_SIZE, 3, MOVE_METRONOME
# 68 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	playfanfare MUS_EVOLVED
# 69 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_4
# 70 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	waitfanfare
# 72 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	clearflag FLAG_SYS_FORCE_SHINY
# 74 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_NurseryMan2
# 75 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	closemessage
# 77 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	playse SE_DOOR
# 79 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	removeobject 6
# 80 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	waitse
# 81 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	fadescreen FADE_FROM_BLACK
StemfordTown_PokemonFanClub_NurseryMan_4:
# 84 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	releaseall
	return

StemfordTown_PokemonFanClub_NurseryMan_2:
StemfordTown_PokemonFanClub_NurseryMan_9:
# 47 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_1, MSGBOX_YESNO
# 49 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne StemfordTown_PokemonFanClub_NurseryMan_9
	goto StemfordTown_PokemonFanClub_NurseryMan_1

StemfordTown_PokemonFanClub_NurseryMan_5:
# 57 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_2
	goto StemfordTown_PokemonFanClub_NurseryMan_4


StemfordTown_PokemonFanClub_EventScript_MoveReminder::
	return


StemfordTown_PokemonFanClub_EventScript_Glimmora::
	return


StemfordTown_PokemonFanClub_EventScript_Oranguru::
	return


StemfordTown_PokemonFanClub_EventScript_Chairman::
	return


StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_0:
# 15 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "???$"

StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_1:
# 16 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Hand over the rare Egg, and no one gets\n"
	.string "hurt.$"

StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_2:
# 19 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "No! I won't let you take my precious\n"
	.string "little Eggy!$"

StemfordTown_PokemonFanClub_NurseryMan_Text_0:
# 42 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Oh, I know! Why don't you take the egg\n"
	.string "with you? I think it would be safer with\l"
	.string "you.$"

StemfordTown_PokemonFanClub_NurseryMan_Text_1:
# 47 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "But... I'm scared I won't be able to\n"
	.string "protect it from Team Upsilon...$"

StemfordTown_PokemonFanClub_NurseryMan_Text_2:
# 57 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Looks like you don't have any room in\n"
	.string "your party for the Egg.$"

StemfordTown_PokemonFanClub_NurseryMan_Text_3:
# 61 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Thank you, {PLAYER}.\n"
	.string "I feel much better knowing it's with a\l"
	.string "capable Trainer like you.$"

StemfordTown_PokemonFanClub_NurseryMan_Text_4:
# 69 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "You received the Egg!$"

StemfordTown_PokemonFanClub_Text_UpsilonIntro_Chairman1::
# 87 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Oh, thank goodness you're here! There's\n"
	.string "trouble!\p"
	.string "Some thug has come to steal a precious\n"
	.string "Pokémon Egg from one of our members!!\p"
	.string "Please, you have to help us!$"

StemfordTown_PokemonFanClub_Text_UpsilonGrunt1::
# 94 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Stay out of this, kid!\n"
	.string "This Egg is coming with me.\p"
	.string "It's got some real value, and I ain't\n"
	.string "leaving without it!\p"
	.string "Surely you're smart enough not to mess\n"
	.string "with Team Upsilon, right?\p"
	.string "I get it, sometimes you need someone to\n"
	.string "rough you up a bit to get the message\l"
	.string "across.\p"
	.string "I'll teach ya a lesson you'll remember\n"
	.string "for a long time!$"

StemfordTown_PokemonFanClub_Text_UpsilonGruntDefeated::
# 105 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "You got lucky this time!$"

StemfordTown_PokemonFanClub_Text_UpsilonGrunt2::
# 110 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "But don't think you've seen the last of\n"
	.string "Team Upsilon!\p"
	.string "You can count on that!$"

StemfordTown_PokemonFanClub_Text_NurseryMan1::
# 116 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "You saved this Egg!\n"
	.string "I don't know what I would have done if\l"
	.string "they had taken it.\p"
	.string "Please, what's your name? I want to\n"
	.string "thank you properly.\p"
	.string "... ... ...\n"
	.string "{PLAYER}?\p"
	.string "Thank you, {PLAYER}.\n"
	.string "I'm the man that runs the Pokémon\l"
	.string "Nursery back on Route 503.\p"
	.string "This Egg belongs to a very rare\n"
	.string "Pokémon, and I was going to keep it\l"
	.string "safe here at the Fan Club.\p"
	.string "But now I'm worried that Team Upsilon\n"
	.string "will come back for it...$"

StemfordTown_PokemonFanClub_Text_NurseryMan2::
# 126 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "I hope you can raise my little Eggy to\n"
	.string "be strong and healthy.\p"
	.string "I'm going to go back to the Nursery now.\n"
	.string "The interns I left in charge are\l"
	.string "probably getting into trouble without\l"
	.string "me.\p"
	.string "Thank you again, {PLAYER}. Please\n"
	.string "stop by the Nursery sometime!$"
