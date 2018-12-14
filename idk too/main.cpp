
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
#include "ResourcePath.hpp"

int jironX = 200;
int jironY = 200;

int main(int, char const**)
{
    
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "");
    
    //set icon sprite
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;}
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    
    //play music
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
        return EXIT_FAILURE;}
    music.play();
    
    // set background sprite
    sf::Texture back;
    if (!back.loadFromFile(resourcePath() + "urmom.png")){
        std::cout << "your background shits fucked" << std::endl;}
    sf::Sprite background(back);
    
    //set jiron sprite
    sf::Texture j;
    if (!j.loadFromFile(resourcePath() + "jiron3.png")){
        std::cout << "your jiron shits fucked"<< std::endl;}
    sf::Sprite jiron(j);
    jiron.setPosition(jironX, jironY);
    
    // Start the game loop
    while (window.isOpen())
    {
        
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up){
                //jironY -= 3;
                jiron.move(0,-10);
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down){
                //jironY += 3;
                jiron.move(0,10);
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left){
                //jironX -= 3;
                jiron.move(-10,0);
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right){
                //jironX += 3;
                jiron.move(10,0);
            }
        }
        
        //jiron.setPosition(jironX, jironY);
        
        // Clear screen
        window.clear();
        
        // Draw the sprites
        
        window.draw(background);
        window.draw(jiron);
        
        
        // Update the window
        window.display();
    }
    
    return EXIT_SUCCESS;
}
