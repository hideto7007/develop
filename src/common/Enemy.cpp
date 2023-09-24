#include "Enemy.h"
#include <iostream>

Enemy::Enemy() : Player() {
    // コンストラクタの実装をここに書く
}

void Enemy::initialize() {
    // 敵の初期化処理をここに書く
    x = 0;
    y = 0;
    health = 50;
    // 他の初期化処理を追加
}

void Enemy::update() {
    // 敵の状態を更新する処理をここに書く
    // 位置の更新、AI処理、アニメーションなど
}

void Enemy::render() {
    // 敵の描画処理をここに書く
    // 画面に敵を表示する処理
    std::cout << "Enemy Health: " << health << std::endl;
    // 他の描画処理を追加
}

bool Enemy::gameover() {
    // ゲームオーバー条件をチェックする処理をここに書く
    // 例: プレイヤーのライフが0になったとき
    return false;
}
