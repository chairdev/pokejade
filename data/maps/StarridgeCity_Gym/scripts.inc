StarridgeCity_Gym_MapScripts::
	.byte 0


StarridgeCity_Gym_EventScript_Melody::
# 6 "data/maps/StarridgeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MELODY_1, StarridgeCity_Gym_Text_MelodyIntro, StarridgeCity_Gym_Text_MelodyDefeat, StarridgeCity_Gym_EventScript_MelodyDefeated, NO_MUSIC
# 7 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_DRAINING_KISS, StarridgeCity_Gym_EventScript_Melody_2
StarridgeCity_Gym_EventScript_Melody_1:
# 12 "data/maps/StarridgeCity_Gym/scripts.pory"
	compare VAR_STARRIDGE_CITY_STATE, 0
	goto_if_eq StarridgeCity_Gym_EventScript_Melody_5
StarridgeCity_Gym_EventScript_Melody_4:
# 17 "data/maps/StarridgeCity_Gym/scripts.pory"
	speakername StarridgeCity_Gym_EventScript_Melody_Text_0
# 18 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_MelodyPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return

StarridgeCity_Gym_EventScript_Melody_2:
# 9 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto StarridgeCity_Gym_EventScript_GiveDrainingKiss
	goto StarridgeCity_Gym_EventScript_Melody_1

StarridgeCity_Gym_EventScript_Melody_5:
# 14 "data/maps/StarridgeCity_Gym/scripts.pory"
	setvar VAR_STARRIDGE_CITY_STATE, 1
	goto StarridgeCity_Gym_EventScript_Melody_4


StarridgeCity_Gym_EventScript_MelodyDefeated::
# 47 "data/maps/StarridgeCity_Gym/scripts.pory"
	speakername StarridgeCity_Gym_EventScript_Melody_Text_0
# 48 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_MelodyDefeated
# 49 "data/maps/StarridgeCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 50 "data/maps/StarridgeCity_Gym/scripts.pory"
	closemessage
# 51 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_ReceivedGlintBadge
# 52 "data/maps/StarridgeCity_Gym/scripts.pory"
	waitfanfare
# 53 "data/maps/StarridgeCity_Gym/scripts.pory"
	speakername StarridgeCity_Gym_EventScript_Melody_Text_0
# 54 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_GlintBadgeInfo
# 56 "data/maps/StarridgeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_STARRIDGE_GYM
# 57 "data/maps/StarridgeCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 59 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto StarridgeCity_Gym_EventScript_GiveDrainingKiss
# 61 "data/maps/StarridgeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 62 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_EventScript_GiveDrainingKiss::
# 87 "data/maps/StarridgeCity_Gym/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 89 "data/maps/StarridgeCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq StarridgeCity_Gym_EventScript_GiveDrainingKiss_2
StarridgeCity_Gym_EventScript_GiveDrainingKiss_1:
# 94 "data/maps/StarridgeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_DRAINING_KISS
# 95 "data/maps/StarridgeCity_Gym/scripts.pory"
	speakername StarridgeCity_Gym_EventScript_Melody_Text_0
# 96 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_ExplainDrainingKiss
# 97 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return

StarridgeCity_Gym_EventScript_GiveDrainingKiss_2:
# 91 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto StarridgeCity_Gym_EventScript_GiveDrainingKiss_1


StarridgeCity_Gym_EventScript_GymGuide::
# 109 "data/maps/StarridgeCity_Gym/scripts.pory"
	lock
# 110 "data/maps/StarridgeCity_Gym/scripts.pory"
	faceplayer
# 111 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_STARRIDGE_GYM, StarridgeCity_Gym_EventScript_GymGuide_2
# 117 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_GymGuide
# 118 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SODA_POP_STARRIDGE_GYM, StarridgeCity_Gym_EventScript_GymGuide_5
StarridgeCity_Gym_EventScript_GymGuide_1:
# 126 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return

StarridgeCity_Gym_EventScript_GymGuide_2:
# 113 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_GymGuideYouWon
	goto StarridgeCity_Gym_EventScript_GymGuide_1

StarridgeCity_Gym_EventScript_GymGuide_5:
# 120 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_GymGuideYouLookNervous
# 121 "data/maps/StarridgeCity_Gym/scripts.pory"
	giveitem ITEM_SODA_POP
# 122 "data/maps/StarridgeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_SODA_POP_STARRIDGE_GYM
	goto StarridgeCity_Gym_EventScript_GymGuide_1


StarridgeCity_Gym_Sign_Hint1::
# 160 "data/maps/StarridgeCity_Gym/scripts.pory"
	lock
# 161 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Sign_Hint1_Text_0
# 162 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_Sign_Hint2::
# 166 "data/maps/StarridgeCity_Gym/scripts.pory"
	lock
# 167 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Sign_Hint2_Text_0
# 168 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_Sign_Hint3::
# 172 "data/maps/StarridgeCity_Gym/scripts.pory"
	lock
# 173 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Sign_Hint3_Text_0
# 174 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_Sign_Hint4::
# 178 "data/maps/StarridgeCity_Gym/scripts.pory"
	lock
# 179 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Sign_Hint4_Text_0
# 180 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_EventScript_LassBetty::
# 185 "data/maps/StarridgeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BETTY, StarridgeCity_Gym_Text_BettyIntro, StarridgeCity_Gym_Text_BettyDefeat
# 186 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_BettyPostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeCity_Gym_EventScript_BeautyHelen::
# 204 "data/maps/StarridgeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HELEN, StarridgeCity_Gym_Text_HelenIntro, StarridgeCity_Gym_Text_HelenDefeat
# 205 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_HelenPostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeCity_Gym_EventScript_AceTrainerFiona::
# 223 "data/maps/StarridgeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FIONA, StarridgeCity_Gym_Text_FionaIntro, StarridgeCity_Gym_Text_FionaDefeat
# 224 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_FionaPostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeCity_Gym_EventScript_Melody_Text_0:
# 17 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Melody$"

StarridgeCity_Gym_Sign_Hint1_Text_0:
# 161 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Fairies love the morning light.\n"
	.string "Go where it's bright.$"

StarridgeCity_Gym_Sign_Hint2_Text_0:
# 167 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "At dusk, fairies dance in the twilight.\n"
	.string "Choose the soft light.$"

StarridgeCity_Gym_Sign_Hint3_Text_0:
# 173 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Fairies follow the golden rays.\n"
	.string "Pick the sunny way.$"

StarridgeCity_Gym_Sign_Hint4_Text_0:
# 179 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Fairies love the moonlight.\n"
	.string "Go where it's dark.$"

StarridgeCity_Gym_Text_MelodyIntro::
# 22 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Hi! I'm Melody!\p"
	.string "I only recently became the Gym Leader\n"
	.string "here in Starridge City.\p"
	.string "Truth is, I'm still learning the ropes,\n"
	.string "but I'm excited to be here!\p"
	.string "Ms. Jasmine told me that I should take a\n"
	.string "deep breath and just be myself.\p"
	.string "So, here I am! Ready to battle!\p"
	.string "Let's have a totally magical battle!$"

StarridgeCity_Gym_Text_MelodyDefeat::
# 31 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Wahhh! Melody lost!\p"
	.string "I knew I wasn't ready to be a Gym\n"
	.string "Leader!\p"
	.string "This is so embarrassing!\n"
	.string "I want to go back home and hide in my\l"
	.string "bed!\p"
	.string "I-I...$"

StarridgeCity_Gym_Text_MelodyPostBattle::
# 39 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Thank you so much for battling me,\n"
	.string "{PLAYER}!\p"
	.string "I had a lot of fun, and I learned a lot\n"
	.string "too!\p"
	.string "Ms. Jasmine would be so proud of me for\n"
	.string "trying my best.$"

StarridgeCity_Gym_Text_MelodyDefeated::
# 65 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Sniff... I'm sorry for crying.\p"
	.string "I'm just so... disappointed in myself.\p"
	.string "I thought I was ready to be a Gym\n"
	.string "Leader, but I guess I still have a lot to\l"
	.string "learn.\p"
	.string "You're the one who taught me that,\n"
	.string "{PLAYER}.\p"
	.string "Thanks to you and your Pokémon for\n"
	.string "showing me that I still have a long way\l"
	.string "to go.\p"
	.string "You totally deserve this badge.\n"
	.string "I hope you'll accept it.$"

StarridgeCity_Gym_Text_ReceivedGlintBadge::
# 75 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "You received the Glint Badge!$"

StarridgeCity_Gym_Text_GlintBadgeInfo::
# 79 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "With this badge, Pokémon up to Level 35\n"
	.string "will obey you.\p"
	.string "You can also use the HM move Cut\n"
	.string "outside of battle.\p"
	.string "And, um... I want to give you this TM.\n"
	.string "You know, as a thanks!$"

StarridgeCity_Gym_Text_ExplainDrainingKiss::
# 100 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "This is the TM for Draining Kiss.\p"
	.string "It's a Fairy-type move that heals the\n"
	.string "user by over half the damage dealt.\p"
	.string "It's totally adorable, right? I hope you\n"
	.string "like it!$"

StarridgeCity_Gym_Text_GymGuideYouWon::
# 129 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "You won?\n"
	.string "I knew you could do it, champ!\p"
	.string "You sent Melody and her Pokémon crying!\n"
	.string "Literally!\p"
	.string "You're on your way to becoming a real\n"
	.string "champ!\p"
	.string "Keep it up, kid!$"

StarridgeCity_Gym_Text_GymGuide::
# 137 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Yo! Champion-to-be!\n"
	.string "It's me, Gyde!\p"
	.string "I'm here to guide you through the\n"
	.string "Starridge City Gym!\p"
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

StarridgeCity_Gym_Text_GymGuideYouLookNervous::
# 150 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "You look nervous!\n"
	.string "Don't worry, I got your back!\p"
	.string "Take this Soda Pop to calm your nerves!$"

StarridgeCity_Gym_Text_BettyIntro::
# 189 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Oops! Looks like you took a wrong turn!\n"
	.string "Ready for a dazzling battle?$"

StarridgeCity_Gym_Text_BettyDefeat::
# 195 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Wow, you've got some dazzling moves!$"

StarridgeCity_Gym_Text_BettyPostBattle::
# 199 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "You didn't take the right path, but hey,\n"
	.string "battling me was totally worth it, right?$"

StarridgeCity_Gym_Text_HelenIntro::
# 208 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Did you lose your way, kid?\n"
	.string "Don't worry, I'll guide you to the right\l"
	.string "path!$"

StarridgeCity_Gym_Text_HelenDefeat::
# 212 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "You sure have a knack for this!\p"
	.string "Oh, I meant battling, not your sense of\n"
	.string "direction!$"

StarridgeCity_Gym_Text_HelenPostBattle::
# 218 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "You're wrong, but you're getting closer\n"
	.string "to the end!$"

StarridgeCity_Gym_Text_FionaIntro::
# 227 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Small hallways like these make me panic!\p"
	.string "But I'm determined to win this battle!$"

StarridgeCity_Gym_Text_FionaDefeat::
# 232 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "If it makes you feel better, I'm lost\n"
	.string "too!$"

StarridgeCity_Gym_Text_FionaPostBattle::
# 236 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "The Gym Leader is so close, I can feel\n"
	.string "it!$"
