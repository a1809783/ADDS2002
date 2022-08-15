#ifndef HUMAN
#define HUMAN

#include "Player.h"

class Human : public Player
{
private:
    char move;

public:
    Human(/* args */);
    void makeMove();
    char getMove();
};

#endif /* HUMAN */
