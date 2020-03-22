#include <vector>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "monster.h"
#include "spawner.h"

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Prototype Pattern");

    // Genereate a prototype monster
    sf::RectangleShape shape;
    shape.setSize(sf::Vector2f(50, 50));
    shape.setOutlineColor(sf::Color::Red);
    shape.setOutlineThickness(5);
    SquareMonster a(shape, 50, 50);
    Spawner *SquareSpawner = new SpawnFor<SquareMonster>(&a);

    // Spawn the monsters
    std::vector<Monster*> v;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            Monster *m = SquareSpawner->spawnMonster();
            m->setPos(50*i, 50*j);
            v.push_back(m);
        }
    }

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
        for(auto &m : v)
            m->update();

        // Draw
        window.clear();
        for (auto &m : v)
            m->draw(window);
        window.display();
    }

    // Release
    for(auto &m : v)
        delete m;
    delete SquareSpawner;
}