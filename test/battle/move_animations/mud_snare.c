#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Mud Snare")
{
    u16 j, nTurns = 2;
    FORCE_MOVE_ANIM(TRUE);

    GIVEN {
        PLAYER(SPECIES_CLODSIRE);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        for (j = 0; j < nTurns; j++)
        {
            TURN { MOVE(player, MOVE_MUD_SNARE); MOVE(opponent, MOVE_HELPING_HAND); } // Helping Hand, so there's no anim on the opponent's side.
        }
    } SCENE {
        for (j = 0; j < nTurns; j++)
        {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_MUD_SNARE, player);
        }
    } THEN {
        FORCE_MOVE_ANIM(FALSE);
    }
}
