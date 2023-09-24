#include "Graphics.h"

Graphics::Graphics(int screenWidth, int screenHeight, const std::string& windowTitle)
    : window(sf::VideoMode(screenWidth, screenHeight), windowTitle) {
    // ウィンドウの初期化処理をここに書く
}

Graphics::~Graphics() {
    // デストラクタの実装をここに書く
}

void Graphics::clear() {
    window.clear();
}

void Graphics::display() {
    window.display();
}

bool Graphics::isOpen() const {
    return window.isOpen();
}

sf::RenderWindow& Graphics::GetRenderWindow() {
    return window;
}
