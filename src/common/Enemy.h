#ifndef ENEMY_H
#define ENEMY_H

#include "Player.h" // Playerクラスをインクルード

class Enemy : public Player {
public:
    Enemy(); // コンストラクタ
    void initialize(); // Enemyクラス固有の初期化メソッド
    void update(); // Enemyクラス固有の更新メソッド
    void render(); // Enemyクラス固有の描画メソッド
    bool gameover();
    // 他のメンバー関数や変数を追加

private:
    // Enemyクラス固有のメンバー変数を追加
};

#endif // ENEMY_H