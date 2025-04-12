Route303_MapScripts::
# 8 "data/maps/Route303/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route303_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route303_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Route303/scripts.pory"
	map_script_2 VAR_ROUTE303_STATE, 0, Route303_MapScript_SeeJasmine
	.2byte 0


Route303_MapScript_SeeJasmine::
# 15 "data/maps/Route303/scripts.pory"
	lockall
# 17 "data/maps/Route303/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 18 "data/maps/Route303/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route303/scripts.pory"
	playse SE_PIN
# 21 "data/maps/Route303/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 22 "data/maps/Route303/scripts.pory"
	waitse
# 23 "data/maps/Route303/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route303/scripts.pory"
	delay 32
# 25 "data/maps/Route303/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/Route303/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route303/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 29 "data/maps/Route303/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_eq Route303_MapScript_SeeJasmine_2
# 35 "data/maps/Route303/scripts.pory"
	applymovement 1, Route303_MapScript_SeeJasmine_Movement_1
Route303_MapScript_SeeJasmine_1:
# 37 "data/maps/Route303/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route303/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 40 "data/maps/Route303/scripts.pory"
	speakername Route303_MapScript_SeeJasmine_Text_0
# 41 "data/maps/Route303/scripts.pory"
	msgbox Route303_Text_Jasmine_1
# 42 "data/maps/Route303/scripts.pory"
	speakername Route303_MapScript_SeeJasmine_Text_1
# 43 "data/maps/Route303/scripts.pory"
	msgbox Route303_Text_Jasmine_2
# 44 "data/maps/Route303/scripts.pory"
	closemessage
# 46 "data/maps/Route303/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route303_MapScript_SeeJasmine_Movement_2
# 47 "data/maps/Route303/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route303/scripts.pory"
	speakername Route303_MapScript_SeeJasmine_Text_1
# 50 "data/maps/Route303/scripts.pory"
	msgbox Route303_Text_Jasmine_3
# 51 "data/maps/Route303/scripts.pory"
	closemessage
# 53 "data/maps/Route303/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 55 "data/maps/Route303/scripts.pory"
	speakername Route303_MapScript_SeeJasmine_Text_1
# 56 "data/maps/Route303/scripts.pory"
	msgbox Route303_Text_Jasmine_4
# 57 "data/maps/Route303/scripts.pory"
	closemessage
# 59 "data/maps/Route303/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/Route303/scripts.pory"
	removeobject 1
# 61 "data/maps/Route303/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 62 "data/maps/Route303/scripts.pory"
	setvar VAR_ROUTE303_STATE, 1
# 63 "data/maps/Route303/scripts.pory"
	playse SE_EXIT
# 64 "data/maps/Route303/scripts.pory"
	waitse
# 65 "data/maps/Route303/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 67 "data/maps/Route303/scripts.pory"
	releaseall
	return

Route303_MapScript_SeeJasmine_2:
# 31 "data/maps/Route303/scripts.pory"
	applymovement 1, Route303_MapScript_SeeJasmine_Movement_0
	goto Route303_MapScript_SeeJasmine_1


Route303_EventScript_Susan::
# 107 "data/maps/Route303/scripts.pory"
	trainerbattle_single TRAINER_SUSAN, Route303_Text_SusanIntro, Route303_Text_SusanDefeat
# 108 "data/maps/Route303/scripts.pory"
	msgbox Route303_Text_SusanPostBattle, MSGBOX_AUTOCLOSE
	return


# 31 "data/maps/Route303/scripts.pory"
Route303_MapScript_SeeJasmine_Movement_0:
# 31 "data/maps/Route303/scripts.pory"
	walk_left
# 31 "data/maps/Route303/scripts.pory"
	walk_down
# 31 "data/maps/Route303/scripts.pory"
	walk_down
	step_end

# 35 "data/maps/Route303/scripts.pory"
Route303_MapScript_SeeJasmine_Movement_1:
# 35 "data/maps/Route303/scripts.pory"
	walk_down
# 35 "data/maps/Route303/scripts.pory"
	walk_down
	step_end

# 46 "data/maps/Route303/scripts.pory"
Route303_MapScript_SeeJasmine_Movement_2:
# 46 "data/maps/Route303/scripts.pory"
	walk_in_place_slow_up
	step_end

Route303_MapScript_SeeJasmine_Text_0:
# 40 "data/maps/Route303/scripts.pory"
	.string "???$"

Route303_MapScript_SeeJasmine_Text_1:
# 42 "data/maps/Route303/scripts.pory"
	.string "Jasmine$"

Route303_Text_Jasmine_1::
# 70 "data/maps/Route303/scripts.pory"
	.string "Oh... hello there.\n"
	.string "You're a Pokémon Trainer... right?\p"
	.string "Sorry... I didn't mean to be strange.\p"
	.string "I'm Jasmine. I'm a Gym Leader from the\n"
	.string "Johto region... Olivine City.$"

Route303_Text_Jasmine_2::
# 76 "data/maps/Route303/scripts.pory"
	.string "You know... you remind me of someone.\n"
	.string "A quiet boy I met back home.\p"
	.string "He was kind, and strong.\n"
	.string "He... won the Pokémon League, actually.\p"
	.string "There was something about the way he\n"
	.string "battled--with heart, with care.\p"
	.string "I feel like you give off that same\n"
	.string "energy.\p"
	.string "I... I don't mean to be rude.\p"
	.string "Right now, I'm here in Avaro, mentoring a\n"
	.string "new Gym Leader in Spinel City.\p"
	.string "Her name is Melody and she specializes\n"
	.string "in Fairy-type Pokémon.\p"
	.string "She's... very talented but she's a bit of\n"
	.string "a crybaby.\p"
	.string "I want to... help her become a great Gym\n"
	.string "Leader.\p"
	.string "I know she can do it.\n"
	.string "But... I don't want to push her too hard.\p"
	.string "I... I'm sorry, I... I'm just rambling.\p"
	.string "Can I... ask your name?$"

Route303_Text_Jasmine_3::
# 91 "data/maps/Route303/scripts.pory"
	.string "Oh... I see.\p"
	.string "It's nice to meet you, {PLAYER}.\p"
	.string "I know this is a bit strange, but... I\n"
	.string "have something for you.$"

Route303_Text_Jasmine_4::
# 97 "data/maps/Route303/scripts.pory"
	.string "This TM contains Hidden Power.\n"
	.string "It's a popular move back in Johto.\p"
	.string "Hidden Power changes type depending on\n"
	.string "the Pokémon that uses it, so it truly\l"
	.string "reflects the user's inner strength.\p"
	.string "I... I hope you find it useful.\p"
	.string "Anyway... I won't keep you.\n"
	.string "Melody's Gym just opened, and I think\l"
	.string "you'd be a great first opponent for her,\l"
	.string "{PLAYER}.\p"
	.string "Take care... and thank you for listening.$"

Route303_Text_SusanIntro::
# 111 "data/maps/Route303/scripts.pory"
	.string "It's a beautiful day for a picnic!\n"
	.string "It's also a beautiful day for a battle!$"

Route303_Text_SusanDefeat::
# 115 "data/maps/Route303/scripts.pory"
	.string "...I think I'll stick to picnics from now\n"
	.string "on.$"

Route303_Text_SusanPostBattle::
# 119 "data/maps/Route303/scripts.pory"
	.string "You might have beaten me, but I still\n"
	.string "have a picnic to enjoy!$"
