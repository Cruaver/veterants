#include "Crate.hh"

Crate::Crate(int x, int y) : Cell(x,y, "Crate") {}

bool Crate::isWalkable() const {
    return false;
}

void Crate::draw(sf::RenderWindow& window) const{
    sf::Texture texture;
    sf::Sprite sprite;
    texture.loadFromFile("texture/diamond.png");
    texture.setSmooth(true);
    sprite.setTexture(texture);
    sprite.setPosition(this->_x, this->_y);
    window.draw(sprite);
}