#include "Obstacle.h"
#include <iostream>

void Obstacle::initialize() {
    // 障害物の初期化処理をここに書く
    x = 0;
    y = 0;
    // 他の初期化処理を追加
}

void Obstacle::update() {
    // 障害物の状態を更新する処理をここに書く
    // 位置の更新、当たり判定、アニメーションなど
}

void Obstacle::render() {
    // 障害物の描画処理をここに書く
    // 画面に障害物を表示する処理
    std::cout << "Obstacle Position: (" << x << ", " << y << ")" << std::endl;
    // 他の描画処理を追加
}

bool Obstacle::gameover() {
    // ゲームオーバー条件をチェックする処理をここに書く
    // 例: プレイヤーのライフが0になったとき
    return false;
}
