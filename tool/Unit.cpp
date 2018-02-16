#include "Unit.hh"

Unit::Unit(int x, int y) : _x(x), _y(y) {}

int Unit::GetX(){
    return this->_x;
}

int Unit::GetY(){
    return this->_y;
}

void Unit::SetX(int x){
    if (x > 0 and x <= 1250)
        this->_x = x;
}

void Unit::SetY(int y){
    if (y > 0 and y <= 700)
        this->_y = y;
}