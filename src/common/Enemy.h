#ifndef Enemy_H
#define Enemy_H

#include <iostream>

class Enemy{
    public:
        Enemy(const std::string& str) : mStr(str) {};

    private:
        std::string mStr;
};
#endif // Enemy_H