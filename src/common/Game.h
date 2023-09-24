#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <ctime>
#include <cstdlib>

class Game{
    public:
        void initialize();
        void run();

    private:
        void update(int &score);
        void render(int score);
        bool gameover();
};
#endif // GAME_H