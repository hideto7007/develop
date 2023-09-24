#include "Game.h"

void Game::initialize() {
    srand(static_cast<unsigned>(time(nullptr)));
}

void Game::run() {
    bool isGameOver = false;
    int score = 0;

    while (!isGameOver)
    {
        update(score);
        render(score);

        isGameOver = gameover();
    }
    
}

void Game::update(int &score) {
    // ゲームの状態を更新する処理をここに書く
    // プレイヤー、敵、弾丸などの動作を計算
    // スコアの更新など
}

void Game::render(int score) {
    // ゲーム画面を描画する処理をここに書く
    // プレイヤー、敵、弾丸などの表示
    // スコアの表示など
    std::cout << "score" << score << std::endl;
}

bool Game::gameover() {
    // ゲームオーバー条件をチェックする処理をここに書く
    // 例: プレイヤーのライフが0になったとき
    return false;
}

