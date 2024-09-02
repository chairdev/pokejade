KismetForest_MapScripts::
	.byte 0


KismetForest_Trigger_Jasmine1::
# 12 "data/maps/KismetForest/scripts.pory"
	lockall
# 14 "data/maps/KismetForest/scripts.pory"
	applymovement 9, KismetForest_Movement_AmphyApproachPlayer1
# 15 "data/maps/KismetForest/scripts.pory"
	applymovement 8, KismetForest_Movement_JasmineApproachPlayer1
# 16 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 17 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceDownRight
# 18 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 20 "data/maps/KismetForest/scripts.pory"
	call KismetForest_Jasmine
	return


KismetForest_Trigger_Jasmine2::
# 24 "data/maps/KismetForest/scripts.pory"
	lockall
# 26 "data/maps/KismetForest/scripts.pory"
	applymovement 9, KismetForest_Movement_AmphyApproachPlayer2
# 27 "data/maps/KismetForest/scripts.pory"
	applymovement 8, KismetForest_Movement_JasmineApproachPlayer2
# 28 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 29 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceDownRight
# 30 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 32 "data/maps/KismetForest/scripts.pory"
	call KismetForest_Jasmine
	return


KismetForest_Jasmine::
# 37 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_0
# 38 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Jasmine_Text_1
# 39 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_2
# 40 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Jasmine1
# 41 "data/maps/KismetForest/scripts.pory"
	closemessage
# 43 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceDown
# 45 "data/maps/KismetForest/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 46 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Jasmine_Text_3
# 47 "data/maps/KismetForest/scripts.pory"
	waitmoncry
# 48 "data/maps/KismetForest/scripts.pory"
	closemessage
# 50 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceRight
# 52 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_2
# 53 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Jasmine2
# 54 "data/maps/KismetForest/scripts.pory"
	closemessage
# 56 "data/maps/KismetForest/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 58 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_2
# 59 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Jasmine3
# 60 "data/maps/KismetForest/scripts.pory"
	closemessage
# 62 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceDown
# 63 "data/maps/KismetForest/scripts.pory"
	applymovement 9, KismetForest_Movement_FaceRight
# 65 "data/maps/KismetForest/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 66 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Jasmine_Text_4
# 67 "data/maps/KismetForest/scripts.pory"
	waitmoncry
# 68 "data/maps/KismetForest/scripts.pory"
	closemessage
# 70 "data/maps/KismetForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/KismetForest/scripts.pory"
	removeobject 8
# 72 "data/maps/KismetForest/scripts.pory"
	removeobject 9
# 73 "data/maps/KismetForest/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 74 "data/maps/KismetForest/scripts.pory"
	setvar VAR_KISMET_FOREST_STATE, 1
# 75 "data/maps/KismetForest/scripts.pory"
	playse SE_EXIT
# 76 "data/maps/KismetForest/scripts.pory"
	waitse
# 77 "data/maps/KismetForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KismetForest_Movement_FaceRight
# 78 "data/maps/KismetForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 80 "data/maps/KismetForest/scripts.pory"
	releaseall
	return


# 83 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_JasmineApproachPlayer1:
# 84 "data/maps/KismetForest/scripts.pory"
	delay_16
# 84 "data/maps/KismetForest/scripts.pory"
	delay_16
# 84 "data/maps/KismetForest/scripts.pory"
	delay_16
# 84 "data/maps/KismetForest/scripts.pory"
	delay_16
# 85 "data/maps/KismetForest/scripts.pory"
	walk_up
# 85 "data/maps/KismetForest/scripts.pory"
	walk_up
# 85 "data/maps/KismetForest/scripts.pory"
	walk_up
# 85 "data/maps/KismetForest/scripts.pory"
	walk_up
# 86 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_left
	step_end

# 89 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_JasmineApproachPlayer2:
# 90 "data/maps/KismetForest/scripts.pory"
	delay_16
# 90 "data/maps/KismetForest/scripts.pory"
	delay_16
# 90 "data/maps/KismetForest/scripts.pory"
	delay_16
# 90 "data/maps/KismetForest/scripts.pory"
	delay_16
# 91 "data/maps/KismetForest/scripts.pory"
	walk_up
# 91 "data/maps/KismetForest/scripts.pory"
	walk_up
# 91 "data/maps/KismetForest/scripts.pory"
	walk_up
# 92 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_left
	step_end

# 95 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_AmphyApproachPlayer1:
# 96 "data/maps/KismetForest/scripts.pory"
	walk_up
# 96 "data/maps/KismetForest/scripts.pory"
	walk_up
# 96 "data/maps/KismetForest/scripts.pory"
	walk_up
# 97 "data/maps/KismetForest/scripts.pory"
	walk_left
# 97 "data/maps/KismetForest/scripts.pory"
	walk_left
# 98 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_up
# 99 "data/maps/KismetForest/scripts.pory"
	face_up
	step_end

# 102 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_AmphyApproachPlayer2:
# 103 "data/maps/KismetForest/scripts.pory"
	walk_up
# 103 "data/maps/KismetForest/scripts.pory"
	walk_up
# 103 "data/maps/KismetForest/scripts.pory"
	walk_up
# 103 "data/maps/KismetForest/scripts.pory"
	walk_up
# 104 "data/maps/KismetForest/scripts.pory"
	walk_left
# 104 "data/maps/KismetForest/scripts.pory"
	walk_left
# 105 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_up
# 106 "data/maps/KismetForest/scripts.pory"
	face_up
	step_end

# 109 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_FaceDownRight:
# 110 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_down
# 111 "data/maps/KismetForest/scripts.pory"
	delay_16
# 111 "data/maps/KismetForest/scripts.pory"
	delay_16
# 112 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_right
	step_end

# 115 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_FaceDown:
# 116 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_down
	step_end

# 119 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_FaceRight:
# 120 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_right
	step_end

KismetForest_EventScript_Boy::
# 156 "data/maps/KismetForest/scripts.pory"
	lock
# 157 "data/maps/KismetForest/scripts.pory"
	faceplayer
# 158 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Boy
# 159 "data/maps/KismetForest/scripts.pory"
	release
	return


KismetForest_EventScript_BugCatcherRaymond::
# 172 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_RAYMOND, KismetForest_Text_RaymondIntro, KismetForest_Text_RaymondDefeat
# 173 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_RaymondPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherGregory::
# 189 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_GREGORY, KismetForest_Text_GregoryIntro, KismetForest_Text_GregoryDefeat
# 190 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_LassDorothy::
# 206 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_DOROTHY, KismetForest_Text_DorothyIntro, KismetForest_Text_DorothyDefeat
# 207 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_DorothyPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_PsychicJoshua::
# 222 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, KismetForest_Text_JoshuaIntro, KismetForest_Text_JoshuaDefeat
# 223 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_HexManiacLisa::
# 239 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_LISA, KismetForest_Text_LisaIntro, KismetForest_Text_LisaDefeat
# 240 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherJerry::
# 256 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, KismetForest_Text_JerryIntro, KismetForest_Text_JerryDefeat
# 257 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_Jasmine_Text_0:
# 37 "data/maps/KismetForest/scripts.pory"
	.string "???$"

KismetForest_Jasmine_Text_1:
# 38 "data/maps/KismetForest/scripts.pory"
	.string "Oh... hello.\nI'm... I'm Jasmine.$"

KismetForest_Jasmine_Text_2:
# 39 "data/maps/KismetForest/scripts.pory"
	.string "Jasmine$"

KismetForest_Jasmine_Text_3:
# 46 "data/maps/KismetForest/scripts.pory"
	.string "Pharos!$"

KismetForest_Jasmine_Text_4:
# 66 "data/maps/KismetForest/scripts.pory"
	.string "Amphaaa!$"

KismetForest_Text_Jasmine1::
# 123 "data/maps/KismetForest/scripts.pory"
	.string "I'm visiting from the Johto region.\p"
	.string "I, um... I'm on vacation in Starridge\n"
	.string "Town.\p"
	.string "It's... nice to get away and spend time\n"
	.string "in a place like this.\p"
	.string "Right now, I'm just... exploring the\n"
	.string "Kismet Forest.\n"
	.string "It's... it's so beautiful here.$"

KismetForest_Text_Jasmine2::
# 131 "data/maps/KismetForest/scripts.pory"
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
# 146 "data/maps/KismetForest/scripts.pory"
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
# 162 "data/maps/KismetForest/scripts.pory"
	.string "This place is crawling with trainers\n"
	.string "doing double battles.\p"
	.string "On top of that, there are strong wild\n"
	.string "Pokémon here too.\p"
	.string "If you're not careful, you could get\n"
	.string "overwhelmed.\p"
	.string "Make sure to buy lots of items from the\n"
	.string "Poké Mart before you go any further.$"

KismetForest_Text_RaymondIntro::
# 176 "data/maps/KismetForest/scripts.pory"
	.string "I can't find a partner for a double\n"
	.string "battle.\n"
	.string "I'll just have to battle you by myself!$"

KismetForest_Text_RaymondDefeat::
# 180 "data/maps/KismetForest/scripts.pory"
	.string "Not to sound like a sore loser, but...\n"
	.string "This definitely wouldn't have happened\l"
	.string "if I had a battle partner.$"

KismetForest_Text_RaymondPostBattle::
# 184 "data/maps/KismetForest/scripts.pory"
	.string "Seriously though, I would've won if I\n"
	.string "had a partner.$"

KismetForest_Text_GregoryIntro::
# 193 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryDefeat::
# 197 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryPostBattle::
# 201 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyIntro::
# 210 "data/maps/KismetForest/scripts.pory"
	.string "Bugs are so icky and gross!\n"
	.string "I just want to get out of here!$"

KismetForest_Text_DorothyDefeat::
# 213 "data/maps/KismetForest/scripts.pory"
	.string "Aiyee! Something just crawled on me!$"

KismetForest_Text_DorothyPostBattle::
# 217 "data/maps/KismetForest/scripts.pory"
	.string "I'm never coming back to this forest\n"
	.string "again!$"

KismetForest_Text_JoshuaIntro::
# 226 "data/maps/KismetForest/scripts.pory"
	.string "I can sense loss in the near future.$"

KismetForest_Text_JoshuaDefeat::
# 230 "data/maps/KismetForest/scripts.pory"
	.string "I never said it was your loss.$"

KismetForest_Text_JoshuaPostBattle::
# 234 "data/maps/KismetForest/scripts.pory"
	.string "Your win was inevitable.$"

KismetForest_Text_LisaIntro::
# 243 "data/maps/KismetForest/scripts.pory"
	.string "I can see the spirits of the forest.$"

KismetForest_Text_LisaDefeat::
# 247 "data/maps/KismetForest/scripts.pory"
	.string "They whisper to me that my resistance\n"
	.string "was futile.$"

KismetForest_Text_LisaPostBattle::
# 251 "data/maps/KismetForest/scripts.pory"
	.string "The spirits have spoken.$"

KismetForest_Text_JerryIntro::
# 260 "data/maps/KismetForest/scripts.pory"
	.string "Hi! I'm here to let you know that you're\n"
	.string "at the end of Kismet Forest!\p"
	.string "And well, I'm here to battle you!$"

KismetForest_Text_JerryDefeat::
# 265 "data/maps/KismetForest/scripts.pory"
	.string "I give you permission to pass!\n"
	.string "...Not that you needed it.$"

KismetForest_Text_JerryPostBattle::
# 269 "data/maps/KismetForest/scripts.pory"
	.string "Is it morally wrong to gatekeep the\n"
	.string "exit of a forest?\p"
	.string "Probably not!\n"
	.string "Is it fun?\p"
	.string "Absolutely!$"
