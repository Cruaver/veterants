#ifndef GAME_LAVA_HH
#define GAME_LAVA_HH

#include "Cell.hh"

class Lava : public Cell {
public:
    Lava(int, int);
    bool isWalkable() const override;
    void draw(sf::RenderWindow&) const;
};


#endif
