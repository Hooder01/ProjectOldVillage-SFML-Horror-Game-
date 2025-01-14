#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"


int BaseWindow() // always best to use a function that can return a value!
{
    sf::RenderWindow window(sf::VideoMode(960, 540), "SFML window"); 

    // change the title of the window (ignores last change in "Render Window" above)
    window.setTitle("Version: BETA");

    // Load a sprite to display
    sf::Texture cloudSprite;
    if (!cloudSprite.loadFromFile("Stand.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(cloudSprite);

    // run the program as long as the window is open
    while (window.isOpen()) 
    {

        // Draw the sprite
        window.draw(sprite);


        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event eventTrigger;

        while (window.pollEvent(eventTrigger))
        {
            // "close requested" eventTwigger: we close the window via user input
            if (eventTrigger.type == sf::Event::Closed)
                window.close();
        }
    }
    else if () 
    {
        // close window regardless!
    }


}


int main()
{
    BaseWindow();

    return 0;
}


