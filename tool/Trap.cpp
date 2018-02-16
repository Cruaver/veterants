#include "Trap.hh"

Trap::Trap(int x, int y) : Cell(x,y, "Trap") {}

bool Trap::isWalkable() const {
    return true;
}

void Trap::draw(sf::RenderWindow& window) const{
    sf::Texture texture;
    sf::Sprite sprite;
    texture.loadFromFile("texture/trap.png");
    sprite.setTexture(texture);
    texture.setSmooth(true);
    sprite.setPosition(this->_x, this->_y);
    window.draw(sprite);
}