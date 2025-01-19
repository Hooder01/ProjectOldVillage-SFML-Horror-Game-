#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class playerData 
{
public:
    
    void playerSprite() 
    {
        sf::Texture lightGlass;
        if (!lightGlass.loadFromFile("C:\\Users\\The Hooder\\Desktop\\ProjectOldVillage-SFML-Horror-Game-\\Assets\\TEMP\\glass_light_blue.png")) 
        {

        }
    }
};


int BaseWindow() // always best to use a function that can return a value!
{
    sf::RenderWindow window(sf::VideoMode(960, 540), "SFML window");

    // program will stay at 60 frames per second 
    window.setFramerateLimit(60);

    // change the title of the window (ignores last change in "Render Window" above)
    window.setTitle("Version: BETA");

    // run the program as long as the window is open
    while (window.isOpen()) 
    {
        // creates an Event called "eventTrigger" 
        sf::Event eventTrigger;

        playerData myobj;
        myobj.playerSprite();

        while (window.pollEvent(eventTrigger))
        {
            
            if (eventTrigger.type == sf::Event::Closed)

                window.close();
        }
    }

    return 0;
}


int main()
{
    BaseWindow();

    return 0;
}


