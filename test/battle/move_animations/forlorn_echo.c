#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Forlorn Echo")
{
    u16 j, nTurns = 2;
    FORCE_MOVE_ANIM(TRUE);

    GIVEN {
        PLAYER(SPECIES_CHIMECHO);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        for (j = 0; j < nTurns; j++)
        {
            TURN { MOVE(player, MOVE_FORLORN_ECHO); MOVE(opponent, MOVE_NUZZLE); } // Helping Hand, so there's no anim on the opponent's side.
        }
    } SCENE {
        for (j = 0; j < nTurns; j++)
        {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FORLORN_ECHO, player);
        }
    } THEN {
        FORCE_MOVE_ANIM(FALSE);
    }
}
