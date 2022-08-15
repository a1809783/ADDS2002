#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Tournament.h"
#include "Avalanche.h"
#include "FistfullODollars.h"
#include "Crescendo.h"
#include "Toolbox.h"
#include "Bureaucrat.h"

#include <iostream>
#include <array>
#include <string>

int main()
{
    /* code */
    // Human *human0 = new Human();
    // Computer *computer0 = new Computer();
    // Referee referee0;

    // char res = referee0.refGame(human0, computer0);
    // std::cout << res << std::endl;

    Player *p0 = new Avalanche();
    Player *p1 = new Bureaucrat();
    Player *p2 = new Bureaucrat();
    Player *p3 = new Toolbox();
    Player *p4 = new Toolbox();
    Player *p5 = new Crescendo();
    Player *p6 = new Crescendo();
    Player *p7 = new FistfullODollars();

    // std::cout << p3->name << std::endl;

    std::array<Player *, 8> myArray = {p0, p1, p2, p3, p4, p5, p6, p7};

    Tournament t;
    t.run(myArray);

    return 0;
}
