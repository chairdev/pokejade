SpinelCity_Gym_MapScripts::
	.byte 0


SpinelCity_Gym_EventScript_Melody::
# 10 "data/maps/SpinelCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_DRAINING_KISS, SpinelCity_Gym_EventScript_Melody_2
SpinelCity_Gym_EventScript_Melody_1:
# 15 "data/maps/SpinelCity_Gym/scripts.pory"
	speakername SpinelCity_Gym_EventScript_Melody_Text_0
# 16 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_MelodyPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return

SpinelCity_Gym_EventScript_Melody_2:
# 12 "data/maps/SpinelCity_Gym/scripts.pory"
	goto SpinelCity_Gym_EventScript_GiveDrainingKiss
	goto SpinelCity_Gym_EventScript_Melody_1


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
# 64 "data/maps/SpinelCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
	return


SpinelCity_Gym_EventScript_GiveDrainingKiss::
# 85 "data/maps/SpinelCity_Gym/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 87 "data/maps/SpinelCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SpinelCity_Gym_EventScript_GiveDrainingKiss_2
SpinelCity_Gym_EventScript_GiveDrainingKiss_1:
# 92 "data/maps/SpinelCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_DRAINING_KISS
# 93 "data/maps/SpinelCity_Gym/scripts.pory"
	speakername SpinelCity_Gym_EventScript_Melody_Text_0
# 94 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_ExplainDrainingKiss
# 96 "data/maps/SpinelCity_Gym/scripts.pory"
	setvar VAR_SPINEL_CITY_STATE, 1
# 98 "data/maps/SpinelCity_Gym/scripts.pory"
	speakername SpinelCity_Gym_EventScript_Melody_Text_0
# 99 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_EventScript_GiveDrainingKiss_Text_0
# 105 "data/maps/SpinelCity_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/maps/SpinelCity_Gym/scripts.pory"
	setflag FLAG_HIDE_SPINEL_GYM_MELODY
# 107 "data/maps/SpinelCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SPINEL_CITY_JASMINE
# 108 "data/maps/SpinelCity_Gym/scripts.pory"
	removeobject 5
# 109 "data/maps/SpinelCity_Gym/scripts.pory"
	playse SE_EXIT
# 110 "data/maps/SpinelCity_Gym/scripts.pory"
	waitse
# 111 "data/maps/SpinelCity_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

SpinelCity_Gym_EventScript_GiveDrainingKiss_2:
# 89 "data/maps/SpinelCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SpinelCity_Gym_EventScript_GiveDrainingKiss_1


SpinelCity_Gym_EventScript_GymGuide::
# 116 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 117 "data/maps/SpinelCity_Gym/scripts.pory"
	faceplayer
# 118 "data/maps/SpinelCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SPINEL_GYM, SpinelCity_Gym_EventScript_GymGuide_2
# 124 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_GymGuide
# 125 "data/maps/SpinelCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SODA_POP_SPINEL_GYM, SpinelCity_Gym_EventScript_GymGuide_5
SpinelCity_Gym_EventScript_GymGuide_1:
# 133 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return

SpinelCity_Gym_EventScript_GymGuide_2:
# 120 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_GymGuideYouWon
	goto SpinelCity_Gym_EventScript_GymGuide_1

SpinelCity_Gym_EventScript_GymGuide_5:
# 127 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_GymGuideYouLookNervous
# 128 "data/maps/SpinelCity_Gym/scripts.pory"
	giveitem ITEM_SODA_POP
# 129 "data/maps/SpinelCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_SODA_POP_SPINEL_GYM
	goto SpinelCity_Gym_EventScript_GymGuide_1


SpinelCity_Gym_Sign_Hint1::
# 167 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 168 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Sign_Hint1_Text_0
# 169 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return


SpinelCity_Gym_Sign_Hint2::
# 173 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 174 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Sign_Hint2_Text_0
# 175 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return


SpinelCity_Gym_Sign_Hint3::
# 179 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 180 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Sign_Hint3_Text_0
# 181 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return


SpinelCity_Gym_Sign_Hint4::
# 185 "data/maps/SpinelCity_Gym/scripts.pory"
	lock
# 186 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Sign_Hint4_Text_0
# 187 "data/maps/SpinelCity_Gym/scripts.pory"
	release
	return


SpinelCity_Gym_EventScript_LassBetty::
# 192 "data/maps/SpinelCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BETTY, SpinelCity_Gym_Text_BettyIntro, SpinelCity_Gym_Text_BettyDefeat
# 193 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_BettyPostBattle, MSGBOX_AUTOCLOSE
	return


SpinelCity_Gym_EventScript_BeautyHelen::
# 211 "data/maps/SpinelCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HELEN, SpinelCity_Gym_Text_HelenIntro, SpinelCity_Gym_Text_HelenDefeat
# 212 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_HelenPostBattle, MSGBOX_AUTOCLOSE
	return


SpinelCity_Gym_EventScript_AceTrainerFiona::
# 230 "data/maps/SpinelCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FIONA, SpinelCity_Gym_Text_FionaIntro, SpinelCity_Gym_Text_FionaDefeat
# 231 "data/maps/SpinelCity_Gym/scripts.pory"
	msgbox SpinelCity_Gym_Text_FionaPostBattle, MSGBOX_AUTOCLOSE
	return


SpinelCity_Gym_EventScript_Melody_Text_0:
# 15 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Melody$"

SpinelCity_Gym_EventScript_GiveDrainingKiss_Text_0:
# 100 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Melody... tried her best... but she still\n"
	.string "wasn't good enough... Sorry, but... I\l"
	.string "think I need some time. To think.\p"
	.string "You know... to figure out whether or not\n"
	.string "I'm cut out for this whole Gym Leader\l"
	.string "thing.\p"
	.string "I'm sorry, but the Gym's gonna be closed\n"
	.string "for now...$"

SpinelCity_Gym_Sign_Hint1_Text_0:
# 168 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Fairies love the morning light.\n"
	.string "The brighter path will guide you.$"

SpinelCity_Gym_Sign_Hint2_Text_0:
# 174 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "At dusk, fairies dance in the twilight.\n"
	.string "The softer glow is their choice.$"

SpinelCity_Gym_Sign_Hint3_Text_0:
# 180 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Fairies follow the golden rays.\n"
	.string "The sunlit way is the right way.$"

SpinelCity_Gym_Sign_Hint4_Text_0:
# 186 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Fairies love the moonlight.\n"
	.string "The darker path is where they wander.$"

SpinelCity_Gym_Text_MelodyIntro::
# 22 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Yay! A challenger!\n"
	.string "Melody's so excited!\p"
	.string "Ms. Jasmine said there'd be days like\n"
	.string "this--when someone special walks\l"
	.string "through the door!\p"
	.string "Melody is Spinel's Gym Leader, the\n"
	.string "'Melodic Dreamer'!\p"
	.string "People think Melody is just cute and\n"
	.string "sparkly, but I trained suuuper hard to\l"
	.string "be here!\p"
	.string "So... are you ready to play a tune with\n"
	.string "Melody?\p"
	.string "Let's make this battle sing!$"

SpinelCity_Gym_Text_MelodyDefeat::
# 31 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "M-Melody... lost...?\p"
	.string "But... Melody tried so hard...!\n"
	.string "Sniff\p"
	.string "This wasn't supposed to happen... not\n"
	.string "like this...$"

SpinelCity_Gym_Text_MelodyDefeated::
# 38 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Take... my Gym Badge...\n"
	.string "You earned it.\p"
	.string "You really did. You're... amazing...$"

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
# 67 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You received the Glint Badge from\n"
	.string "Melody!$"

SpinelCity_Gym_Text_GlintBadgeInfo::
# 71 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "With two badges, Pokémon up to Level 35\n"
	.string "will listen to you...\p"
	.string "You can also use the HM move Cut\n"
	.string "outside of battle now...\p"
	.string "A-and... Melody has a little gift for\n"
	.string "you--just to say thank you!$"

SpinelCity_Gym_Text_ExplainDrainingKiss::
# 78 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "It's the TM for Draining Kiss...\p"
	.string "It's a Fairy move... It's r-really cute,\n"
	.string "and it even heals you a bit...\p"
	.string "Melody thinks it's perfect for you...\n"
	.string "s-so please like it, okay?$"

SpinelCity_Gym_Text_GymGuideYouWon::
# 136 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You won?\n"
	.string "I knew you could do it, champ!\p"
	.string "You sent Melody and her Pokémon crying!\n"
	.string "Literally!\p"
	.string "You're on your way to becoming a real\n"
	.string "champ!\p"
	.string "Keep it up, kid!$"

SpinelCity_Gym_Text_GymGuide::
# 144 "data/maps/SpinelCity_Gym/scripts.pory"
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
# 157 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You look nervous!\n"
	.string "Don't worry, I got your back!\p"
	.string "Take this Soda Pop to calm your nerves!$"

SpinelCity_Gym_Text_BettyIntro::
# 196 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Oops! Looks like you took a wrong turn!\n"
	.string "Ready for a dazzling battle?$"

SpinelCity_Gym_Text_BettyDefeat::
# 202 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Wow, you've got some dazzling moves!$"

SpinelCity_Gym_Text_BettyPostBattle::
# 206 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You didn't take the right path, but hey,\n"
	.string "battling me was totally worth it, right?$"

SpinelCity_Gym_Text_HelenIntro::
# 215 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "Did you lose your way, kid?\n"
	.string "Don't worry, I'll guide you to the right\l"
	.string "path!$"

SpinelCity_Gym_Text_HelenDefeat::
# 219 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You sure have a knack for this!\p"
	.string "Oh, I meant battling, not your sense of\n"
	.string "direction!$"

SpinelCity_Gym_Text_HelenPostBattle::
# 225 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You're wrong, but you're getting closer\n"
	.string "to the end!$"

SpinelCity_Gym_Text_FionaIntro::
# 234 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "I've been wandering for what feels like\n"
	.string "forever... trying to find my way.$"

SpinelCity_Gym_Text_FionaDefeat::
# 238 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "You're strong...\n"
	.string "Maybe you'll find your way out of here.$"

SpinelCity_Gym_Text_FionaPostBattle::
# 242 "data/maps/SpinelCity_Gym/scripts.pory"
	.string "The Gym Leader is just ahead.\n"
	.string "But be careful...$"
