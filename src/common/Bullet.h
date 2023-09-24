#ifndef BULLET_H
#define BULLET_H

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

class Bullet {
public:
    Bullet(int startX, int startY); // コンストラクタ
    void update();
    void render();
    bool IsOutOfBound() const;
    
private:
    int x, y; // 弾丸の座標
    int speed; // 弾丸の速度
    bool active; // 弾丸が有効かどうかを示すフラグ
};

#endif // BULLET_H
