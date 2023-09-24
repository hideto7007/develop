#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <ctime>
#include <cstdlib>

class Game{
    public:
        Game(const std::string& str) : mStr(str) {};

    private:
        std::string mStr;
};
#endif // GAME_H