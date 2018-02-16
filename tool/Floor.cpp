#include "Floor.hh"

Floor::Floor(int x, int y) : Cell(x,y, "Floor") {}

bool Floor::isWalkable() const {
    return true;
}

void Floor::draw(sf::RenderWindow& window) const{
    sf::Texture texture;
    sf::Sprite sprite;
    texture.loadFromFile("texture/floor.png");
    texture.setSmooth(true);
    sprite.setTexture(texture);
    sprite.setPosition(this->_x, this->_y);
    window.draw(sprite);
}