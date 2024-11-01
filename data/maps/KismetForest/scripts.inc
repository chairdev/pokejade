KismetForest_MapScripts::
# 11 "data/maps/KismetForest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, KismetForest_OnLoad
	.byte 0


KismetForest_OnLoad::
# 15 "data/maps/KismetForest/scripts.pory"
	gettime
# 16 "data/maps/KismetForest/scripts.pory"
	compare VAR_0x8003, DAY_WEDNESDAY
	goto_if_ne KismetForest_OnLoad_1
	return

KismetForest_OnLoad_1:
# 18 "data/maps/KismetForest/scripts.pory"
	removeobject 10
# 19 "data/maps/KismetForest/scripts.pory"
	setflag FLAG_DAILY_DEFEATED_SCOLIPEDE
	return


KismetForest_EventScript_Static_Scolipede::
# 24 "data/maps/KismetForest/scripts.pory"
	lock
# 25 "data/maps/KismetForest/scripts.pory"
	faceplayer
# 27 "data/maps/KismetForest/scripts.pory"
	playmoncry SPECIES_SCOLIPEDE, CRY_MODE_NORMAL
# 28 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_EventScript_Static_Scolipede_Text_0
# 29 "data/maps/KismetForest/scripts.pory"
	waitmoncry
# 31 "data/maps/KismetForest/scripts.pory"
	setwildbattle SPECIES_SCOLIPEDE, 25
# 32 "data/maps/KismetForest/scripts.pory"
	dowildbattle
# 34 "data/maps/KismetForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/KismetForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 37 "data/maps/KismetForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KismetForest_EventScript_Static_Scolipede_2
# 37 "data/maps/KismetForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq KismetForest_EventScript_Static_Scolipede_2
KismetForest_EventScript_Static_Scolipede_1:
# 43 "data/maps/KismetForest/scripts.pory"
	removeobject 10
# 44 "data/maps/KismetForest/scripts.pory"
	setflag FLAG_DAILY_DEFEATED_SCOLIPEDE
# 46 "data/maps/KismetForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 48 "data/maps/KismetForest/scripts.pory"
	release
	return

KismetForest_EventScript_Static_Scolipede_2:
# 39 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_EventScript_Static_Scolipede_Text_1
# 40 "data/maps/KismetForest/scripts.pory"
	closemessage
	goto KismetForest_EventScript_Static_Scolipede_1


KismetForest_Trigger_Jasmine1::
# 54 "data/maps/KismetForest/scripts.pory"
	lockall
# 56 "data/maps/KismetForest/scripts.pory"
	applymovement 9, KismetForest_Movement_AmphyApproachPlayer1
# 57 "data/maps/KismetForest/scripts.pory"
	applymovement 8, KismetForest_Movement_JasmineApproachPlayer1
# 58 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 59 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceDownRight
# 60 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 62 "data/maps/KismetForest/scripts.pory"
	call KismetForest_Jasmine
	return


KismetForest_Trigger_Jasmine2::
# 66 "data/maps/KismetForest/scripts.pory"
	lockall
# 68 "data/maps/KismetForest/scripts.pory"
	applymovement 9, KismetForest_Movement_AmphyApproachPlayer2
# 69 "data/maps/KismetForest/scripts.pory"
	applymovement 8, KismetForest_Movement_JasmineApproachPlayer2
# 70 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 71 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceDownRight
# 72 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 74 "data/maps/KismetForest/scripts.pory"
	call KismetForest_Jasmine
	return


KismetForest_Jasmine::
# 78 "data/maps/KismetForest/scripts.pory"
	clearflag FLAG_HIDE_STARRIDGE_CITY_RIVAL
# 80 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_0
# 81 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Jasmine_Text_1
# 82 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_2
# 83 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Jasmine1
# 84 "data/maps/KismetForest/scripts.pory"
	closemessage
# 86 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceDown
# 88 "data/maps/KismetForest/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 89 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Jasmine_Text_3
# 90 "data/maps/KismetForest/scripts.pory"
	waitmoncry
# 91 "data/maps/KismetForest/scripts.pory"
	closemessage
# 93 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceRight
# 95 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_2
# 96 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Jasmine2
# 97 "data/maps/KismetForest/scripts.pory"
	closemessage
# 99 "data/maps/KismetForest/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 101 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_2
# 102 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Jasmine3
# 103 "data/maps/KismetForest/scripts.pory"
	closemessage
# 105 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceDown
# 106 "data/maps/KismetForest/scripts.pory"
	applymovement 9, KismetForest_Movement_FaceRight
# 108 "data/maps/KismetForest/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 109 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Jasmine_Text_4
# 110 "data/maps/KismetForest/scripts.pory"
	waitmoncry
# 111 "data/maps/KismetForest/scripts.pory"
	closemessage
# 113 "data/maps/KismetForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/KismetForest/scripts.pory"
	removeobject 8
# 115 "data/maps/KismetForest/scripts.pory"
	removeobject 9
# 116 "data/maps/KismetForest/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 117 "data/maps/KismetForest/scripts.pory"
	setvar VAR_KISMET_FOREST_STATE, 1
# 118 "data/maps/KismetForest/scripts.pory"
	playse SE_EXIT
# 119 "data/maps/KismetForest/scripts.pory"
	waitse
# 120 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceRight
# 121 "data/maps/KismetForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 123 "data/maps/KismetForest/scripts.pory"
	releaseall
	return


# 126 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_JasmineApproachPlayer1:
# 127 "data/maps/KismetForest/scripts.pory"
	delay_16
# 127 "data/maps/KismetForest/scripts.pory"
	delay_16
# 127 "data/maps/KismetForest/scripts.pory"
	delay_16
# 127 "data/maps/KismetForest/scripts.pory"
	delay_16
# 128 "data/maps/KismetForest/scripts.pory"
	walk_up
# 128 "data/maps/KismetForest/scripts.pory"
	walk_up
# 128 "data/maps/KismetForest/scripts.pory"
	walk_up
# 128 "data/maps/KismetForest/scripts.pory"
	walk_up
# 129 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_left
	step_end

# 132 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_JasmineApproachPlayer2:
# 133 "data/maps/KismetForest/scripts.pory"
	delay_16
# 133 "data/maps/KismetForest/scripts.pory"
	delay_16
# 133 "data/maps/KismetForest/scripts.pory"
	delay_16
# 133 "data/maps/KismetForest/scripts.pory"
	delay_16
# 134 "data/maps/KismetForest/scripts.pory"
	walk_up
# 134 "data/maps/KismetForest/scripts.pory"
	walk_up
# 134 "data/maps/KismetForest/scripts.pory"
	walk_up
# 135 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_left
	step_end

# 138 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_AmphyApproachPlayer1:
# 139 "data/maps/KismetForest/scripts.pory"
	walk_up
# 139 "data/maps/KismetForest/scripts.pory"
	walk_up
# 139 "data/maps/KismetForest/scripts.pory"
	walk_up
# 140 "data/maps/KismetForest/scripts.pory"
	walk_left
# 140 "data/maps/KismetForest/scripts.pory"
	walk_left
# 141 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_up
# 142 "data/maps/KismetForest/scripts.pory"
	face_up
	step_end

# 145 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_AmphyApproachPlayer2:
# 146 "data/maps/KismetForest/scripts.pory"
	walk_up
# 146 "data/maps/KismetForest/scripts.pory"
	walk_up
# 146 "data/maps/KismetForest/scripts.pory"
	walk_up
# 146 "data/maps/KismetForest/scripts.pory"
	walk_up
# 147 "data/maps/KismetForest/scripts.pory"
	walk_left
# 147 "data/maps/KismetForest/scripts.pory"
	walk_left
# 148 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_up
# 149 "data/maps/KismetForest/scripts.pory"
	face_up
	step_end

# 152 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_FaceDownRight:
# 153 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_down
# 154 "data/maps/KismetForest/scripts.pory"
	delay_16
# 154 "data/maps/KismetForest/scripts.pory"
	delay_16
# 155 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_right
	step_end

# 158 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_FaceDown:
# 159 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_down
	step_end

# 162 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_FaceRight:
# 163 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_right
	step_end

KismetForest_EventScript_Boy::
# 199 "data/maps/KismetForest/scripts.pory"
	lock
# 200 "data/maps/KismetForest/scripts.pory"
	faceplayer
# 201 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Boy
# 202 "data/maps/KismetForest/scripts.pory"
	release
	return


KismetForest_EventScript_BugCatcherRaymond::
# 215 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_RAYMOND, KismetForest_Text_RaymondIntro, KismetForest_Text_RaymondDefeat
# 216 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_RaymondPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherGregory::
# 232 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_GREGORY, KismetForest_Text_GregoryIntro, KismetForest_Text_GregoryDefeat
# 233 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_LassDorothy::
# 249 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_DOROTHY, KismetForest_Text_DorothyIntro, KismetForest_Text_DorothyDefeat
# 250 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_DorothyPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_PsychicJoshua::
# 265 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, KismetForest_Text_JoshuaIntro, KismetForest_Text_JoshuaDefeat
# 266 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_HexManiacLisa::
# 282 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_LISA, KismetForest_Text_LisaIntro, KismetForest_Text_LisaDefeat
# 283 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherJerry::
# 299 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, KismetForest_Text_JerryIntro, KismetForest_Text_JerryDefeat
# 300 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_Static_Scolipede_Text_0:
# 28 "data/maps/KismetForest/scripts.pory"
	.string "Raaaooorgh!$"

KismetForest_EventScript_Static_Scolipede_Text_1:
# 39 "data/maps/KismetForest/scripts.pory"
	.string "Scolipede ran deep into the forest.$"

KismetForest_Jasmine_Text_0:
# 80 "data/maps/KismetForest/scripts.pory"
	.string "???$"

KismetForest_Jasmine_Text_1:
# 81 "data/maps/KismetForest/scripts.pory"
	.string "Oh... hello.\nI'm... I'm Jasmine.$"

KismetForest_Jasmine_Text_2:
# 82 "data/maps/KismetForest/scripts.pory"
	.string "Jasmine$"

KismetForest_Jasmine_Text_3:
# 89 "data/maps/KismetForest/scripts.pory"
	.string "Pharos!$"

KismetForest_Jasmine_Text_4:
# 109 "data/maps/KismetForest/scripts.pory"
	.string "Amphaaa!$"

KismetForest_Text_Jasmine1::
# 166 "data/maps/KismetForest/scripts.pory"
	.string "I'm visiting from the Johto region.\p"
	.string "I, um... I'm on vacation in Starridge\n"
	.string "Town.\p"
	.string "It's... nice to get away and spend time\n"
	.string "in a place like this.\p"
	.string "Right now, I'm just... exploring the\n"
	.string "Kismet Forest.\n"
	.string "It's... it's so beautiful here.$"

KismetForest_Text_Jasmine2::
# 174 "data/maps/KismetForest/scripts.pory"
	.string "This trainer reminds you of him, doesn't\n"
	.string "he, Amphy?\p"
	.string "I'm sorry, I... I don't mean to be rude.\p"
	.string "You... you remind me of someone.\n"
	.string "A boy I met 2 years ago in Johto...\p"
	.string "He... became the Champion.\n"
	.string "He was very kind... and had a strong\l"
	.string "bond with his Pokémon.\p"
	.string "You... have that same look of\n"
	.string "determination in your eyes.\p"
	.string "I... I'm sorry, I... I'm just rambling.\p"
	.string "Can I... ask your name?\p"
	.string "... ... ...\p"
	.string "I see... {PLAYER}.\n"
	.string "It's... nice to meet you.\p"
	.string "{PLAYER}, I want to give you this.\n"
	.string "It's, um... it's the TM for Hidden Power.\p"
	.string "Johto is known for this move.\n"
	.string "It's.. special.$"

KismetForest_Text_Jasmine3::
# 189 "data/maps/KismetForest/scripts.pory"
	.string "It's a move that changes type\n"
	.string "depending on the Pokémon that uses it,\l"
	.string "so it truly reflects the user's inner\l"
	.string "strength.\p"
	.string "I... I hope you find it useful.\n"
	.string "I think you'll go far... just like that\l"
	.string "boy.\p"
	.string "I should get going now.\n"
	.string "I... hope we meet again, {PLAYER}.\n"
	.string "Goodbye.$"

KismetForest_Text_Boy::
# 205 "data/maps/KismetForest/scripts.pory"
	.string "This place is crawling with trainers\n"
	.string "doing double battles.\p"
	.string "On top of that, there are strong wild\n"
	.string "Pokémon here too.\p"
	.string "If you're not careful, you could get\n"
	.string "overwhelmed.\p"
	.string "Make sure to buy lots of items from the\n"
	.string "Poké Mart before you go any further.$"

KismetForest_Text_RaymondIntro::
# 219 "data/maps/KismetForest/scripts.pory"
	.string "I can't find a partner for a double\n"
	.string "battle.\n"
	.string "I'll just have to battle you by myself!$"

KismetForest_Text_RaymondDefeat::
# 223 "data/maps/KismetForest/scripts.pory"
	.string "Not to sound like a sore loser, but...\n"
	.string "This definitely wouldn't have\n"
	.string "happened if I had a battle partner.$"

KismetForest_Text_RaymondPostBattle::
# 227 "data/maps/KismetForest/scripts.pory"
	.string "Seriously though, I would've won if I\n"
	.string "had a partner.$"

KismetForest_Text_GregoryIntro::
# 236 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryDefeat::
# 240 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryPostBattle::
# 244 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyIntro::
# 253 "data/maps/KismetForest/scripts.pory"
	.string "Bugs are so icky and gross!\n"
	.string "I just want to get out of here!$"

KismetForest_Text_DorothyDefeat::
# 256 "data/maps/KismetForest/scripts.pory"
	.string "Aiyee! Something just crawled on me!$"

KismetForest_Text_DorothyPostBattle::
# 260 "data/maps/KismetForest/scripts.pory"
	.string "I'm never coming back to this forest\n"
	.string "again!$"

KismetForest_Text_JoshuaIntro::
# 269 "data/maps/KismetForest/scripts.pory"
	.string "I can sense loss in the near future.$"

KismetForest_Text_JoshuaDefeat::
# 273 "data/maps/KismetForest/scripts.pory"
	.string "I never said it was your loss.$"

KismetForest_Text_JoshuaPostBattle::
# 277 "data/maps/KismetForest/scripts.pory"
	.string "Your win was inevitable.$"

KismetForest_Text_LisaIntro::
# 286 "data/maps/KismetForest/scripts.pory"
	.string "I can see the spirits of the forest.$"

KismetForest_Text_LisaDefeat::
# 290 "data/maps/KismetForest/scripts.pory"
	.string "They whisper to me that my resistance\n"
	.string "was futile.$"

KismetForest_Text_LisaPostBattle::
# 294 "data/maps/KismetForest/scripts.pory"
	.string "The spirits have spoken.$"

KismetForest_Text_JerryIntro::
# 303 "data/maps/KismetForest/scripts.pory"
	.string "Hi! I'm here to let you know that you're\n"
	.string "at the end of Kismet Forest!\p"
	.string "And well, I'm here to battle you!$"

KismetForest_Text_JerryDefeat::
# 308 "data/maps/KismetForest/scripts.pory"
	.string "I give you permission to pass!\n"
	.string "...Not that you needed it.$"

KismetForest_Text_JerryPostBattle::
# 312 "data/maps/KismetForest/scripts.pory"
	.string "Is it morally wrong to gatekeep the\n"
	.string "exit of a forest?\p"
	.string "Probably not!\n"
	.string "Is it fun?\p"
	.string "Absolutely!$"
