Route302_MapScripts::
	.byte 0


Route302_Trigger_RivalEncounter1::
# 13 "data/maps/Route302/scripts.pory"
	lockall
# 15 "data/maps/Route302/scripts.pory"
	removeobject 6
# 17 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 18 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route302/scripts.pory"
	playse SE_PIN
# 20 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 21 "data/maps/Route302/scripts.pory"
	waitse
# 22 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route302/scripts.pory"
	delay 16
# 25 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Rival_1
# 26 "data/maps/Route302/scripts.pory"
	closemessage
# 28 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 29 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route302/scripts.pory"
	call Route302_Trigger_RivalEncounter
	return


Route302_Trigger_RivalEncounter2::
# 35 "data/maps/Route302/scripts.pory"
	lockall
# 37 "data/maps/Route302/scripts.pory"
	removeobject 6
# 39 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 40 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route302/scripts.pory"
	playse SE_PIN
# 42 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 43 "data/maps/Route302/scripts.pory"
	waitse
# 44 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route302/scripts.pory"
	delay 16
# 47 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Rival_1
# 48 "data/maps/Route302/scripts.pory"
	closemessage
# 50 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route302_Movement_RivalEncounter_PlayerNoticeRival
# 51 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route302/scripts.pory"
	call Route302_Trigger_RivalEncounter
	return


Route302_Trigger_RivalEncounter::
# 57 "data/maps/Route302/scripts.pory"
	addobject 6
# 58 "data/maps/Route302/scripts.pory"
	setobjectxy 6, 12, 22
# 60 "data/maps/Route302/scripts.pory"
	checkplayergender
# 61 "data/maps/Route302/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route302_Trigger_RivalEncounter_2
# 67 "data/maps/Route302/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
Route302_Trigger_RivalEncounter_1:
# 70 "data/maps/Route302/scripts.pory"
	applymovement 6, Route302_Movement_RivalEncounter_RivalApproachPlayer
# 71 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_RivalEncounter_Text_0
# 74 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Rival_2
# 75 "data/maps/Route302/scripts.pory"
	closemessage
# 77 "data/maps/Route302/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route302_Movement_RivalEncounter_PlayerGoToDaycare
# 78 "data/maps/Route302/scripts.pory"
	applymovement 6, Route302_Movement_RivalEncounter_RivalGoToDaycare
# 79 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_RivalEncounter_Text_0
# 82 "data/maps/Route302/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route302_Trigger_RivalEncounter_6
# 88 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Holly_1
Route302_Trigger_RivalEncounter_5:
# 90 "data/maps/Route302/scripts.pory"
	closemessage
# 92 "data/maps/Route302/scripts.pory"
	playse SE_PIN
# 93 "data/maps/Route302/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 94 "data/maps/Route302/scripts.pory"
	waitse
# 95 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route302/scripts.pory"
	delay 16
# 98 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_RivalEncounter_Text_0
# 99 "data/maps/Route302/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route302_Trigger_RivalEncounter_10
# 105 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Holly_2
Route302_Trigger_RivalEncounter_9:
# 107 "data/maps/Route302/scripts.pory"
	closemessage
# 109 "data/maps/Route302/scripts.pory"
	applymovement 6, Route302_Movement_RivalEncounter_RivalLeave
# 110 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route302/scripts.pory"
	fadedefaultbgm
# 114 "data/maps/Route302/scripts.pory"
	removeobject 6
# 115 "data/maps/Route302/scripts.pory"
	setflag FLAG_HIDE_ROUTE_302_RIVAL
# 116 "data/maps/Route302/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_302_ASTER
# 117 "data/maps/Route302/scripts.pory"
	setvar VAR_ROUTE302_STATE, 1
# 119 "data/maps/Route302/scripts.pory"
	releaseall
	return

Route302_Trigger_RivalEncounter_2:
# 63 "data/maps/Route302/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	goto Route302_Trigger_RivalEncounter_1

Route302_Trigger_RivalEncounter_6:
# 84 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Caden_1
	goto Route302_Trigger_RivalEncounter_5

Route302_Trigger_RivalEncounter_10:
# 101 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_RivalEncounter_Caden_2
	goto Route302_Trigger_RivalEncounter_9


# 122 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_PlayerNoticeRival:
# 123 "data/maps/Route302/scripts.pory"
	walk_up
# 123 "data/maps/Route302/scripts.pory"
	walk_up
# 124 "data/maps/Route302/scripts.pory"
	walk_left
# 125 "data/maps/Route302/scripts.pory"
	walk_in_place_up
	step_end

# 128 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_RivalApproachPlayer:
# 129 "data/maps/Route302/scripts.pory"
	walk_fast_down
# 129 "data/maps/Route302/scripts.pory"
	walk_fast_down
# 129 "data/maps/Route302/scripts.pory"
	walk_fast_down
# 129 "data/maps/Route302/scripts.pory"
	walk_fast_down
# 129 "data/maps/Route302/scripts.pory"
	walk_fast_down
	step_end

# 132 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_PlayerGoToDaycare:
# 133 "data/maps/Route302/scripts.pory"
	walk_right
# 133 "data/maps/Route302/scripts.pory"
	walk_right
# 133 "data/maps/Route302/scripts.pory"
	walk_right
# 133 "data/maps/Route302/scripts.pory"
	walk_right
# 133 "data/maps/Route302/scripts.pory"
	walk_right
# 133 "data/maps/Route302/scripts.pory"
	walk_right
# 133 "data/maps/Route302/scripts.pory"
	walk_right
# 133 "data/maps/Route302/scripts.pory"
	walk_right
# 134 "data/maps/Route302/scripts.pory"
	walk_in_place_up
# 135 "data/maps/Route302/scripts.pory"
	delay_16
	step_end

# 138 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_RivalGoToDaycare:
# 139 "data/maps/Route302/scripts.pory"
	walk_right
# 139 "data/maps/Route302/scripts.pory"
	walk_right
# 139 "data/maps/Route302/scripts.pory"
	walk_right
# 139 "data/maps/Route302/scripts.pory"
	walk_right
# 139 "data/maps/Route302/scripts.pory"
	walk_right
# 139 "data/maps/Route302/scripts.pory"
	walk_right
# 139 "data/maps/Route302/scripts.pory"
	walk_right
# 139 "data/maps/Route302/scripts.pory"
	walk_right
# 140 "data/maps/Route302/scripts.pory"
	walk_in_place_down
# 141 "data/maps/Route302/scripts.pory"
	delay_16
	step_end

# 144 "data/maps/Route302/scripts.pory"
Route302_Movement_RivalEncounter_RivalLeave:
# 145 "data/maps/Route302/scripts.pory"
	walk_left
# 145 "data/maps/Route302/scripts.pory"
	walk_left
# 145 "data/maps/Route302/scripts.pory"
	walk_left
# 145 "data/maps/Route302/scripts.pory"
	walk_left
# 145 "data/maps/Route302/scripts.pory"
	walk_left
# 145 "data/maps/Route302/scripts.pory"
	walk_left
# 145 "data/maps/Route302/scripts.pory"
	walk_left
# 145 "data/maps/Route302/scripts.pory"
	walk_left
	step_end

Route302_Trigger_AsterFirstBattle1::
# 206 "data/maps/Route302/scripts.pory"
	lockall
# 208 "data/maps/Route302/scripts.pory"
	addobject 5
# 209 "data/maps/Route302/scripts.pory"
	playse SE_PIN
# 210 "data/maps/Route302/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 211 "data/maps/Route302/scripts.pory"
	waitse
# 212 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route302/scripts.pory"
	delay 16
# 214 "data/maps/Route302/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterDown
# 215 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_AsterFirstBattle1_Text_0
# 218 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_AsterFirstBattle_Aster_1
# 219 "data/maps/Route302/scripts.pory"
	closemessage
# 221 "data/maps/Route302/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, TRUE
# 223 "data/maps/Route302/scripts.pory"
	applymovement 5, Route302_Movement_AsterFirstBattle_AsterApproachPlayer1
# 224 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route302/scripts.pory"
	call Route302_Trigger_AsterFirstBattle
	return


Route302_Trigger_AsterFirstBattle2::
# 230 "data/maps/Route302/scripts.pory"
	lockall
# 232 "data/maps/Route302/scripts.pory"
	addobject 5
# 233 "data/maps/Route302/scripts.pory"
	playse SE_PIN
# 234 "data/maps/Route302/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 235 "data/maps/Route302/scripts.pory"
	waitse
# 236 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route302/scripts.pory"
	delay 16
# 238 "data/maps/Route302/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterDown
# 239 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route302/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, TRUE
# 243 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_AsterFirstBattle1_Text_0
# 244 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_AsterFirstBattle_Aster_1
# 245 "data/maps/Route302/scripts.pory"
	closemessage
# 247 "data/maps/Route302/scripts.pory"
	applymovement 5, Route302_Movement_AsterFirstBattle_AsterApproachPlayer2
# 248 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route302/scripts.pory"
	call Route302_Trigger_AsterFirstBattle
	return


Route302_Trigger_AsterFirstBattle::
# 254 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_AsterFirstBattle1_Text_0
# 255 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_AsterFirstBattle_Aster_2
# 257 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_AsterFirstBattle_Text_0
# 258 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_AsterFirstBattle_Aster_3
# 260 "data/maps/Route302/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route302_Trigger_AsterFirstBattle_Text_1, Route302_Trigger_AsterFirstBattle_Text_2
# 263 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_AsterFirstBattle_Aster_4
# 265 "data/maps/Route302/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route302_Trigger_AsterFirstBattle_Text_3, Route302_Trigger_AsterFirstBattle_Text_4
# 268 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_AsterFirstBattle_Aster_5
# 269 "data/maps/Route302/scripts.pory"
	closemessage
# 271 "data/maps/Route302/scripts.pory"
	trainerbattle_no_intro TRAINER_ASTER_ROUTE_302, Route302_Text_AsterDefeated
# 273 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_AsterFirstBattle_Text_0
# 274 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_AsterFirstBattle_Aster_6
# 275 "data/maps/Route302/scripts.pory"
	closemessage
# 277 "data/maps/Route302/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 279 "data/maps/Route302/scripts.pory"
	speakername Route302_Trigger_AsterFirstBattle_Text_0
# 280 "data/maps/Route302/scripts.pory"
	msgbox Route302_Text_AsterFirstBattle_Aster_7
# 281 "data/maps/Route302/scripts.pory"
	closemessage
# 283 "data/maps/Route302/scripts.pory"
	applymovement 5, Route302_Movement_AsterFirstBattle_AsterLeave
# 284 "data/maps/Route302/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route302/scripts.pory"
	removeobject 5
# 287 "data/maps/Route302/scripts.pory"
	setflag FLAG_HIDE_ROUTE_302_ASTER
# 288 "data/maps/Route302/scripts.pory"
	clearflag FLAG_HIDE_ZIRCON_TOWN_SPEECH_NPCS
# 289 "data/maps/Route302/scripts.pory"
	setvar VAR_ROUTE302_STATE, 2
# 291 "data/maps/Route302/scripts.pory"
	fadedefaultbgm
# 292 "data/maps/Route302/scripts.pory"
	releaseall
	return


# 295 "data/maps/Route302/scripts.pory"
Route302_Movement_AsterFirstBattle_AsterApproachPlayer1:
# 296 "data/maps/Route302/scripts.pory"
	walk_down
# 296 "data/maps/Route302/scripts.pory"
	walk_down
	step_end

# 299 "data/maps/Route302/scripts.pory"
Route302_Movement_AsterFirstBattle_AsterApproachPlayer2:
# 300 "data/maps/Route302/scripts.pory"
	walk_right
# 301 "data/maps/Route302/scripts.pory"
	walk_down
# 301 "data/maps/Route302/scripts.pory"
	walk_down
	step_end

# 304 "data/maps/Route302/scripts.pory"
Route302_Movement_AsterFirstBattle_AsterLeave:
# 305 "data/maps/Route302/scripts.pory"
	walk_up
# 305 "data/maps/Route302/scripts.pory"
	walk_up
# 305 "data/maps/Route302/scripts.pory"
	walk_up
# 305 "data/maps/Route302/scripts.pory"
	walk_up
# 305 "data/maps/Route302/scripts.pory"
	walk_up
# 305 "data/maps/Route302/scripts.pory"
	walk_up
	step_end

Route302_Trigger_RivalEncounter_Text_0:
# 73 "data/maps/Route302/scripts.pory"
	.string "{RIVAL}$"

Route302_Trigger_AsterFirstBattle1_Text_0:
# 217 "data/maps/Route302/scripts.pory"
	.string "???$"

Route302_Trigger_AsterFirstBattle_Text_0:
# 257 "data/maps/Route302/scripts.pory"
	.string "Aster$"

Route302_Trigger_AsterFirstBattle_Text_1:
# 261 "data/maps/Route302/scripts.pory"
	.string "...Who?$"

Route302_Trigger_AsterFirstBattle_Text_2:
# 261 "data/maps/Route302/scripts.pory"
	.string "Aster?$"

Route302_Trigger_AsterFirstBattle_Text_3:
# 266 "data/maps/Route302/scripts.pory"
	.string "I'm {PLAYER}!$"

Route302_Trigger_AsterFirstBattle_Text_4:
# 266 "data/maps/Route302/scripts.pory"
	.string "...It's {PLAYER}.$"

Route302_Text_RivalEncounter_Rival_1::
# 148 "data/maps/Route302/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Wait up!$"

Route302_Text_RivalEncounter_Rival_2::
# 152 "data/maps/Route302/scripts.pory"
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
# 162 "data/maps/Route302/scripts.pory"
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
# 173 "data/maps/Route302/scripts.pory"
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
# 184 "data/maps/Route302/scripts.pory"
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
# 194 "data/maps/Route302/scripts.pory"
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

Route302_Text_AsterFirstBattle_Aster_1::
# 309 "data/maps/Route302/scripts.pory"
	.string "Hmph. And who might you be?$"

Route302_Text_AsterFirstBattle_Aster_2::
# 313 "data/maps/Route302/scripts.pory"
	.string "I don't think I've seen you around\n"
	.string "before. And trust me, I remember\l"
	.string "important people.$"

Route302_Text_AsterFirstBattle_Aster_3::
# 317 "data/maps/Route302/scripts.pory"
	.string "I'm Aster. You know, THE Aster--the\n"
	.string "rising star? Surely you've heard of me.$"

Route302_Text_AsterFirstBattle_Aster_4::
# 321 "data/maps/Route302/scripts.pory"
	.string "Tch. Figures.\n"
	.string "Not everyone has good taste.\p"
	.string "Anyway, I can't just let some random\n"
	.string "nobody walk past me without proving\l"
	.string "they belong on this road.\p"
	.string "What's your name, anyway?$"

Route302_Text_AsterFirstBattle_Aster_5::
# 327 "data/maps/Route302/scripts.pory"
	.string "Hah! {PLAYER}, huh?\n"
	.string "Doesn't exactly scream 'future\l"
	.string "champion,' but I guess I've heard worse.\p"
	.string "Oh? Look at that--you've got a Gym\n"
	.string "Badge already. Not bad, not bad.\p"
	.string "Well, {PLAYER}, I'll give you a chance\n"
	.string "to impress me. A battle--right here,\l"
	.string "right now.\p"
	.string "Try not to waste my time.$"

Route302_Text_AsterDefeated::
# 334 "data/maps/Route302/scripts.pory"
	.string "What!? No--there's no way I lost to\n"
	.string "some random nobody!$"

Route302_Text_AsterFirstBattle_Aster_6::
# 338 "data/maps/Route302/scripts.pory"
	.string "Hmph... Maybe you're not a complete\n"
	.string "pushover after all.\p"
	.string "But don't get too comfortable. This was\n"
	.string "just a warm-up.\p"
	.string "I never lose twice. So next time, I'll\n"
	.string "crush you.$"

Route302_Text_AsterFirstBattle_Aster_7::
# 344 "data/maps/Route302/scripts.pory"
	.string "...\p"
	.string "...Guess I'll have to remember your name\n"
	.string "after all, {PLAYER}.\p"
	.string "Try not to embarrass yourself before\n"
	.string "our next battle.$"
