#ifndef Graphics_H
#define Graphics_H

#include <iostream>

class Graphics{
    public:
        Graphics(const std::string& str) : mStr(str) {};

    private:
        std::string mStr;
};
#endif // Graphics_H