#ifndef GAME_Door_HH
#define GAME_Door_HH

#include "Cell.hh"

class Door : public Cell {
public:
    Door(int, int);
    bool isWalkable() const override;
    void draw(sf::RenderWindow&) const;
};


#endif
