#include "RandomComputer.h"
#include <random>

using namespace std;

RandomComputer::RandomComputer(/* args */)
{
}

void RandomComputer::makeMove()
{
    random_device generator;
    uniform_int_distribution<int> distribution(1, 3);

    int moveInt = distribution(generator);

    switch (moveInt)
    {
    case 1:
        move = 'R';
        break;
    case 2:
        move = 'S';
        break;
    case 3:
        move = 'P';
        break;
    }
}