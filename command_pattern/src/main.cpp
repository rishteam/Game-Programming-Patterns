#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <imgui.h>
#include <imgui-SFML.h>

#include "command.h"
#include "player.h"

Player player;

sf::Color bgColor = {0, 0, 0};
float color[3] = {0, 0, 0};

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Command Pattern");
    // window.setVerticalSyncEnabled(true);
    ImGui::SFML::Init(window);

    sf::Clock deltaClock;
    window.resetGLStates();
    printf("Test\n");
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            ImGui::SFML::ProcessEvent(event);
            if (event.type == sf::Event::Closed)
                window.close();
        }
        ImGui::SFML::Update(window, deltaClock.restart());
        // Update
        player.update();

        ImGui::Begin("Sample Window");
        {
            if(ImGui::ColorEdit3("Background Color", color))
            {
                bgColor.r = 255 * color[0];
                bgColor.g = 255 * color[1];
                bgColor.b = 255 * color[2];
            }
        }
        ImGui::End();

        // Draw
        window.clear(bgColor);
        player.draw(window);
        ImGui::SFML::Render(window);
        window.display();
    }
    ImGui::SFML::Shutdown();
}