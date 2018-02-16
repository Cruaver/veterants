#ifndef GAME_FLOOR_HH
#define GAME_FLOOR_HH

#include "Cell.hh"

class Floor : public Cell {
public:
    Floor(int, int);
    bool isWalkable() const override;
    void draw(sf::RenderWindow&) const;
};


#endif
