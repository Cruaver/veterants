#ifndef GAME_BACKGROUND_HH
#define GAME_BACKGROUND_HH

#include <SFML/Graphics.hpp>

class Background {
private:
    sf::Texture* _texture;
    sf::Sprite* _sprite;
public:
    void draw(sf::RenderWindow& window);
};


#endif
