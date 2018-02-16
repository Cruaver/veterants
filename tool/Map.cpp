#include "Map.hh"
#include <iostream>
#include <stdexcept>
	

Map::Map() : _map() {
    parse();
}

void Map::parse() {
    // 25 - 14 soit 350soit pour une case = 50*50 la map = 1250 * 700
    const int level[] = {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1 ,1 ,1 ,1 ,1, 0, 0,
            0, 0, 2, 2, 2, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1 ,1 ,1 ,1 ,1 ,1 ,1, 0, 0,
            0, 0, 1, 0, 1, 3, 1, 1, 0, 0, 1, 1, 1, 2, 0, 0, 1 ,1 ,1 ,1 ,1 ,1 ,1, 0, 0,
            0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 2, 0, 2 ,1 ,1 ,1 ,1 ,1 ,1, 0, 0,
            0, 0, 1, 0, 1, 0, 2, 1, 2, 0, 1, 1, 1, 1, 1, 1, 1 ,1 ,1 ,3 ,1 ,1 ,1, 0, 0,
            0, 0, 1, 0, 1, 2, 1, 1, 1, 0, 0, 0, 1, 3, 1, 1, 1 ,2 ,1 ,1 ,1 ,1 ,1, 0, 0,
            0, 0, 1, 1, 1, 1, 1, 2, 1, 0, 0, 0, 1, 1, 1, 1, 1 ,1 ,1 ,1 ,2 ,2 ,1, 0, 0,
            0, 0, 1, 2, 1, 2, 3, 2, 0, 0, 0, 0, 1, 1, 1, 1, 2 ,2 ,2 ,1 ,2 ,2 ,1, 0, 0,
            0, 0, 1, 0, 1, 1, 1, 2, 0, 0, 0, 0, 1, 1, 1, 1, 1 ,2 ,2 ,1 ,1 ,3 ,1, 0, 0,
            0, 0, 1, 0, 1, 1, 2, 2, 0, 0, 0, 0, 1, 1, 1, 1, 1 ,1 ,1 ,1 ,1 ,1 ,1, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 ,1, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4, 0, 0
            };


    int i = 0;
    while (i < 350) {
        for (int y = 0; y < 700; y += 50) {
            for (int x = 0; x < 1250; x += 50) {
                if (level[i] == 0) {
                    _map.push_back(new Lava(x, y));
                    i++;
                }
                else if (level[i] == 1) {
                    _map.push_back(new Floor(x, y));
                    i++;
                }
                else if (level[i] == 2) {
                    _map.push_back(new Trap(x, y));
                    i++;
                }
                else if (level[i] == 3) {
                    _map.push_back(new Crate(x, y));
                    i++;
                }
                else if (level[i] == 4) {
                    _map.push_back(new Door(x, y));
                    i++;
                }
            }
        }
    }

}

void Map::draw(sf::RenderWindow &window) const
 {
    for (int i = 0; i < 350; i++) {
        _map[i]->draw(window);
        /*std::cout << "n = " << i << std::endl;
        std::cout << "x = " << _map[i]->_x << std::endl;
        std::cout << "y = " << _map[i]->_y << std::endl;
        std::cout << "name =" << _map[i]->_name << std::endl;*/
    }
}

Cell * Map::getCell(int x, int y) {
    for (int i = 0; i < 350; i++) {
         if (_map[i]->_x == x && _map[i]->_y == y)
             return _map[i];
    }
    throw std::runtime_error("Invalid cell");
}