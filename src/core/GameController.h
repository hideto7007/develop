#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <vector>

#include "Player.h"
#include "Enemy.h"
#include "Obstacle.h"
#include "Bullet.h"

class GameController {
public:
    GameController();
    void initialize();
    void run();
    void shutdown();

private:
    Player player;
    Enemy enemy;
    Obstacle obstacle;
    std::vector<Bullet> bullets;

    // 他のプライベートメンバー変数や関数を追加
};

#endif // GAMECONTROLLER_H
