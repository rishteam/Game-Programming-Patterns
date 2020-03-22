#include <cstdlib>
#include <utility>

#include "player.h"
#include "command.h"

InputHandler::InputHandler()
{
    walkFront = new WalkFrontCommand();
    walkBack = new WalkBackCommand();
    walkLeft = new WalkLeftCommand();
    walkRight = new WalkRightCommand();

    spacePrev = false;
}

InputHandler::~InputHandler()
{
    delete walkFront;
    delete walkBack;
    delete walkLeft;
    delete walkRight;
}

Command* InputHandler::handleInput()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        return walkFront;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        return walkBack;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        return walkLeft;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        return walkRight;

    // Swap btns
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !spacePrev)
    {
        printf("Swap the buttons\n");
        std::swap(walkFront, walkBack);
        std::swap(walkLeft, walkRight);
    }
    spacePrev = sf::Keyboard::isKeyPressed(sf::Keyboard::Space);

    return nullptr;
}

void Player::update()
{
    // Handle input
    Command *cmd = inputHandler->handleInput();
    if(cmd)
        cmd->execute(*this);
    //
    shape.setPosition(x, y);
}
void Player::draw(sf::RenderTarget &target)
{
    target.draw(shape);
}