#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "command.h"
#include "player.h"

Player player;

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "CSGO");

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Update
        player.update();
        // Draw
        window.clear();
        player.draw(window);
        window.display();
    }
    return EXIT_SUCCESS;
}