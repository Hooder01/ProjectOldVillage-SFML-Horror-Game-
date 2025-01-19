#include <iostream>
// Required SFML Headers
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class sonicData 
{
  public:

      void sonicStand() 
      {
          sf::Texture sonTex1; // (Sonic Texture 01)
          if (!sonTex1.loadFromFile("C:\\Users\\Hooder\\Desktop\\ProjectOldTown\\ProjectOldVillage-SFML-Horror-Game-\\Assets\\TEMP\\Sonic\\SonicIdle.png"));
      }
};


int BaseWindow() // always best to use a function that can return a value!
{
    sf::RenderWindow window(sf::VideoMode(960, 540), "SFML window");
    // This will create a new window and set it's width and height

    // program will stay at 60 frames per second 
    window.setFramerateLimit(60);

    // change the title of the window (ignores last change in "Render Window" above)
    window.setTitle("Frontiers Beta0.1");
    //

    //
    // run the program as long as the window is open
    while (window.isOpen()) 
    {
        sf::Event closeApp; // new event related for closing the window

        while (window.pollEvent(closeApp)) // while during the event (close application)
        {
            switch (closeApp.type) 
            {
                case sf::Event::Closed: // looks if window is closed
                    window.close(); //application closes

                    break;
            }
        }


        //Render
        window.clear(sf::Color::Cyan); // Sets a new const color via the frame


        //draw app here

        window.display();
    }

    return 0;
}


int main()
{
    BaseWindow();

    return 0;
}


