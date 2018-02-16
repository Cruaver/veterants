#include "Game.hh"
#include <iostream>

Game::Game(Player & player, Map & map) : _player(player), _map(map){}

bool Game::Checkwin(sf::RenderWindow& window){
    if (this->_map.getCell(_player.GetX(), _player.GetY())->_name == "Door"){
        while(true){
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                return true;
            sf::Texture texture;
            sf::Sprite sprite;
            texture.loadFromFile("texture/victory.png");
            texture.setSmooth(true);
            sprite.setTexture(texture);
            sprite.setPosition(150, 300);
            window.draw(sprite);
            return false;
        }
    }
    else if (this->_map.getCell(_player.GetX(), _player.GetY())->_name == "Trap"){
         while(true){
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                return true;
            sf::Texture texture;
            sf::Sprite sprite;
            texture.loadFromFile("texture/lost.png");
            texture.setSmooth(true);
            sprite.setTexture(texture);
            sprite.setPosition(150, 300);
            window.draw(sprite);
            return false;
         }
    }
    return true;
}

void Game::InitGame(sf::RenderWindow& window){
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Z)){
        if (_map.getCell(_player.GetX(), (_player.GetY() - 50))->isWalkable())
            _player.SetY(_player.GetY() - 50);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S)){

        if (this->_map.getCell(_player.GetX(), _player.GetY() + 50)->isWalkable())
            this->_player.SetY(_player.GetY() + 50);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D)){

        if (this->_map.getCell(_player.GetX() + 50, _player.GetY())->isWalkable())
            this->_player.SetX(_player.GetX() + 50);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Q)){

        if (this->_map.getCell(_player.GetX() - 50, _player.GetY())->isWalkable())
            this->_player.SetX(_player.GetX() - 50);
    }
    _player.draw(window);
}

