#ifndef Input_H
#define Input_H

#include <iostream>

class Input{
    public:
        Input(const std::string& str) : mStr(str) {};

    private:
        std::string mStr;
};
#endif // Input_H