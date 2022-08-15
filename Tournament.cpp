#include "Player.h"
#include "Tournament.h"
#include "Referee.h"

#include <iostream>

using namespace std;

Player *Tournament::run(std::array<Player *, 8> competitors)
{
    return run(competitors, 0, 8);
}

Player *Tournament::run(std::array<Player *, 8> competitors, int start, int gap)
{

    if (gap == 2)
    {
        return fiveRound(competitors[start], competitors[start + gap / 2]);
    }

    Player *winner1 = run(competitors, start, gap / 2);
    Player *winner2 = run(competitors, start + gap / 2, gap / 2);
    return fiveRound(winner1, winner2);
}

Player *Tournament::fiveRound(Player *player1, Player *player2)
{
    Referee referee;
    int player1WinCount = 0;
    int tieCount = 0;
    for (int i = 0; i < 5; i++)
    {
        char res = referee.refGame(player1, player2);

        switch (res)
        {
        case 'W':
            player1WinCount++;
            break;
        case 'T':
            tieCount++;
            break;
        }
    }
    if (tieCount == 5 || player1WinCount > 2)
    {
        cout << "player1 win" << endl;
        return player1;
    }
    else
    {
        cout << "player2 win" << endl;
        return player2;
    }
};