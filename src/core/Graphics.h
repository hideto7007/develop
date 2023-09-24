#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/Graphics.hpp>

class Graphics {
public:
    Graphics(int screenWidth, int screenHeight, const std::string& windowTitle);
    ~Graphics();

    void clear();
    void display();
    bool isOpen() const;
    sf::RenderWindow& GetRenderWindow();

private:
    sf::RenderWindow window;
};

#endif // GRAPHICS_H
