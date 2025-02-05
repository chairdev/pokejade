DolomiteCity_TrainerSchool_MapScripts::
# 4 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DolomiteCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DolomiteCity_TrainerSchool_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	map_script_2 VAR_DOLOMITE_CITY_STATE, 0, DolomiteCity_TrainerSchool_MapScript_DeliverParcel
	.2byte 0


DolomiteCity_TrainerSchool_MapScript_DeliverParcel::
# 10 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	lockall
# 12 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DolomiteCity_TrainerSchool_Movement_DeliverParcel_WalkIn
# 14 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru1
# 15 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 17 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	call DolomiteCity_TrainerSchool_MapScript_MegaEvoGuruExclamation
# 19 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru2
# 20 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 22 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DolomiteCity_TrainerSchool_Movement_DeliverParcel_ApproachMegaEvoGuru
# 23 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 25 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 26 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 28 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru3
# 30 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	call DolomiteCity_TrainerSchool_MapScript_MegaEvoGuruExclamation
# 32 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru4
# 33 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 34 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 36 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru5
# 37 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 39 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	setvar VAR_DOLOMITE_CITY_STATE, 1
# 40 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 3
# 41 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	removeitem ITEM_PARCEL
# 43 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	releaseall
	return


DolomiteCity_TrainerSchool_MapScript_MegaEvoGuruExclamation::
# 47 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	playse SE_PIN
# 48 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 49 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitse
# 50 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 51 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	delay 16
	return


# 54 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
DolomiteCity_TrainerSchool_Movement_DeliverParcel_WalkIn:
# 55 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_slow_up
# 55 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_slow_up
# 55 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_slow_up
# 55 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_slow_up
	step_end

# 58 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
DolomiteCity_TrainerSchool_Movement_DeliverParcel_ApproachMegaEvoGuru:
# 59 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_right
# 59 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_right
# 60 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_up
# 60 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_up
# 60 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_fast_up
# 61 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	walk_in_place_faster_left
	step_end

DolomiteCity_TrainerSchool_EventScript_MegaEvoGuru::
# 91 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	lock
# 92 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	faceplayer
# 93 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	msgbox DolomiteCity_TrainerSchool_Text_MegaEvoGuru
# 94 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	closemessage
# 95 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	release
	return


DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru1::
# 64 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "--and that is why only certain Pokémon\n"
	.string "species are capable of Mega Evolution.\p"
	.string "However, simply possessing a Mega\n"
	.string "Stone is not enough. The bond between\l"
	.string "Trainer and Pokémon--$"

DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru2::
# 69 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Ah, a visitor! Can I help you with\n"
	.string "something?$"

DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru3::
# 73 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Oh? A delivery from Professor\n"
	.string "Hawthorne?\p"
	.string "Let me see...$"

DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru4::
# 78 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Incredible... These are never before\n"
	.string "seen Mega Stones!\p"
	.string "Professor Hawthorne must trust you a\n"
	.string "great deal to handle something so\l"
	.string "valuable.\p"
	.string "I must thank you for delivering these\n"
	.string "to me. Please, take this as a token of\l"
	.string "my gratitude.$"

DolomiteCity_TrainerSchool_Text_DeliverParcel_MegaEvoGuru5::
# 84 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "You can turn the Exp. Share on or off by\n"
	.string "selecting it from your Bag.\p"
	.string "Please give Professor Hawthorne my\n"
	.string "regards. I must get back to my\l"
	.string "research.\p"
	.string "I hope to see you again soon.$"

DolomiteCity_TrainerSchool_Text_MegaEvoGuru::
# 98 "data/maps/DolomiteCity_TrainerSchool/scripts.pory"
	.string "Thank you again for delivering these.\p"
	.string "If you ever wish to learn more about\n"
	.string "Mega Evolution, my door is always open.$"
