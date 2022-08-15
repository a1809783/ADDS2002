#ifndef TOURNAMENT
#define TOURNAMENT

#include <array>
#include "Player.h"

class Tournament
{
private:
    /* data */
    int playerAmount = 8;

public:
    Tournament(/* args */){};
    Player *run(std::array<Player *, 8> competitors);
    Player *run(std::array<Player *, 8> competitors, int start, int gap);
    Player *fiveRound(Player *player1, Player *player2);
};

#endif /* TOURNAMENT */
