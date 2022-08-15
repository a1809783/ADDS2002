#include "Crescendo.h"
#include <array>
#include <iostream>

Crescendo::Crescendo(/* args */)
{
}

// Crescendo moves in the following order:
// Paper, Scissors, Rock.
void Crescendo::makeMove()
{

    std::cout << "--Crescendo--";
    switch (movePosition)
    {
    case 0:
        move = moveArray.at(movePosition);
        break;
    case 1:
        move = moveArray.at(movePosition);
        break;
    case 2:
        move = moveArray.at(movePosition);
        movePosition = -1;
        break;
    }
    movePosition++;
}