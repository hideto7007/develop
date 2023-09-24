#include "GameController.h"
#include <iostream>

GameController::GameController() {
    // コンストラクタの実装をここに書く
}

void GameController::initialize() {
    // ゲームの初期化処理をここに書く
    player.initialize();
    enemy.initialize();
    obstacle.initialize();
    // 他の初期化処理を追加
}

void GameController::run() {
    // ゲームループ
    bool isGameOver = false;

    while (!isGameOver) {
        // ゲームの更新処理をここに書く
        player.update();
        enemy.update();
        obstacle.update();
        // 他の更新処理を追加

        // ゲームの描画処理をここに書く
        player.render();
        enemy.render();
        obstacle.render();
        // 他の描画処理を追加

        // ゲームオーバー条件をチェック
        if (player.gameover() || enemy.gameover() || obstacle.gameover()) {
            isGameOver = true;
        }

        // 一時停止などの制御処理をここに書く
    }
}

void GameController::shutdown() {
    // ゲームの終了処理をここに書く
    // メモリの解放やリソースの解放など
    std::cout << "Game Over" << std::endl;
}
