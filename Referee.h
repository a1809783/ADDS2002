#ifndef REFEREE
#define REFEREE

#include "Human.h"
#include "Computer.h"

class Referee
{
private:
    /* data */
public:
    Referee(/* args */);
    char refGame(Human human, Computer computer);
    // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie);
};

#endif /* REFEREE */
