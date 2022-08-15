#ifndef PLAYER
#define PLAYER

#include <string>
class Player
{
private:
    /* data */
public:
    Player(/* args */){};
    std::string name = "Player";
    virtual void makeMove() = 0;
    virtual char getMove() = 0;
};

#endif /* PLAYER */
