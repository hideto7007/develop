#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player(); // コンストラクタ
    void initialize();
    void update();
    void render();
    bool gameover();
    // 他のメンバー関数や変数を追加

protected:
    int x, y; // プレイヤーの座標
    int health; // プレイヤーの体力
    // 他のプレイヤー固有の変数を追加
};

#endif // PLAYER_H
