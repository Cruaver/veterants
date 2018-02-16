#include "Background.hh"

void Background::draw(sf::RenderWindow &window) {
    window.clear(sf::Color::Blue);
    sf::Texture texture;
    sf::Sprite sprite;
    texture.loadFromFile("texture/lava.png");
    texture.setSmooth(true);
    texture.setRepeated(true);
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 0, 1250, 700));
    window.draw(sprite);
}