EverwoodTown_MapScripts::
# 2 "data/maps/EverwoodTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverwoodTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EverwoodTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/EverwoodTown/scripts.pory"
	map_script_2 VAR_EVERWOOD_TOWN_STATE, 2, EverwoodTown_MapScript_StartRivalRescue
	.2byte 0


EverwoodTown_MapScript_StartRivalRescue::
# 8 "data/maps/EverwoodTown/scripts.pory"
	lockall
# 9 "data/maps/EverwoodTown/scripts.pory"
	playbgm MUS_HELP, 0
# 11 "data/maps/EverwoodTown/scripts.pory"
	msgbox EverwoodTown_MapScript_StartRivalRescue_Text_0
# 13 "data/maps/EverwoodTown/scripts.pory"
	setvar VAR_EVERWOOD_TOWN_STATE, 2
# 15 "data/maps/EverwoodTown/scripts.pory"
	fadedefaultbgm
# 16 "data/maps/EverwoodTown/scripts.pory"
	releaseall
	return


EverwoodTown_MapScript_StartRivalRescue_Text_0:
# 11 "data/maps/EverwoodTown/scripts.pory"
	.string "No, stay back! Please!$"
