
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"

float xRed = 400;
float yRed = 300;
int size = 30;
sf::CircleShape circleRed(size);

float xBlue = 500;
float yBlue = 400;
int sizeBlue = 30;
sf::CircleShape circleBlue(size);



void Update(){
    circleRed.setFillColor(sf::Color(255, 0, 0));
    circleRed.setPosition(xRed, yRed);
    circleRed.setFillColor(sf::Color(255, 0, 0));
    circleRed.setPosition(xRed, yRed);
    
    circleBlue.setFillColor(sf::Color(0, 255, 255));
    circleBlue.setPosition(xBlue, yBlue);
    circleBlue.setFillColor(sf::Color(0, 255, 255));
    circleBlue.setPosition(xBlue, yBlue);
    

}

int main(int, char const**)
{
    //gru cifer
    
    // Create the main window 
    sf::RenderWindow window(sf::VideoMode(800, 600), "");

    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile(resourcePath() + "urmom.png")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);
    

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
        return EXIT_FAILURE;
    }

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
        return EXIT_FAILURE;
    }

    // Play the music
    music.play();

    
    // Start the game loop
    while (window.isOpen())
    {
        
        sf::CircleShape circleRed(size);
        circleRed.setFillColor(sf::Color(255, 0, 0));
        circleRed.setPosition(xRed, yRed);
        
        sf::CircleShape circleBlue(size);
        circleBlue.setFillColor(sf::Color(0, 255, 255));
        circleBlue.setPosition(xBlue, yBlue);
        
        
      window.clear();

        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up){
                yRed -= 9;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down){
                yRed += 9;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left){
                xRed -= 9;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right){
                xRed += 9;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Add){
                size += 5;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Subtract){
                size -= 5;
            }
        
        
       
  
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W){
                yBlue -= 9;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S){
                yBlue += 9;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::D){
                xBlue -= 9;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::A){
                xBlue += 9;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Q){
                sizeBlue += 5;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::E){
                sizeBlue -= 5;
            }
        }
        
        
        std::cout << xBlue << std::endl;

        std::cout << xRed << std::endl;
        
        Update();

        
        // Clear screen
        window.clear();

        // Draw the sprite
        
        window.draw(sprite);
        
         window.draw(circleRed);
        
         window.draw(circleBlue);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
