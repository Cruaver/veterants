#ifndef GAME_Map_HH
#define GAME_Map_HH

#include "Crate.hh"
#include "Trap.hh"
#include "Door.hh"
#include "Lava.hh"
#include "Floor.hh"
#include <vector>

class Map {
public:
    std::vector<Cell *> _map;

    Map();

    void draw(sf::RenderWindow &) const;
    void parse();
    Cell *getCell(int x, int y);
};


#endif
