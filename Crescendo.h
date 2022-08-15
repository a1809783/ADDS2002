#ifndef CRESCENDO
#define CRESCENDO

#include "Computer.h"
#include <array>
#include <string>

// Crescendo moves in the following order:
// Paper, Scissors, Rock.
class Crescendo : public Computer
{
private:
    std::array<char, 3> moveArray = {'P', 'S', 'R'};

protected:
    int movePosition = 0;

public:
    std::string name = "Crescendo";
    Crescendo(/* args */);
    void makeMove();
};

#endif /* CRESCENDO */
