#ifndef Obstacle_H
#define Obstacle_H

#include <iostream>

class Obstacle{
    public:
        Obstacle(const std::string& str) : mStr(str) {};

    private:
        std::string mStr;
};
#endif // Obstacle_H