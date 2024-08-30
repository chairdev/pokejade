KismetForest_MapScripts::
	.byte 0


KismetForest_Trigger_Jasmine1::
# 12 "data/maps/KismetForest/scripts.pory"
	lockall
# 14 "data/maps/KismetForest/scripts.pory"
	applymovement 9, KismetForest_Movement_AmphyApproachPlayer1
# 15 "data/maps/KismetForest/scripts.pory"
	applymovement 8, KismetForest_Movement_AmphyApproachPlayer1
# 16 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 17 "data/maps/KismetForest/scripts.pory"
	waitmovement 1
# 19 "data/maps/KismetForest/scripts.pory"
	call KismetForest_Jasmine
	return


KismetForest_Trigger_Jasmine2::
# 23 "data/maps/KismetForest/scripts.pory"
	lockall
# 25 "data/maps/KismetForest/scripts.pory"
	applymovement 9, KismetForest_Movement_AmphyApproachPlayer2
# 26 "data/maps/KismetForest/scripts.pory"
	applymovement 8, KismetForest_Movement_AmphyApproachPlayer2
# 27 "data/maps/KismetForest/scripts.pory"
	waitmovement 0
# 28 "data/maps/KismetForest/scripts.pory"
	waitmovement 1
# 30 "data/maps/KismetForest/scripts.pory"
	call KismetForest_Jasmine
	return


KismetForest_Jasmine::
# 35 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_0
# 36 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Jasmine_Text_1
# 37 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_2
# 38 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Jasmine1
# 39 "data/maps/KismetForest/scripts.pory"
	closemessage
# 42 "data/maps/KismetForest/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 43 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Jasmine_Text_3
# 44 "data/maps/KismetForest/scripts.pory"
	waitmoncry
# 45 "data/maps/KismetForest/scripts.pory"
	closemessage
# 48 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_2
# 49 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Jasmine_Text_4
# 50 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Jasmine2
# 51 "data/maps/KismetForest/scripts.pory"
	closemessage
# 53 "data/maps/KismetForest/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 55 "data/maps/KismetForest/scripts.pory"
	speakername KismetForest_Jasmine_Text_2
# 56 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Jasmine3
# 57 "data/maps/KismetForest/scripts.pory"
	closemessage
# 59 "data/maps/KismetForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/KismetForest/scripts.pory"
	removeobject 8
# 61 "data/maps/KismetForest/scripts.pory"
	removeobject 9
# 62 "data/maps/KismetForest/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 63 "data/maps/KismetForest/scripts.pory"
	setvar VAR_KISMET_FOREST_STATE, 1
# 64 "data/maps/KismetForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/KismetForest/scripts.pory"
	releaseall
	return


# 69 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_JasmineApproachPlayer1:
# 70 "data/maps/KismetForest/scripts.pory"
	delay_16
# 71 "data/maps/KismetForest/scripts.pory"
	walk_up
# 71 "data/maps/KismetForest/scripts.pory"
	walk_up
# 71 "data/maps/KismetForest/scripts.pory"
	walk_up
# 71 "data/maps/KismetForest/scripts.pory"
	walk_up
# 72 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_left
	step_end

# 75 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_JasmineApproachPlayer2:
# 76 "data/maps/KismetForest/scripts.pory"
	delay_16
# 77 "data/maps/KismetForest/scripts.pory"
	walk_up
# 77 "data/maps/KismetForest/scripts.pory"
	walk_up
# 77 "data/maps/KismetForest/scripts.pory"
	walk_up
# 78 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_left
	step_end

# 81 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_AmphyApproachPlayer1:
# 82 "data/maps/KismetForest/scripts.pory"
	walk_up
# 82 "data/maps/KismetForest/scripts.pory"
	walk_up
# 82 "data/maps/KismetForest/scripts.pory"
	walk_up
# 83 "data/maps/KismetForest/scripts.pory"
	walk_left
# 83 "data/maps/KismetForest/scripts.pory"
	walk_left
# 84 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_up
	step_end

# 87 "data/maps/KismetForest/scripts.pory"
KismetForest_Movement_AmphyApproachPlayer2:
# 88 "data/maps/KismetForest/scripts.pory"
	walk_up
# 88 "data/maps/KismetForest/scripts.pory"
	walk_up
# 88 "data/maps/KismetForest/scripts.pory"
	walk_up
# 88 "data/maps/KismetForest/scripts.pory"
	walk_up
# 89 "data/maps/KismetForest/scripts.pory"
	walk_left
# 89 "data/maps/KismetForest/scripts.pory"
	walk_left
# 90 "data/maps/KismetForest/scripts.pory"
	walk_in_place_faster_down
	step_end

KismetForest_EventScript_Boy::
# 123 "data/maps/KismetForest/scripts.pory"
	lock
# 124 "data/maps/KismetForest/scripts.pory"
	faceplayer
# 125 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_Boy
# 126 "data/maps/KismetForest/scripts.pory"
	release
	return


KismetForest_EventScript_BugCatcherRaymond::
# 139 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_RAYMOND, KismetForest_Text_RaymondIntro, KismetForest_Text_RaymondDefeat
# 140 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_RaymondPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherGregory::
# 156 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_GREGORY, KismetForest_Text_GregoryIntro, KismetForest_Text_GregoryDefeat
# 157 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_LassDorothy::
# 173 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_DOROTHY, KismetForest_Text_DorothyIntro, KismetForest_Text_DorothyDefeat
# 174 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_DorothyPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_PsychicJoshua::
# 190 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, KismetForest_Text_JoshuaIntro, KismetForest_Text_JoshuaDefeat
# 191 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_HexManiacLisa::
# 207 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_LISA, KismetForest_Text_LisaIntro, KismetForest_Text_LisaDefeat
# 208 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_EventScript_BugCatcherJerry::
# 224 "data/maps/KismetForest/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, KismetForest_Text_JerryIntro, KismetForest_Text_JerryDefeat
# 225 "data/maps/KismetForest/scripts.pory"
	msgbox KismetForest_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	return


KismetForest_Jasmine_Text_0:
# 35 "data/maps/KismetForest/scripts.pory"
	.string "???$"

KismetForest_Jasmine_Text_1:
# 36 "data/maps/KismetForest/scripts.pory"
	.string "Oh... hello.\nI'm... I'm Jasmine.$"

KismetForest_Jasmine_Text_2:
# 37 "data/maps/KismetForest/scripts.pory"
	.string "Jasmine$"

KismetForest_Jasmine_Text_3:
# 43 "data/maps/KismetForest/scripts.pory"
	.string "Pharos!$"

KismetForest_Jasmine_Text_4:
# 49 "data/maps/KismetForest/scripts.pory"
	.string "This trainer reminds you of him, doesn't he, Amphy?$"

KismetForest_Text_Jasmine1::
# 93 "data/maps/KismetForest/scripts.pory"
	.string "I'm visiting from the Johto region.\p"
	.string "I, um... I'm on vacation in Starridge\n"
	.string "Town.\n"
	.string "It's... nice to get away and spend time\l"
	.string "in a place like this.\p"
	.string "Right now, I'm just... exploring the\n"
	.string "Kismet Forest.\n"
	.string "It's... it's so beautiful here.$"

KismetForest_Text_Jasmine2::
# 100 "data/maps/KismetForest/scripts.pory"
	.string "I'm sorry, I... I don't mean to be rude.\p"
	.string "You... you remind me of someone.\n"
	.string "A boy I met 2 years ago in Johto..\p"
	.string "He... became the Champion.\n"
	.string "He was very kind... and had a strong\l"
	.string "bond with his Pokémon.\p"
	.string "You... have that same look of\n"
	.string "determination in your eyes.\n"
	.string "I... I'm sorry, I... I'm just rambling.\p"
	.string "Can I... ask your name? ... ... ...\p"
	.string "I see... {PLAYER}.\n"
	.string "It's... nice to meet you.\p"
	.string "{PLAYER}, I want to give you this.\n"
	.string "It's, um... it's the TM for Hidden Power.$"

KismetForest_Text_Jasmine3::
# 112 "data/maps/KismetForest/scripts.pory"
	.string "Johto is known for this move. It's..\n"
	.string "special.\p"
	.string "It's a move that changes type\n"
	.string "depending on the Pokémon that uses it.\n"
	.string "It's... it's a move that reflects the\l"
	.string "user's inner strength.\p"
	.string "I... I hope you find it useful.\n"
	.string "I I think you'll go far... just like that\l"
	.string "boy.\p"
	.string "I should get going now.\n"
	.string "I... hope we meet again, {PLAYER}.\n"
	.string "Goodbye.$"

KismetForest_Text_Boy::
# 129 "data/maps/KismetForest/scripts.pory"
	.string "This place is crawling with trainers\n"
	.string "doing double battles.\p"
	.string "On top of that, there are strong wild\n"
	.string "Pokémon here too.\p"
	.string "If you're not careful, you could get\n"
	.string "overwhelmed.\p"
	.string "Make sure to buy lots of items from the\n"
	.string "Poké Mart before you go any further.$"

KismetForest_Text_RaymondIntro::
# 143 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_RaymondDefeat::
# 147 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_RaymondPostBattle::
# 151 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryIntro::
# 160 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryDefeat::
# 164 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_GregoryPostBattle::
# 168 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyIntro::
# 177 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyDefeat::
# 181 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_DorothyPostBattle::
# 185 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JoshuaIntro::
# 194 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JoshuaDefeat::
# 198 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JoshuaPostBattle::
# 202 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_LisaIntro::
# 211 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_LisaDefeat::
# 215 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_LisaPostBattle::
# 219 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JerryIntro::
# 228 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JerryDefeat::
# 232 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"

KismetForest_Text_JerryPostBattle::
# 236 "data/maps/KismetForest/scripts.pory"
	.string "PLACEHOLDER$"
