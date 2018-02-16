#include "Player.hh"

Player::Player(int x, int y, std::string name) : Unit(x, y), _name(name) {}

void Player::draw(sf::RenderWindow& window){
    sf::Texture texture;
    sf::Sprite sprite;
    texture.loadFromFile("texture/Player.png");
    sprite.setTexture(texture);
    texture.setSmooth(true);
    sprite.setPosition(this->GetX(), this->GetY());
    window.draw(sprite);
}

std::string Player::GetName() const{
    return this->_name;
}
