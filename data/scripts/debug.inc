# 1 "data/scripts/debug.pory"

# 2 "data/scripts/debug.pory"
.if DEBUG_OVERWORLD_MENU == TRUE
# 3 "data/scripts/debug.pory"
Debug_MessageEnd:
# 4 "data/scripts/debug.pory"
	waitmessage
# 5 "data/scripts/debug.pory"
	waitbuttonpress
# 6 "data/scripts/debug.pory"
	releaseall
# 7 "data/scripts/debug.pory"
	end
# 8 "data/scripts/debug.pory"

# 9 "data/scripts/debug.pory"
Debug_ShowFieldMessageStringVar4::
# 10 "data/scripts/debug.pory"
	special ShowFieldMessageStringVar4
# 11 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 12 "data/scripts/debug.pory"

# 13 "data/scripts/debug.pory"
Debug_CheatStart::
# 14 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 15 "data/scripts/debug.pory"
	setflag FLAG_RESCUED_BIRCH
# 16 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_302_ASTER
# 17 "data/scripts/debug.pory"
	setflag FLAG_ADVENTURE_STARTED
# 18 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_EVERWOOD_TOWN_RESEARCH_LAB_RIVAL
# 19 "data/scripts/debug.pory"
	setflag FLAG_CHOSE_STARTER
# 20 "data/scripts/debug.pory"
	setvar VAR_HAWTHORNE_LAB_STATE, 2
# 21 "data/scripts/debug.pory"
	setvar VAR_ROUTE301_STATE, 3
# 22 "data/scripts/debug.pory"
	givemon SPECIES_TREECKO, 20, ITEM_NONE
# 23 "data/scripts/debug.pory"
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
# 24 "data/scripts/debug.pory"
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
# 25 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 26 "data/scripts/debug.pory"
	special SetUnlockedPokedexFlags
# 27 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 28 "data/scripts/debug.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
# 29 "data/scripts/debug.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 30 "data/scripts/debug.pory"
	special EnableNationalPokedex
# 31 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 32 "data/scripts/debug.pory"
	setflag FLAG_SYS_B_DASH
# 33 "data/scripts/debug.pory"
	setvar VAR_ARGIL_TOWN_STATE, 4 @ 4: Received Running Shoes
# 34 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
# 35 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 36 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 37 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
# 38 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_BIKE
# 39 "data/scripts/debug.pory"
	additem ITEM_ACRO_BIKE
# 40 "data/scripts/debug.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 41 "data/scripts/debug.pory"
	setvar VAR_ROUTE116_STATE, 2
# 42 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 43 "data/scripts/debug.pory"
	setflag FLAG_BADGE01_GET
# 44 "data/scripts/debug.pory"
	setflag FLAG_BADGE02_GET
# 45 "data/scripts/debug.pory"
	setflag FLAG_BADGE03_GET
# 46 "data/scripts/debug.pory"
	setflag FLAG_BADGE04_GET
# 47 "data/scripts/debug.pory"
	setflag FLAG_BADGE05_GET
# 48 "data/scripts/debug.pory"
	setflag FLAG_BADGE06_GET
# 49 "data/scripts/debug.pory"
	setflag FLAG_BADGE07_GET
# 50 "data/scripts/debug.pory"
	setflag FLAG_BADGE08_GET
# 51 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 52 "data/scripts/debug.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 53 "data/scripts/debug.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 54 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 55 "data/scripts/debug.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 56 "data/scripts/debug.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 57 "data/scripts/debug.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 58 "data/scripts/debug.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 59 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 60 "data/scripts/debug.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 61 "data/scripts/debug.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 62 "data/scripts/debug.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 63 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 64 "data/scripts/debug.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 65 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 66 "data/scripts/debug.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 67 "data/scripts/debug.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 68 "data/scripts/debug.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 69 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 70 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 71 "data/scripts/debug.pory"
	release
# 72 "data/scripts/debug.pory"
	end
# 73 "data/scripts/debug.pory"

# 74 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage::
# 75 "data/scripts/debug.pory"
	message Debug_FlagsNotSetOverworldConfigMessage_Text
# 76 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 77 "data/scripts/debug.pory"

# 78 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage_Text:
# 79 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 80 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 81 "data/scripts/debug.pory"
	.string "'include/config/overworld.h'!$"
# 82 "data/scripts/debug.pory"

# 83 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage::
# 84 "data/scripts/debug.pory"
	message Debug_FlagsNotSetBattleConfigMessage_Text
# 85 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 86 "data/scripts/debug.pory"

# 87 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage_Text:
# 88 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 89 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 90 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 91 "data/scripts/debug.pory"

# 92 "data/scripts/debug.pory"
Debug_BoxFilledMessage::
# 93 "data/scripts/debug.pory"
	message Debug_BoxFilledMessage_Text
# 94 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 95 "data/scripts/debug.pory"

# 96 "data/scripts/debug.pory"
Debug_BoxFilledMessage_Text:
# 97 "data/scripts/debug.pory"
	.string "Storage boxes filled!$"
# 98 "data/scripts/debug.pory"

# 99 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs::
# 100 "data/scripts/debug.pory"
	lockall
# 101 "data/scripts/debug.pory"
	getpartysize
# 102 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 103 "data/scripts/debug.pory"
	special ChoosePartyMon
# 104 "data/scripts/debug.pory"
	waitstate
# 105 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 106 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 107 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveEVs, MSGBOX_DEFAULT
# 108 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 109 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveEVs, MSGBOX_DEFAULT
# 110 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs_End::
# 111 "data/scripts/debug.pory"
	releaseall
# 112 "data/scripts/debug.pory"
	end
# 113 "data/scripts/debug.pory"

# 114 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveEVs:
# 115 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"
# 116 "data/scripts/debug.pory"

# 117 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveEVs:
# 118 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"
# 119 "data/scripts/debug.pory"

# 120 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs::
# 121 "data/scripts/debug.pory"
	lockall
# 122 "data/scripts/debug.pory"
	getpartysize
# 123 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 124 "data/scripts/debug.pory"
	special ChoosePartyMon
# 125 "data/scripts/debug.pory"
	waitstate
# 126 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 127 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 128 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveIVs, MSGBOX_DEFAULT
# 129 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 130 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveIVs, MSGBOX_DEFAULT
# 131 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs_End::
# 132 "data/scripts/debug.pory"
	releaseall
# 133 "data/scripts/debug.pory"
	end
# 134 "data/scripts/debug.pory"

# 135 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveIVs:
# 136 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"
# 137 "data/scripts/debug.pory"

# 138 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveIVs:
# 139 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"
# 140 "data/scripts/debug.pory"

# 141 "data/scripts/debug.pory"
Debug_EventScript_Script_4::
# 142 "data/scripts/debug.pory"
	release
# 143 "data/scripts/debug.pory"
	end
# 144 "data/scripts/debug.pory"

# 145 "data/scripts/debug.pory"
Debug_EventScript_Script_5::
# 146 "data/scripts/debug.pory"
	release
# 147 "data/scripts/debug.pory"
	end
# 148 "data/scripts/debug.pory"

# 149 "data/scripts/debug.pory"
Debug_EventScript_Script_6::
# 150 "data/scripts/debug.pory"
	release
# 151 "data/scripts/debug.pory"
	end
# 152 "data/scripts/debug.pory"

# 153 "data/scripts/debug.pory"
Debug_EventScript_Script_7::
# 154 "data/scripts/debug.pory"
	release
# 155 "data/scripts/debug.pory"
	end
# 156 "data/scripts/debug.pory"

# 157 "data/scripts/debug.pory"
Debug_EventScript_Script_8::
# 158 "data/scripts/debug.pory"
	release
# 159 "data/scripts/debug.pory"
	end
# 160 "data/scripts/debug.pory"

# 161 "data/scripts/debug.pory"
Debug_CheckSaveBlock::
# 162 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 163 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
# 164 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 165 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
# 166 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 167 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock3Size, MSGBOX_DEFAULT
# 168 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 169 "data/scripts/debug.pory"
	msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
# 170 "data/scripts/debug.pory"
	release
# 171 "data/scripts/debug.pory"
	end
# 172 "data/scripts/debug.pory"

# 173 "data/scripts/debug.pory"
Debug_SaveBlock1Size::
# 174 "data/scripts/debug.pory"
	.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 175 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 176 "data/scripts/debug.pory"

# 177 "data/scripts/debug.pory"
Debug_SaveBlock2Size::
# 178 "data/scripts/debug.pory"
	.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 179 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 180 "data/scripts/debug.pory"

# 181 "data/scripts/debug.pory"
Debug_SaveBlock3Size::
# 182 "data/scripts/debug.pory"
	.string "SaveBlock3 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 183 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 184 "data/scripts/debug.pory"

# 185 "data/scripts/debug.pory"
Debug_PokemonStorageSize::
# 186 "data/scripts/debug.pory"
	.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 187 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 188 "data/scripts/debug.pory"

# 189 "data/scripts/debug.pory"
Debug_CheckROMSpace::
# 190 "data/scripts/debug.pory"
	callnative CheckROMSize
# 191 "data/scripts/debug.pory"
	msgbox Debug_ROMSize, MSGBOX_DEFAULT
# 192 "data/scripts/debug.pory"
	release
# 193 "data/scripts/debug.pory"
	end
# 194 "data/scripts/debug.pory"

# 195 "data/scripts/debug.pory"
Debug_ROMSize::
# 196 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
# 197 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_2}MB.$"
# 198 "data/scripts/debug.pory"

# 199 "data/scripts/debug.pory"
Debug_HatchAnEgg::
# 200 "data/scripts/debug.pory"
	lockall
# 201 "data/scripts/debug.pory"
	getpartysize
# 202 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 203 "data/scripts/debug.pory"
	special ChoosePartyMon
# 204 "data/scripts/debug.pory"
	waitstate
# 205 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 206 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 207 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 208 "data/scripts/debug.pory"
	special EggHatch
# 209 "data/scripts/debug.pory"
	waitstate
# 210 "data/scripts/debug.pory"
Debug_HatchAnEgg_End::
# 211 "data/scripts/debug.pory"
	releaseall
# 212 "data/scripts/debug.pory"
	end
# 213 "data/scripts/debug.pory"

# 214 "data/scripts/debug.pory"
Debug_NoPokemon::
# 215 "data/scripts/debug.pory"
	msgbox DebugScript_Text_EmptyParty, MSGBOX_DEFAULT
# 216 "data/scripts/debug.pory"
	releaseall
# 217 "data/scripts/debug.pory"
	end
# 218 "data/scripts/debug.pory"

# 219 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_CantForceHatch::
# 220 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
# 221 "data/scripts/debug.pory"
	releaseall
# 222 "data/scripts/debug.pory"
	end
# 223 "data/scripts/debug.pory"

# 224 "data/scripts/debug.pory"
DebugScript_Text_EmptyParty::
# 225 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"
# 226 "data/scripts/debug.pory"

# 227 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_Text_NotAnEgg::
# 228 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"
# 229 "data/scripts/debug.pory"

# 230 "data/scripts/debug.pory"
DebugScript_ZeroDaycareMons::
# 231 "data/scripts/debug.pory"
	msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
# 232 "data/scripts/debug.pory"
	releaseall
# 233 "data/scripts/debug.pory"
	end
# 234 "data/scripts/debug.pory"

# 235 "data/scripts/debug.pory"
DebugScript_OneDaycareMons::
# 236 "data/scripts/debug.pory"
	msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
# 237 "data/scripts/debug.pory"
	releaseall
# 238 "data/scripts/debug.pory"
	end
# 239 "data/scripts/debug.pory"

# 240 "data/scripts/debug.pory"
DebugScript_DaycareMonsNotCompatible::
# 241 "data/scripts/debug.pory"
	msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
# 242 "data/scripts/debug.pory"
	releaseall
# 243 "data/scripts/debug.pory"
	end
# 244 "data/scripts/debug.pory"

# 245 "data/scripts/debug.pory"
DebugText_DaycareNoPokemon:
# 246 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"
# 247 "data/scripts/debug.pory"

# 248 "data/scripts/debug.pory"
DebugText_DaycareOnePokemon:
# 249 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"
# 250 "data/scripts/debug.pory"

# 251 "data/scripts/debug.pory"
DebugText_DaycarePokemonNotCompatible:
# 252 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\nhave babies together!$"
# 253 "data/scripts/debug.pory"

# 254 "data/scripts/debug.pory"
Debug_ShowExpansionVersion::
# 255 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 256 "data/scripts/debug.pory"
	msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
# 257 "data/scripts/debug.pory"
	release
# 258 "data/scripts/debug.pory"
	end
# 259 "data/scripts/debug.pory"

# 260 "data/scripts/debug.pory"
Debug_ExpansionVersion:
# 261 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"
# 262 "data/scripts/debug.pory"

# 263 "data/scripts/debug.pory"
Debug_BerryPestsDisabled::
# 264 "data/scripts/debug.pory"
	msgbox DebugText_BerryPestsDisabled, MSGBOX_DEFAULT
# 265 "data/scripts/debug.pory"
	release
# 266 "data/scripts/debug.pory"
	end
# 267 "data/scripts/debug.pory"

# 268 "data/scripts/debug.pory"
DebugText_BerryPestsDisabled:
# 269 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
# 270 "data/scripts/debug.pory"
	.string "Unable to force pests onto berry trees.$"
# 271 "data/scripts/debug.pory"

# 272 "data/scripts/debug.pory"
Debug_BerryWeedsDisabled::
# 273 "data/scripts/debug.pory"
	msgbox DebugText_BerryWeedsDisabled, MSGBOX_DEFAULT
# 274 "data/scripts/debug.pory"
	release
# 275 "data/scripts/debug.pory"
	end
# 276 "data/scripts/debug.pory"

# 277 "data/scripts/debug.pory"
DebugText_BerryWeedsDisabled:
# 278 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
# 279 "data/scripts/debug.pory"
	.string "Unable to force weeds onto berry trees.$"
# 280 "data/scripts/debug.pory"

# 281 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1::
# 282 "data/scripts/debug.pory"
	lockall
# 283 "data/scripts/debug.pory"
	getpartysize
# 284 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 285 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 286 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 287 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 288 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 289 "data/scripts/debug.pory"
	switch VAR_RESULT
# 290 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single
# 291 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party
# 292 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Close
# 293 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Close:
# 294 "data/scripts/debug.pory"
	releaseall
# 295 "data/scripts/debug.pory"
	end
# 296 "data/scripts/debug.pory"

# 297 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single:
# 298 "data/scripts/debug.pory"
	special ChoosePartyMon
# 299 "data/scripts/debug.pory"
	waitstate
# 300 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 301 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 302 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 303 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 304 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 305 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 306 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 307 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 308 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 309 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 310 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 311 "data/scripts/debug.pory"
	switch VAR_RESULT
# 312 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_Poison
# 313 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_Paralysis
# 314 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_Sleep
# 315 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_Burn
# 316 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_Freeze
# 317 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_Frostbite
# 318 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 319 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 320 "data/scripts/debug.pory"
	releaseall
# 321 "data/scripts/debug.pory"
	end
# 322 "data/scripts/debug.pory"

# 323 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Poison:
# 324 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 325 "data/scripts/debug.pory"
	releaseall
# 326 "data/scripts/debug.pory"
	end
# 327 "data/scripts/debug.pory"

# 328 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Paralysis:
# 329 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 330 "data/scripts/debug.pory"
	releaseall
# 331 "data/scripts/debug.pory"
	end
# 332 "data/scripts/debug.pory"

# 333 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Sleep:
# 334 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 335 "data/scripts/debug.pory"
	releaseall
# 336 "data/scripts/debug.pory"
	end
# 337 "data/scripts/debug.pory"

# 338 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Burn:
# 339 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 340 "data/scripts/debug.pory"
	releaseall
# 341 "data/scripts/debug.pory"
	end
# 342 "data/scripts/debug.pory"

# 343 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Freeze:
# 344 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 345 "data/scripts/debug.pory"
	releaseall
# 346 "data/scripts/debug.pory"
	end
# 347 "data/scripts/debug.pory"

# 348 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Frostbite:
# 349 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 350 "data/scripts/debug.pory"
	releaseall
# 351 "data/scripts/debug.pory"
	end
# 352 "data/scripts/debug.pory"

# 353 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party:
# 354 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 355 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 356 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 357 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 358 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 359 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 360 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 361 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 362 "data/scripts/debug.pory"
	switch VAR_RESULT
# 363 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_Poison
# 364 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_Paralysis
# 365 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_Sleep
# 366 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_Burn
# 367 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_Freeze
# 368 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_Frostbite
# 369 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 370 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 371 "data/scripts/debug.pory"
	releaseall
# 372 "data/scripts/debug.pory"
	end
# 373 "data/scripts/debug.pory"

# 374 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Poison:
# 375 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 376 "data/scripts/debug.pory"
	releaseall
# 377 "data/scripts/debug.pory"
	end
# 378 "data/scripts/debug.pory"

# 379 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Paralysis:
# 380 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 381 "data/scripts/debug.pory"
	releaseall
# 382 "data/scripts/debug.pory"
	end
# 383 "data/scripts/debug.pory"

# 384 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Sleep:
# 385 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 386 "data/scripts/debug.pory"
	releaseall
# 387 "data/scripts/debug.pory"
	end
# 388 "data/scripts/debug.pory"

# 389 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Burn:
# 390 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 391 "data/scripts/debug.pory"
	releaseall
# 392 "data/scripts/debug.pory"
	end
# 393 "data/scripts/debug.pory"

# 394 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Freeze:
# 395 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 396 "data/scripts/debug.pory"
	releaseall
# 397 "data/scripts/debug.pory"
	end
# 398 "data/scripts/debug.pory"

# 399 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Frostbite:
# 400 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 401 "data/scripts/debug.pory"
	releaseall
# 402 "data/scripts/debug.pory"
	end
# 403 "data/scripts/debug.pory"

# 404 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Single:
# 405 "data/scripts/debug.pory"
	.string "Single$"
# 406 "data/scripts/debug.pory"

# 407 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_PartyWide:
# 408 "data/scripts/debug.pory"
	.string "Party-wide$"
# 409 "data/scripts/debug.pory"

# 410 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Close:
# 411 "data/scripts/debug.pory"
	.string "Close$"
# 412 "data/scripts/debug.pory"

# 413 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Poison:
# 414 "data/scripts/debug.pory"
	.string "Poison$"
# 415 "data/scripts/debug.pory"

# 416 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Paralysis:
# 417 "data/scripts/debug.pory"
	.string "Paralysis$"
# 418 "data/scripts/debug.pory"

# 419 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Sleep:
# 420 "data/scripts/debug.pory"
	.string "Sleep$"
# 421 "data/scripts/debug.pory"

# 422 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Burn:
# 423 "data/scripts/debug.pory"
	.string "Burn$"
# 424 "data/scripts/debug.pory"

# 425 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Freeze:
# 426 "data/scripts/debug.pory"
	.string "Freeze$"
# 427 "data/scripts/debug.pory"

# 428 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Frostbite:
# 429 "data/scripts/debug.pory"
	.string "Frostbite$"
# 430 "data/scripts/debug.pory"

# 431 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters::
# 432 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 433 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text, MSGBOX_DEFAULT
# 434 "data/scripts/debug.pory"
	release
# 435 "data/scripts/debug.pory"
	end
# 436 "data/scripts/debug.pory"

# 437 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters_Text::
# 438 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
# 439 "data/scripts/debug.pory"
	.string "Fishing Chain: {STR_VAR_2}.$"
# 440 "data/scripts/debug.pory"

# 441 "data/scripts/debug.pory"
.endif

Debug_EventScript_Script_1::
# 445 "data/scripts/debug.pory"
	givemon SPECIES_QUAQUAVAL, 70, ITEM_MYSTIC_WATER, ITEM_POKE_BALL
# 446 "data/scripts/debug.pory"
	givemon SPECIES_UNFEZANT, 67, ITEM_NONE, ITEM_POKE_BALL
# 447 "data/scripts/debug.pory"
	givemon SPECIES_ARBOLIVA, 68, ITEM_NONE, ITEM_POKE_BALL
# 448 "data/scripts/debug.pory"
	givemon SPECIES_GLIMMORA, 69, ITEM_NONE, ITEM_DUSK_BALL
# 449 "data/scripts/debug.pory"
	givemon SPECIES_CENTISKORCH, 68, ITEM_NONE, ITEM_NEST_BALL
# 450 "data/scripts/debug.pory"
	givemon SPECIES_ELECTIVIRE, 69, ITEM_NONE, ITEM_QUICK_BALL
	return


Debug_EventScript_Script_2::
# 454 "data/scripts/debug.pory"
	givemon SPECIES_DELPHOX, 70, ITEM_CHARCOAL, ITEM_POKE_BALL
# 455 "data/scripts/debug.pory"
	givemon SPECIES_CROBAT, 67, ITEM_NONE, ITEM_POKE_BALL
# 456 "data/scripts/debug.pory"
	givemon SPECIES_MUDSDALE, 68, ITEM_NONE, ITEM_POKE_BALL
# 457 "data/scripts/debug.pory"
	givemon SPECIES_GYARADOS, 69, ITEM_NONE, ITEM_DUSK_BALL
# 458 "data/scripts/debug.pory"
	givemon SPECIES_CENTISKORCH, 68, ITEM_NONE, ITEM_NEST_BALL
# 459 "data/scripts/debug.pory"
	givemon SPECIES_ROSERADE, 69, ITEM_NONE, ITEM_QUICK_BALL
	return


Debug_EventScript_Script_3::
# 464 "data/scripts/debug.pory"
	additem ITEM_MAX_REVIVE, 50
# 465 "data/scripts/debug.pory"
	additem ITEM_REVIVE, 50
# 466 "data/scripts/debug.pory"
	additem ITEM_FULL_RESTORE, 50
# 467 "data/scripts/debug.pory"
	additem ITEM_MAX_POTION, 50
# 468 "data/scripts/debug.pory"
	additem ITEM_TERA_ORB, 1
# 469 "data/scripts/debug.pory"
	setflag B_FLAG_TERA_ORB_CHARGED
# 471 "data/scripts/debug.pory"
	trainerbattle_no_intro TRAINER_ROSEN, Debug_EventScript_Text
	return


Debug_EventScript_Text::
# 476 "data/scripts/debug.pory"
	.string "chat you won$"
