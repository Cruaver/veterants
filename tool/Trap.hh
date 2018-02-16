#ifndef GAME_Trap_HH
#define GAME_Trap_HH

#include "Cell.hh"

class Trap : public Cell {
public:
    Trap(int, int);
    bool isWalkable() const override;
    void draw(sf::RenderWindow&) const;
};


#endif
