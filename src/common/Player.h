#ifndef Player_H
#define Player_H

#include <iostream>

class Player{
    public:
        Player(const std::string& str) : mStr(str) {};

    private:
        std::string mStr;
};
#endif // Player_H