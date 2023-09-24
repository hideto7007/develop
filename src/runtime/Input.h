#ifndef INPUT_H
#define INPUT_H

#include <SFML/Window.hpp>

class Input {
public:
    Input();

    // キーボード入力関連のメソッド
    bool isKeyPressed(sf::Keyboard::Key key) const;

    // マウス入力関連のメソッド
    bool isMouseButtonPressed(sf::Mouse::Button button) const;
    sf::Vector2i getMousePosition() const;

    // 他の入力処理を追加

private:
    // キーボードのキーの状態を保存する配列
    bool keyStates[sf::Keyboard::KeyCount];

    // マウスボタンの状態を保存する配列
    bool mouseButtonStates[sf::Mouse::ButtonCount];
};

#endif // INPUT_H
