DolomiteCity_MapScripts::
# 12 "data/maps/DolomiteCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DolomiteCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DolomiteCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/DolomiteCity/scripts.pory"
	map_script_2 VAR_DOLOMITE_CITY_STATE, 2, DolomiteCity_MapScript_SeeGrunt
	.2byte 0


DolomiteCity_MapScript_SeeGrunt::
# 18 "data/maps/DolomiteCity/scripts.pory"
	lockall
# 20 "data/maps/DolomiteCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 21 "data/maps/DolomiteCity/scripts.pory"
	waitmovement 0
# 22 "data/maps/DolomiteCity/scripts.pory"
	playse SE_PIN
# 23 "data/maps/DolomiteCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 24 "data/maps/DolomiteCity/scripts.pory"
	waitse
# 25 "data/maps/DolomiteCity/scripts.pory"
	waitmovement 0
# 26 "data/maps/DolomiteCity/scripts.pory"
	delay 16
# 28 "data/maps/DolomiteCity/scripts.pory"
	speakername DolomiteCity_MapScript_SeeGrunt_Text_0
# 29 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_MapScript_SeeGrunt_Text_1
# 30 "data/maps/DolomiteCity/scripts.pory"
	closemessage
# 32 "data/maps/DolomiteCity/scripts.pory"
	applymovement 2, Common_Movement_WalkUp2
# 33 "data/maps/DolomiteCity/scripts.pory"
	waitmovement 0
# 35 "data/maps/DolomiteCity/scripts.pory"
	checkplayergender
# 36 "data/maps/DolomiteCity/scripts.pory"
	speakername DolomiteCity_MapScript_SeeGrunt_Text_0
# 37 "data/maps/DolomiteCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DolomiteCity_MapScript_SeeGrunt_2
# 44 "data/maps/DolomiteCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 45 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_Text_SeeGrunt_Holly_1
DolomiteCity_MapScript_SeeGrunt_1:
# 47 "data/maps/DolomiteCity/scripts.pory"
	closemessage
# 48 "data/maps/DolomiteCity/scripts.pory"
	fadeoutbgm 4
# 49 "data/maps/DolomiteCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 51 "data/maps/DolomiteCity/scripts.pory"
	applymovement 3, DolomiteCity_Movement_GruntRunOnScreen
# 52 "data/maps/DolomiteCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/DolomiteCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 54 "data/maps/DolomiteCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 55 "data/maps/DolomiteCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_Text_SeeGrunt_Grunt
# 58 "data/maps/DolomiteCity/scripts.pory"
	closemessage
# 60 "data/maps/DolomiteCity/scripts.pory"
	applymovement 3, DolomiteCity_Movement_GruntRunOffScreen
# 61 "data/maps/DolomiteCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/DolomiteCity/scripts.pory"
	removeobject 3
# 64 "data/maps/DolomiteCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 65 "data/maps/DolomiteCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 67 "data/maps/DolomiteCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DolomiteCity_MapScript_SeeGrunt_6
# 80 "data/maps/DolomiteCity/scripts.pory"
	speakername DolomiteCity_MapScript_SeeGrunt_Text_0
# 81 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_Text_SeeGrunt_Holly_2
# 82 "data/maps/DolomiteCity/scripts.pory"
	closemessage
# 84 "data/maps/DolomiteCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 86 "data/maps/DolomiteCity/scripts.pory"
	speakername DolomiteCity_MapScript_SeeGrunt_Text_0
# 87 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_Text_GoAfterGrunt_Holly
DolomiteCity_MapScript_SeeGrunt_5:
# 89 "data/maps/DolomiteCity/scripts.pory"
	closemessage
# 91 "data/maps/DolomiteCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 92 "data/maps/DolomiteCity/scripts.pory"
	setflag FLAG_HIDE_DOLOMITE_CITY_ETERNITY_GRUNT
# 93 "data/maps/DolomiteCity/scripts.pory"
	setvar VAR_DOLOMITE_CITY_STATE, 3
# 95 "data/maps/DolomiteCity/scripts.pory"
	fadedefaultbgm
# 96 "data/maps/DolomiteCity/scripts.pory"
	releaseall
	return

DolomiteCity_MapScript_SeeGrunt_2:
# 39 "data/maps/DolomiteCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 40 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_Text_SeeGrunt_Caden_1
	goto DolomiteCity_MapScript_SeeGrunt_1

DolomiteCity_MapScript_SeeGrunt_6:
# 69 "data/maps/DolomiteCity/scripts.pory"
	speakername DolomiteCity_MapScript_SeeGrunt_Text_0
# 70 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_Text_SeeGrunt_Caden_2
# 71 "data/maps/DolomiteCity/scripts.pory"
	closemessage
# 73 "data/maps/DolomiteCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 75 "data/maps/DolomiteCity/scripts.pory"
	speakername DolomiteCity_MapScript_SeeGrunt_Text_0
# 76 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_Text_GoAfterGrunt_Caden
	goto DolomiteCity_MapScript_SeeGrunt_5


# 99 "data/maps/DolomiteCity/scripts.pory"
DolomiteCity_Movement_GruntRunOnScreen:
# 100 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 100 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 100 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 100 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 101 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_right
# 101 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_right
# 101 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_right
# 101 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_right
# 101 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_right
# 101 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_right
# 101 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_right
# 101 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_right
# 101 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_right
# 102 "data/maps/DolomiteCity/scripts.pory"
	walk_in_place_up
	step_end

# 105 "data/maps/DolomiteCity/scripts.pory"
DolomiteCity_Movement_GruntRunOffScreen:
# 106 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 106 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 106 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 106 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 106 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 106 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 106 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
# 106 "data/maps/DolomiteCity/scripts.pory"
	walk_fast_up
	step_end

DolomiteCity_EventScript_GoAfterGrunt::
# 150 "data/maps/DolomiteCity/scripts.pory"
	lock
# 151 "data/maps/DolomiteCity/scripts.pory"
	faceplayer
# 153 "data/maps/DolomiteCity/scripts.pory"
	checkplayergender
# 154 "data/maps/DolomiteCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DolomiteCity_EventScript_GoAfterGrunt_2
# 160 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_Text_GoAfterGrunt_Holly
DolomiteCity_EventScript_GoAfterGrunt_1:
# 163 "data/maps/DolomiteCity/scripts.pory"
	release
	return

DolomiteCity_EventScript_GoAfterGrunt_2:
# 156 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_Text_GoAfterGrunt_Caden
	goto DolomiteCity_EventScript_GoAfterGrunt_1


DolomiteCity_EventScript_GymGuide::
# 177 "data/maps/DolomiteCity/scripts.pory"
	lock
# 178 "data/maps/DolomiteCity/scripts.pory"
	faceplayer
# 180 "data/maps/DolomiteCity/scripts.pory"
	goto_if_unset FLAG_HIDE_ROUTE_301_MOM_OUTSIDE, DolomiteCity_EventScript_GymGuide_2
# 186 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_EventScript_GymGuide_Text_1
DolomiteCity_EventScript_GymGuide_1:
# 190 "data/maps/DolomiteCity/scripts.pory"
	release
	return

DolomiteCity_EventScript_GymGuide_2:
# 182 "data/maps/DolomiteCity/scripts.pory"
	msgbox DolomiteCity_EventScript_GymGuide_Text_0
	goto DolomiteCity_EventScript_GymGuide_1


DolomiteCity_MapScript_SeeGrunt_Text_0:
# 28 "data/maps/DolomiteCity/scripts.pory"
	.string "{RIVAL}$"

DolomiteCity_MapScript_SeeGrunt_Text_1:
# 29 "data/maps/DolomiteCity/scripts.pory"
	.string "Oh! {PLAYER}!$"

DolomiteCity_EventScript_GymGuide_Text_0:
# 182 "data/maps/DolomiteCity/scripts.pory"
	.string "Sorry, the gym is closed right now.$"

DolomiteCity_EventScript_GymGuide_Text_1:
# 186 "data/maps/DolomiteCity/scripts.pory"
	.string "Welcome to the Dolomite City Gym!\n"
	.string "The Gym Leader isn't in right now.\p"
	.string "He's out teaching at the Trainer's\n"
	.string "School.$"

DolomiteCity_Text_SeeGrunt_Caden_1::
# 109 "data/maps/DolomiteCity/scripts.pory"
	.string "Phew, finally caught up to you!\p"
	.string "So, how was it? Geo didn't make it easy,\n"
	.string "did he?\p"
	.string "The Foundation Badge, huh? Not bad!\p"
	.string "Guess that means I'm up next!$"

DolomiteCity_Text_SeeGrunt_Holly_1::
# 116 "data/maps/DolomiteCity/scripts.pory"
	.string "You're back!\p"
	.string "So, how was the battle?\n"
	.string "Geo's tough, isn't he?\p"
	.string "Wow, the Foundation Badge! That's so\n"
	.string "cool!\p"
	.string "I guess that means it's my turn now!$"

DolomiteCity_Text_SeeGrunt_Grunt::
# 123 "data/maps/DolomiteCity/scripts.pory"
	.string "Tch--finally, some good luck!\p"
	.string "That old Mega Evolution Guru is hanging\n"
	.string "around in the grotto...\p"
	.string "Perfect chance to grab that package!$"

DolomiteCity_Text_SeeGrunt_Caden_2::
# 129 "data/maps/DolomiteCity/scripts.pory"
	.string "Wait--did you hear that?\n"
	.string "He said something about the Mega\l"
	.string "Evolution Guru... And stealing a\l"
	.string "package?\p"
	.string "Hold on--wasn't that package you\n"
	.string "delivered full of Mega Stones!?\p"
	.string "If someone's after it, we can't just\n"
	.string "stand around!\p"
	.string "Ugh--I still need to battle Geo first!\n"
	.string "I can't even use Rock Smash yet...\p"
	.string "But you can, right? You have to go\n"
	.string "after him! Here, take this. Some burly\l"
	.string "guy gave it to me, but I can't use it\l"
	.string "yet.\p"
	.string "You'll need it to get through Dolomite\n"
	.string "Grotto.$"

DolomiteCity_Text_SeeGrunt_Holly_2::
# 139 "data/maps/DolomiteCity/scripts.pory"
	.string "Uh--did you hear that!?\n"
	.string "He just said something about the Mega\l"
	.string "Evolution Guru... And stealing\l"
	.string "something?\p"
	.string "Wait--wasn't that package we delivered\n"
	.string "full of Mega Stones!?\p"
	.string "If someone's after it, we have to stop\n"
	.string "them!\p"
	.string "Oh no, I haven't even battled Geo yet! I\n"
	.string "can't use Rock Smash...\p"
	.string "But you can, right?\n"
	.string "You have to go after him!\p"
	.string "Oh! Here, take this!\n"
	.string "A really bulky guy gave it to me, but I\l"
	.string "can't use it yet.\p"
	.string "You'll need it to get through Dolomite\n"
	.string "Grotto.$"

DolomiteCity_Text_GoAfterGrunt_Caden::
# 166 "data/maps/DolomiteCity/scripts.pory"
	.string "I'll catch up after I win my badge!\p"
	.string "Don't let them get away with those Mega\n"
	.string "Stones!$"

DolomiteCity_Text_GoAfterGrunt_Holly::
# 171 "data/maps/DolomiteCity/scripts.pory"
	.string "I'll be right behind you once I win my\n"
	.string "badge!\p"
	.string "Don't let them get away with those Mega\n"
	.string "Stones!$"
