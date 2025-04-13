ZirconTown_MapScripts::
# 9 "data/maps/ZirconTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ZirconTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ZirconTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/ZirconTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


ZirconTown_Trigger_AldenSpeech::
# 16 "data/maps/ZirconTown/scripts.pory"
	lockall
# 18 "data/maps/ZirconTown/scripts.pory"
	checkplayergender
# 19 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_0
# 20 "data/maps/ZirconTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ZirconTown_Trigger_AldenSpeech_2
# 27 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Holly_1
ZirconTown_Trigger_AldenSpeech_1:
# 29 "data/maps/ZirconTown/scripts.pory"
	closemessage
# 31 "data/maps/ZirconTown/scripts.pory"
	playse SE_PIN
# 32 "data/maps/ZirconTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 33 "data/maps/ZirconTown/scripts.pory"
	waitse
# 34 "data/maps/ZirconTown/scripts.pory"
	waitmovement 0
# 35 "data/maps/ZirconTown/scripts.pory"
	delay 16
# 36 "data/maps/ZirconTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 37 "data/maps/ZirconTown/scripts.pory"
	waitmovement 0
# 38 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_1
# 39 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_1
# 41 "data/maps/ZirconTown/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ZirconTown_Trigger_AldenSpeech_Text_2, ZirconTown_Trigger_AldenSpeech_Text_3
# 44 "data/maps/ZirconTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ZirconTown_Trigger_AldenSpeech_6
# 49 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_1
# 50 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_2B
ZirconTown_Trigger_AldenSpeech_5:
# 53 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_4
# 54 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_3
# 55 "data/maps/ZirconTown/scripts.pory"
	closemessage
# 57 "data/maps/ZirconTown/scripts.pory"
	playse SE_PIN
# 58 "data/maps/ZirconTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 59 "data/maps/ZirconTown/scripts.pory"
	waitse
# 60 "data/maps/ZirconTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/ZirconTown/scripts.pory"
	delay 16
# 62 "data/maps/ZirconTown/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 63 "data/maps/ZirconTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/ZirconTown/scripts.pory"
	checkplayergender
# 65 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_0
# 66 "data/maps/ZirconTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ZirconTown_Trigger_AldenSpeech_10
# 72 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Holly_2
ZirconTown_Trigger_AldenSpeech_9:
# 75 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_4
# 76 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_4
# 78 "data/maps/ZirconTown/scripts.pory"
	dynmultichoice 20, 4, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ZirconTown_Trigger_AldenSpeech_Text_5, ZirconTown_Trigger_AldenSpeech_Text_6, ZirconTown_Trigger_AldenSpeech_Text_7
# 81 "data/maps/ZirconTown/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/ZirconTown/scripts.pory"
	case 0, ZirconTown_Trigger_AldenSpeech_15
# 86 "data/maps/ZirconTown/scripts.pory"
	case 1, ZirconTown_Trigger_AldenSpeech_16
# 90 "data/maps/ZirconTown/scripts.pory"
	case 2, ZirconTown_Trigger_AldenSpeech_17
ZirconTown_Trigger_AldenSpeech_13:
# 95 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_6
# 97 "data/maps/ZirconTown/scripts.pory"
	checkplayergender
# 98 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_0
# 99 "data/maps/ZirconTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ZirconTown_Trigger_AldenSpeech_19
# 105 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Holly_3
ZirconTown_Trigger_AldenSpeech_18:
# 108 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_4
# 109 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_7
# 111 "data/maps/ZirconTown/scripts.pory"
	dynmultichoice 20, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ZirconTown_Trigger_AldenSpeech_Text_8, ZirconTown_Trigger_AldenSpeech_Text_9
# 114 "data/maps/ZirconTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ZirconTown_Trigger_AldenSpeech_23
# 119 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_4
# 120 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_8B
ZirconTown_Trigger_AldenSpeech_22:
# 123 "data/maps/ZirconTown/scripts.pory"
	checkplayergender
# 124 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_0
# 125 "data/maps/ZirconTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ZirconTown_Trigger_AldenSpeech_27
# 131 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Holly_4
ZirconTown_Trigger_AldenSpeech_26:
# 134 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_4
# 135 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_9
# 137 "data/maps/ZirconTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 138 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_10
# 139 "data/maps/ZirconTown/scripts.pory"
	closemessage
# 141 "data/maps/ZirconTown/scripts.pory"
	applymovement 1, ZirconTown_Movement_AldenLeave
# 142 "data/maps/ZirconTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/ZirconTown/scripts.pory"
	checkplayergender
# 145 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_0
# 146 "data/maps/ZirconTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ZirconTown_Trigger_AldenSpeech_31
# 152 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Holly_5
ZirconTown_Trigger_AldenSpeech_30:
# 155 "data/maps/ZirconTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 156 "data/maps/ZirconTown/scripts.pory"
	removeobject 1
# 157 "data/maps/ZirconTown/scripts.pory"
	removeobject 3
# 158 "data/maps/ZirconTown/scripts.pory"
	setflag FLAG_HIDE_ZIRCON_TOWN_SPEECH_NPCS
# 159 "data/maps/ZirconTown/scripts.pory"
	setvar VAR_ZIRCON_TOWN_STATE, 1
# 160 "data/maps/ZirconTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 161 "data/maps/ZirconTown/scripts.pory"
	releaseall
	return

ZirconTown_Trigger_AldenSpeech_2:
# 23 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Caden_1
	goto ZirconTown_Trigger_AldenSpeech_1

ZirconTown_Trigger_AldenSpeech_6:
# 45 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_1
# 46 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_2A
	goto ZirconTown_Trigger_AldenSpeech_5

ZirconTown_Trigger_AldenSpeech_10:
# 68 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Caden_2
	goto ZirconTown_Trigger_AldenSpeech_9

ZirconTown_Trigger_AldenSpeech_15:
# 83 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_4
# 84 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_5A
	goto ZirconTown_Trigger_AldenSpeech_13

ZirconTown_Trigger_AldenSpeech_16:
# 87 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_4
# 88 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_5B
	goto ZirconTown_Trigger_AldenSpeech_13

ZirconTown_Trigger_AldenSpeech_17:
# 91 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_4
# 92 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_5C
	goto ZirconTown_Trigger_AldenSpeech_13

ZirconTown_Trigger_AldenSpeech_19:
# 101 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Caden_3
	goto ZirconTown_Trigger_AldenSpeech_18

ZirconTown_Trigger_AldenSpeech_23:
# 115 "data/maps/ZirconTown/scripts.pory"
	speakername ZirconTown_Trigger_AldenSpeech_Text_4
# 116 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Alden_8A
	goto ZirconTown_Trigger_AldenSpeech_22

ZirconTown_Trigger_AldenSpeech_27:
# 127 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Caden_4
	goto ZirconTown_Trigger_AldenSpeech_26

ZirconTown_Trigger_AldenSpeech_31:
# 148 "data/maps/ZirconTown/scripts.pory"
	msgbox ZirconTown_Text_AldenSpeech_Caden_5
	goto ZirconTown_Trigger_AldenSpeech_30


# 288 "data/maps/ZirconTown/scripts.pory"
ZirconTown_Movement_AldenLeave:
# 289 "data/maps/ZirconTown/scripts.pory"
	walk_left
# 290 "data/maps/ZirconTown/scripts.pory"
	walk_up
# 290 "data/maps/ZirconTown/scripts.pory"
	walk_up
# 290 "data/maps/ZirconTown/scripts.pory"
	walk_up
# 290 "data/maps/ZirconTown/scripts.pory"
	walk_up
	step_end

ZirconTown_Trigger_AldenSpeech_Text_0:
# 19 "data/maps/ZirconTown/scripts.pory"
	.string "{RIVAL}$"

ZirconTown_Trigger_AldenSpeech_Text_1:
# 38 "data/maps/ZirconTown/scripts.pory"
	.string "???$"

ZirconTown_Trigger_AldenSpeech_Text_2:
# 42 "data/maps/ZirconTown/scripts.pory"
	.string "Yeah, I am.$"

ZirconTown_Trigger_AldenSpeech_Text_3:
# 42 "data/maps/ZirconTown/scripts.pory"
	.string "Who's asking?$"

ZirconTown_Trigger_AldenSpeech_Text_4:
# 53 "data/maps/ZirconTown/scripts.pory"
	.string "Alden$"

ZirconTown_Trigger_AldenSpeech_Text_5:
# 79 "data/maps/ZirconTown/scripts.pory"
	.string "Yeah, history is fascinating!$"

ZirconTown_Trigger_AldenSpeech_Text_6:
# 79 "data/maps/ZirconTown/scripts.pory"
	.string "A little.$"

ZirconTown_Trigger_AldenSpeech_Text_7:
# 79 "data/maps/ZirconTown/scripts.pory"
	.string "Not really.$"

ZirconTown_Trigger_AldenSpeech_Text_8:
# 112 "data/maps/ZirconTown/scripts.pory"
	.string "That would be incredible!$"

ZirconTown_Trigger_AldenSpeech_Text_9:
# 112 "data/maps/ZirconTown/scripts.pory"
	.string "You can't just control life.$"

ZirconTown_Text_AldenSpeech_Caden_1::
# 164 "data/maps/ZirconTown/scripts.pory"
	.string "Oh, there you are!\n"
	.string "Took you long enough!\p"
	.string "You just missed the start of this guy's\n"
	.string "speech.$"

ZirconTown_Text_AldenSpeech_Holly_1::
# 169 "data/maps/ZirconTown/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "You made it!\p"
	.string "I was just listening to this guy talk\n"
	.string "about Avaro's history--it's actually\l"
	.string "really interesting!.$"

ZirconTown_Text_AldenSpeech_Alden_1::
# 174 "data/maps/ZirconTown/scripts.pory"
	.string "Ah, another young traveler. Welcome.\n"
	.string "I assume you're a Trainer as well?$"

ZirconTown_Text_AldenSpeech_Alden_2A::
# 179 "data/maps/ZirconTown/scripts.pory"
	.string "Excellent. It is always good to see the\n"
	.string "next generation carrying on Avaro's\l"
	.string "traditions.$"

ZirconTown_Text_AldenSpeech_Alden_2B::
# 184 "data/maps/ZirconTown/scripts.pory"
	.string "A fair question. Forgive my\n"
	.string "manners--allow me to introduce myself.$"

ZirconTown_Text_AldenSpeech_Alden_3::
# 189 "data/maps/ZirconTown/scripts.pory"
	.string "I am Alden, the CEO of the Alden\n"
	.string "Corporation and a researcher of\l"
	.string "history and culture. You two must be\l"
	.string "quite talented to have earned the\l"
	.string "Foundation Badge so quickly.\p"
	.string "Avaro's history is filled with stories of\n"
	.string "great Trainers--perhaps you will one\l"
	.string "day be among them.$"

ZirconTown_Text_AldenSpeech_Caden_2::
# 196 "data/maps/ZirconTown/scripts.pory"
	.string "Whoa, hold up.\n"
	.string "You already heard about {PLAYER} and\l"
	.string "I getting a Gym Badge?\p"
	.string "You should come find me when you're\n"
	.string "done here!$"

ZirconTown_Text_AldenSpeech_Holly_2::
# 201 "data/maps/ZirconTown/scripts.pory"
	.string "Wait, really? News travels fast, I\n"
	.string "guess!$"

ZirconTown_Text_AldenSpeech_Alden_4::
# 205 "data/maps/ZirconTown/scripts.pory"
	.string "A Trainer's accomplishments tend to\n"
	.string "echo.\n"
	.string "It is not just strength that defines a\l"
	.string "great Trainer, but the impact they\l"
	.string "leave behind.\p"
	.string "Tell me, {PLAYER}--do you take an\n"
	.string "interest in Avaro's past?$"

ZirconTown_Text_AldenSpeech_Alden_5A::
# 210 "data/maps/ZirconTown/scripts.pory"
	.string "A fellow scholar, then! Perhaps you will\n"
	.string "appreciate a lesson in Avaro's\l"
	.string "foundations.$"

ZirconTown_Text_AldenSpeech_Alden_5B::
# 214 "data/maps/ZirconTown/scripts.pory"
	.string "Curiosity is a valuable trait. The past\n"
	.string "holds more answers than one might\l"
	.string "think.$"

ZirconTown_Text_AldenSpeech_Alden_5C::
# 218 "data/maps/ZirconTown/scripts.pory"
	.string "A pity. The past is a treasure trove of\n"
	.string "knowledge, waiting to be discovered.\p"
	.string "But I digress. I must return to my\n"
	.string "speech. I hope you enjoy the rest of\l"
	.string "your time in Zircon Town.$"

ZirconTown_Text_AldenSpeech_Alden_6::
# 223 "data/maps/ZirconTown/scripts.pory"
	.string "Long before the Pokémon League, Avaro\n"
	.string "was home to an ancient civilization.\p"
	.string "Unlike modern society, they sought\n"
	.string "something beyond simple\l"
	.string "progress--they sought control over\l"
	.string "life itself.\p"
	.string "However, their ambitions were met with\n"
	.string "disaster. Some say their greed led to\l"
	.string "their downfall, while others believe\l"
	.string "they were erased from history by those\l"
	.string "who feared their knowledge.\p"
	.string "What remains of them is hidden across\n"
	.string "Avaro--ruins, artifacts, echoes of a\l"
	.string "forgotten time.\p"
	.string "$"

ZirconTown_Text_AldenSpeech_Caden_3::
# 231 "data/maps/ZirconTown/scripts.pory"
	.string "Man, that's wild.\n"
	.string "Can you imagine if someone actually\l"
	.string "pulled off something like that?\p"
	.string "$"

ZirconTown_Text_AldenSpeech_Holly_3::
# 235 "data/maps/ZirconTown/scripts.pory"
	.string "I don't know... messing with life sounds\n"
	.string "dangerous.\p"
	.string "Maybe some things aren't meant to be\n"
	.string "controlled.$"

ZirconTown_Text_AldenSpeech_Alden_7::
# 240 "data/maps/ZirconTown/scripts.pory"
	.string "Perhaps. But if you could reshape the\n"
	.string "world--if you could erase suffering,\l"
	.string "prevent loss--would you not consider\l"
	.string "it?$"

ZirconTown_Text_AldenSpeech_Alden_8A::
# 244 "data/maps/ZirconTown/scripts.pory"
	.string "Indeed... a world where pain and loss are\n"
	.string "mere memories. A world perfected.$"

ZirconTown_Text_AldenSpeech_Alden_8B::
# 248 "data/maps/ZirconTown/scripts.pory"
	.string "An understandable perspective. But\n"
	.string "many things we now accept--Pokémon\l"
	.string "evolution, medicine, even Poké\l"
	.string "Balls--were once considered unnatural.$"

ZirconTown_Text_AldenSpeech_Caden_4::
# 252 "data/maps/ZirconTown/scripts.pory"
	.string "I guess you've got a point.\n"
	.string "But still, it's a little scary to think\l"
	.string "about.$"

ZirconTown_Text_AldenSpeech_Holly_4::
# 256 "data/maps/ZirconTown/scripts.pory"
	.string "I think I'd rather live in a world where\n"
	.string "things are a little messy.\p"
	.string "It's what makes every day different,\n"
	.string "right?$"

ZirconTown_Text_AldenSpeech_Alden_9::
# 261 "data/maps/ZirconTown/scripts.pory"
	.string "Ah, but I digress. I must not bore young\n"
	.string "Trainers with the weight of history.\p"
	.string "Perhaps, one day, you will seek answers\n"
	.string "on your own.$"

ZirconTown_Text_AldenSpeech_Alden_10::
# 266 "data/maps/ZirconTown/scripts.pory"
	.string "Now, I must take my leave. There is much\n"
	.string "more of Avaro to explore.\p"
	.string "Safe travels, young Trainers.\n"
	.string "And remember--knowledge is the key to\l"
	.string "shaping the future.$"

ZirconTown_Text_AldenSpeech_Caden_5::
# 271 "data/maps/ZirconTown/scripts.pory"
	.string "Okay, tell me that guy wasn't kinda\n"
	.string "weird.\p"
	.string "Eh, whatever. We've got real stuff to\n"
	.string "focus on--Gym battles, catching\l"
	.string "Pokémon, y'know, Trainer things.\p"
	.string "The next Gym is in Spinel City, right\n"
	.string "through the Kismet Forest.\p"
	.string "It's crawling with bug-type Pokémon, so\n"
	.string "make sure to stock up on berries at the\l"
	.string "Berry Shop before you go!\p"
	.string "Wouldn't want to get caught off guard,\n"
	.string "right?\p"
	.string "Anyway, I'll see you later, {PLAYER}!\n"
	.string "Good luck out there!$"

ZirconTown_Text_AldenSpeech_Holly_5::
# 280 "data/maps/ZirconTown/scripts.pory"
	.string "That was... a lot to take in.\n"
	.string "Something about the way he talked gave\l"
	.string "me a bad feeling\p"
	.string "Still... I think we should remember what\n"
	.string "he said.\n"
	.string "Just in case.\p"
	.string "Oh right, the next Gym is in Spinel City.\n"
	.string "To get there, we have to go through the\l"
	.string "Kismet Forest.\p"
	.string "The forest is full of bug-type Pokémon,\n"
	.string "so you should buy some berries at the\l"
	.string "Berry Shop before you go.\p"
	.string "Let's head there next, okay?\n"
	.string "I'll see you later, {PLAYER}!$"
