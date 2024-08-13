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
# 20 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route501_RivalShinji
	return


Route501_Trigger_WalkToRivalRight::
# 25 "data/maps/Route501/scripts.pory"
	lockall
# 27 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveToRivalRight
# 28 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route501/scripts.pory"
	checkplayergender
# 31 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route501_RivalMaya
# 32 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route501_RivalShinji
	return


# 36 "data/maps/Route501/scripts.pory"
PlayerMoveToRivalLeft:
# 37 "data/maps/Route501/scripts.pory"
	walk_right
# 38 "data/maps/Route501/scripts.pory"
	walk_up
# 38 "data/maps/Route501/scripts.pory"
	walk_up
# 39 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
	step_end

# 42 "data/maps/Route501/scripts.pory"
PlayerMoveToRivalRight:
# 43 "data/maps/Route501/scripts.pory"
	walk_up
# 43 "data/maps/Route501/scripts.pory"
	walk_up
# 44 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
	step_end

Route501_RivalMaya::
# 48 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 49 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route501/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 53 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText1F
# 55 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 56 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalMaya_Text_0
# 60 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 61 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 62 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 64 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText2F
# 66 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 68 "data/maps/Route501/scripts.pory"
	setobjectxy 3, 1, 17
# 69 "data/maps/Route501/scripts.pory"
	setobjectxy 4, 1, 17
# 70 "data/maps/Route501/scripts.pory"
	applymovement 3, PidoveApproachPlayer
# 71 "data/maps/Route501/scripts.pory"
	applymovement 4, PidoveApprachRival
# 72 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 74 "data/maps/Route501/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
# 76 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ExclemationMark
# 77 "data/maps/Route501/scripts.pory"
	applymovement 1, ExclemationMark
# 78 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 79 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 80 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceUp
# 82 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText3F
# 84 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 85 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceDown
# 87 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 88 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/Route501/scripts.pory"
	removeobject 3
# 90 "data/maps/Route501/scripts.pory"
	removeobject 4
# 91 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 92 "data/maps/Route501/scripts.pory"
	waitstate
# 94 "data/maps/Route501/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 95 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText4F
# 97 "data/maps/Route501/scripts.pory"
	special HealPlayerParty
# 98 "data/maps/Route501/scripts.pory"
	setflag FLAG_ROUTE_501_SAVED_RIVAL
# 99 "data/maps/Route501/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 100 "data/maps/Route501/scripts.pory"
	setvar VAR_ROUTE501_STATE, 1
# 101 "data/maps/Route501/scripts.pory"
	setvar VAR_SANZASHI_LAB_STATE, 2
# 103 "data/maps/Route501/scripts.pory"
	warp MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB, 6, 5
	return


Route501_RivalShinji::
# 107 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 108 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route501/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 112 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText1M
# 113 "data/maps/Route501/scripts.pory"
	closemessage
# 115 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 116 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalMaya_Text_0
# 120 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 121 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 122 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 124 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText2M
# 126 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 128 "data/maps/Route501/scripts.pory"
	setobjectxy 3, 1, 17
# 129 "data/maps/Route501/scripts.pory"
	setobjectxy 4, 1, 17
# 130 "data/maps/Route501/scripts.pory"
	applymovement 3, PidoveApproachPlayer
# 131 "data/maps/Route501/scripts.pory"
	applymovement 4, PidoveApprachRival
# 132 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 134 "data/maps/Route501/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
# 136 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ExclemationMark
# 137 "data/maps/Route501/scripts.pory"
	applymovement 1, ExclemationMark
# 138 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 139 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 140 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceUp
# 142 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText3M
# 144 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 145 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceDown
# 147 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 148 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/Route501/scripts.pory"
	removeobject 3
# 150 "data/maps/Route501/scripts.pory"
	removeobject 4
# 151 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 152 "data/maps/Route501/scripts.pory"
	waitstate
# 154 "data/maps/Route501/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 155 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText4M
# 157 "data/maps/Route501/scripts.pory"
	special HealPlayerParty
# 158 "data/maps/Route501/scripts.pory"
	setflag FLAG_ROUTE_501_SAVED_RIVAL
# 159 "data/maps/Route501/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 160 "data/maps/Route501/scripts.pory"
	setvar VAR_ROUTE501_STATE, 1
# 161 "data/maps/Route501/scripts.pory"
	setvar VAR_SANZASHI_LAB_STATE, 2
# 163 "data/maps/Route501/scripts.pory"
	warp MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB, 6, 5
	return


# 166 "data/maps/Route501/scripts.pory"
RivalNoticePlayer:
# 167 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
# 168 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_left
	step_end

# 171 "data/maps/Route501/scripts.pory"
RivalLookAround:
# 172 "data/maps/Route501/scripts.pory"
	walk_in_place_up
# 173 "data/maps/Route501/scripts.pory"
	walk_in_place_down
# 174 "data/maps/Route501/scripts.pory"
	walk_in_place_right
# 175 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
# 176 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 179 "data/maps/Route501/scripts.pory"
RivalApproachBag:
# 180 "data/maps/Route501/scripts.pory"
	walk_up
# 181 "data/maps/Route501/scripts.pory"
	walk_right
# 181 "data/maps/Route501/scripts.pory"
	walk_right
# 181 "data/maps/Route501/scripts.pory"
	walk_right
# 181 "data/maps/Route501/scripts.pory"
	walk_right
# 182 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_up
	step_end

# 185 "data/maps/Route501/scripts.pory"
PlayerApproachBag:
# 186 "data/maps/Route501/scripts.pory"
	walk_right
# 186 "data/maps/Route501/scripts.pory"
	walk_right
# 186 "data/maps/Route501/scripts.pory"
	walk_right
# 186 "data/maps/Route501/scripts.pory"
	walk_right
# 187 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
	step_end

# 190 "data/maps/Route501/scripts.pory"
PidoveApproachPlayer:
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 191 "data/maps/Route501/scripts.pory"
	walk_faster_right
	step_end

# 194 "data/maps/Route501/scripts.pory"
PidoveApprachRival:
# 195 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 195 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 195 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 195 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 195 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 195 "data/maps/Route501/scripts.pory"
	walk_faster_down
	step_end

# 198 "data/maps/Route501/scripts.pory"
ExclemationMark:
# 199 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 202 "data/maps/Route501/scripts.pory"
FaceUp:
# 203 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_up
	step_end

# 206 "data/maps/Route501/scripts.pory"
FaceDown:
# 207 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_down
	step_end

# 210 "data/maps/Route501/scripts.pory"
FaceLeft:
# 211 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_left
	step_end

# 214 "data/maps/Route501/scripts.pory"
FaceRight:
# 215 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
	step_end

Route501_EventScript_SkwovetGirl::
# 297 "data/maps/Route501/scripts.pory"
	lock
# 298 "data/maps/Route501/scripts.pory"
	faceplayer
# 300 "data/maps/Route501/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_ROUTE_501, Route501_EventScript_SkwovetGirl_2
# 306 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl1
# 307 "data/maps/Route501/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 308 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl2
# 310 "data/maps/Route501/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE_501
Route501_EventScript_SkwovetGirl_1:
# 313 "data/maps/Route501/scripts.pory"
	release
	return

Route501_EventScript_SkwovetGirl_2:
# 302 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl3
	goto Route501_EventScript_SkwovetGirl_1


Route501_EventScript_Adrien::
# 335 "data/maps/Route501/scripts.pory"
	trainerbattle_single TRAINER_ADRIEN, Route501_Text_AdrienIntro, Route501_Text_AdrienDefeated
# 336 "data/maps/Route501/scripts.pory"
	msgbox Route102_Text_AdrienPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/Route501/scripts.pory"
	waitmessage
	end


Route501_RivalMaya_Text_0:
# 58 "data/maps/Route501/scripts.pory"
	.string "Oh, there it is!$"

Route501_Text_MeetRivalText1F::
# 218 "data/maps/Route501/scripts.pory"
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
# 231 "data/maps/Route501/scripts.pory"
	.string "I really don't know what I would've done\n"
	.string "if I lost it...\p"
	.string "The professor would've been so mad at\n"
	.string "me!$"

Route501_Text_MeetRivalText3F::
# 238 "data/maps/Route501/scripts.pory"
	.string "Uwaaah! Wha... What's going on?!\p"
	.string "A wild Pokémon?! This is bad! This is\n"
	.string "really bad!\p"
	.string "{PLAYER}{KUN}, we have to use the Poké\n"
	.string "Balls in that bag to protect ourselves!\p"
	.string "Grab one and let's battle them!$"

Route501_Text_MeetRivalText4F::
# 246 "data/maps/Route501/scripts.pory"
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
# 258 "data/maps/Route501/scripts.pory"
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
# 272 "data/maps/Route501/scripts.pory"
	.string "Geez, I can't believe I lost it...\p"
	.string "The professor would've flipped if he\n"
	.string "found out!\p"
	.string "$"

Route501_Text_MeetRivalText3M::
# 278 "data/maps/Route501/scripts.pory"
	.string "What the heck?! A wild Pokémon?! This is\n"
	.string "bad!\p"
	.string "Grab a Poké Ball from that bag so we can\n"
	.string "protect ourselves!$"

Route501_Text_MeetRivalText4M::
# 284 "data/maps/Route501/scripts.pory"
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
# 316 "data/maps/Route501/scripts.pory"
	.string "Oh! I'm not a Trainer, don't worry!\p"
	.string "I'm just here on to watch the Skwovet!\p"
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
# 326 "data/maps/Route501/scripts.pory"
	.string "I hope you and your Pokémon enjoy the\n"
	.string "Berries!$"

Route501_Text_SkwovetGirl3::
# 330 "data/maps/Route501/scripts.pory"
	.string "Skwovet are just too cute when they're\n"
	.string "eating!\n"
	.string "I could watch them all day!$"

Route501_Text_AdrienIntro::
# 341 "data/maps/Route501/scripts.pory"
	.string "We've locked eyes! That means it's time\n"
	.string "for a battle!\p"
	.string "I'll show you the power of my favorite\n"
	.string "Pokémon!$"

Route501_Text_AdrienDefeated::
# 346 "data/maps/Route501/scripts.pory"
	.string "You're so strong!$"

Route102_Text_AdrienPostBattle::
# 350 "data/maps/Route501/scripts.pory"
	.string "You're really good at this! I hope we\n"
	.string "can battle again sometime!$"
