SpinelCity_Gym_MapScripts::
	.byte 0


SpinelCity_Gym_EventScript_Melody::
# 6 "data/maps/SpinelCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MELODY_1, SpinelCity_Gym_Text_MelodyIntro, SpinelCity_Gym_Text_MelodyDefeat, SpinelCity_Gym_EventScript_MelodyDefeated, NO_MUSIC
# 7 "data/maps/SpinelCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_DRAINING_KISS, SpinelCity_Gym_EventScript_Melody_2
SpinelCity_Gym_EventScript_Melody_1:
# 12 "data/maps/SpinelCity_Gym/scripts.pory"
	compare VAR_SPINEL_CITY_STATE, 0
	goto_if_eq SpinelCity_Gym_EventScript_Melody_5
SpinelCity_Gym_EventScript_Melody_4:
# 17 "data/maps/SpinelCity_Gym/scripts.pory"
	speakername SpinelCity_Gym_EventScript_Melody_Text_0
# 18 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_MelodyPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return

SpinelCity_Gym_EventScript_Melody_2:
# 9 "data/maps/SpinelCity_Gym/scripts.pory"
	goto SpinelCity_Gym_EventScript_GiveDrainingKiss
	goto SpinelCity_Gym_EventScript_Melody_1

SpinelCity_Gym_EventScript_Melody_5:
# 14 "data/maps/SpinelCity_Gym/scripts.pory"
	setvar VAR_SPINEL_CITY_STATE, 1
	goto SpinelCity_Gym_EventScript_Melody_4


SpinelCity_Gym_EventScript_MelodyDefeated::
# 51 "data/maps/SpinelCity_Gym/scripts.pory"
	speakername SpinelCity_Gym_EventScript_Melody_Text_0
# 52 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_MelodyDefeated
# 53 "data/maps/SpinelCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 54 "data/maps/SpinelCity_Gym/scripts.pory"
	closemessage
# 55 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_ReceivedGlintBadge
# 56 "data/maps/SpinelCity_Gym/scripts.pory"
	waitfanfare
# 57 "data/maps/SpinelCity_Gym/scripts.pory"
	speakername SpinelCity_Gym_EventScript_Melody_Text_0
# 58 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_GlintBadgeInfo
# 60 "data/maps/SpinelCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_SPINEL_GYM
# 61 "data/maps/SpinelCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 63 "data/maps/SpinelCity_Gym/scripts.pory"
	goto SpinelCity_Gym_EventScript_GiveDrainingKiss
# 65 "data/maps/SpinelCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 66 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return


SpinelCity_Gym_EventScript_GiveDrainingKiss::
# 86 "data/maps/SpinelCity_Gym/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 88 "data/maps/SpinelCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SpinelCity_Gym_EventScript_GiveDrainingKiss_2
SpinelCity_Gym_EventScript_GiveDrainingKiss_1:
# 93 "data/maps/SpinelCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_DRAINING_KISS
# 94 "data/maps/SpinelCity_Gym/scripts.pory"
	speakername SpinelCity_Gym_EventScript_Melody_Text_0
# 95 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_ExplainDrainingKiss
# 96 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return

SpinelCity_Gym_EventScript_GiveDrainingKiss_2:
# 90 "data/maps/SpinelCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SpinelCity_Gym_EventScript_GiveDrainingKiss_1


SpinelCity_Gym_EventScript_GymGuide::
# 101 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 102 "data/maps/SpinelCity_Gym/scripts.pory"
	faceplayer
# 103 "data/maps/SpinelCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SPINEL_GYM, SpinelCity_Gym_EventScript_GymGuide_2
# 109 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_GymGuide
# 110 "data/maps/SpinelCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SODA_POP_SPINEL_GYM, SpinelCity_Gym_EventScript_GymGuide_5
SpinelCity_Gym_EventScript_GymGuide_1:
# 118 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return

SpinelCity_Gym_EventScript_GymGuide_2:
# 105 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_GymGuideYouWon
	goto SpinelCity_Gym_EventScript_GymGuide_1

SpinelCity_Gym_EventScript_GymGuide_5:
# 112 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_GymGuideYouLookNervous
# 113 "data/maps/SpinelCity_Gym/scripts.pory"
	giveitem ITEM_SODA_POP
# 114 "data/maps/SpinelCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_SODA_POP_SPINEL_GYM
	goto SpinelCity_Gym_EventScript_GymGuide_1


SpinelCity_Gym_Sign_Hint1::
# 152 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 153 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Sign_Hint1_Text_0
# 154 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return


SpinelCity_Gym_Sign_Hint2::
# 158 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 159 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Sign_Hint2_Text_0
# 160 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return


SpinelCity_Gym_Sign_Hint3::
# 164 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 165 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Sign_Hint3_Text_0
# 166 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return


SpinelCity_Gym_Sign_Hint4::
# 170 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 171 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Sign_Hint4_Text_0
# 172 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return


SpinelCity_Gym_EventScript_LassBetty::
# 177 "data/maps/SpinelCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BETTY, SpinelCity_Gym_Text_BettyIntro, SpinelCity_Gym_Text_BettyDefeat
# 178 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_BettyPostBattle, MSGBOX_AUTOCLOSE
	return


SpinelCity_Gym_EventScript_BeautyHelen::
# 196 "data/maps/SpinelCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HELEN, SpinelCity_Gym_Text_HelenIntro, SpinelCity_Gym_Text_HelenDefeat
# 197 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_HelenPostBattle, MSGBOX_AUTOCLOSE
	return


SpinelCity_Gym_EventScript_AceTrainerFiona::
# 215 "data/maps/SpinelCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FIONA, SpinelCity_Gym_Text_FionaIntro, SpinelCity_Gym_Text_FionaDefeat
# 216 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_FionaPostBattle, MSGBOX_AUTOCLOSE
	return


SpinelCity_Gym_EventScript_Melody_Text_0:
# 17 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Melody$"

SpinelCity_Gym_Sign_Hint1_Text_0:
# 153 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Fairies love the morning light.\n"
	.string "The brighter path will guide you.$"

SpinelCity_Gym_Sign_Hint2_Text_0:
# 159 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "At dusk, fairies dance in the twilight.\n"
	.string "The softer glow is their choice.$"

SpinelCity_Gym_Sign_Hint3_Text_0:
# 165 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Fairies follow the golden rays.\n"
	.string "The sunlit way is the right way.$"

SpinelCity_Gym_Sign_Hint4_Text_0:
# 171 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Fairies love the moonlight.\n"
	.string "The darker path is where they wander.$"

SpinelCity_Gym_Text_MelodyIntro::
# 22 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Hi there! Melody's the new Gym Leader in\n"
	.string "Spinel City!\p"
	.string "Melody only just moved here from Johto,\n"
	.string "so everything feels so... new and\l"
	.string "sparkly!\p"
	.string "Ms. Jasmine, Melody's role model, says to\n"
	.string "just 'be herself'...\n"
	.string "So, here Melody is!\p"
	.string "Let's have a battle filled with sparkles\n"
	.string "and magic!\n"
	.string "Fairy-style!$"

SpinelCity_Gym_Text_MelodyDefeat::
# 29 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Wahhh! Melody... lost?\p"
	.string "Melody was so sure she was ready to be\n"
	.string "a Gym Leader!\p"
	.string "This is... so embarrassing!\p"
	.string "Melody feels like hiding under her\n"
	.string "covers for a week!\n"
	.string "Sniff...$"

SpinelCity_Gym_Text_MelodyDefeated::
# 36 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Sniff... Melody's sorry for crying.\p"
	.string "Melody wanted to be strong, but maybe\n"
	.string "she still has more to learn.\p"
	.string "You and your Pokémon taught Melody a\n"
	.string "lot today...\n"
	.string "Thank you, {PLAYER}.\p"
	.string "You deserve this badge, and Melody\n"
	.string "hopes you'll accept it with a sprinkle\l"
	.string "of magic!$"

SpinelCity_Gym_Text_MelodyPostBattle::
# 43 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Thank you so, so much for battling with\n"
	.string "Melody, {PLAYER}!\p"
	.string "Melody learned so much from you and\n"
	.string "your Pokémon!\p"
	.string "Ms. Jasmine would say Melody tried her\n"
	.string "best, and Melody hopes she made her\l"
	.string "proud, too!\p"
	.string "Sparkles and cheers for you,\n"
	.string "{PLAYER}!$"

SpinelCity_Gym_Text_ReceivedGlintBadge::
# 69 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You received the Glint Badge!$"

SpinelCity_Gym_Text_GlintBadgeInfo::
# 73 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "With two badges, Pokémon up to Level 35\n"
	.string "will listen to you!\p"
	.string "Oh, and you can use the HM move Cut\n"
	.string "outside of battle, too!\p"
	.string "Oh, oh! Melody has a special gift as a\n"
	.string "thank-you! This TM!$"

SpinelCity_Gym_Text_ExplainDrainingKiss::
# 79 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "This is the TM for Draining Kiss!\p"
	.string "It's a Fairy move that's super cute and\n"
	.string "heals you!\p"
	.string "Melody thinks it's perfect, and she\n"
	.string "hopes you like it too!$"

SpinelCity_Gym_Text_GymGuideYouWon::
# 121 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You won?\n"
	.string "I knew you could do it, champ!\p"
	.string "You sent Melody and her Pokémon crying!\n"
	.string "Literally!\p"
	.string "You're on your way to becoming a real\n"
	.string "champ!\p"
	.string "Keep it up, kid!$"

SpinelCity_Gym_Text_GymGuide::
# 129 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Yo! Champion-to-be!\n"
	.string "It's me, Gyde!\p"
	.string "I'm here to guide you through the Spinel\n"
	.string "City Gym!\p"
	.string "This Gym specializes in Fairy-type\n"
	.string "Pokémon!\p"
	.string "Fairy-types are weak to Poison and\n"
	.string "Steel-type moves, so keep that in mind!\p"
	.string "Bringing along a Fire-type Pokémon\n"
	.string "wouldn't hurt either since they resist\l"
	.string "Fairy-type moves!\p"
	.string "The Gym is a bit of a maze, but don't\n"
	.string "worry!\p"
	.string "Each room has a sign that gives you a\n"
	.string "hint on which path to take!\p"
	.string "Just follow the signs, and you'll reach\n"
	.string "the Gym Leader in no time!\p"
	.string "Break a leg, champ!$"

SpinelCity_Gym_Text_GymGuideYouLookNervous::
# 142 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You look nervous!\n"
	.string "Don't worry, I got your back!\p"
	.string "Take this Soda Pop to calm your nerves!$"

SpinelCity_Gym_Text_BettyIntro::
# 181 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Oops! Looks like you took a wrong turn!\n"
	.string "Ready for a dazzling battle?$"

SpinelCity_Gym_Text_BettyDefeat::
# 187 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Wow, you've got some dazzling moves!$"

SpinelCity_Gym_Text_BettyPostBattle::
# 191 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You didn't take the right path, but hey,\n"
	.string "battling me was totally worth it, right?$"

SpinelCity_Gym_Text_HelenIntro::
# 200 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Did you lose your way, kid?\n"
	.string "Don't worry, I'll guide you to the right\l"
	.string "path!$"

SpinelCity_Gym_Text_HelenDefeat::
# 204 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You sure have a knack for this!\p"
	.string "Oh, I meant battling, not your sense of\n"
	.string "direction!$"

SpinelCity_Gym_Text_HelenPostBattle::
# 210 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You're wrong, but you're getting closer\n"
	.string "to the end!$"

SpinelCity_Gym_Text_FionaIntro::
# 219 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "I've been wandering for what feels like\n"
	.string "forever... trying to find my way.$"

SpinelCity_Gym_Text_FionaDefeat::
# 223 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You're strong...\n"
	.string "Maybe you'll find your way out of here.$"

SpinelCity_Gym_Text_FionaPostBattle::
# 227 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "The Gym Leader is just ahead.\n"
	.string "But be careful...$"
