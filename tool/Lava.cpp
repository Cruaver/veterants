#include "Lava.hh"

Lava::Lava(int x, int y) : Cell(x,y, "Lava") {}

bool Lava::isWalkable() const {
    return false;
}

void Lava::draw(sf::RenderWindow& window) const{
    sf::Texture texture;
    sf::Sprite sprite;
    texture.loadFromFile("texture/lava.png");
    sprite.setTexture(texture);
    texture.setSmooth(true);
    sprite.setPosition(this->_x, this->_y);
    window.draw(sprite);
}