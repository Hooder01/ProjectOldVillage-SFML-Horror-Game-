#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"


int BaseWindow() // always best to use a function that can return a value!
{
    sf::RenderWindow window(sf::VideoMode(960, 540), "SFML window"); 

    // program will stay at 60 frames per second 
    window.setFramerateLimit(60);

    // change the title of the window (ignores last change in "Render Window" above)
    window.setTitle("Version: BETA");

    // Creates a graphical font and text to display
    sf::Font Arialfont;
    if (!Arialfont.loadFromFile("C:\\Users\\Hooder\\Desktop\\ProjectOldTown\\ProjectOldVillage-SFML-Horror-Game-\\BetaSFMLTesting\\AlphaV1\\font\\ARIAL.ttf"))

    sf::Text textToScreen;
    textToScreen.setFont(Arialfont);
    


    // run the program as long as the window is open
    while (window.isOpen()) 
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event eventTrigger;

        while (window.pollEvent(eventTrigger))
        {
            // "close requested" eventTwigger: we close the window via user input
            if (eventTrigger.type == sf::Event::Closed)
                window.close();
        }

        //draws title screen text!

        //
        
    }
    


}


int main()
{
    BaseWindow();

    return 0;
}


