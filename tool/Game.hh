#ifndef GAME_Game_HH
#define GAME_Game_HH

#include "Player.hh"
#include "Map.hh"

class Game{
private:
    Player & _player;
    Map & _map;

public:
    Game(Player & player, Map & map);
    void InitGame(sf::RenderWindow&);
    bool Checkwin(sf::RenderWindow& window);
};


#endif
