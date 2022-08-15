#ifndef PAPERDOLL
#define PAPERDOLL

#include "Crescendo.h"
#include <array>
#include <string>

// PaperDoll.cpp : Paper doll moves in the following order :
// Paper, Scissors, Scissors.
class PaperDoll : public Crescendo
{
private:
    std::array<char, 3> moveArray = {'P', 'S', 'S'};

public:
    std::string name = "PaperDoll";
    PaperDoll(/* args */);
};

#endif /* PAPERDOLL */
