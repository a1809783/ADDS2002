#ifndef REFEREE
#define REFEREE

#include "Player.h"

class Referee
{
private:
    /* data */
public:
    Referee(/* args */);

    // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie);
    char refGame(Player *player1, Player *player2);
};

#endif /* REFEREE */
