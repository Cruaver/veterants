#ifndef GAME_CRATE_HH
#define GAME_CRATE_HH

#include "Cell.hh"

class Crate : public Cell{
public:
    Crate(int, int);
    bool isWalkable() const override;
    void draw(sf::RenderWindow&) const;
};


#endif