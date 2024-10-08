BaycrestCity_Gym_MapScripts::
	.byte 0


BaycrestCity_Gym_Trigger_NotAChallenger1::
# 6 "data/maps/BaycrestCity_Gym/scripts.pory"
	lockall
# 8 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 9 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement 1, BaycrestCity_Gym_Movement_GuideApproachPlayer1
# 10 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmovement 1
# 12 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_NotAChallenger
# 13 "data/maps/BaycrestCity_Gym/scripts.pory"
	closemessage
# 15 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement 1, BaycrestCity_Gym_Movement_GuideWalkBack1
# 16 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmovement 0
# 18 "data/maps/BaycrestCity_Gym/scripts.pory"
	releaseall
	return


BaycrestCity_Gym_Trigger_NotAChallenger2::
# 22 "data/maps/BaycrestCity_Gym/scripts.pory"
	lockall
# 24 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 25 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement 1, BaycrestCity_Gym_Movement_GuideApproachPlayer2
# 26 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmovement 1
# 28 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_NotAChallenger
# 29 "data/maps/BaycrestCity_Gym/scripts.pory"
	closemessage
# 31 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement 1, BaycrestCity_Gym_Movement_GuideWalkBack2
# 32 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmovement 0
# 34 "data/maps/BaycrestCity_Gym/scripts.pory"
	releaseall
	return


BaycrestCity_Gym_Trigger_NotAChallenger3::
# 38 "data/maps/BaycrestCity_Gym/scripts.pory"
	lockall
# 40 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 41 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement 1, BaycrestCity_Gym_Movement_GuideApproachPlayer3
# 42 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmovement 1
# 44 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_NotAChallenger
# 45 "data/maps/BaycrestCity_Gym/scripts.pory"
	closemessage
# 47 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement 1, BaycrestCity_Gym_Movement_GuideWalkBack3
# 48 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmovement 0
# 50 "data/maps/BaycrestCity_Gym/scripts.pory"
	releaseall
	return


BaycrestCity_Gym_Trigger_NotAChallenger4::
# 54 "data/maps/BaycrestCity_Gym/scripts.pory"
	lockall
# 56 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 57 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement 1, BaycrestCity_Gym_Movement_GuideApproachPlayer4
# 58 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmovement 1
# 60 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_NotAChallenger
# 62 "data/maps/BaycrestCity_Gym/scripts.pory"
	applymovement 1, BaycrestCity_Gym_Movement_GuideWalkBack4
# 63 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmovement 0
# 65 "data/maps/BaycrestCity_Gym/scripts.pory"
	releaseall
	return


# 68 "data/maps/BaycrestCity_Gym/scripts.pory"
BaycrestCity_Gym_Movement_GuideApproachPlayer1:
# 69 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 69 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 69 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 70 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_left
# 70 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_left
# 70 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_left
# 71 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 74 "data/maps/BaycrestCity_Gym/scripts.pory"
BaycrestCity_Gym_Movement_GuideWalkBack1:
# 75 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 75 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 75 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 76 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_right
# 76 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_right
# 76 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_right
# 77 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_in_place_faster_down
	step_end

# 80 "data/maps/BaycrestCity_Gym/scripts.pory"
BaycrestCity_Gym_Movement_GuideApproachPlayer2:
# 81 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 81 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 81 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 82 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_left
# 82 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_left
# 83 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 86 "data/maps/BaycrestCity_Gym/scripts.pory"
BaycrestCity_Gym_Movement_GuideWalkBack2:
# 87 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 87 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 87 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 88 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_right
# 88 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_right
# 89 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_in_place_faster_down
	step_end

# 92 "data/maps/BaycrestCity_Gym/scripts.pory"
BaycrestCity_Gym_Movement_GuideApproachPlayer3:
# 93 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 93 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 93 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 94 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_left
# 95 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 98 "data/maps/BaycrestCity_Gym/scripts.pory"
BaycrestCity_Gym_Movement_GuideWalkBack3:
# 99 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 99 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 99 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 100 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_right
# 101 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_in_place_faster_down
	step_end

# 104 "data/maps/BaycrestCity_Gym/scripts.pory"
BaycrestCity_Gym_Movement_GuideApproachPlayer4:
# 105 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 105 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 105 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_up
# 106 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 109 "data/maps/BaycrestCity_Gym/scripts.pory"
BaycrestCity_Gym_Movement_GuideWalkBack4:
# 110 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 110 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 110 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_down
# 111 "data/maps/BaycrestCity_Gym/scripts.pory"
	walk_in_place_faster_down
	step_end

BaycrestCity_Gym_EventScript_GymGuide::
# 122 "data/maps/BaycrestCity_Gym/scripts.pory"
	lock
# 123 "data/maps/BaycrestCity_Gym/scripts.pory"
	faceplayer
# 125 "data/maps/BaycrestCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BAYCREST_GYM, BaycrestCity_Gym_EventScript_GymGuide_2
# 131 "data/maps/BaycrestCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, BaycrestCity_Gym_EventScript_GymGuide_6
# 137 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_GymGuide1
BaycrestCity_Gym_EventScript_GymGuide_5:
# 140 "data/maps/BaycrestCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SODA_POP_BAYCREST_GYM, BaycrestCity_Gym_EventScript_GymGuide_10
BaycrestCity_Gym_EventScript_GymGuide_9:
# 147 "data/maps/BaycrestCity_Gym/scripts.pory"
	setflag FLAG_TEMP_1
BaycrestCity_Gym_EventScript_GymGuide_1:
# 149 "data/maps/BaycrestCity_Gym/scripts.pory"
	release
	return

BaycrestCity_Gym_EventScript_GymGuide_2:
# 127 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_GymGuideWin
	goto BaycrestCity_Gym_EventScript_GymGuide_1

BaycrestCity_Gym_EventScript_GymGuide_6:
# 133 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_GymGuide3
	goto BaycrestCity_Gym_EventScript_GymGuide_5

BaycrestCity_Gym_EventScript_GymGuide_10:
# 142 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_GymGuide2
# 143 "data/maps/BaycrestCity_Gym/scripts.pory"
	giveitem ITEM_SODA_POP
# 144 "data/maps/BaycrestCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_SODA_POP_BAYCREST_GYM
	goto BaycrestCity_Gym_EventScript_GymGuide_9


BaycrestCity_Gym_EventScript_EntranceAttendant::
# 188 "data/maps/BaycrestCity_Gym/scripts.pory"
	lock
# 189 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_EntranceAttendant1
# 190 "data/maps/BaycrestCity_Gym/scripts.pory"
	release
	return


BaycrestCity_Gym_EventScript_Shu::
# 202 "data/maps/BaycrestCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHRISTOPHER, BaycrestCity_Gym_Text_ShuIntro, BaycrestCity_Gym_Text_ShuDefeated
# 203 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_ShuPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmessage
	end


BaycrestCity_Gym_EventScript_Junpei::
# 222 "data/maps/BaycrestCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KENNETH, BaycrestCity_Gym_Text_JunpeiIntro, BaycrestCity_Gym_Text_JunpeiDefeated
# 223 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_JunpeiPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitmessage
	end


BaycrestCity_Gym_EventScript_Geo::
# 242 "data/maps/BaycrestCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEO_1, BaycrestCity_Gym_Text_GeoIntro, BaycrestCity_Gym_Text_GeoDefeat, BaycrestCity_Gym_EventScript_GeoDefeated, NO_MUSIC
# 243 "data/maps/BaycrestCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SAND_TOMB, BaycrestCity_Gym_EventScript_Geo_2
BaycrestCity_Gym_EventScript_Geo_1:
# 248 "data/maps/BaycrestCity_Gym/scripts.pory"
	speakername BaycrestCity_Gym_EventScript_Geo_Text_0
# 249 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_GeoPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/BaycrestCity_Gym/scripts.pory"
	release
	return

BaycrestCity_Gym_EventScript_Geo_2:
# 245 "data/maps/BaycrestCity_Gym/scripts.pory"
	goto BaycrestCity_Gym_EventScript_GiveSandTomb
	goto BaycrestCity_Gym_EventScript_Geo_1


BaycrestCity_Gym_EventScript_GeoDefeated::
# 254 "data/maps/BaycrestCity_Gym/scripts.pory"
	speakername BaycrestCity_Gym_EventScript_Geo_Text_0
# 255 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_GeoDefeated
# 256 "data/maps/BaycrestCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 257 "data/maps/BaycrestCity_Gym/scripts.pory"
	closemessage
# 258 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_ReceivedFoundationBadge
# 259 "data/maps/BaycrestCity_Gym/scripts.pory"
	waitfanfare
# 260 "data/maps/BaycrestCity_Gym/scripts.pory"
	speakername BaycrestCity_Gym_EventScript_Geo_Text_0
# 261 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_FoundationBadgeInfo
# 263 "data/maps/BaycrestCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BAYCREST_GYM
# 264 "data/maps/BaycrestCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 266 "data/maps/BaycrestCity_Gym/scripts.pory"
	goto BaycrestCity_Gym_EventScript_GiveSandTomb
# 268 "data/maps/BaycrestCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 269 "data/maps/BaycrestCity_Gym/scripts.pory"
	release
	return


BaycrestCity_Gym_EventScript_GiveSandTomb::
# 273 "data/maps/BaycrestCity_Gym/scripts.pory"
	giveitem ITEM_TM_SAND_TOMB
# 275 "data/maps/BaycrestCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BaycrestCity_Gym_EventScript_GiveSandTomb_2
BaycrestCity_Gym_EventScript_GiveSandTomb_1:
# 280 "data/maps/BaycrestCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SAND_TOMB
# 281 "data/maps/BaycrestCity_Gym/scripts.pory"
	speakername BaycrestCity_Gym_EventScript_Geo_Text_0
# 282 "data/maps/BaycrestCity_Gym/scripts.pory"
	msgbox BaycrestCity_Gym_Text_ExplainSandTomb
# 283 "data/maps/BaycrestCity_Gym/scripts.pory"
	release
	return

BaycrestCity_Gym_EventScript_GiveSandTomb_2:
# 277 "data/maps/BaycrestCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto BaycrestCity_Gym_EventScript_GiveSandTomb_1


BaycrestCity_Gym_EventScript_Geo_Text_0:
# 248 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Geo$"

BaycrestCity_Gym_Text_NotAChallenger::
# 115 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Hey there!\n"
	.string "You don't look like you're here to learn\l"
	.string "about the technicalities of Pokémon\l"
	.string "battling.\p"
	.string "Register for the League at the Pokémon\n"
	.string "Center if you want to challenge the\l"
	.string "Gym!$"

BaycrestCity_Gym_Text_GymGuide1::
# 152 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Yo!\n"
	.string "Champion-to-be!\p"
	.string "This is your first gym, right?\n"
	.string "How could I tell?\p"
	.string "Well, you look like a total newbie!\p"
	.string "But don't worry!\n"
	.string "My name is Gyde, and I'm here to help!\p"
	.string "The trainers in this gym all use\n"
	.string "Ground-type Pokémon.\p"
	.string "That means Water, Grass, and Ice-type\n"
	.string "moves are super effective against\l"
	.string "them!\p"
	.string "But be careful!\n"
	.string "Ground-types are immune to\l"
	.string "Electric-type moves!\p"
	.string "And if you're using a Fire-type, watch\n"
	.string "out for their Rock-type moves!\p"
	.string "You got all that?\n"
	.string "Good luck!$"

BaycrestCity_Gym_Text_GymGuide2::
# 165 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "...Hey, relax!\n"
	.string "You still look nervous!\p"
	.string "Take this to calm your nerves!$"

BaycrestCity_Gym_Text_GymGuide3::
# 171 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "The trainers in this gym all use\n"
	.string "Ground-type Pokémon.\p"
	.string "That means Water, Grass, and Ice-type\n"
	.string "moves are super effective against\l"
	.string "them!\p"
	.string "But be careful!\n"
	.string "Ground-types are immune to\l"
	.string "Electric-type moves!\p"
	.string "And if you're using a Fire-type, watch\n"
	.string "out for their Rock-type moves!\p"
	.string "You got all that?\n"
	.string "Good luck!$"

BaycrestCity_Gym_Text_GymGuideWin::
# 180 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "You won?\n"
	.string "That's amazing!\p"
	.string "You're on your way to becoming a real\n"
	.string "champ!\p"
	.string "Keep it up, kid!$"

BaycrestCity_Gym_Text_EntranceAttendant1::
# 193 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Hey there!\n"
	.string "Welcome to the Baycrest City Gym!\p"
	.string "This place is also the Baycrest City\n"
	.string "Trainer School!\p"
	.string "So please keep your conversations\n"
	.string "appropriate for a school environment!$"

BaycrestCity_Gym_Text_ShuIntro::
# 208 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "I know everything there is to know\n"
	.string "about Pokémon!\p"
	.string "I'll show you how much I know in battle!$"

BaycrestCity_Gym_Text_ShuDefeated::
# 213 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "B-But in the simulations, I've always\n"
	.string "won!$"

BaycrestCity_Gym_Text_ShuPostBattle::
# 217 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Maybe I need to study more...$"

BaycrestCity_Gym_Text_JunpeiIntro::
# 228 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Psh, who needs to study when you can\n"
	.string "just battle?$"

BaycrestCity_Gym_Text_JunpeiDefeated::
# 233 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Welp, I think it's time to hit the books!$"

BaycrestCity_Gym_Text_JunpeiPostBattle::
# 237 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Maybe studying isn't only for losers\n"
	.string "after all...$"

BaycrestCity_Gym_Text_GeoIntro::
# 286 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Are you my next challenger?\n"
	.string "I'm Geo, the Baycrest City Gym Leader!\p"
	.string "I may be a kid, but I graduated from the\n"
	.string "Trainer School with top marks a few\l"
	.string "years ago!\p"
	.string "I think that Ground-type is one of the\n"
	.string "best offensive types in the world!\p"
	.string "You could say it's the foundation of a\n"
	.string "good team!\p"
	.string "But don't think I'm going to go easy on\n"
	.string "you!\p"
	.string "I'll show you and the world that\n"
	.string "Ground-types aren't pushovers!$"

BaycrestCity_Gym_Text_GeoDefeat::
# 296 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "My solid foundation crumbled...\p"
	.string "Even though I'm a Gym Leader, I still\n"
	.string "have a lot to learn...$"

BaycrestCity_Gym_Text_GeoDefeated::
# 301 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "Ahem!\n"
	.string "Congratulations, {PLAYER}!\p"
	.string "According to the official rules of the\n"
	.string "Pokémon League, once you defeat a Gym\l"
	.string "Leader, you will receive a badge as\l"
	.string "proof of your victory!\p"
	.string "That's right!\n"
	.string "The Pokémon League's official\l"
	.string "Foundation Badge is yours!$"

BaycrestCity_Gym_Text_ReceivedFoundationBadge::
# 307 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "You received the Foundation Badge!$"

BaycrestCity_Gym_Text_FoundationBadgeInfo::
# 311 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "With this badge, Pokémon of up to level\n"
	.string "25 will be easier to catch and will\l"
	.string "listen to your commands!\p"
	.string "Plus, you can use the HM move Rock\n"
	.string "Smash outside of battle!\p"
	.string "One more thing!\n"
	.string "Take this TM as a reward for your\l"
	.string "victory!$"

BaycrestCity_Gym_Text_ExplainSandTomb::
# 318 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "This is the TM--Technical Machine--for\n"
	.string "Sand Tomb!\p"
	.string "It's a Ground-type move that traps the\n"
	.string "opponent in a vortex of sand for 4-5\l"
	.string "turns!\p"
	.string "It's a great move to keep your opponent\n"
	.string "grounded!\n"
	.string "Get it? Grounded? Ahaha!$"

BaycrestCity_Gym_Text_GeoPostBattle::
# 325 "data/maps/BaycrestCity_Gym/scripts.pory"
	.string "You were a great challenger!\n"
	.string "I hope you'll come back to challenge me\l"
	.string "again!$"
