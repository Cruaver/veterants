#include "Door.hh"

Door::Door(int x, int y) : Cell(x,y, "Door") {}

bool Door::isWalkable() const {
    return true;
}

void Door::draw(sf::RenderWindow& window) const{
    sf::Texture texture;
    sf::Sprite sprite;
    texture.loadFromFile("texture/floor.png");
    texture.setSmooth(true);
    sprite.setTexture(texture);
    sprite.setPosition(this->_x, this->_y);
    window.draw(sprite);
}