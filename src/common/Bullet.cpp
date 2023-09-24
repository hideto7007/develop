#include "Bullet.h"
#include <iostream>

Bullet::Bullet(int startX, int startY) : x(startX), y(startY), speed(5), active(true) {
    // コンストラクタの実装をここに書く
}

void Bullet::update() {
    // 弾丸の状態を更新する処理をここに書く
    // 位置の更新、当たり判定、速度など
    if (active) {
        x += speed;
        // 他の更新処理を追加
    }
}

void Bullet::render() {
    // 弾丸の描画処理をここに書く
    // 画面に弾丸を表示する処理
    if (active) {
        std::cout << "Bullet Position: (" << x << ", " << y << ")" << std::endl;
        // 他の描画処理を追加
    }
}

bool Bullet::IsOutOfBound() const {
    // 弾丸が画面外に出たかどうかをチェックする処理をここに書く
    // 画面外に出た場合はtrue、そうでなければfalseを返す
    // 画面外判定のロジックを追加
    return x > SCREEN_WIDTH || x < 0 || y > SCREEN_HEIGHT || y < 0;
}
