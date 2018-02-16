#ifndef GAME_CELL_HH
#define GAME_CELL_HH

#include <string>
#include <SFML/Graphics.hpp>

class Cell {
public:
    int _x;
    int _y;
    std::string _name;
    Cell(int x, int y, std::string name);
    virtual bool isWalkable() const = 0;
    virtual void draw(sf::RenderWindow&) const = 0;
};

#endif