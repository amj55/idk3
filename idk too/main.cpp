
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
/*
 void Update(){
 circleRed.setFillColor(sf::Color(255, 0, 0));
 circleRed.setPosition(xRed, yRed);
 circleRed.setFillColor(sf::Color(255, 0, 0));
 circleRed.setPosition(xRed, yRed);
 
 
 }
 */
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
                //yRed -= 3;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down){
                //yRed += 3;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left){
                //xRed -= 3;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right){
                //xRed += 3;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Add){
                //size += 5;
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Subtract){
                //size -= 5;
            }
        }
        
        
        //Update();
        
        
        // Clear screen
        window.clear();
        
        // Draw the sprites
        window.draw(jiron);
        window.draw(background);
        
        
        // Update the window
        window.display();
    }
    
    return EXIT_SUCCESS;
}
