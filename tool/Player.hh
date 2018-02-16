#ifndef GAME_Player_HH
#define GAME_Player_HH

#include "Unit.hh"
#include <string>

class Player : public Unit {
private:
    std::string _name;
public:
    Player(int x, int y, std::string name);
    void draw(sf::RenderWindow&) override;
    std::string GetName() const;
};


#endif
