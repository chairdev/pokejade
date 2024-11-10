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
	playbgm MUS_FOLLOW_ME, 0
# 96 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom1
# 97 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 99 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 101 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_GoodbyeMom2::
# 106 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 108 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 109 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 111 "data/maps/EverwoodTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 113 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom2
# 114 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 118 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_GoodbyeMom3::
# 123 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 125 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 126 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 128 "data/maps/EverwoodTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 130 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom3
# 131 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 135 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_GoodbyeMom4::
# 140 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 142 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Trigger_GoodbyeMom1_Text_0
# 143 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 145 "data/maps/EverwoodTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 147 "data/maps/EverwoodTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachMom4
# 148 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/EverwoodTown/scripts.pory"
	call EverwoodTown_GoodbyeMom
# 152 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_GoodbyeMom::
# 156 "data/maps/EverwoodTown/scripts.pory"
	speakername EverwoodTown_GoodbyeMom_Text_0
# 157 "data/maps/EverwoodTown/scripts.pory"
	msgbox GoodbyeMomText1
# 158 "data/maps/EverwoodTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 159 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 160 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_GoodbyeMom_Text_1
# 161 "data/maps/EverwoodTown/scripts.pory"
	waitfanfare
# 162 "data/maps/EverwoodTown/scripts.pory"
	speakername EverwoodTown_GoodbyeMom_Text_0
# 163 "data/maps/EverwoodTown/scripts.pory"
	msgbox GoodbyeMomText2
# 164 "data/maps/EverwoodTown/scripts.pory"
	closemessage
# 166 "data/maps/EverwoodTown/scripts.pory"
	applymovement 2, MomGoToDoor
# 167 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/EverwoodTown/scripts.pory"
	opendoor 14, 8
# 169 "data/maps/EverwoodTown/scripts.pory"
	waitdooranim
# 170 "data/maps/EverwoodTown/scripts.pory"
	fadedefaultbgm
# 171 "data/maps/EverwoodTown/scripts.pory"
	applymovement 2, MomGoInside
# 172 "data/maps/EverwoodTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/EverwoodTown/scripts.pory"
	removeobject 2
# 174 "data/maps/EverwoodTown/scripts.pory"
	closedoor 14, 8
# 175 "data/maps/EverwoodTown/scripts.pory"
	waitdooranim
# 177 "data/maps/EverwoodTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 178 "data/maps/EverwoodTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 179 "data/maps/EverwoodTown/scripts.pory"
	setflag FLAG_HIDE_EVERWOOD_TOWN_MOM_OUTSIDE
# 180 "data/maps/EverwoodTown/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 4
# 181 "data/maps/EverwoodTown/scripts.pory"
	addmoney 10000
	return


# 184 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom1:
# 185 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 185 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 186 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 186 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 186 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 186 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 186 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 187 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 190 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom2:
# 191 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 191 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 192 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 192 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 192 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 192 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 193 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 196 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom3:
# 197 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 197 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 198 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 198 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 198 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 199 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 202 "data/maps/EverwoodTown/scripts.pory"
PlayerApproachMom4:
# 203 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 203 "data/maps/EverwoodTown/scripts.pory"
	walk_up
# 204 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 204 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 205 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 208 "data/maps/EverwoodTown/scripts.pory"
MomGoToDoor:
# 209 "data/maps/EverwoodTown/scripts.pory"
	walk_right
# 210 "data/maps/EverwoodTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 213 "data/maps/EverwoodTown/scripts.pory"
MomGoInside:
# 214 "data/maps/EverwoodTown/scripts.pory"
	walk_up
	step_end

EverwoodTown_EventScript_LittleBoy::
# 242 "data/maps/EverwoodTown/scripts.pory"
	lock
# 243 "data/maps/EverwoodTown/scripts.pory"
	faceplayer
# 244 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_EventScript_LittleBoy_Text_0
# 245 "data/maps/EverwoodTown/scripts.pory"
	release
	return


EverwoodTown_EventScript_LittleGirl::
# 249 "data/maps/EverwoodTown/scripts.pory"
	lock
# 250 "data/maps/EverwoodTown/scripts.pory"
	faceplayer
# 251 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_EventScript_LittleGirl_Text_0
# 252 "data/maps/EverwoodTown/scripts.pory"
	release
	return


EverwoodTown_Sign_Town::
# 256 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 257 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Sign_Town_Text_0
# 258 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Sign_PlayersHouse::
# 261 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 262 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Sign_PlayersHouse_Text_0
# 263 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Sign_RivalsHouse::
# 267 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 268 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Sign_RivalsHouse_Text_0
# 269 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Sign_ResearchLab::
# 273 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 274 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_Sign_ResearchLab_Text_0
# 275 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_Trigger_DontGoIntoRouteLeft_Text_0:
# 16 "data/maps/EverwoodTown/scripts.pory"
	.string "Wait, wait, wait, wait, waaait!!$"

EverwoodTown_Trigger_GoodbyeMom1_Text_0:
# 91 "data/maps/EverwoodTown/scripts.pory"
	.string "{PLAYER}!$"

EverwoodTown_GoodbyeMom_Text_0:
# 156 "data/maps/EverwoodTown/scripts.pory"
	.string "Mom$"

EverwoodTown_GoodbyeMom_Text_1:
# 160 "data/maps/EverwoodTown/scripts.pory"
	.string "You put on the Running Shoes!$"

EverwoodTown_EventScript_LittleBoy_Text_0:
# 244 "data/maps/EverwoodTown/scripts.pory"
	.string "I'm playing hide-and-seek with my\n"
	.string "sister but she's taking forever to find\l"
	.string "me!$"

EverwoodTown_EventScript_LittleGirl_Text_0:
# 251 "data/maps/EverwoodTown/scripts.pory"
	.string "I'm playing tag with my brother but he's\n"
	.string "not coming after me.$"

EverwoodTown_Sign_Town_Text_0:
# 257 "data/maps/EverwoodTown/scripts.pory"
	.string "Everwood Town\n"
	.string "“A town where the wind of beginnings\l"
	.string "blows gently.”$"

EverwoodTown_Sign_PlayersHouse_Text_0:
# 262 "data/maps/EverwoodTown/scripts.pory"
	.string "{PLAYER}'s House$"

EverwoodTown_Sign_RivalsHouse_Text_0:
# 268 "data/maps/EverwoodTown/scripts.pory"
	.string "{RIVAL}'s House$"

EverwoodTown_Sign_ResearchLab_Text_0:
# 274 "data/maps/EverwoodTown/scripts.pory"
	.string "Hawthorne Research Lab$"

DontGoIntoRouteText::
# 51 "data/maps/EverwoodTown/scripts.pory"
	.string "You can't go that way!\p"
	.string "It's not safe to head out onto Route\n"
	.string "301 without a Pokémon by your side.\p"
	.string "Wild Pokémon might jump out at you, you\n"
	.string "know!\p"
	.string "You'll need a partner to help keep you\n"
	.string "safe.$"

GoodbyeMomText1::
# 217 "data/maps/EverwoodTown/scripts.pory"
	.string "Wow! What a cute Pokémon!\p"
	.string "I can tell you two will make a great\n"
	.string "team!\p"
	.string "Oh, I almost forgot! I have a gift for\n"
	.string "you from your father!$"

GoodbyeMomText2::
# 224 "data/maps/EverwoodTown/scripts.pory"
	.string "They're perfect for running around and\n"
	.string "exploring new places!\p"
	.string "Just hold the B Button while you move\n"
	.string "to put a little pep in your step!\p"
	.string "Oh, and here's some money to help you on\n"
	.string "your journey!\p"
	.string "Make sure you don't spend it all in one\n"
	.string "place!\p"
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
