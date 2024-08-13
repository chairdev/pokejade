EverwoodTown_MapScripts::
	.byte 0


EverwoodTown_Trigger_DontGoIntoRouteLeft::
# 14 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 16 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_DontGoIntoRouteLeft_Text_0
# 17 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 19 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 20 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManApproachPlayer1
# 21 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 1
# 23 "data/maps/EverwoodTown/scripts.pory"
	msgbox DontGoIntoRouteText
# 24 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 26 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManMoveBack1
# 27 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 29 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_DontGoIntoRouteRight::
# 33 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 35 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_DontGoIntoRouteLeft_Text_0
# 37 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 38 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManApproachPlayer2
# 39 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 1
# 41 "data/maps/EverwoodTown/scripts.pory"
	msgbox DontGoIntoRouteText
# 43 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManMoveBack2
# 44 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


# 57 "data/maps/EverwoodTown/scripts.pory"
PlayerMoveDown:
# 58 "data/maps/EverwoodTown/scripts.pory"
	walk_down
	step_end

# 61 "data/maps/EverwoodTown/scripts.pory"
FatManApproachPlayer1:
# 62 "data/maps/EverwoodTown/scripts.pory"
	walk_left
# 62 "data/maps/EverwoodTown/scripts.pory"
	walk_left
# 63 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 63 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 64 "data/maps/EverwoodTown/scripts.pory"
	face_up
	step_end

# 67 "data/maps/EverwoodTown/scripts.pory"
FatManApproachPlayer2:
# 68 "data/maps/EverwoodTown/scripts.pory"
	walk_left
# 69 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 69 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 70 "data/maps/EverwoodTown/scripts.pory"
	face_up
	step_end

# 73 "data/maps/EverwoodTown/scripts.pory"
FatManMoveBack1:
# 74 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 74 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 75 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 75 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 76 "data/maps/EverwoodTown/scripts.pory"
	face_down
	step_end

# 79 "data/maps/EverwoodTown/scripts.pory"
FatManMoveBack2:
# 80 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 80 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 81 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 82 "data/maps/EverwoodTown/scripts.pory"
	face_down
	step_end

EverwoodTown_Trigger_GoodbyeMom1::
# 87 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 89 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 91 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom1
# 92 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 94 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 96 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_GoodbyeMom2::
# 101 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 103 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 105 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom2
# 106 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 108 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 110 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_GoodbyeMom3::
# 115 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 117 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 119 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom3
# 120 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 122 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 124 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_GoodbyeMom4::
# 129 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 131 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 133 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom4
# 134 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 136 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 138 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_GoodbyeMom::
# 142 "data/maps/EverwoodTown/scripts.pory"
	msgbox GoodbyeMomText1
# 143 "data/maps/EverwoodTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 144 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_GoodbyeMom_Text_0
# 145 "data/maps/EverwoodTown/scripts.pory"
	waitfanfare
# 146 "data/maps/EverwoodTown/scripts.pory"
	msgbox GoodbyeMomText2
# 148 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MomGoInside
# 149 "data/maps/EverwoodTown/scripts.pory"
	hideobjectat 2, MAP_EVERWOOD_TOWN
# 151 "data/maps/EverwoodTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 152 "data/maps/EverwoodTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 153 "data/maps/EverwoodTown/scripts.pory"
	setflag FLAG_HIDE_EVERWOOD_TOWN_MOM_OUTSIDE
# 154 "data/maps/EverwoodTown/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 4
	return


# 157 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom1:
# 158 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 159 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 159 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 159 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 159 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 159 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 160 "data/maps/EverwoodTown/scripts.pory"
	face_up
	step_end

# 163 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom2:
# 164 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 165 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 165 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 165 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 165 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 166 "data/maps/EverwoodTown/scripts.pory"
	face_up
	step_end

# 169 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom3:
# 170 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 171 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 171 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 171 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 172 "data/maps/EverwoodTown/scripts.pory"
	face_up
	step_end

# 175 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom4:
# 176 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 177 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 177 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 178 "data/maps/EverwoodTown/scripts.pory"
	face_up
	step_end

# 182 "data/maps/EverwoodTown/scripts.pory"
MomGoInside:
# 183 "data/maps/EverwoodTown/scripts.pory"
	walk_up
	step_end

EverwoodTown_Trigger_DontGoIntoRouteLeft_Text_0:
# 16 "data/maps/EverwoodTown/scripts.pory"
	.string "Wait, wait, wait, wait, waaait!!$"

EverwoodTown_Trigger_GoodbyeMom1_Text_0:
# 89 "data/maps/EverwoodTown/scripts.pory"
	.string "{PLAYER}!$"

EverwoodTown_GoodbyeMom_Text_0:
# 144 "data/maps/EverwoodTown/scripts.pory"
	.string "You put on the Running Shoes!$"

DontGoIntoRouteText::
# 49 "data/maps/EverwoodTown/scripts.pory"
	.string "You can't go that way!\p"
	.string "It's not safe to head out onto Route\n"
	.string "501 without a Pokémon by your side.\p"
	.string "Wild Pokémon might jump out at you, you\n"
	.string "know!\p"
	.string "You'll need a partner to help keep you\n"
	.string "safe.$"

GoodbyeMomText1::
# 186 "data/maps/EverwoodTown/scripts.pory"
	.string "Wow! What a cute Pokémon!\p"
	.string "I can tell you two will make a great\n"
	.string "team!\p"
	.string "Oh, I almost forgot! I have a gift for\n"
	.string "you from your father!$"

GoodbyeMomText2::
# 193 "data/maps/EverwoodTown/scripts.pory"
	.string "They're perfect for running around and\n"
	.string "exploring new places!\p"
	.string "Just hold the B Button while you move\n"
	.string "to put a little pep in your step!\p"
	.string "...Look at you! All ready to go on an\n"
	.string "adventure!\p"
	.string "Ahh... I'm so proud of you, {PLAYER}!\p"
	.string "I wish I were young again so I\n"
	.string "experience my adventure again!\p"
	.string "Don't worry about me, I'll be fine here in\n"
	.string "Everwood Town.\p"
	.string "Besides, I have Delcatty to keep me\n"
	.string "company!\p"
	.string "... ... ...\p"
	.string "I'll be cheering you on from here, so go\n"
	.string "out there and do your best!\p"
	.string "Remember that you can always come back\n"
	.string "home no matter what happens, okay?\p"
	.string "Good luck, {PLAYER}!\n"
	.string "I love you!$"
