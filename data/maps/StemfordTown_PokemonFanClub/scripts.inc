StemfordTown_PokemonFanClub_MapScripts::
# 5 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StemfordTown_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

StemfordTown_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	map_script_2 VAR_ZIRCON_TOWN_STATE, 0, StemfordTown_PokemonFanClub_TeamUpsilonIntro
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
	applymovement 6, StemfordTown_PokemonFanClub_Movement_LookDown
# 23 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	waitmovement 0
# 24 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_UpsilonIntro_NurseryManHelp
# 25 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	closemessage
# 27 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq StemfordTown_PokemonFanClub_TeamUpsilonIntro_2
# 33 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StemfordTown_PokemonFanClub_Movement_ApproachGrunt2
StemfordTown_PokemonFanClub_TeamUpsilonIntro_1:
# 35 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	waitmovement 0
# 36 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	applymovement 6, StemfordTown_PokemonFanClub_Movement_LookRight
# 37 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	applymovement 3, StemfordTown_PokemonFanClub_Movement_LookDown
# 39 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	speakername StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_0
# 40 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_UpsilonGrunt1
# 41 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PKMN_FAN_CLUB, StemfordTown_PokemonFanClub_Text_UpsilonGruntDefeated
# 42 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	speakername StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_3
# 43 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_UpsilonGrunt2
# 44 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	closemessage
# 46 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StemfordTown_PokemonFanClub_Movement_MoveOutOfWay
# 47 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	applymovement 3, StemfordTown_PokemonFanClub_Movement_RunAway
# 48 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	waitmovement 0
# 49 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	playse SE_DOOR
# 50 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	removeobject 3
# 52 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StemfordTown_PokemonFanClub_Movement_LookUp
# 53 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	applymovement 6, StemfordTown_PokemonFanClub_Movement_LookDown
# 54 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	waitmovement 0
# 56 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_NurseryMan1
# 57 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	setvar VAR_ZIRCON_TOWN_STATE, 1
# 58 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	setflag FLAG_HIDE_ROUTE_302_RIVAL
# 60 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	goto StemfordTown_PokemonFanClub_NurseryMan
	return

StemfordTown_PokemonFanClub_TeamUpsilonIntro_2:
# 29 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StemfordTown_PokemonFanClub_Movement_ApproachGrunt1
	goto StemfordTown_PokemonFanClub_TeamUpsilonIntro_1


StemfordTown_PokemonFanClub_NurseryMan::
# 64 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	lockall
# 65 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	faceplayer
# 66 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StemfordTown_PokemonFanClub_Movement_LookUp
# 68 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	showmonpic SPECIES_EGG, 10, 3
# 69 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_0, MSGBOX_YESNO
# 71 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq StemfordTown_PokemonFanClub_NurseryMan_2
StemfordTown_PokemonFanClub_NurseryMan_1:
# 79 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	hidemonpic
# 80 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	getpartysize
# 82 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq StemfordTown_PokemonFanClub_NurseryMan_5
# 88 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_3
# 90 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	giveegg SPECIES_TOGEPI
# 91 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	setmonmove PARTY_SIZE, 2, MOVE_MOONBLAST
# 92 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	setmonmove PARTY_SIZE, 3, MOVE_METRONOME
# 94 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	playfanfare MUS_EVOLVED
# 95 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_4
# 96 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	waitfanfare
# 98 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_Text_NurseryMan2
# 99 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	closemessage
# 101 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	fadescreen FADE_TO_BLACK
# 102 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	playse SE_DOOR
# 103 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	removeobject 6
# 104 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_TOGEPI_EGG
# 105 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	waitse
# 106 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	fadescreen FADE_FROM_BLACK
StemfordTown_PokemonFanClub_NurseryMan_4:
# 109 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	releaseall
	return

StemfordTown_PokemonFanClub_NurseryMan_2:
StemfordTown_PokemonFanClub_NurseryMan_9:
# 74 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_1, MSGBOX_YESNO
# 76 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne StemfordTown_PokemonFanClub_NurseryMan_9
	goto StemfordTown_PokemonFanClub_NurseryMan_1

StemfordTown_PokemonFanClub_NurseryMan_5:
# 84 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	msgbox StemfordTown_PokemonFanClub_NurseryMan_Text_2
	goto StemfordTown_PokemonFanClub_NurseryMan_4


# 112 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
StemfordTown_PokemonFanClub_Movement_LookDown:
# 113 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_in_place_faster_down
	step_end

# 116 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
StemfordTown_PokemonFanClub_Movement_LookRight:
# 117 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_in_place_faster_right
	step_end

# 120 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
StemfordTown_PokemonFanClub_Movement_LookUp:
# 121 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_in_place_faster_up
	step_end

# 125 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
StemfordTown_PokemonFanClub_Movement_ApproachGrunt1:
# 126 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_up
	step_end

# 129 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
StemfordTown_PokemonFanClub_Movement_ApproachGrunt2:
# 130 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_up
# 131 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_right
# 132 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_in_place_faster_up
	step_end

# 135 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
StemfordTown_PokemonFanClub_Movement_MoveOutOfWay:
# 136 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	face_right
# 137 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	lock_facing_direction
# 138 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_left
# 139 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	unlock_facing_direction
	step_end

# 142 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
StemfordTown_PokemonFanClub_Movement_RunAway:
# 143 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_down
# 143 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	walk_down
	step_end

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

StemfordTown_PokemonFanClub_TeamUpsilonIntro_Text_3:
# 42 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Grunt$"

StemfordTown_PokemonFanClub_NurseryMan_Text_0:
# 69 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Oh, I know! Why don't you take the egg\n"
	.string "with you? I think it would be safer with\l"
	.string "you.$"

StemfordTown_PokemonFanClub_NurseryMan_Text_1:
# 74 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "But... I'm scared I won't be able to\n"
	.string "protect it from Team Upsilon...$"

StemfordTown_PokemonFanClub_NurseryMan_Text_2:
# 84 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Looks like you don't have any room in\n"
	.string "your party for the Egg.$"

StemfordTown_PokemonFanClub_NurseryMan_Text_3:
# 88 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Thank you, {PLAYER}.\n"
	.string "I feel much better knowing it's with a\l"
	.string "capable Trainer like you.$"

StemfordTown_PokemonFanClub_NurseryMan_Text_4:
# 95 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "You received the Egg!$"

StemfordTown_PokemonFanClub_Text_UpsilonIntro_NurseryManHelp::
# 146 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "Oh, thank goodness there's a trainer\n"
	.string "here! There's trouble!\p"
	.string "Some thug has come to steal my precious\n"
	.string "Pokémon Egg!\p"
	.string "Please, you have to help me!$"

StemfordTown_PokemonFanClub_Text_UpsilonGrunt1::
# 153 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
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
# 164 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "You got lucky this time!$"

StemfordTown_PokemonFanClub_Text_UpsilonGrunt2::
# 169 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "But don't think you've seen the last of\n"
	.string "Team Upsilon!\p"
	.string "You can count on that!$"

StemfordTown_PokemonFanClub_Text_NurseryMan1::
# 175 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "You saved this Egg!\n"
	.string "I don't know what I would have done if\l"
	.string "they had taken it.\p"
	.string "Please, what's your name? I want to\n"
	.string "thank you properly.\p"
	.string "... ... ...\n"
	.string "{PLAYER}?\p"
	.string "Thank you, {PLAYER}.\n"
	.string "I'm the man that runs the Pokémon\l"
	.string "Nursery back on Route 303.\p"
	.string "This Egg belongs to a very rare\n"
	.string "Pokémon, and I was going to keep it\l"
	.string "safe here at the Fan Club.\p"
	.string "But now I'm worried that Team Upsilon\n"
	.string "will come back for it...$"

StemfordTown_PokemonFanClub_Text_NurseryMan2::
# 185 "data/maps/StemfordTown_PokemonFanClub/scripts.pory"
	.string "I hope you can raise my little Eggy to\n"
	.string "be strong and healthy.\p"
	.string "I'm going to go back to the Nursery now.\n"
	.string "The interns I left in charge are\l"
	.string "probably getting into trouble without\l"
	.string "me.\p"
	.string "Thank you again, {PLAYER}. Please\n"
	.string "stop by the Nursery sometime!$"
