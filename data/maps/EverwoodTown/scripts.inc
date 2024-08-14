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
# 36 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 38 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 39 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManApproachPlayer2
# 40 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 1
# 42 "data/maps/EverwoodTown/scripts.pory"
	msgbox DontGoIntoRouteText
# 43 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 45 "data/maps/EverwoodTown/scripts.pory"
	applymovement 1, FatManMoveBack2
# 46 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 48 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


# 59 "data/maps/EverwoodTown/scripts.pory"
PlayerMoveDown:
# 60 "data/maps/EverwoodTown/scripts.pory"
	walk_down
	step_end

# 63 "data/maps/EverwoodTown/scripts.pory"
FatManApproachPlayer1:
# 64 "data/maps/EverwoodTown/scripts.pory"
	walk_left
# 64 "data/maps/EverwoodTown/scripts.pory"
	walk_left
# 65 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 65 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 66 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 69 "data/maps/EverwoodTown/scripts.pory"
FatManApproachPlayer2:
# 70 "data/maps/EverwoodTown/scripts.pory"
	walk_left
# 71 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 71 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 72 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 75 "data/maps/EverwoodTown/scripts.pory"
FatManMoveBack1:
# 76 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 76 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 77 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 77 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 78 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 81 "data/maps/EverwoodTown/scripts.pory"
FatManMoveBack2:
# 82 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 82 "data/maps/EverwoodTown/scripts.pory"
	walk_down
# 83 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 84 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_down
	step_end

EverwoodTown_Trigger_GoodbyeMom1::
# 89 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 91 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 92 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 94 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom1
# 95 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 97 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 99 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_GoodbyeMom2::
# 104 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 106 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 107 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 109 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom2
# 110 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 112 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 114 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_GoodbyeMom3::
# 119 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 121 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 122 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 124 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom3
# 125 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 129 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_GoodbyeMom4::
# 134 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 136 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 137 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 139 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom4
# 140 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 144 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_GoodbyeMom::
# 148 "data/maps/EverwoodTown/scripts.pory"
	msgbox GoodbyeMomText1
# 149 "data/maps/EverwoodTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 150 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_GoodbyeMom_Text_0
# 151 "data/maps/EverwoodTown/scripts.pory"
	waitfanfare
# 152 "data/maps/EverwoodTown/scripts.pory"
	msgbox GoodbyeMomText2
# 153 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 155 "data/maps/EverwoodTown/scripts.pory"
	applymovement 2, MomGoToDoor
# 156 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/EverwoodTown/scripts.pory"
	opendoor 14, 8
# 158 "data/maps/EverwoodTown/scripts.pory"
	waitdooranim
# 159 "data/maps/EverwoodTown/scripts.pory"
	applymovement 2, MomGoInside
# 160 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/EverwoodTown/scripts.pory"
	removeobject 2
# 162 "data/maps/EverwoodTown/scripts.pory"
	closedoor 14, 8
# 163 "data/maps/EverwoodTown/scripts.pory"
	waitdooranim
# 165 "data/maps/EverwoodTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 166 "data/maps/EverwoodTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 167 "data/maps/EverwoodTown/scripts.pory"
	setflag FLAG_HIDE_EVERWOOD_TOWN_MOM_OUTSIDE
# 168 "data/maps/EverwoodTown/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 4
	return


# 171 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom1:
# 172 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 172 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 173 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 173 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 173 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 173 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 173 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 174 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 177 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom2:
# 178 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 178 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 179 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 179 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 179 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 179 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 180 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 183 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom3:
# 184 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 184 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 185 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 185 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 185 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 186 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 189 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom4:
# 190 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 190 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 191 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 191 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 192 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 195 "data/maps/EverwoodTown/scripts.pory"
MomGoToDoor:
# 196 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 197 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 200 "data/maps/EverwoodTown/scripts.pory"
MomGoInside:
# 201 "data/maps/EverwoodTown/scripts.pory"
	walk_up
	step_end

EverwoodTown_Sign_Town::
# 227 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 228 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Sign_Town_Text_0
# 229 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Sign_PlayersHouse::
# 232 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 233 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Sign_PlayersHouse_Text_0
# 234 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Sign_RivalsHouse::
# 238 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 239 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Sign_RivalsHouse_Text_0
# 240 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Sign_ResearchLab::
# 244 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 245 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Sign_ResearchLab_Text_0
# 246 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_DontGoIntoRouteLeft_Text_0:
# 16 "data/maps/EverwoodTown/scripts.pory"
	.string "Wait, wait, wait, wait, waaait!!$"

EverwoodTown_Trigger_GoodbyeMom1_Text_0:
# 91 "data/maps/EverwoodTown/scripts.pory"
	.string "{PLAYER}!$"

EverwoodTown_GoodbyeMom_Text_0:
# 150 "data/maps/EverwoodTown/scripts.pory"
	.string "You put on the Running Shoes!$"

EverwoodTown_Sign_Town_Text_0:
# 228 "data/maps/EverwoodTown/scripts.pory"
	.string "Everwood Town\n"
	.string "“A town where the wind of beginnings\l"
	.string "blows gently.”$"

EverwoodTown_Sign_PlayersHouse_Text_0:
# 233 "data/maps/EverwoodTown/scripts.pory"
	.string "{PLAYER}'s House$"

EverwoodTown_Sign_RivalsHouse_Text_0:
# 239 "data/maps/EverwoodTown/scripts.pory"
	.string "{RIVAL}'s House$"

EverwoodTown_Sign_ResearchLab_Text_0:
# 245 "data/maps/EverwoodTown/scripts.pory"
	.string "Hawthorn Research Lab$"

DontGoIntoRouteText::
# 51 "data/maps/EverwoodTown/scripts.pory"
	.string "You can't go that way!\p"
	.string "It's not safe to head out onto Route\n"
	.string "501 without a Pokémon by your side.\p"
	.string "Wild Pokémon might jump out at you, you\n"
	.string "know!\p"
	.string "You'll need a partner to help keep you\n"
	.string "safe.$"

GoodbyeMomText1::
# 204 "data/maps/EverwoodTown/scripts.pory"
	.string "Wow! What a cute Pokémon!\p"
	.string "I can tell you two will make a great\n"
	.string "team!\p"
	.string "Oh, I almost forgot! I have a gift for\n"
	.string "you from your father!$"

GoodbyeMomText2::
# 211 "data/maps/EverwoodTown/scripts.pory"
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
