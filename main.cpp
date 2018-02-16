#include "tool/Background.hh"
#include "tool/Map.hh"
#include "tool/Player.hh"
#include "tool/Game.hh"
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(1250, 700), "test");
    Background background;
    Map map;
    bool test = true;
    Player player(100, 550, "Kabro");

    while (window.isOpen()) {
        background.draw(window);
        map.draw(window);
        Game game(player, map);
        player.draw(window);

        sf::Event event;
        while (window.pollEvent(event)) {
            if (test == true)
                game.InitGame(window);
            test = game.Checkwin(window);    
            if (event.type == sf::Event::Closed)
                window.close();
        }    
        window.display();
    }
    return 0;
}