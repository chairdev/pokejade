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
# 49 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 50 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route501/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 54 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 55 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText1F
# 56 "data/maps/Route501/scripts.pory"
	closemessage
# 58 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 59 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 62 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalHolly_Text_1
# 63 "data/maps/Route501/scripts.pory"
	closemessage
# 65 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 66 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 67 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 70 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 71 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText2F
# 72 "data/maps/Route501/scripts.pory"
	closemessage
# 74 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 76 "data/maps/Route501/scripts.pory"
	applymovement 3, PidoveApproachPlayer
# 77 "data/maps/Route501/scripts.pory"
	applymovement 4, PidoveApprachRival
# 78 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 81 "data/maps/Route501/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
# 83 "data/maps/Route501/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ExclemationMark
# 85 "data/maps/Route501/scripts.pory"
	applymovement 1, ExclemationMark
# 86 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 87 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 88 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceUp
# 90 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 91 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText3F
# 92 "data/maps/Route501/scripts.pory"
	closemessage
# 94 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 95 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceDown
# 98 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 99 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/Route501/scripts.pory"
	removeobject 3
# 101 "data/maps/Route501/scripts.pory"
	removeobject 4
# 102 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 103 "data/maps/Route501/scripts.pory"
	waitstate
# 105 "data/maps/Route501/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 106 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 107 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText4F
# 109 "data/maps/Route501/scripts.pory"
	special HealPlayerParty
# 110 "data/maps/Route501/scripts.pory"
	setflag FLAG_ROUTE_501_SAVED_RIVAL
# 111 "data/maps/Route501/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 112 "data/maps/Route501/scripts.pory"
	setvar VAR_ROUTE501_STATE, 1
# 113 "data/maps/Route501/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 2
# 115 "data/maps/Route501/scripts.pory"
	warp MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB, 6, 5
	return


Route501_RivalCaden::
# 119 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalNoticePlayer
# 120 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route501/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 124 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 125 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText1M
# 126 "data/maps/Route501/scripts.pory"
	closemessage
# 128 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalLookAround
# 129 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 132 "data/maps/Route501/scripts.pory"
	msgbox Route501_RivalHolly_Text_1
# 133 "data/maps/Route501/scripts.pory"
	closemessage
# 135 "data/maps/Route501/scripts.pory"
	applymovement 1, RivalApproachBag
# 136 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachBag
# 137 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 139 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 140 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText2M
# 141 "data/maps/Route501/scripts.pory"
	closemessage
# 143 "data/maps/Route501/scripts.pory"
	playbgm MUS_HELP, 0
# 145 "data/maps/Route501/scripts.pory"
	applymovement 3, PidoveApproachPlayer
# 146 "data/maps/Route501/scripts.pory"
	applymovement 4, PidoveApprachRival
# 147 "data/maps/Route501/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 150 "data/maps/Route501/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
# 152 "data/maps/Route501/scripts.pory"
	playse SE_PIN
# 153 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ExclemationMark
# 154 "data/maps/Route501/scripts.pory"
	applymovement 1, ExclemationMark
# 155 "data/maps/Route501/scripts.pory"
	waitmovement 1
# 156 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 157 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceUp
# 159 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 160 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText3M
# 161 "data/maps/Route501/scripts.pory"
	closemessage
# 163 "data/maps/Route501/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 164 "data/maps/Route501/scripts.pory"
	applymovement 1, FaceDown
# 166 "data/maps/Route501/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 167 "data/maps/Route501/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data/maps/Route501/scripts.pory"
	removeobject 3
# 169 "data/maps/Route501/scripts.pory"
	removeobject 4
# 170 "data/maps/Route501/scripts.pory"
	special ChooseStarter
# 171 "data/maps/Route501/scripts.pory"
	waitstate
# 173 "data/maps/Route501/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 174 "data/maps/Route501/scripts.pory"
	speakername Route501_RivalHolly_Text_0
# 175 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MeetRivalText4M
# 177 "data/maps/Route501/scripts.pory"
	special HealPlayerParty
# 178 "data/maps/Route501/scripts.pory"
	setflag FLAG_ROUTE_501_SAVED_RIVAL
# 179 "data/maps/Route501/scripts.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 180 "data/maps/Route501/scripts.pory"
	setvar VAR_ROUTE501_STATE, 1
# 181 "data/maps/Route501/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 2
# 183 "data/maps/Route501/scripts.pory"
	warp MAP_EVERWOOD_TOWN_HAWTHORN_RESEARCH_LAB, 6, 5
	return


# 186 "data/maps/Route501/scripts.pory"
RivalNoticePlayer:
# 187 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
# 188 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_left
	step_end

# 191 "data/maps/Route501/scripts.pory"
RivalLookAround:
# 192 "data/maps/Route501/scripts.pory"
	walk_in_place_up
# 193 "data/maps/Route501/scripts.pory"
	walk_in_place_down
# 194 "data/maps/Route501/scripts.pory"
	walk_in_place_right
# 195 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
# 196 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 199 "data/maps/Route501/scripts.pory"
RivalApproachBag:
# 200 "data/maps/Route501/scripts.pory"
	walk_fast_right
# 201 "data/maps/Route501/scripts.pory"
	walk_fast_up
# 202 "data/maps/Route501/scripts.pory"
	walk_fast_right
# 202 "data/maps/Route501/scripts.pory"
	walk_fast_right
# 202 "data/maps/Route501/scripts.pory"
	walk_fast_right
# 203 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_down
	step_end

# 206 "data/maps/Route501/scripts.pory"
PlayerApproachBag:
# 207 "data/maps/Route501/scripts.pory"
	walk_right
# 207 "data/maps/Route501/scripts.pory"
	walk_right
# 207 "data/maps/Route501/scripts.pory"
	walk_right
# 207 "data/maps/Route501/scripts.pory"
	walk_right
# 208 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
	step_end

# 211 "data/maps/Route501/scripts.pory"
PidoveApproachPlayer:
# 212 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 213 "data/maps/Route501/scripts.pory"
	face_right
	step_end

# 216 "data/maps/Route501/scripts.pory"
PidoveApprachRival:
# 217 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 217 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 217 "data/maps/Route501/scripts.pory"
	walk_faster_down
# 217 "data/maps/Route501/scripts.pory"
	walk_faster_down
	step_end

# 220 "data/maps/Route501/scripts.pory"
ExclemationMark:
# 221 "data/maps/Route501/scripts.pory"
	emote_exclamation_mark
	step_end

# 224 "data/maps/Route501/scripts.pory"
FaceUp:
# 225 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_up
	step_end

# 228 "data/maps/Route501/scripts.pory"
FaceDown:
# 229 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_down
	step_end

# 232 "data/maps/Route501/scripts.pory"
FaceLeft:
# 233 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_left
	step_end

# 236 "data/maps/Route501/scripts.pory"
FaceRight:
# 237 "data/maps/Route501/scripts.pory"
	walk_in_place_faster_right
	step_end

Route501_EventScript_SkwovetGirl::
# 319 "data/maps/Route501/scripts.pory"
	lock
# 320 "data/maps/Route501/scripts.pory"
	faceplayer
# 322 "data/maps/Route501/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_ROUTE_501, Route501_EventScript_SkwovetGirl_2
# 328 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl1
# 329 "data/maps/Route501/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 330 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl2
# 332 "data/maps/Route501/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE_501
Route501_EventScript_SkwovetGirl_1:
# 335 "data/maps/Route501/scripts.pory"
	release
	return

Route501_EventScript_SkwovetGirl_2:
# 324 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_SkwovetGirl3
	goto Route501_EventScript_SkwovetGirl_1


Route501_EventScript_MartEmployee::
# 357 "data/maps/Route501/scripts.pory"
	lock
# 358 "data/maps/Route501/scripts.pory"
	faceplayer
# 360 "data/maps/Route501/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_ROUTE501, Route501_EventScript_MartEmployee_2
Route501_EventScript_MartEmployee_1:
# 368 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MartEmployee2
# 369 "data/maps/Route501/scripts.pory"
	release
	return

Route501_EventScript_MartEmployee_2:
# 362 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_MartEmployee1
# 363 "data/maps/Route501/scripts.pory"
	giveitem ITEM_POTION, 5
# 365 "data/maps/Route501/scripts.pory"
	setflag FLAG_RECEIVED_POTION_ROUTE501
	goto Route501_EventScript_MartEmployee_1


Route501_EventScript_Boy::
# 385 "data/maps/Route501/scripts.pory"
	lock
# 386 "data/maps/Route501/scripts.pory"
	faceplayer
# 387 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_Boy
# 388 "data/maps/Route501/scripts.pory"
	release
	return


Route501_EventScript_Michael::
# 397 "data/maps/Route501/scripts.pory"
	trainerbattle_single TRAINER_MICHAEL, Route501_Text_MichaelIntro, Route501_Text_MichaelDefeated
# 398 "data/maps/Route501/scripts.pory"
	msgbox Route102_Text_MichaelPostBattle, MSGBOX_AUTOCLOSE
# 399 "data/maps/Route501/scripts.pory"
	waitmessage
	end


Route501_Sign_Route::
# 416 "data/maps/Route501/scripts.pory"
	lock
# 417 "data/maps/Route501/scripts.pory"
	msgbox Route501_Text_Sign
# 418 "data/maps/Route501/scripts.pory"
	release
	return


Route501_RivalHolly_Text_0:
# 54 "data/maps/Route501/scripts.pory"
	.string "{RIVAL}$"

Route501_RivalHolly_Text_1:
# 62 "data/maps/Route501/scripts.pory"
	.string "Oh, there it is!$"

Route501_Text_MeetRivalText1F::
# 240 "data/maps/Route501/scripts.pory"
	.string "Huh? Oh!\p"
	.string "You must be {PLAYER}{KUN}, right?\p"
	.string "I'm {RIVAL}, your neighbor!\p"
	.string "Professor Hawthorne asked me to bring\n"
	.string "you something, but when I stopped by,\l"
	.string "your mom said you were asleep.\p"
	.string "So I went for a walk; Everwood's so small\n"
	.string "that I just had to do something.\p"
	.string "But now that I think of it... I might\n"
	.string "have dropped it somewhere...\p"
	.string "Oh no, this isn't good.$"

Route501_Text_MeetRivalText2F::
# 251 "data/maps/Route501/scripts.pory"
	.string "Honestly, I'd be so lost if I can't find\n"
	.string "it.\p"
	.string "The professor would be pretty\n"
	.string "disappointed in me.$"

Route501_Text_MeetRivalText3F::
# 259 "data/maps/Route501/scripts.pory"
	.string "Eek! A wild Pokémon! This is bad, really\n"
	.string "bad!\p"
	.string "We need to use the Poké Balls in the bag\n"
	.string "to defend ourselves!\p"
	.string "Let's do this, {PLAYER}!$"

Route501_Text_MeetRivalText4F::
# 267 "data/maps/Route501/scripts.pory"
	.string "Phew... that was close!\p"
	.string "I didn't think wild Pokémon would just\n"
	.string "attack us like that!\p"
	.string "Good thing you had {STR_VAR_1} to\n"
	.string "protect you.\p"
	.string "To be honest, I was never really into\n"
	.string "Pokémon...\p"
	.string "But I think I'll have to get used to\n"
	.string "them if I want to see what's beyond\l"
	.string "Everwood.\p"
	.string "Come on, let's go back to Professor\n"
	.string "Hawthorne's lab.\p"
	.string "He's probably wondering if we got lost\n"
	.string "or something.$"

Route501_Text_MeetRivalText1M::
# 279 "data/maps/Route501/scripts.pory"
	.string "Whoa!\p"
	.string "Hey, you're {PLAYER}, right?\p"
	.string "I'm {RIVAL}, your neighbor.\p"
	.string "Professor Hawthorne sent me to deliver\n"
	.string "something to you, but you were still\l"
	.string "asleep.\p"
	.string "Couldn't sit around waiting, so I\n"
	.string "thought I'd explore a bit. Everwood's\l"
	.string "not exactly exciting, you know?\p"
	.string "But anyway, now that you're here, let's\n"
	.string "check that bag...\p"
	.string "Huh... weird. Thought I had it right here.$"

Route501_Text_MeetRivalText2M::
# 292 "data/maps/Route501/scripts.pory"
	.string "Unreal. I can't believe I lost it...\p"
	.string "Professor Hawthorne's gonna let me\n"
	.string "have it when he finds out.$"

Route501_Text_MeetRivalText3M::
# 299 "data/maps/Route501/scripts.pory"
	.string "What the--?! Wild Pokémon?!\p"
	.string "This isn't good. Alright, grab a Poké Ball\n"
	.string "from the bag!\p"
	.string "Let's teach these things a lesson.$"

Route501_Text_MeetRivalText4M::
# 307 "data/maps/Route501/scripts.pory"
	.string "Whew... that was intense!\p"
	.string "I wasn't expecting wild Pokémon to go\n"
	.string "after us like that!\p"
	.string "Guess it's good you had {STR_VAR_1}\n"
	.string "backing you up.\p"
	.string "Not gonna lie, I don't exactly see\n"
	.string "myself as a Pokémon fanatic.\p"
	.string "But hey, maybe they'll help me get out\n"
	.string "of here and find some excitement.\p"
	.string "Anyway, we should probably head back to\n"
	.string "Professor Hawthorne's lab.\p"
	.string "He's probably wondering what's taking\n"
	.string "so long.$"

Route501_Text_SkwovetGirl1::
# 338 "data/maps/Route501/scripts.pory"
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
# 348 "data/maps/Route501/scripts.pory"
	.string "I hope you and your Pokémon enjoy the\n"
	.string "Berries!$"

Route501_Text_SkwovetGirl3::
# 352 "data/maps/Route501/scripts.pory"
	.string "Skwovet are just too cute when they're\n"
	.string "eating!\n"
	.string "I could watch them all day!$"

Route501_Text_MartEmployee1::
# 372 "data/maps/Route501/scripts.pory"
	.string "Hello! Are you a Pokémon Trainer?\p"
	.string "We're giving away free Potions to all\n"
	.string "Trainers who pass through here as a\l"
	.string "promotion!\p"
	.string "Please take them as a gift from the\n"
	.string "Baycrest City Poké Mart!$"

Route501_Text_MartEmployee2::
# 379 "data/maps/Route501/scripts.pory"
	.string "We hope you'll continue to shop with us\n"
	.string "in the future!\p"
	.string "We have a wide selection of items that\n"
	.string "will help you on your journey!$"

Route501_Text_Boy::
# 391 "data/maps/Route501/scripts.pory"
	.string "Did you know that Pokémon can be found\n"
	.string "in the tall grass?\p"
	.string "I know, it's a shocker!\n"
	.string "Like, who doesn't know that?$"

Route501_Text_MichaelIntro::
# 403 "data/maps/Route501/scripts.pory"
	.string "We've locked eyes! That means it's time\n"
	.string "for a battle!$"

Route501_Text_MichaelDefeated::
# 407 "data/maps/Route501/scripts.pory"
	.string "You're so strong!$"

Route102_Text_MichaelPostBattle::
# 411 "data/maps/Route501/scripts.pory"
	.string "You're really good at this! I hope we\n"
	.string "can battle again sometime!$"

Route501_Text_Sign::
# 421 "data/maps/Route501/scripts.pory"
	.string "Route 301\n"
	.string "{RIGHT_ARROW} Baycrest City\p"
	.string "{DOWN_ARROW} Everwood Town$"
