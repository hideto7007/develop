#ifndef OBSTACLE_H
#define OBSTACLE_H

class Obstacle {
public:
    Obstacle();
    void initialize();
    void update();
    void render();
    bool gameover();
    
private:
    int x, y; // 障害物の座標
    // 他の障害物固有のメンバー変数を追加
};

#endif // OBSTACLE_H
