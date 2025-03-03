Route302_MapScripts::
	.byte 0


Route302_Trigger_RivalEncounter1::
# 12 "data/maps/Route302/scripts.pory"
	lockall
# 14 "data/maps/Route302/scripts.pory"
	removeobject 7
# 16 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 17 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route302/scripts.pory"
	playse SE_PIN
# 19 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 20 "data/maps/Route302/scripts.pory"
	waitse
# 21 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route302/scripts.pory"
	delay 16
# 24 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Rival_1
# 25 "data/maps/Route302/scripts.pory"
	closemessage
# 27 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 28 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route302/scripts.pory"
	call Route302_Trigger_RivalEncounter
	return


Route302_Trigger_RivalEncounter2::
# 34 "data/maps/Route302/scripts.pory"
	lockall
# 36 "data/maps/Route302/scripts.pory"
	removeobject 7
# 38 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route302/scripts.pory"
	playse SE_PIN
# 41 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 42 "data/maps/Route302/scripts.pory"
	waitse
# 43 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route302/scripts.pory"
	delay 16
# 46 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Rival_1
# 47 "data/maps/Route302/scripts.pory"
	closemessage
# 49 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route302_Movement_RivalEncounter_PlayerNoticeRival
# 50 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route302/scripts.pory"
	call Route302_Trigger_RivalEncounter
	return


Route302_Trigger_RivalEncounter::
# 56 "data/maps/Route302/scripts.pory"
	addobject 7
# 57 "data/maps/Route302/scripts.pory"
	setobjectxy 7, 12, 22
# 59 "data/maps/Route302/scripts.pory"
	checkplayergender
# 60 "data/maps/Route302/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route302_Trigger_RivalEncounter_2
# 66 "data/maps/Route302/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
Route302_Trigger_RivalEncounter_1:
# 69 "data/maps/Route302/scripts.pory"
	applymovement 7, Route302_Movement_RivalEncounter_RivalApproachPlayer
# 70 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_RivalEncounter_Text_0
# 73 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Rival_2
# 74 "data/maps/Route302/scripts.pory"
	closemessage
# 76 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route302_Movement_RivalEncounter_PlayerGoToDaycare
# 77 "data/maps/Route302/scripts.pory"
	applymovement 7, Route302_Movement_RivalEncounter_RivalGoToDaycare
# 78 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_RivalEncounter_Text_0
# 81 "data/maps/Route302/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route302_Trigger_RivalEncounter_6
# 87 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Holly_1
Route302_Trigger_RivalEncounter_5:
# 89 "data/maps/Route302/scripts.pory"
	closemessage
# 91 "data/maps/Route302/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Route302/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 93 "data/maps/Route302/scripts.pory"
	waitse
# 94 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route302/scripts.pory"
	delay 16
# 97 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_RivalEncounter_Text_0
# 98 "data/maps/Route302/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route302_Trigger_RivalEncounter_10
# 104 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Holly_2
Route302_Trigger_RivalEncounter_9:
# 106 "data/maps/Route302/scripts.pory"
	closemessage
# 108 "data/maps/Route302/scripts.pory"
	applymovement 7, Route302_Movement_RivalEncounter_RivalLeave
# 109 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route302/scripts.pory"
	fadedefaultbgm
# 113 "data/maps/Route302/scripts.pory"
	removeobject 7
# 114 "data/maps/Route302/scripts.pory"
	setflag FLAG_HIDE_ROUTE_302_RIVAL
# 115 "data/maps/Route302/scripts.pory"
	setvar VAR_ROUTE302_STATE, 1
# 117 "data/maps/Route302/scripts.pory"
	releaseall
	return

Route302_Trigger_RivalEncounter_2:
# 62 "data/maps/Route302/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	goto Route302_Trigger_RivalEncounter_1

Route302_Trigger_RivalEncounter_6:
# 83 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Caden_1
	goto Route302_Trigger_RivalEncounter_5

Route302_Trigger_RivalEncounter_10:
# 100 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Caden_2
	goto Route302_Trigger_RivalEncounter_9


# 120 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_PlayerNoticeRival:
# 121 "data/maps/Route302/scripts.pory"
	walk_up
# 121 "data/maps/Route302/scripts.pory"
	walk_up
# 122 "data/maps/Route302/scripts.pory"
	walk_left
# 123 "data/maps/Route302/scripts.pory"
	walk_in_place_up
	step_end

# 126 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_RivalApproachPlayer:
# 127 "data/maps/Route302/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route302/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route302/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route302/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route302/scripts.pory"
	walk_fast_down
	step_end

# 130 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_PlayerGoToDaycare:
# 131 "data/maps/Route302/scripts.pory"
	walk_right
# 131 "data/maps/Route302/scripts.pory"
	walk_right
# 131 "data/maps/Route302/scripts.pory"
	walk_right
# 131 "data/maps/Route302/scripts.pory"
	walk_right
# 131 "data/maps/Route302/scripts.pory"
	walk_right
# 131 "data/maps/Route302/scripts.pory"
	walk_right
# 131 "data/maps/Route302/scripts.pory"
	walk_right
# 131 "data/maps/Route302/scripts.pory"
	walk_right
# 132 "data/maps/Route302/scripts.pory"
	walk_in_place_up
# 133 "data/maps/Route302/scripts.pory"
	delay_16
	step_end

# 136 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_RivalGoToDaycare:
# 137 "data/maps/Route302/scripts.pory"
	walk_right
# 137 "data/maps/Route302/scripts.pory"
	walk_right
# 137 "data/maps/Route302/scripts.pory"
	walk_right
# 137 "data/maps/Route302/scripts.pory"
	walk_right
# 137 "data/maps/Route302/scripts.pory"
	walk_right
# 137 "data/maps/Route302/scripts.pory"
	walk_right
# 137 "data/maps/Route302/scripts.pory"
	walk_right
# 137 "data/maps/Route302/scripts.pory"
	walk_right
# 138 "data/maps/Route302/scripts.pory"
	walk_in_place_down
# 139 "data/maps/Route302/scripts.pory"
	delay_16
	step_end

# 142 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_RivalLeave:
# 143 "data/maps/Route302/scripts.pory"
	walk_left
# 143 "data/maps/Route302/scripts.pory"
	walk_left
# 143 "data/maps/Route302/scripts.pory"
	walk_left
# 143 "data/maps/Route302/scripts.pory"
	walk_left
# 143 "data/maps/Route302/scripts.pory"
	walk_left
# 143 "data/maps/Route302/scripts.pory"
	walk_left
# 143 "data/maps/Route302/scripts.pory"
	walk_left
# 143 "data/maps/Route302/scripts.pory"
	walk_left
	step_end

Route302_Trigger_RivalEncounter_Text_0:
# 72 "data/maps/Route302/scripts.pory"
	.string "{RIVAL}$"

Route302_Text_RivalEncounter_Rival_1::
# 146 "data/maps/Route302/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Wait up!$"

Route302_Text_RivalEncounter_Rival_2::
# 150 "data/maps/Route302/scripts.pory"
	.string "So? How'd it go with the Mega Evolution\n"
	.string "Guru? Everything go smoothly?\p"
	.string "...Wait, hold on--Team Eternity? What\n"
	.string "kind of name is that?\p"
	.string "No way. A whole group of weirdos running\n"
	.string "around, trying to steal important\l"
	.string "stuff? Sounds like classic villain\l"
	.string "material to me.\p"
	.string "Well, at least you stopped them this\n"
	.string "time! If they show up again, we'll both\l"
	.string "be ready to take them down!\p"
	.string "Anyway, there's a place I wanna show\n"
	.string "you up ahead. It's a little out of the\l"
	.string "way, but I think you'll like it.\p"
	.string "Let's go!$"

Route302_Text_RivalEncounter_Caden_1::
# 160 "data/maps/Route302/scripts.pory"
	.string "And here we are--the Pokémon Daycare!\p"
	.string "This is where you can leave two Pokémon\n"
	.string "to hang out and maybe even make an Egg!\p"
	.string "It's a great place to leave Pokémon you\n"
	.string "want to train up, or to breed Pokémon\l"
	.string "with good stats.\p"
	.string "My uncle runs this place, so I've been\n"
	.string "here a bunch of times with my parents.\p"
	.string "He's always going on about how raising\n"
	.string "Pokémon properly is just as important\l"
	.string "as battling with them.\p"
	.string "Guess I never really thought much\n"
	.string "about it before. I mean, isn't the whole\l"
	.string "point of training just getting\l"
	.string "stronger?\p"
	.string "...But hey, I guess it makes sense. I\n"
	.string "mean, if you're gonna be a good Trainer,\l"
	.string "you gotta be a good caretaker too,\l"
	.string "right?$"

Route302_Text_RivalEncounter_Holly_1::
# 171 "data/maps/Route302/scripts.pory"
	.string "Aaand here we are!\n"
	.string "Welcome to the Pokémon Daycare!\p"
	.string "You can leave two Pokémon here to hang\n"
	.string "out and maybe even make an Egg!\p"
	.string "It's a great place to leave Pokémon you\n"
	.string "want to train up.\p"
	.string "My uncle runs it, so I used to visit all\n"
	.string "the time with my mom.\p"
	.string "He always says raising Pokémon is more\n"
	.string "than just battling--it's about helping\l"
	.string "them grow in their own way.\p"
	.string "I never really thought about it like\n"
	.string "that before. I always just wanted to\l"
	.string "get stronger.\p"
	.string "I guess it's true, though. If you're\n"
	.string "gonna be a good Trainer, you gotta take\l"
	.string "good care of your Pokémon too, right?$"

Route302_Text_RivalEncounter_Caden_2::
# 182 "data/maps/Route302/scripts.pory"
	.string "Oh yeah! Almost forgot--\n"
	.string "Finally got my first Gym Badge from Geo!\p"
	.string "Took me a couple of tries, not gonna lie.\n"
	.string "That guy is tough. He actually called me\l"
	.string "out for just charging in without a plan!\p"
	.string "But hey, a win's a win, right? And now I'm\n"
	.string "one step closer to the Pokémon League!\p"
	.string "Anyway, I should get moving. I wanna\n"
	.string "hurry up and get to Starridge City. I\l"
	.string "heard there's a Gym there that's all\l"
	.string "about Fairy-type Pokémon!\p"
	.string "Oh, but don't think you're leaving me in\n"
	.string "the dust!\p"
	.string "Next time we battle, I'm coming out on\n"
	.string "top, {PLAYER}!$"

Route302_Text_RivalEncounter_Holly_2::
# 192 "data/maps/Route302/scripts.pory"
	.string "Oh! That reminds me--\n"
	.string "I finally beat Geo and got my first\l"
	.string "badge!\p"
	.string "He's really smart, you know?\n"
	.string "I had to change my whole approach just\l"
	.string "to keep up!\p"
	.string "I get why he's a teacher--he doesn't\n"
	.string "just test your Pokémon, he tests you\l"
	.string "too!\p"
	.string "I didn't think I'd be able to do it, but I\n"
	.string "did! And now I can explore more of the\l"
	.string "region!\p"
	.string "We've both got a long way to go, but... I\n"
	.string "think we're gonna do amazing things,\l"
	.string "{PLAYER}.\p"
	.string "I'm heading to Starridge City next. I\n"
	.string "heard there's a Gym there that's all\l"
	.string "about Fairy-type Pokémon!\p"
	.string "Oh, and next time we battle? I'll be\n"
	.string "stronger, so you'd better be ready!$"
