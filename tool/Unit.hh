#ifndef GAME_UNIT_HH
#define GAME_UNIT_HH

#include <SFML/Graphics.hpp>

class Unit {
private:

    int _x;
    int _y;
public:

    Unit(int x, int y);
    int GetX();
    int GetY();
    void SetX(int x);
    void SetY(int y);
    virtual void draw(sf::RenderWindow&)= 0;
};

#endif