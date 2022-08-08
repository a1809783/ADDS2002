#include "Computer.h"

Computer::Computer(/* args */)
{
    move = 'R';
}

char Computer::makeMove()
{
    move = 'R';
    return move;
}

char Computer::getMove()
{
    return move;
}