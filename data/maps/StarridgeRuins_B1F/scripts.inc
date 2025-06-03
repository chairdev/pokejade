StarridgeRuins_B1F_MapScripts::
# 7 "data/maps/StarridgeRuins_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StarridgeRuins_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

StarridgeRuins_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/StarridgeRuins_B1F/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


StarridgeRuins_B1F_Trigger_MeetAmelio1::
# 13 "data/maps/StarridgeRuins_B1F/scripts.pory"
	lockall
# 15 "data/maps/StarridgeRuins_B1F/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/StarridgeRuins_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, StarridgeRuins_B1F_Movement_CameraPan1
# 17 "data/maps/StarridgeRuins_B1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 19 "data/maps/StarridgeRuins_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 20 "data/maps/StarridgeRuins_B1F/scripts.pory"
	applymovement 3, StarridgeRuins_B1F_Movement_WalkInPlace
# 21 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_MeetAmelio_GruntA_1
# 23 "data/maps/StarridgeRuins_B1F/scripts.pory"
	speakername StarridgeRuins_B1F_Trigger_MeetAmelio1_Text_0
# 24 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_MeetAmelio_Amelio_1
# 25 "data/maps/StarridgeRuins_B1F/scripts.pory"
	closemessage
# 27 "data/maps/StarridgeRuins_B1F/scripts.pory"
	applymovement 3, StarridgeRuins_B1F_Movement_WalkInPlace
# 28 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_MeetAmelio_GruntA_2
# 29 "data/maps/StarridgeRuins_B1F/scripts.pory"
	closemessage
# 31 "data/maps/StarridgeRuins_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeRuins_B1F_Movement_PlayerApproachAmelio1
# 32 "data/maps/StarridgeRuins_B1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 34 "data/maps/StarridgeRuins_B1F/scripts.pory"
	call StarridgeRuins_B1F_EventScript_MeetAmelio
	return


StarridgeRuins_B1F_EventScript_MeetAmelio::
# 38 "data/maps/StarridgeRuins_B1F/scripts.pory"
	playse SE_PIN
# 39 "data/maps/StarridgeRuins_B1F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 40 "data/maps/StarridgeRuins_B1F/scripts.pory"
	waitmovement 6
# 42 "data/maps/StarridgeRuins_B1F/scripts.pory"
	speakername StarridgeRuins_B1F_Trigger_MeetAmelio1_Text_0
# 43 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_MeetAmelio_Amelio_Intro
# 45 "data/maps/StarridgeRuins_B1F/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, StarridgeRuins_B1F_EventScript_MeetAmelio_Text_0, StarridgeRuins_B1F_EventScript_MeetAmelio_Text_1
# 48 "data/maps/StarridgeRuins_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq StarridgeRuins_B1F_EventScript_MeetAmelio_2
# 51 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_MeetAmelio_No
StarridgeRuins_B1F_EventScript_MeetAmelio_1:
# 53 "data/maps/StarridgeRuins_B1F/scripts.pory"
	closemessage
# 55 "data/maps/StarridgeRuins_B1F/scripts.pory"
	applymovement 7, StarridgeRuins_B1F_Movement_WalkInPlace
# 56 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_MeetAmelio_GruntB
# 58 "data/maps/StarridgeRuins_B1F/scripts.pory"
	speakername StarridgeRuins_B1F_EventScript_MeetAmelio_Text_2
# 59 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_MeetAmelio_Amelio_2
# 60 "data/maps/StarridgeRuins_B1F/scripts.pory"
	closemessage
# 62 "data/maps/StarridgeRuins_B1F/scripts.pory"
	speakername StarridgeRuins_B1F_EventScript_MeetAmelio_Text_2
# 63 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_MeetAmelio_Amelio_3
# 65 "data/maps/StarridgeRuins_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_AMELIO_1, StarridgeRuins_B1F_Text_AmelioDefeated
# 67 "data/maps/StarridgeRuins_B1F/scripts.pory"
	speakername StarridgeRuins_B1F_EventScript_MeetAmelio_Text_2
# 68 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_Amelio_PostBattle
# 69 "data/maps/StarridgeRuins_B1F/scripts.pory"
	closemessage
# 71 "data/maps/StarridgeRuins_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_EventScript_MeetAmelio_Text_3
# 73 "data/maps/StarridgeRuins_B1F/scripts.pory"
	closemessage
# 75 "data/maps/StarridgeRuins_B1F/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/StarridgeRuins_B1F/scripts.pory"
	setflag FLAG_HIDE_ZIRCON_QUARRY_ETERNITY_GRUNTS
# 78 "data/maps/StarridgeRuins_B1F/scripts.pory"
	removeobject 3
# 79 "data/maps/StarridgeRuins_B1F/scripts.pory"
	removeobject 7
# 80 "data/maps/StarridgeRuins_B1F/scripts.pory"
	removeobject 6
# 81 "data/maps/StarridgeRuins_B1F/scripts.pory"
	setobjectxy 9, 15, 6
# 82 "data/maps/StarridgeRuins_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 84 "data/maps/StarridgeRuins_B1F/scripts.pory"
	call StarridgeRuins_B1F_EventScript_ReceiveFossil
	return

StarridgeRuins_B1F_EventScript_MeetAmelio_2:
# 49 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_MeetAmelio_Yes
	goto StarridgeRuins_B1F_EventScript_MeetAmelio_1


StarridgeRuins_B1F_EventScript_ReceiveFossil::
# 88 "data/maps/StarridgeRuins_B1F/scripts.pory"
	applymovement 9, StarridgeRuins_B1F_Movement_RivalApproachPlayer
# 89 "data/maps/StarridgeRuins_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarridgeRuins_B1F_Movement_PlayerTurnLeft
# 90 "data/maps/StarridgeRuins_B1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 92 "data/maps/StarridgeRuins_B1F/scripts.pory"
	speakername StarridgeRuins_B1F_EventScript_ReceiveFossil_Text_0
# 93 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_ReceieveFossil_Rival_1
# 94 "data/maps/StarridgeRuins_B1F/scripts.pory"
	waitmovement 9
# 95 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_ReceieveFossil_Rival_2
# 98 "data/maps/StarridgeRuins_B1F/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, StarridgeRuins_B1F_EventScript_ReceiveFossil_Text_1, StarridgeRuins_B1F_EventScript_ReceiveFossil_Text_2
# 101 "data/maps/StarridgeRuins_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq StarridgeRuins_B1F_EventScript_ReceiveFossil_1
	return

StarridgeRuins_B1F_EventScript_ReceiveFossil_1:
	return


# 195 "data/maps/StarridgeRuins_B1F/scripts.pory"
StarridgeRuins_B1F_Movement_CameraPan1:
# 196 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_down
# 197 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 197 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 197 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 197 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 197 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
	step_end

# 200 "data/maps/StarridgeRuins_B1F/scripts.pory"
StarridgeRuins_B1F_Movement_CameraPan2:
# 201 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_down
# 202 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 202 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 202 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 202 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
	step_end

# 205 "data/maps/StarridgeRuins_B1F/scripts.pory"
StarridgeRuins_B1F_Movement_WalkInPlace:
# 206 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_in_place_slow_right
	step_end

# 209 "data/maps/StarridgeRuins_B1F/scripts.pory"
StarridgeRuins_B1F_Movement_PlayerApproachAmelio1:
# 210 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_down
# 211 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_right
# 211 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_right
# 211 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_right
# 211 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_right
# 211 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_right
	step_end

# 214 "data/maps/StarridgeRuins_B1F/scripts.pory"
StarridgeRuins_B1F_Movement_PlayerApproachAmelio2:
# 215 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_down
# 216 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 216 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 216 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
# 216 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_slow_right
	step_end

# 219 "data/maps/StarridgeRuins_B1F/scripts.pory"
StarridgeRuins_B1F_Movement_PlayerTurnLeft:
# 220 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_in_place_left
	step_end

# 223 "data/maps/StarridgeRuins_B1F/scripts.pory"
StarridgeRuins_B1F_Movement_RivalApproachPlayer:
# 224 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_fast_right
# 224 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_fast_right
# 224 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_fast_right
# 224 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_fast_right
# 224 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_fast_right
# 224 "data/maps/StarridgeRuins_B1F/scripts.pory"
	walk_fast_right
	step_end

StarridgeRuins_B1F_EventScript_Grunt_1::
# 231 "data/maps/StarridgeRuins_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_STARRIDGE_RUINS_3, StarridgeRuins_B1F_Text_Grunt1Intro, StarridgeRuins_B1F_Text_Grunt1Defeat
# 232 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeRuins_B1F_EventScript_Grunt_2::
# 249 "data/maps/StarridgeRuins_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_STARRIDGE_RUINS_4, StarridgeRuins_B1F_Text_Grunt2Intro, StarridgeRuins_B1F_Text_Grunt2Defeat
# 250 "data/maps/StarridgeRuins_B1F/scripts.pory"
	msgbox StarridgeRuins_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeRuins_B1F_Trigger_MeetAmelio1_Text_0:
# 23 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "???$"

StarridgeRuins_B1F_EventScript_MeetAmelio_Text_0:
# 46 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Yeah, that's me.$"

StarridgeRuins_B1F_EventScript_MeetAmelio_Text_1:
# 46 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "No clue.$"

StarridgeRuins_B1F_EventScript_MeetAmelio_Text_2:
# 58 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Amelio$"

StarridgeRuins_B1F_EventScript_MeetAmelio_Text_3:
# 72 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "B-Boss! Wait for us!$"

StarridgeRuins_B1F_EventScript_ReceiveFossil_Text_0:
# 92 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "{RIVAL}$"

StarridgeRuins_B1F_EventScript_ReceiveFossil_Text_1:
# 99 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Skull Fossil$"

StarridgeRuins_B1F_EventScript_ReceiveFossil_Text_2:
# 99 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Armor Fossil$"

StarridgeRuins_B1F_Text_MeetAmelio_GruntA_1::
# 106 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "B-Boss! We've got a problem!\p"
	.string "There are some kids down here poking\n"
	.string "around in the ruins!$"

StarridgeRuins_B1F_Text_MeetAmelio_Amelio_1::
# 111 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Kids? Uh, okay...?\n"
	.string "What do you want me to do about that?$"

StarridgeRuins_B1F_Text_MeetAmelio_GruntA_2::
# 115 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "They're not just any kids, Boss!\p"
	.string "They're the ones that've been causing\n"
	.string "trouble for us!\p"
	.string "What if they mess everything up?$"

StarridgeRuins_B1F_Text_MeetAmelio_Amelio_Intro::
# 121 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "...Huh? Wait a second. You're not with us,\n"
	.string "are you?\p"
	.string "You don't happen to be the one that's\n"
	.string "been causing trouble for us, do you?$"

StarridgeRuins_B1F_Text_MeetAmelio_Yes::
# 126 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Ah, cool. Thanks for making this my\n"
	.string "problem.\p"
	.string "...NOT!$"

StarridgeRuins_B1F_Text_MeetAmelio_No::
# 131 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Oh, really? Could've fooled me.$"

StarridgeRuins_B1F_Text_MeetAmelio_Amelio_2::
# 135 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Name's Amelio. I'm an Admin for Team\n"
	.string "Eternity.\p"
	.string "You know, just in case you were\n"
	.string "wondering.\p"
	.string "...Which you probably weren't.$"

StarridgeRuins_B1F_Text_MeetAmelio_GruntB::
# 141 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Y-Yeah, Boss, that's them! They're the\n"
	.string "ones causing trouble!$"

StarridgeRuins_B1F_Text_MeetAmelio_Amelio_3::
# 145 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "What a pain... I only took this job\n"
	.string "because I thought it'd be easy.\p"
	.string "Alright, kid.\n"
	.string "Let's just get this over with.$"

StarridgeRuins_B1F_Text_AmelioDefeated::
# 150 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Ugh... Beaten by a kid.\n"
	.string "That's embarrassing.\p"
	.string "It's gonna be a total pain to explain\n"
	.string "this to the boss.$"

StarridgeRuins_B1F_Text_Amelio_PostBattle::
# 155 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Alright, fine, you win.\n"
	.string "Here's the deal:\p"
	.string "The artifact we're after is supposed to\n"
	.string "be hidden deeper in these ruins.\p"
	.string "They say it's got some crazy power, but\n"
	.string "that's all I know.\p"
	.string "If you want it, go for it. We've already\n"
	.string "got some fossils, so we're just barely\l"
	.string "breaking even here.\p"
	.string "Now, if you'll excuse me, I've got to go\n"
	.string "report this mess.$"

StarridgeRuins_B1F_Text_ReceieveFossil_Rival_1::
# 163 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Are you okay?$"

StarridgeRuins_B1F_Text_ReceieveFossil_Rival_2::
# 167 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "I saw a bunch of those Team Eternity\n"
	.string "people running away.\p"
	.string "What happened?$"

StarridgeRuins_B1F_Text_ReceieveFossil_Rival_3::
# 172 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "...Oh, I see. They were trying to steal\n"
	.string "some kind of artifact, huh?\p"
	.string "Well, I'm glad you're okay.\n"
	.string "I was worried about you.$"

StarridgeRuins_B1F_Text_ReceieveFossil_Scientist_1::
# 177 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "...My fossils... They're gone!\p"
	.string "My life's work, all gone in an instant!$"

StarridgeRuins_B1F_Text_ReceieveFossil_Rival_4::
# 182 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Yikes. That's a whole different can of\n"
	.string "worms, isn't it?\p"
	.string "At least you're safe, though. Right?$"

StarridgeRuins_B1F_Text_ReceieveFossil_Scientist_2::
# 187 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "I might as well just give up on my\n"
	.string "research now.\p"
	.string "I'll never be able to recover from this...\p"
	.string "Here, I've only got these two fossils\n"
	.string "left.\p"
	.string "Just take one. I won't look at them\n"
	.string "again.$"

StarridgeRuins_B1F_Text_Grunt1Intro::
# 235 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "Hey! What are you doing down here?\n"
	.string "This place is off-limits!$"

StarridgeRuins_B1F_Text_Grunt1Defeat::
# 239 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "...Kidding. I already know what you're\n"
	.string "doing down here.$"

StarridgeRuins_B1F_Text_Grunt1PostBattle::
# 243 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "At least I didn't get 1v2'd by a kid.\p"
	.string "..Oh. It was a 2v2? Nevermind.$"

StarridgeRuins_B1F_Text_Grunt2Intro::
# 253 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "I'm not going to let you get in our way!$"

StarridgeRuins_B1F_Text_Grunt2Defeat::
# 257 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "...My bonus just went down the drain.$"

StarridgeRuins_B1F_Text_Grunt2PostBattle::
# 261 "data/maps/StarridgeRuins_B1F/scripts.pory"
	.string "I'm going to have to work overtime to\n"
	.string "make up for this, you know.$"
