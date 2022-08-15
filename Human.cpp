#include "Human.h"
#include <iostream>

Human::Human()
{
}

void Human::makeMove()
{
    std::cout << "Enter move: ";
    std::cin >> move;
    std::cin.ignore(100000, '\n');
}

char Human::getMove()
{
    return move;
}