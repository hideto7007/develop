#include "Input.h"

Input::Input() {
    // コンストラクタの実装をここに書く
    // キーとマウスボタンの状態を初期化
    for (int i = 0; i < sf::Keyboard::KeyCount; ++i) {
        keyStates[i] = false;
    }

    for (int i = 0; i < sf::Mouse::ButtonCount; ++i) {
        mouseButtonStates[i] = false;
    }
}

bool Input::isKeyPressed(sf::Keyboard::Key key) const {
    // キーボードのキーが押されているかどうかを返す
    return keyStates[key];
}

bool Input::isMouseButtonPressed(sf::Mouse::Button button) const {
    // マウスボタンが押されているかどうかを返す
    return mouseButtonStates[button];
}

sf::Vector2i Input::getMousePosition() const {
    // マウスの現在の位置を返す
    return sf::Mouse::getPosition();
}

// 他の入力処理を追加
