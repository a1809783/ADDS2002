#ifndef BUREAUCRAT
#define BUREAUCRAT

#include "Computer.h"
#include <string>

// Bureaucrat always chooses Paper.
class Bureaucrat : public Computer
{
private:
    /* data */
public:
    std::string name = "Bureaucrat";
    Bureaucrat(/* args */);
    void makeMove();
};

#endif /* BUREAUCRAT */
