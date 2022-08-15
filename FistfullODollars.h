#ifndef FISTFULLODOLLARS
#define FISTFULLODOLLARS

#include "Crescendo.h"
#include <array>
#include <string>

// FistfullODollars moves in the following order:
// Rock, Paper, Paper
class FistfullODollars : public Crescendo
{
private:
    std::array<char, 3> moveArray = {'R', 'P', 'P'};

public:
    std::string name = "FistfullODollars";
    FistfullODollars(/* args */);
};

#endif /* FISTFULLODOLLARS */
