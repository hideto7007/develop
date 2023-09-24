#ifndef Bullet_H
#define Bullet_H

#include <iostream>

class Bullet{
    public:
        Bullet(const std::string& str) : mStr(str) {};

    private:
        std::string mStr;
};
#endif // Bullet_H