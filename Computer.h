#ifndef COMPUTER
#define COMPUTER

#include "Player.h"

class Computer : public Player
{
protected:
    char move;

public:
    Computer();
    void makeMove();
    char getMove();
};

#endif /* COMPUTER */
