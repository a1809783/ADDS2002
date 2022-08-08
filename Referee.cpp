#include "Referee.h"
#include "Human.h"
#include "Computer.h"

Referee::Referee(/* args */)
{
}

char Referee::refGame(Human human, Computer computer)
{
    human.makeMove();
    computer.makeMove();

    char humanMove = human.getMove();
    char computerMove = computer.getMove();

    // Even situation
    if (humanMove == computerMove)
    {
        return 'T';
    }
    else
    {
        // Switch other two situations
        switch (humanMove)
        {
        case 'R': // Rock
            if (computerMove == 'S')
            {
                return 'W';
            }
            break;

        case 'S': // Scissor
            if (computerMove == 'P')
            {
                return 'W';
            }
            break;

        case 'P': // Paper
            if (computerMove == 'R')
            {
                return 'W';
            }
            break;
        }
        return 'L';
    }
}