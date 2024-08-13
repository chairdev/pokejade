Route501_MapScripts::
# 6 "data/maps/Route501/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route501_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route501_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Route501/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route501_Trigger_WalkToRivalLeft::
# 13 "data/maps/Route501/scripts.pory"
	lockall
# 15 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveToRivalLeft
# 16 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route501/scripts.pory"
	checkplayergender
# 19 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route501_RivalMaya
	return


Route501_Trigger_WalkToRivalRight::
# 24 "data/maps/Route501/scripts.pory"
	lockall
# 26 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveToRivalRight
# 27 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route501/scripts.pory"
	checkplayergender
# 30 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route501_RivalMaya
# 31 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route501_RivalShinji
	return


# 35 "data/maps/Route501/scripts.pory"
PlayerMoveToRivalLeft:
# 36 "data/maps/Route501/scripts.pory"
	walk_right
# 37 "data/maps/Route501/scripts.pory"
	walk_up
# 37 "data/maps/Route501/scripts.pory"
	walk_up
# 38 "data/maps/Route501/scripts.pory"
	face_right
	step_end

# 41 "data/maps/Route501/scripts.pory"
PlayerMoveToRivalRight:
# 42 "data/maps/Route501/scripts.pory"
	walk_up
# 42 "data/maps/Route501/scripts.pory"
	walk_up
# 43 "data/maps/Route501/scripts.pory"
	face_right
	step_end

Route501_RivalMaya::
# 47 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 48 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route501/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 52 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText1F
# 54 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 55 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalMaya_Text_0
# 59 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 60 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 61 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 63 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText2F
# 65 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 67 "data/maps/Route501/scripts.pory"
	setobjectxy 3, 1, 17
# 68 "data/maps/Route501/scripts.pory"
	setobjectxy 4, 1, 17
# 69 "data/maps/Route501/scripts.pory"
	applymovement 3, PidoveApproachPlayer
# 70 "data/maps/Route501/scripts.pory"
	applymovement 4, PidoveApprachRival
# 71 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 73 "data/maps/Route501/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
# 75 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ExclemationMark
# 76 "data/maps/Route501/scripts.pory"
	applymovement 1, ExclemationMark
# 77 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 78 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 79 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceUp
# 81 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText3F
# 83 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 84 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceDown
# 86 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 87 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/Route501/scripts.pory"
	removeobject 3
# 89 "data/maps/Route501/scripts.pory"
	removeobject 4
# 90 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 91 "data/maps/Route501/scripts.pory"
	waitstate
# 93 "data/maps/Route501/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 94 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText4F
# 96 "data/maps/Route501/scripts.pory"
	special HealPlayerParty
# 97 "data/maps/Route501/scripts.pory"
	setflag FLAG_ROUTE_501_SAVED_RIVAL
# 98 "data/maps/Route501/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 99 "data/maps/Route501/scripts.pory"
	setvar VAR_ROUTE501_STATE, 1
# 100 "data/maps/Route501/scripts.pory"
	setvar VAR_SANZASHI_LAB_STATE, 2
# 102 "data/maps/Route501/scripts.pory"
	warp MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB, 6, 5
	return


Route501_RivalShinji::
# 106 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 107 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route501/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 111 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText1M
# 113 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 114 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalMaya_Text_0
# 118 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 119 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 120 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 122 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText2M
# 124 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 126 "data/maps/Route501/scripts.pory"
	setobjectxy 3, 1, 17
# 127 "data/maps/Route501/scripts.pory"
	setobjectxy 4, 1, 17
# 128 "data/maps/Route501/scripts.pory"
	applymovement 3, PidoveApproachPlayer
# 129 "data/maps/Route501/scripts.pory"
	applymovement 4, PidoveApprachRival
# 130 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 132 "data/maps/Route501/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
# 134 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ExclemationMark
# 135 "data/maps/Route501/scripts.pory"
	applymovement 1, ExclemationMark
# 136 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 137 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 138 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceUp
# 140 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText3M
# 142 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 143 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceDown
# 145 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 146 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 147 "data/maps/Route501/scripts.pory"
	removeobject 3
# 148 "data/maps/Route501/scripts.pory"
	removeobject 4
# 149 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 150 "data/maps/Route501/scripts.pory"
	waitstate
# 152 "data/maps/Route501/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 153 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText4M
# 155 "data/maps/Route501/scripts.pory"
	special HealPlayerParty
# 156 "data/maps/Route501/scripts.pory"
	setflag FLAG_ROUTE_501_SAVED_RIVAL
# 157 "data/maps/Route501/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 158 "data/maps/Route501/scripts.pory"
	setvar VAR_ROUTE501_STATE, 1
# 159 "data/maps/Route501/scripts.pory"
	setvar VAR_SANZASHI_LAB_STATE, 2
# 161 "data/maps/Route501/scripts.pory"
	warp MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB, 6, 5
	return


# 164 "data/maps/Route501/scripts.pory"
RivalNoticePlayer:
# 165 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
# 166 "data/maps/Route501/scripts.pory"
	face_left
	step_end

# 169 "data/maps/Route501/scripts.pory"
RivalLookAround:
# 170 "data/maps/Route501/scripts.pory"
	walk_in_place_up
# 171 "data/maps/Route501/scripts.pory"
	walk_in_place_down
# 172 "data/maps/Route501/scripts.pory"
	walk_in_place_right
# 173 "data/maps/Route501/scripts.pory"
	face_right
# 174 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 177 "data/maps/Route501/scripts.pory"
RivalApproachBag:
# 178 "data/maps/Route501/scripts.pory"
	walk_up
# 179 "data/maps/Route501/scripts.pory"
	walk_right
# 179 "data/maps/Route501/scripts.pory"
	walk_right
# 179 "data/maps/Route501/scripts.pory"
	walk_right
# 179 "data/maps/Route501/scripts.pory"
	walk_right
# 180 "data/maps/Route501/scripts.pory"
	face_up
	step_end

# 183 "data/maps/Route501/scripts.pory"
PlayerApproachBag:
# 184 "data/maps/Route501/scripts.pory"
	walk_right
# 184 "data/maps/Route501/scripts.pory"
	walk_right
# 184 "data/maps/Route501/scripts.pory"
	walk_right
# 184 "data/maps/Route501/scripts.pory"
	walk_right
# 185 "data/maps/Route501/scripts.pory"
	face_right
	step_end

# 188 "data/maps/Route501/scripts.pory"
PidoveApproachPlayer:
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route501/scripts.pory"
	walk_faster_right
	step_end

# 192 "data/maps/Route501/scripts.pory"
PidoveApprachRival:
# 193 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 193 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 193 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 193 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 193 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 193 "data/maps/Route501/scripts.pory"
	walk_faster_down
	step_end

# 196 "data/maps/Route501/scripts.pory"
ExclemationMark:
# 197 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 200 "data/maps/Route501/scripts.pory"
FaceUp:
# 201 "data/maps/Route501/scripts.pory"
	face_up
	step_end

# 204 "data/maps/Route501/scripts.pory"
FaceDown:
# 205 "data/maps/Route501/scripts.pory"
	face_down
	step_end

# 208 "data/maps/Route501/scripts.pory"
FaceLeft:
# 209 "data/maps/Route501/scripts.pory"
	face_left
	step_end

# 212 "data/maps/Route501/scripts.pory"
FaceRight:
# 213 "data/maps/Route501/scripts.pory"
	face_right
	step_end

Route501_EventScript_SkwovetGirl::
# 295 "data/maps/Route501/scripts.pory"
	lock
# 296 "data/maps/Route501/scripts.pory"
	faceplayer
# 298 "data/maps/Route501/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_ROUTE_501, Route501_EventScript_SkwovetGirl_2
# 304 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl1
# 305 "data/maps/Route501/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 306 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl2
# 308 "data/maps/Route501/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE_501
Route501_EventScript_SkwovetGirl_1:
# 311 "data/maps/Route501/scripts.pory"
	release
	return

Route501_EventScript_SkwovetGirl_2:
# 300 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl3
	goto Route501_EventScript_SkwovetGirl_1


Route501_EventScript_Adrien::
# 334 "data/maps/Route501/scripts.pory"
	trainerbattle_single TRAINER_ADRIEN, Route501_Text_AdrienIntro, Route501_Text_AdrienDefeated
# 335 "data/maps/Route501/scripts.pory"
	msgbox Route102_Text_AdrienPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/Route501/scripts.pory"
	waitmessage
	end


Route501_RivalMaya_Text_0:
# 57 "data/maps/Route501/scripts.pory"
	.string "Oh, there it is!$"

Route501_Text_MeetRivalText1F::
# 216 "data/maps/Route501/scripts.pory"
	.string "Huh? What the...?\p"
	.string "Oh! Are you the {PLAYER}{KUN} that just\n"
	.string "moved in next door?\p"
	.string "I'm your neighbor, {RIVAL}! Nice to\n"
	.string "meet you!\p"
	.string "Oh, right! I have something for you from\n"
	.string "Professor Sanzashi!\p"
	.string "I went to your house to deliver it, but\n"
	.string "your mom said you were asleep.\p"
	.string "I didn't want to wake you up, so I\n"
	.string "decided to wander around a bit.\p"
	.string "I guess I got a little carried away...\n"
	.string "Sorry about that!\p"
	.string "Uh.. where did I put it...?\p"
	.string "Don't tell me I dropped it somewhere...$"

Route501_Text_MeetRivalText2F::
# 229 "data/maps/Route501/scripts.pory"
	.string "I really don't know what I would've done\n"
	.string "if I lost it...\p"
	.string "The professor would've been so mad at\n"
	.string "me!$"

Route501_Text_MeetRivalText3F::
# 236 "data/maps/Route501/scripts.pory"
	.string "Uwaaah! Wha... What's going on?!\p"
	.string "A wild Pokémon?! This is bad! This is\n"
	.string "really bad!\p"
	.string "{PLAYER}{KUN}, we have to use the Poké\n"
	.string "Balls in that bag to protect ourselves!\p"
	.string "Grab one and let's battle them!$"

Route501_Text_MeetRivalText4F::
# 244 "data/maps/Route501/scripts.pory"
	.string "Whew... That was a close one!\p"
	.string "I can't believe we were attacked by wild\n"
	.string "Pokémon!\p"
	.string "Good thing you had {STR_VAR_1} to\n"
	.string "protect you!\p"
	.string "You see, I don't really like Pokémon...\p"
	.string "I just wanted a reason to go out and\n"
	.string "explore the reason.\p"
	.string "But I guess I'll have to get used to\n"
	.string "them if I want to be a Trainer.\p"
	.string "...We should probably head back to\n"
	.string "Professor Sanzashi's lab now.\p"
	.string "I'm sure he must be worried about us.$"

Route501_Text_MeetRivalText1M::
# 256 "data/maps/Route501/scripts.pory"
	.string "Whoa!\p"
	.string "You're the new kid, {PLAYER}{KUN}, right?\p"
	.string "I'm {RIVAL}, your neighbor.\p"
	.string "I was supposed to deliver something\n"
	.string "from Professor Sanzashi to you but you\l"
	.string "were asleep.\p"
	.string "I got bored waiting, so I decided to\n"
	.string "explore a bit.\p"
	.string "But since you're here, that means you\n"
	.string "went to the lab, right?\p"
	.string "My bad! I should've just waited for you\n"
	.string "to wake up.\p"
	.string "One sec, let me take a look in the bag...\p"
	.string "Funny, I could've sworn I had it with\n"
	.string "me...$"

Route501_Text_MeetRivalText2M::
# 270 "data/maps/Route501/scripts.pory"
	.string "Geez, I can't believe I lost it...\p"
	.string "The professor would've flipped if he\n"
	.string "found out!\p"
	.string "$"

Route501_Text_MeetRivalText3M::
# 276 "data/maps/Route501/scripts.pory"
	.string "What the heck?! A wild Pokémon?! This is\n"
	.string "bad!\p"
	.string "Grab a Poké Ball from that bag so we can\n"
	.string "protect ourselves!$"

Route501_Text_MeetRivalText4M::
# 282 "data/maps/Route501/scripts.pory"
	.string "Phew... That was a close one!\p"
	.string "I can't believe we were attacked by wild\n"
	.string "Pokémon!\p"
	.string "Good thing you had {STR_VAR_1} to\n"
	.string "protect you!\p"
	.string "I'm not really a fan of Pokémon, but I\n"
	.string "guess I'll have to get used to them if I\l"
	.string "want to be a Trainer.\p"
	.string "...We should probably head back to\n"
	.string "Professor Sanzashi's lab now.\p"
	.string "I'm sure he must be worried about us.$"

Route501_Text_SkwovetGirl1::
# 314 "data/maps/Route501/scripts.pory"
	.string "Oh! I'm not a Trainer, don't worry!\p"
	.string "I'm just here on to watch the Skwovet!\p"
	.string "They're so cute when they eat! I just\n"
	.string "can't get enough of it!\p"
	.string "It's so funny how they stuff their\n"
	.string "cheeks full of Berries!\p"
	.string "Oh! Speaking of Berries, did you know\n"
	.string "that Skwovet has the ability Cheek\l"
	.string "Pouch?\p"
	.string "It's a really useful ability that\n"
	.string "restores some of its HP when it eats\l"
	.string "any Berry.\p"
	.string "I have a few extra Berries, so I'll give\n"
	.string "you one to try out!$"

Route501_Text_SkwovetGirl2::
# 325 "data/maps/Route501/scripts.pory"
	.string "I hope you and your Pokémon enjoy the\n"
	.string "Berries!$"

Route501_Text_SkwovetGirl3::
# 329 "data/maps/Route501/scripts.pory"
	.string "Skwovet are just too cute!$"

Route501_Text_AdrienIntro::
# 340 "data/maps/Route501/scripts.pory"
	.string "We've locked eyes! That means it's time\n"
	.string "for a battle!\p"
	.string "I'll show you the power of my favorite\n"
	.string "Pokémon!$"

Route501_Text_AdrienDefeated::
# 345 "data/maps/Route501/scripts.pory"
	.string "You're so strong!$"

Route102_Text_AdrienPostBattle::
# 349 "data/maps/Route501/scripts.pory"
	.string "You're really good at this! I hope we\n"
	.string "can battle again sometime!$"
