SpinelCity_MapScripts::
# 9 "data/maps/SpinelCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SpinelCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SpinelCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SpinelCity/scripts.pory"
	map_script_2 VAR_SPINEL_CITY_STATE, 1, SpinelCity_JasmineReassurance
	.2byte 0


SpinelCity_JasmineReassurance::
# 15 "data/maps/SpinelCity/scripts.pory"
	lockall
# 17 "data/maps/SpinelCity/scripts.pory"
	playse SE_PIN
# 18 "data/maps/SpinelCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 19 "data/maps/SpinelCity/scripts.pory"
	waitse
# 20 "data/maps/SpinelCity/scripts.pory"
	waitmovement 0
# 21 "data/maps/SpinelCity/scripts.pory"
	delay 32
# 22 "data/maps/SpinelCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 24 "data/maps/SpinelCity/scripts.pory"
	speakername SpinelCity_JasmineReassurance_Text_0
# 25 "data/maps/SpinelCity/scripts.pory"
	msgbox SpinelCity_Text_JasmineReassurance1, MSGBOX_YESNO
SpinelCity_JasmineReassurance_2:
# 27 "data/maps/SpinelCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SpinelCity_JasmineReassurance_3
# 32 "data/maps/SpinelCity/scripts.pory"
	msgbox SpinelCity_Text_JasmineSaysThankYou
# 34 "data/maps/SpinelCity/scripts.pory"
	setvar VAR_SPINEL_CITY_STATE, 2
# 35 "data/maps/SpinelCity/scripts.pory"
	setflag FLAG_HIDE_ROUTE_304_ETERNITY_GRUNT
# 36 "data/maps/SpinelCity/scripts.pory"
	clearflag FLAG_HIDE_ZIRCON_QUARRY_ETERNITY_GRUNTS
# 38 "data/maps/SpinelCity/scripts.pory"
	releaseall
	return

SpinelCity_JasmineReassurance_3:
# 29 "data/maps/SpinelCity/scripts.pory"
	msgbox SpinelCity_Text_JasmineForceYes, MSGBOX_YESNO
	goto SpinelCity_JasmineReassurance_2


SpinelCity_Jasmine::
# 64 "data/maps/SpinelCity/scripts.pory"
	lock
# 65 "data/maps/SpinelCity/scripts.pory"
	facePLAYER
# 67 "data/maps/SpinelCity/scripts.pory"
	speakername SpinelCity_JasmineReassurance_Text_0
# 68 "data/maps/SpinelCity/scripts.pory"
	msgbox SpinelCity_Text_JasmineSaysThankYou
# 70 "data/maps/SpinelCity/scripts.pory"
	release
	return


SpinelCity_JasmineReassurance_Text_0:
# 24 "data/maps/SpinelCity/scripts.pory"
	.string "Jasmine$"

SpinelCity_Text_JasmineReassurance1::
# 41 "data/maps/SpinelCity/scripts.pory"
	.string "Oh... {PLAYER}, there you are.\p"
	.string "Melody just ran off crying... so, I\n"
	.string "guess... you won?\p"
	.string "She tries so hard, and when she loses...\n"
	.string "it really hurts her.\p"
	.string "I know what that feels like... I used to\n"
	.string "struggle with it too.\p"
	.string "She usually goes to the quarry when\n"
	.string "she's upset. It's quiet there.\p"
	.string "Would... would you go check on her?$"

SpinelCity_Text_JasmineSaysThankYou::
# 50 "data/maps/SpinelCity/scripts.pory"
	.string "Thank you...\p"
	.string "She may act cheerful, but she's\n"
	.string "sensitive underneath.\p"
	.string "If anyone can reach her right now... it's\n"
	.string "probably you.$"

SpinelCity_Text_JasmineForceYes::
# 56 "data/maps/SpinelCity/scripts.pory"
	.string "I... I really think you should.\p"
	.string "She looks up to you... more than she\n"
	.string "says.\p"
	.string "Please, {PLAYER}...\p"
	.string "She needs someone right now.$"
