StarridgeCity_Gym_MapScripts::
	.byte 0


StarridgeCity_Gym_EventScript_Melody::
# 6 "data/maps/StarridgeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MELODY_1, StarridgeCity_Gym_Text_MelodyIntro, StarridgeCity_Gym_Text_MelodyDefeat, StarridgeCity_Gym_EventScript_MelodyDefeated, NO_MUSIC
# 7 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_DRAINING_KISS, StarridgeCity_Gym_EventScript_Melody_2
StarridgeCity_Gym_EventScript_Melody_1:
# 12 "data/maps/StarridgeCity_Gym/scripts.pory"
	speakername StarridgeCity_Gym_EventScript_Melody_Text_0
# 13 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_MelodyPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return

StarridgeCity_Gym_EventScript_Melody_2:
# 9 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto StarridgeCity_Gym_EventScript_GiveDrainingKiss
	goto StarridgeCity_Gym_EventScript_Melody_1


StarridgeCity_Gym_EventScript_MelodyDefeated::
# 42 "data/maps/StarridgeCity_Gym/scripts.pory"
	speakername StarridgeCity_Gym_EventScript_Melody_Text_0
# 43 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_MelodyDefeated
# 44 "data/maps/StarridgeCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 45 "data/maps/StarridgeCity_Gym/scripts.pory"
	closemessage
# 46 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_ReceivedGlintBadge
# 47 "data/maps/StarridgeCity_Gym/scripts.pory"
	waitfanfare
# 48 "data/maps/StarridgeCity_Gym/scripts.pory"
	speakername StarridgeCity_Gym_EventScript_Melody_Text_0
# 49 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_GlintBadgeInfo
# 51 "data/maps/StarridgeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_STARRIDGE_GYM
# 52 "data/maps/StarridgeCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 54 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto StarridgeCity_Gym_EventScript_GiveDrainingKiss
# 56 "data/maps/StarridgeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 57 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_EventScript_GiveDrainingKiss::
# 82 "data/maps/StarridgeCity_Gym/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 84 "data/maps/StarridgeCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq StarridgeCity_Gym_EventScript_GiveDrainingKiss_2
StarridgeCity_Gym_EventScript_GiveDrainingKiss_1:
# 89 "data/maps/StarridgeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_DRAINING_KISS
# 90 "data/maps/StarridgeCity_Gym/scripts.pory"
	speakername StarridgeCity_Gym_EventScript_Melody_Text_0
# 91 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_ExplainDrainingKiss
# 92 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return

StarridgeCity_Gym_EventScript_GiveDrainingKiss_2:
# 86 "data/maps/StarridgeCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto StarridgeCity_Gym_EventScript_GiveDrainingKiss_1


StarridgeCity_Gym_Sign_Hint1::
# 104 "data/maps/StarridgeCity_Gym/scripts.pory"
	lock
# 105 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Sign_Hint1_Text_0
# 106 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_Sign_Hint2::
# 110 "data/maps/StarridgeCity_Gym/scripts.pory"
	lock
# 111 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Sign_Hint2_Text_0
# 112 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_Sign_Hint3::
# 116 "data/maps/StarridgeCity_Gym/scripts.pory"
	lock
# 117 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Sign_Hint3_Text_0
# 118 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_Sign_Hint4::
# 122 "data/maps/StarridgeCity_Gym/scripts.pory"
	lock
# 123 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Sign_Hint4_Text_0
# 124 "data/maps/StarridgeCity_Gym/scripts.pory"
	release
	return


StarridgeCity_Gym_EventScript_LassBetty::
# 129 "data/maps/StarridgeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BETTY, StarridgeCity_Gym_Text_BettyIntro, StarridgeCity_Gym_Text_BettyDefeat
# 130 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_BettyPostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeCity_Gym_EventScript_BeautyHelen::
# 146 "data/maps/StarridgeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HELEN, StarridgeCity_Gym_Text_HelenIntro, StarridgeCity_Gym_Text_HelenDefeat
# 147 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_HelenPostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeCity_Gym_EventScript_AceTrainerFiona::
# 163 "data/maps/StarridgeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FIONA, StarridgeCity_Gym_Text_FionaIntro, StarridgeCity_Gym_Text_FionaDefeat
# 164 "data/maps/StarridgeCity_Gym/scripts.pory"
	msgbox StarridgeCity_Gym_Text_FionaPostBattle, MSGBOX_AUTOCLOSE
	return


StarridgeCity_Gym_EventScript_Melody_Text_0:
# 12 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Melody$"

StarridgeCity_Gym_Sign_Hint1_Text_0:
# 105 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Fairies love the morning light.\n"
	.string "Go where it's bright.$"

StarridgeCity_Gym_Sign_Hint2_Text_0:
# 111 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "At dusk, fairies dance in the twilight.\n"
	.string "Choose the soft light.$"

StarridgeCity_Gym_Sign_Hint3_Text_0:
# 117 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Fairies follow the golden rays.\n"
	.string "Pick the sunny way.$"

StarridgeCity_Gym_Sign_Hint4_Text_0:
# 123 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Fairies love the moonlight.\n"
	.string "Go where it's dark.$"

StarridgeCity_Gym_Text_MelodyIntro::
# 17 "data/maps/StarridgeCity_Gym/scripts.pory"
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
# 26 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Wahhh! Melody lost!\p"
	.string "I knew I wasn't ready to be a Gym\n"
	.string "Leader!\p"
	.string "This is so embarrassing!\n"
	.string "I want to go back home and hide in my\l"
	.string "bed!\p"
	.string "I-I...$"

StarridgeCity_Gym_Text_MelodyPostBattle::
# 34 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "Thank you so much for battling me,\n"
	.string "{PLAYER}!\p"
	.string "I had a lot of fun, and I learned a lot\n"
	.string "too!\p"
	.string "Ms. Jasmine would be so proud of me for\n"
	.string "trying my best.$"

StarridgeCity_Gym_Text_MelodyDefeated::
# 60 "data/maps/StarridgeCity_Gym/scripts.pory"
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
# 70 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "You received the Glint Badge!$"

StarridgeCity_Gym_Text_GlintBadgeInfo::
# 74 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "With this badge, Pokémon up to Level 30\n"
	.string "will obey you.\p"
	.string "You can also use the HM move Cut\n"
	.string "outside of battle.\p"
	.string "And, um... I want to give you this TM.\n"
	.string "You know, as a thanks!$"

StarridgeCity_Gym_Text_ExplainDrainingKiss::
# 95 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "This is the TM for Draining Kiss.\p"
	.string "It's a Fairy-type move that heals the\n"
	.string "user by over half the damage dealt.\p"
	.string "It's totally adorable, right? I hope you\n"
	.string "like it!$"

StarridgeCity_Gym_Text_BettyIntro::
# 133 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "PLACEHOLDER$"

StarridgeCity_Gym_Text_BettyDefeat::
# 137 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "PLACEHOLDER$"

StarridgeCity_Gym_Text_BettyPostBattle::
# 141 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "PLACEHOLDER$"

StarridgeCity_Gym_Text_HelenIntro::
# 150 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "PLACEHOLDER$"

StarridgeCity_Gym_Text_HelenDefeat::
# 154 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "PLACEHOLDER$"

StarridgeCity_Gym_Text_HelenPostBattle::
# 158 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "PLACEHOLDER$"

StarridgeCity_Gym_Text_FionaIntro::
# 167 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "PLACEHOLDER$"

StarridgeCity_Gym_Text_FionaDefeat::
# 171 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "PLACEHOLDER$"

StarridgeCity_Gym_Text_FionaPostBattle::
# 175 "data/maps/StarridgeCity_Gym/scripts.pory"
	.string "PLACEHOLDER$"
