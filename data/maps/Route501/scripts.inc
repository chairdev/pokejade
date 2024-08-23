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
	goto_if_eq VAR_RESULT, MALE, Route501_RivalHolly
# 20 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route501_RivalCaden
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
	goto_if_eq VAR_RESULT, MALE, Route501_RivalHolly
# 32 "data/maps/Route501/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route501_RivalCaden
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

Route501_RivalHolly::
# 48 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 49 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route501/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 53 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 54 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText1F
# 55 "data/maps/Route501/scripts.pory"
	closemessage
# 57 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 58 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 61 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalHolly_Text_1
# 62 "data/maps/Route501/scripts.pory"
	closemessage
# 64 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 65 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 66 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 68 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 69 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText2F
# 70 "data/maps/Route501/scripts.pory"
	closemessage
# 72 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 74 "data/maps/Route501/scripts.pory"
	setobjectxy 3, 1, 17
# 75 "data/maps/Route501/scripts.pory"
	setobjectxy 4, 1, 17
# 76 "data/maps/Route501/scripts.pory"
	applymovement 3, PidoveApproachPlayer
# 77 "data/maps/Route501/scripts.pory"
	applymovement 4, PidoveApprachRival
# 78 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 80 "data/maps/Route501/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
# 82 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ExclemationMark
# 83 "data/maps/Route501/scripts.pory"
	applymovement 1, ExclemationMark
# 84 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 85 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 86 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceUp
# 88 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 89 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText3F
# 90 "data/maps/Route501/scripts.pory"
	closemessage
# 92 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 93 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceDown
# 96 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 97 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/Route501/scripts.pory"
	removeobject 3
# 99 "data/maps/Route501/scripts.pory"
	removeobject 4
# 100 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 101 "data/maps/Route501/scripts.pory"
	waitstate
# 103 "data/maps/Route501/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 104 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 105 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText4F
# 107 "data/maps/Route501/scripts.pory"
	special HealPlayerParty
# 108 "data/maps/Route501/scripts.pory"
	setflag FLAG_ROUTE_501_SAVED_RIVAL
# 109 "data/maps/Route501/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 110 "data/maps/Route501/scripts.pory"
	setvar VAR_ROUTE501_STATE, 1
# 111 "data/maps/Route501/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 2
# 113 "data/maps/Route501/scripts.pory"
	warp MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB, 6, 5
	return


Route501_RivalCaden::
# 117 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 118 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route501/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 122 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 123 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText1M
# 124 "data/maps/Route501/scripts.pory"
	closemessage
# 126 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 127 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 130 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalHolly_Text_1
# 131 "data/maps/Route501/scripts.pory"
	closemessage
# 133 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 134 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 135 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 137 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 138 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText2M
# 139 "data/maps/Route501/scripts.pory"
	closemessage
# 141 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 143 "data/maps/Route501/scripts.pory"
	setobjectxy 3, 1, 17
# 144 "data/maps/Route501/scripts.pory"
	setobjectxy 4, 1, 17
# 145 "data/maps/Route501/scripts.pory"
	applymovement 3, PidoveApproachPlayer
# 146 "data/maps/Route501/scripts.pory"
	applymovement 4, PidoveApprachRival
# 147 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 149 "data/maps/Route501/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
# 151 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ExclemationMark
# 152 "data/maps/Route501/scripts.pory"
	applymovement 1, ExclemationMark
# 153 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 154 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 155 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceUp
# 157 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 158 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText3M
# 159 "data/maps/Route501/scripts.pory"
	closemessage
# 161 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 162 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceDown
# 164 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 165 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 166 "data/maps/Route501/scripts.pory"
	removeobject 3
# 167 "data/maps/Route501/scripts.pory"
	removeobject 4
# 168 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 169 "data/maps/Route501/scripts.pory"
	waitstate
# 171 "data/maps/Route501/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 172 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 173 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText4M
# 175 "data/maps/Route501/scripts.pory"
	special HealPlayerParty
# 176 "data/maps/Route501/scripts.pory"
	setflag FLAG_ROUTE_501_SAVED_RIVAL
# 177 "data/maps/Route501/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 178 "data/maps/Route501/scripts.pory"
	setvar VAR_ROUTE501_STATE, 1
# 179 "data/maps/Route501/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 2
# 181 "data/maps/Route501/scripts.pory"
	warp MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB, 6, 5
	return


# 184 "data/maps/Route501/scripts.pory"
RivalNoticePlayer:
# 185 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
# 186 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_left
	step_end

# 189 "data/maps/Route501/scripts.pory"
RivalLookAround:
# 190 "data/maps/Route501/scripts.pory"
	walk_in_place_up
# 191 "data/maps/Route501/scripts.pory"
	walk_in_place_down
# 192 "data/maps/Route501/scripts.pory"
	walk_in_place_right
# 193 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
# 194 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 197 "data/maps/Route501/scripts.pory"
RivalApproachBag:
# 198 "data/maps/Route501/scripts.pory"
	walk_up
# 199 "data/maps/Route501/scripts.pory"
	walk_right
# 199 "data/maps/Route501/scripts.pory"
	walk_right
# 199 "data/maps/Route501/scripts.pory"
	walk_right
# 199 "data/maps/Route501/scripts.pory"
	walk_right
# 200 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_down
	step_end

# 203 "data/maps/Route501/scripts.pory"
PlayerApproachBag:
# 204 "data/maps/Route501/scripts.pory"
	walk_right
# 204 "data/maps/Route501/scripts.pory"
	walk_right
# 204 "data/maps/Route501/scripts.pory"
	walk_right
# 204 "data/maps/Route501/scripts.pory"
	walk_right
# 205 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
	step_end

# 208 "data/maps/Route501/scripts.pory"
PidoveApproachPlayer:
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route501/scripts.pory"
	walk_faster_right
	step_end

# 212 "data/maps/Route501/scripts.pory"
PidoveApprachRival:
# 213 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 213 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 213 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 213 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 213 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 213 "data/maps/Route501/scripts.pory"
	walk_faster_down
	step_end

# 216 "data/maps/Route501/scripts.pory"
ExclemationMark:
# 217 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 220 "data/maps/Route501/scripts.pory"
FaceUp:
# 221 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_up
	step_end

# 224 "data/maps/Route501/scripts.pory"
FaceDown:
# 225 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_down
	step_end

# 228 "data/maps/Route501/scripts.pory"
FaceLeft:
# 229 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_left
	step_end

# 232 "data/maps/Route501/scripts.pory"
FaceRight:
# 233 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
	step_end

Route501_EventScript_SkwovetGirl::
# 313 "data/maps/Route501/scripts.pory"
	lock
# 314 "data/maps/Route501/scripts.pory"
	faceplayer
# 316 "data/maps/Route501/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_ROUTE_501, Route501_EventScript_SkwovetGirl_2
# 322 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl1
# 323 "data/maps/Route501/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 324 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl2
# 326 "data/maps/Route501/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE_501
Route501_EventScript_SkwovetGirl_1:
# 329 "data/maps/Route501/scripts.pory"
	release
	return

Route501_EventScript_SkwovetGirl_2:
# 318 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl3
	goto Route501_EventScript_SkwovetGirl_1


Route501_EventScript_MartEmployee::
# 351 "data/maps/Route501/scripts.pory"
	lock
# 352 "data/maps/Route501/scripts.pory"
	faceplayer
# 354 "data/maps/Route501/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_ROUTE501, Route501_EventScript_MartEmployee_2
Route501_EventScript_MartEmployee_1:
# 362 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MartEmployee2
# 363 "data/maps/Route501/scripts.pory"
	release
	return

Route501_EventScript_MartEmployee_2:
# 356 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MartEmployee1
# 357 "data/maps/Route501/scripts.pory"
	giveitem ITEM_POTION, 5
# 359 "data/maps/Route501/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE501
	goto Route501_EventScript_MartEmployee_1


Route501_EventScript_Boy::
# 379 "data/maps/Route501/scripts.pory"
	lock
# 380 "data/maps/Route501/scripts.pory"
	faceplayer
# 381 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_Boy
# 382 "data/maps/Route501/scripts.pory"
	release
	return


Route501_EventScript_Michael::
# 391 "data/maps/Route501/scripts.pory"
	trainerbattle_single TRAINER_MICHAEL, Route501_Text_MichaelIntro, Route501_Text_MichaelDefeated
# 392 "data/maps/Route501/scripts.pory"
	msgbox Route102_Text_MichaelPostBattle, MSGBOX_AUTOCLOSE
# 393 "data/maps/Route501/scripts.pory"
	waitmessage
	end


Route501_Sign_Route::
# 411 "data/maps/Route501/scripts.pory"
	lock
# 412 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_Sign
# 413 "data/maps/Route501/scripts.pory"
	release
	return


Route501_RivalHolly_Text_0:
# 53 "data/maps/Route501/scripts.pory"
	.string "{RIVAL}$"

Route501_RivalHolly_Text_1:
# 61 "data/maps/Route501/scripts.pory"
	.string "Oh, there it is!$"

Route501_Text_MeetRivalText1F::
# 236 "data/maps/Route501/scripts.pory"
	.string "Huh? What the...?\p"
	.string "Oh! Are you the {PLAYER}{KUN} that just\n"
	.string "moved in next door?\p"
	.string "I'm your neighbor, {RIVAL}! Nice to\n"
	.string "meet you!\p"
	.string "Oh, right! I have something for you from\n"
	.string "Professor Hawthorne!\p"
	.string "I went to your house to deliver it, but\n"
	.string "your mom said you were asleep.\p"
	.string "I didn't want to wake you up, so I\n"
	.string "decided to wander around a bit.\p"
	.string "I guess I got a little carried away...\n"
	.string "Sorry about that!\p"
	.string "Uh.. where did I put it...?\p"
	.string "Don't tell me I dropped it somewhere...$"

Route501_Text_MeetRivalText2F::
# 249 "data/maps/Route501/scripts.pory"
	.string "I really don't know what I would've done\n"
	.string "if I lost it...\p"
	.string "The professor would've been so mad at\n"
	.string "me!$"

Route501_Text_MeetRivalText3F::
# 256 "data/maps/Route501/scripts.pory"
	.string "Uwaaah! Wha... What's going on?!\p"
	.string "A wild Pokémon?! This is bad! This is\n"
	.string "really bad!\p"
	.string "{PLAYER}{KUN}, we have to use the Poké\n"
	.string "Balls in that bag to protect ourselves!\p"
	.string "Grab one and let's battle them!$"

Route501_Text_MeetRivalText4F::
# 264 "data/maps/Route501/scripts.pory"
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
	.string "Professor Hawthorne's lab now.\p"
	.string "I'm sure he must be worried about us.$"

Route501_Text_MeetRivalText1M::
# 276 "data/maps/Route501/scripts.pory"
	.string "Whoa!\p"
	.string "You're the new kid, {PLAYER}{KUN}, right?\p"
	.string "I'm {RIVAL}, your neighbor.\p"
	.string "I was supposed to deliver something\n"
	.string "from Professor Hawthorne to you but\l"
	.string "you were asleep.\p"
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
# 290 "data/maps/Route501/scripts.pory"
	.string "Geez, I can't believe I lost it...\p"
	.string "The professor would've flipped if he\n"
	.string "found out!\p"
	.string "$"

Route501_Text_MeetRivalText3M::
# 296 "data/maps/Route501/scripts.pory"
	.string "What the heck?! A wild Pokémon?! This is\n"
	.string "bad!\p"
	.string "Grab a Poké Ball from that bag so we can\n"
	.string "protect ourselves!$"

Route501_Text_MeetRivalText4M::
# 302 "data/maps/Route501/scripts.pory"
	.string "Phew... That was a close one!\p"
	.string "I can't believe we were attacked by wild\n"
	.string "Pokémon!\p"
	.string "Good thing you had {STR_VAR_1} to\n"
	.string "protect you!\p"
	.string "I'm not really a fan of Pokémon, but I\n"
	.string "guess I'll have to get used to them if I\l"
	.string "want to be a Trainer.\p"
	.string "...We should probably head back to\n"
	.string "Professor Hawthorne's lab now.\p"
	.string "I'm sure he must be worried about us.$"

Route501_Text_SkwovetGirl1::
# 332 "data/maps/Route501/scripts.pory"
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
# 342 "data/maps/Route501/scripts.pory"
	.string "I hope you and your Pokémon enjoy the\n"
	.string "Berries!$"

Route501_Text_SkwovetGirl3::
# 346 "data/maps/Route501/scripts.pory"
	.string "Skwovet are just too cute when they're\n"
	.string "eating!\n"
	.string "I could watch them all day!$"

Route501_Text_MartEmployee1::
# 366 "data/maps/Route501/scripts.pory"
	.string "Hello! Are you a Pokémon Trainer?\p"
	.string "We're giving away free Potions to all\n"
	.string "Trainers who pass through here as a\l"
	.string "promotion!\p"
	.string "Please take them as a gift from the\n"
	.string "Baycrest City Poké Mart!$"

Route501_Text_MartEmployee2::
# 373 "data/maps/Route501/scripts.pory"
	.string "We hope you'll continue to shop with us\n"
	.string "in the future!\p"
	.string "We have a wide selection of items that\n"
	.string "will help you on your journey!$"

Route501_Text_Boy::
# 385 "data/maps/Route501/scripts.pory"
	.string "Did you know that Pokémon can be found\n"
	.string "in the tall grass?\p"
	.string "I know, it's a shocker!\n"
	.string "Like, who doesn't know that?$"

Route501_Text_MichaelIntro::
# 397 "data/maps/Route501/scripts.pory"
	.string "We've locked eyes! That means it's time\n"
	.string "for a battle!\p"
	.string "I'll show you the power of my favorite\n"
	.string "Pokémon!$"

Route501_Text_MichaelDefeated::
# 402 "data/maps/Route501/scripts.pory"
	.string "You're so strong!$"

Route102_Text_MichaelPostBattle::
# 406 "data/maps/Route501/scripts.pory"
	.string "You're really good at this! I hope we\n"
	.string "can battle again sometime!$"

Route501_Text_Sign::
# 416 "data/maps/Route501/scripts.pory"
	.string "Route 501\n"
	.string "{RIGHT_ARROW} Baycrest City\p"
	.string "{DOWN_ARROW} Everwood Town$"
