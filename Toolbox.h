#ifndef TOOLBOX
#define TOOLBOX

#include "Computer.h"
#include <string>

// Toolbox always chooses Scissors.
class Toolbox : public Computer
{
private:
    /* data */
public:
    std::string name = "Toolbox";
    Toolbox(/* args */);
    void makeMove();
};
#endif /* TOOLBOX */
