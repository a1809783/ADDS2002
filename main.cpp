#include "Human.h"
#include "Computer.h"
#include "Referee.h"

#include <iostream>

int main()
{
    /* code */
    Human human0;
    Computer computer0;
    Referee referee0;

    char res = referee0.refGame(human0, computer0);
    std::cout << res << std::endl;

    return 0;
}
