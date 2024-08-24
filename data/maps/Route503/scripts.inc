Route503_MapScripts::
# 9 "data/maps/Route503/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route503_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route503_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Route503/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route503_Trigger_MeetDio1::
# 15 "data/maps/Route503/scripts.pory"
	lockall
# 17 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_0
# 18 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetDio1_Text_1
# 19 "data/maps/Route503/scripts.pory"
	closemessage
# 21 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 22 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetDio1_Text_3
# 23 "data/maps/Route503/scripts.pory"
	closemessage
# 25 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerApproachRival1
# 26 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route503/scripts.pory"
	goto Route503_MeetDio
	return


Route503_Trigger_MeetDio2::
# 32 "data/maps/Route503/scripts.pory"
	lockall
# 34 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_0
# 35 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetDio1_Text_1
# 36 "data/maps/Route503/scripts.pory"
	closemessage
# 38 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 39 "data/maps/Route503/scripts.pory"
	msgbox Route503_Trigger_MeetDio1_Text_3
# 40 "data/maps/Route503/scripts.pory"
	closemessage
# 42 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerApproachRival2
# 43 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route503/scripts.pory"
	goto Route503_MeetDio
	return


# 48 "data/maps/Route503/scripts.pory"
Route503_Movement_PlayerApproachRival1:
# 49 "data/maps/Route503/scripts.pory"
	walk_right
# 49 "data/maps/Route503/scripts.pory"
	walk_right
# 49 "data/maps/Route503/scripts.pory"
	walk_right
	step_end

# 52 "data/maps/Route503/scripts.pory"
Route503_Movement_PlayerApproachRival2:
# 53 "data/maps/Route503/scripts.pory"
	walk_right
# 54 "data/maps/Route503/scripts.pory"
	walk_up
# 55 "data/maps/Route503/scripts.pory"
	walk_right
# 55 "data/maps/Route503/scripts.pory"
	walk_right
	step_end

Route503_MeetDio::
# 59 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceUp
# 60 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 63 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival1
# 65 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceRight
# 67 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_0
# 68 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Dio1
# 70 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 71 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival2, MSGBOX_YESNO
# 73 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceUp
# 75 "data/maps/Route503/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route503_MeetDio_2
Route503_MeetDio_1:
# 84 "data/maps/Route503/scripts.pory"
	msgbox Route503_MeetDio_Text_0
# 86 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceRight
# 88 "data/maps/Route503/scripts.pory"
	speakername Route503_MeetDio_Text_1
# 89 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Dio2
# 91 "data/maps/Route503/scripts.pory"
	trainerbattle_no_intro TRAINER_DIO_ROUTE_503, Route503_Text_DioDefeated
# 93 "data/maps/Route503/scripts.pory"
	applymovement 8, Route503_DioStepBack
# 94 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route503/scripts.pory"
	speakername Route503_MeetDio_Text_1
# 97 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Dio3
# 98 "data/maps/Route503/scripts.pory"
	closemessage
# 100 "data/maps/Route503/scripts.pory"
	applymovement 8, Route503_DioLeave
# 101 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_RivalFaceUp
# 103 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalFaceUp
# 104 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route503/scripts.pory"
	removeobject 8
# 109 "data/maps/Route503/scripts.pory"
	speakername Route503_MeetDio_Text_1
# 110 "data/maps/Route503/scripts.pory"
	msgbox Route503_MeetDio_Text_2
# 111 "data/maps/Route503/scripts.pory"
	closemessage
# 113 "data/maps/Route503/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route503_Movement_PlayerFaceDown
# 115 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 116 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival4
# 117 "data/maps/Route503/scripts.pory"
	closemessage
# 119 "data/maps/Route503/scripts.pory"
	switch VAR_STARTER_MON
# 120 "data/maps/Route503/scripts.pory"
	case 0, Route503_MeetDio_6
# 123 "data/maps/Route503/scripts.pory"
	case 1, Route503_MeetDio_7
# 126 "data/maps/Route503/scripts.pory"
	case 2, Route503_MeetDio_8
Route503_MeetDio_4:
# 131 "data/maps/Route503/scripts.pory"
	speakername Route503_Trigger_MeetDio1_Text_2
# 132 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival5
# 134 "data/maps/Route503/scripts.pory"
	applymovement 9, Route503_RivalLeave
# 135 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route503/scripts.pory"
	removeobject 9
# 138 "data/maps/Route503/scripts.pory"
	setvar VAR_ROUTE503_STATE, 1
# 139 "data/maps/Route503/scripts.pory"
	setflag FLAG_ROUTE_503_METDIO
# 141 "data/maps/Route503/scripts.pory"
	releaseall
	return

Route503_MeetDio_2:
Route503_MeetDio_9:
# 77 "data/maps/Route503/scripts.pory"
	msgbox Route503_Text_MeetDio_Rival3, MSGBOX_YESNO
# 78 "data/maps/Route503/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route503_MeetDio_11
	goto Route503_MeetDio_9

Route503_MeetDio_6:
# 121 "data/maps/Route503/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
	goto Route503_MeetDio_4

Route503_MeetDio_7:
# 124 "data/maps/Route503/scripts.pory"
	giveitem ITEM_CHARCOAL
	goto Route503_MeetDio_4

Route503_MeetDio_8:
# 127 "data/maps/Route503/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
	goto Route503_MeetDio_4

Route503_MeetDio_11:
	goto Route503_MeetDio_1


# 144 "data/maps/Route503/scripts.pory"
Route503_Movement_PlayerFaceDown:
# 145 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_down
	step_end

# 148 "data/maps/Route503/scripts.pory"
Route503_RivalFaceUp:
# 149 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_up
	step_end

# 152 "data/maps/Route503/scripts.pory"
Route503_RivalFaceRight:
# 153 "data/maps/Route503/scripts.pory"
	walk_in_place_faster_right
	step_end

# 156 "data/maps/Route503/scripts.pory"
Route503_DioStepBack:
# 157 "data/maps/Route503/scripts.pory"
	lock_facing_direction
# 158 "data/maps/Route503/scripts.pory"
	walk_right
# 159 "data/maps/Route503/scripts.pory"
	unlock_facing_direction
	step_end

# 162 "data/maps/Route503/scripts.pory"
Route503_DioLeave:
# 163 "data/maps/Route503/scripts.pory"
	walk_left
# 164 "data/maps/Route503/scripts.pory"
	walk_up
# 164 "data/maps/Route503/scripts.pory"
	walk_up
# 164 "data/maps/Route503/scripts.pory"
	walk_up
# 164 "data/maps/Route503/scripts.pory"
	walk_up
# 164 "data/maps/Route503/scripts.pory"
	walk_up
# 164 "data/maps/Route503/scripts.pory"
	walk_up
	step_end

# 167 "data/maps/Route503/scripts.pory"
Route503_RivalLeave:
# 168 "data/maps/Route503/scripts.pory"
	walk_right
# 168 "data/maps/Route503/scripts.pory"
	walk_right
# 168 "data/maps/Route503/scripts.pory"
	walk_right
# 168 "data/maps/Route503/scripts.pory"
	walk_right
# 168 "data/maps/Route503/scripts.pory"
	walk_right
# 168 "data/maps/Route503/scripts.pory"
	walk_right
# 168 "data/maps/Route503/scripts.pory"
	walk_right
# 169 "data/maps/Route503/scripts.pory"
	walk_down
# 169 "data/maps/Route503/scripts.pory"
	walk_down
# 169 "data/maps/Route503/scripts.pory"
	walk_down
# 169 "data/maps/Route503/scripts.pory"
	walk_down
	step_end

Route503_EventScript_Sudowoodo1::
# 235 "data/maps/Route503/scripts.pory"
	goto Route503_Sudowoodo
	return


Route503_Sudowoodo::
# 239 "data/maps/Route503/scripts.pory"
	lock
# 241 "data/maps/Route503/scripts.pory"
	msgbox Route503_Sudowoodo_Text_0
# 243 "data/maps/Route503/scripts.pory"
	checkitem ITEM_WAILMER_PAIL
# 244 "data/maps/Route503/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route503_Sudowoodo_1
# 269 "data/maps/Route503/scripts.pory"
	msgbox Route503_Sudowoodo_Text_6
	return

Route503_Sudowoodo_1:
# 245 "data/maps/Route503/scripts.pory"
	msgbox Route503_Sudowoodo_Text_1, MSGBOX_YESNO
# 247 "data/maps/Route503/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route503_Sudowoodo_4
	return

Route503_Sudowoodo_4:
# 248 "data/maps/Route503/scripts.pory"
	msgbox Route503_Sudowoodo_Text_2
# 249 "data/maps/Route503/scripts.pory"
	closemessage
# 253 "data/maps/Route503/scripts.pory"
	speakername Route503_Sudowoodo_Text_3
# 254 "data/maps/Route503/scripts.pory"
	msgbox Route503_Sudowoodo_Text_4
# 255 "data/maps/Route503/scripts.pory"
	closemessage
# 258 "data/maps/Route503/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route503/scripts.pory"
	speakername Route503_Sudowoodo_Text_3
# 261 "data/maps/Route503/scripts.pory"
	msgbox Route503_Sudowoodo_Text_5
# 262 "data/maps/Route503/scripts.pory"
	closemessage
	return


Route503_Trigger_MeetDio1_Text_0:
# 17 "data/maps/Route503/scripts.pory"
	.string "???$"

Route503_Trigger_MeetDio1_Text_1:
# 18 "data/maps/Route503/scripts.pory"
	.string "What a pathetic excuse for a trainer!\n"
	.string "You're not even worth my time!$"

Route503_Trigger_MeetDio1_Text_2:
# 21 "data/maps/Route503/scripts.pory"
	.string "{RIVAL}$"

Route503_Trigger_MeetDio1_Text_3:
# 22 "data/maps/Route503/scripts.pory"
	.string "What did you just say?$"

Route503_MeetDio_Text_0:
# 84 "data/maps/Route503/scripts.pory"
	.string "That's what I thought!$"

Route503_MeetDio_Text_1:
# 88 "data/maps/Route503/scripts.pory"
	.string "Dio$"

Route503_MeetDio_Text_2:
# 110 "data/maps/Route503/scripts.pory"
	.string "Out of my way, stupid Sudowoodo!$"

Route503_Sudowoodo_Text_0:
# 241 "data/maps/Route503/scripts.pory"
	.string "There's a weird tree blocking the path!$"

Route503_Sudowoodo_Text_1:
# 245 "data/maps/Route503/scripts.pory"
	.string "Use the Wailmer Pail?$"

Route503_Sudowoodo_Text_2:
# 248 "data/maps/Route503/scripts.pory"
	.string "You used the Wailmer Pail!$"

Route503_Sudowoodo_Text_3:
# 253 "data/maps/Route503/scripts.pory"
	.string "Sudowoodo$"

Route503_Sudowoodo_Text_4:
# 254 "data/maps/Route503/scripts.pory"
	.string "Sudowoodo is enraged by the water!$"

Route503_Sudowoodo_Text_5:
# 261 "data/maps/Route503/scripts.pory"
	.string "Sudowoodo attacked!$"

Route503_Sudowoodo_Text_6:
# 269 "data/maps/Route503/scripts.pory"
	.string "It looks like it could be watered with\n"
	.string "something...$"

Route503_Text_MeetDio_Rival1::
# 172 "data/maps/Route503/scripts.pory"
	.string "Oh, it's you, {PLAYER}!\n"
	.string "I'm glad you're here!\p"
	.string "Listen, I was busy working on my\n"
	.string "Pokédex when this guy suddenly\l"
	.string "challenged me to a battle!\p"
	.string "I didn't want to, but he wouldn't take\n"
	.string "no for an answer!\p"
	.string "I tried my best, but I just couldn't\n"
	.string "beat him!$"

Route503_Text_MeetDio_Dio1::
# 182 "data/maps/Route503/scripts.pory"
	.string "That's because you're weak!\n"
	.string "Weak trainers like you need to just give\l"
	.string "up and go home!\p"
	.string "You're not cut out for this!\p"
	.string "I, Dio, on the other hand, am a\n"
	.string "beautiful, powerful trainer!$"

Route503_Text_MeetDio_Rival2::
# 189 "data/maps/Route503/scripts.pory"
	.string "Gah! You're so annoying!\n"
	.string "You know what? I'm going to make you\l"
	.string "pay for this!\p"
	.string "{PLAYER}, go and show him what you're\n"
	.string "made of!\n"
	.string "$"

Route503_Text_MeetDio_Rival3::
# 195 "data/maps/Route503/scripts.pory"
	.string "What's that, {PLAYER}?\n"
	.string "I can't hear you!\p"
	.string "You're going to battle him, right?$"

Route503_Text_MeetDio_Dio2::
# 200 "data/maps/Route503/scripts.pory"
	.string "Hmph! You think you can beat me?\p"
	.string "You don't look AS weak as your friend,\n"
	.string "but you're still no match for me!\p"
	.string "I'll show you what a real trainer is\n"
	.string "capable of!$"

Route503_Text_DioDefeated::
# 207 "data/maps/Route503/scripts.pory"
	.string "What? How could I lose to a weakling\n"
	.string "like you?$"

Route503_Text_MeetDio_Dio3::
# 211 "data/maps/Route503/scripts.pory"
	.string "These Pokémon are all useless!\n"
	.string "Useless, I tell you!\p"
	.string "I need to find more powerful Pokémon to\n"
	.string "add to my team!\p"
	.string "I'll be back, and when I am, you'll see\n"
	.string "just how beautiful a powerful trainer\l"
	.string "can be!$"

Route503_Text_MeetDio_Rival4::
# 218 "data/maps/Route503/scripts.pory"
	.string "...What a jerk!\n"
	.string "I can't believe I lost to him!\p"
	.string "Did you see how he treated his Pokémon?\n"
	.string "He's nothing but a bully!\p"
	.string "But, wow! You're amazing, {PLAYER}!\n"
	.string "You really showed him!\p"
	.string "I'm still not sure about this whole\n"
	.string "battling thing, but I'm glad I have you\l"
	.string "to help me out!\p"
	.string "Oh, and I almost forgot! I found this\n"
	.string "while I was out looking for Pokémon!\p"
	.string "I think it's a held item! You should take\n"
	.string "it! I'm sure you'll put it to good use!$"

Route503_Text_MeetDio_Rival5::
# 228 "data/maps/Route503/scripts.pory"
	.string "OK! That's enough chit-chat!\n"
	.string "Let's get back to training!\p"
	.string "I'll see you later, {PLAYER}! Let's\n"
	.string "battle again soon!$"
