#include "Referee.h"
#include "Human.h"
#include "Computer.h"

#include <iostream>
#include <string>

using namespace std;

Referee::Referee(/* args */)
{
}

char Referee::refGame(Player *player1, Player *player2)
{
    player1->makeMove();
    player2->makeMove();

    char player1Move = player1->getMove();
    char player2Move = player2->getMove();

    std::cout << "player1:";
    std::cout << player1Move;
    std::cout << "--------";
    std::cout << "player2:";
    std::cout << player2Move << std::endl;

    // Even situation
    if (player1Move == player2Move)
    {
        return 'T';
    }
    else
    {
        // Switch other two situations
        switch (player1Move)
        {
        case 'R': // Rock
            if (player2Move == 'S')
            {
                return 'W';
            }
            break;

        case 'S': // Scissor
            if (player2Move == 'P')
            {
                return 'W';
            }
            break;

        case 'P': // Paper
            if (player2Move == 'R')
            {
                return 'W';
            }
            break;
        }
        return 'L';
    }
}