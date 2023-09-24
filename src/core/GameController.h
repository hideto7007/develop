#ifndef GameController_H
#define GameController_H

#include <iostream>

class GameController{
    public:
        GameController(const std::string& str) : mStr(str) {};

    private:
        std::string mStr;
};
#endif // GameController_H