
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "ResourcePath.hpp"

int jironX = 200;
int jironY = 200;

bool endGameFlag =  false;

float speed = .1;

float xGreen = 500;
float yGreen = 500;
float speedGreenX = speed;
float speedGreenY = speed;

float xBlue = 300;
float yBlue = 100;
float speedBlueX = speed;
float speedBlueY = speed;

float xYellow = 50;
float yYellow = 50;
float speedYellowX = speed;
float speedYellowY = speed;

float xPie = 200;
float yPie = 600;
float speedPieX = speed;
float speedPieY = speed;

float xWhite = 100;
float yWhite = 0;
float speedWhiteX = speed;
float speedWhiteY = speed;

float xOrange = 40;
float yOrange = 300;
float speedOrangeX = speed;
float speedOrangeY = speed;

float xGold = 300;
float yGold = 300;
float speedGoldX = speed;
float speedGoldY = speed;

float xPurple = 10;
float yPurple = 0;
float speedPurpleX = speed;
float speedPurpleY = speed;

sf::Clock clock2;

//define shape

sf::CircleShape circleGreen(10);

sf::CircleShape circleBlue(10);

sf::CircleShape circleYellow(10);

sf::CircleShape circlePie(10);

sf::CircleShape circleWhite(10);

sf::CircleShape circleOrange(10);

sf::CircleShape circleGold(10);

sf::CircleShape circlePurple(10);

//define window
sf::RenderWindow window(sf::VideoMode(800, 600), "");

void winGame(){
    
    sf::Texture pew;
    if (!pew.loadFromFile(resourcePath() + "pew.jpg")){
        std::cout << "your background shits fucked" << std::endl;}
    sf::Sprite background(pew);
    window.clear();
    window.draw(background);
    window.display();
    sf::sleep(sf::milliseconds(2500));
}

void endGame() {
    endGameFlag = true;
    sf::Texture safe;
    if (!safe.loadFromFile(resourcePath() + "safe2tell.png")){
        std::cout << "your background shits fucked" << std::endl;}
    sf::Sprite background(safe);
    window.clear();
    window.draw(background);
    window.display();
    sf::sleep(sf::milliseconds(2000));
}

void Update(){
    
    
    circleGreen.setFillColor(sf::Color(0,255,0));
    
    circleBlue.setFillColor(sf::Color(0,191,255));
    
    circleYellow.setFillColor(sf::Color(255,255,0));
    
    circlePie.setFillColor(sf::Color(75,0,199));
    
    circleWhite.setFillColor(sf::Color(0, 0, 0));
    
    circleOrange.setFillColor(sf::Color(255,165,0));
    
    circleGold.setFillColor(sf::Color(255, 0, 0));
    
    circlePurple.setFillColor(sf::Color(255,0,255));
    
    speedGreenX = speed;
    speedGreenY = speed;


    speedBlueX = speed;
    speedBlueY = speed;

    speedYellowX = speed;
    speedYellowY = speed;

    speedPieX = speed;
    speedPieY = speed;

    speedWhiteX = speed;
    speedWhiteY = speed;

    speedOrangeX = speed;
    speedOrangeY = speed;

    speedGoldX = speed;
    speedGoldY = speed;

    speedPurpleX = speed;
    speedPurpleY = speed;
    
    
}

int main(int, char const**)
{

    circleGreen.setFillColor(sf::Color(0,255,0));
    
    circleBlue.setFillColor(sf::Color(0,191,255));
    
    circleYellow.setFillColor(sf::Color(255,255,0));
    
    circlePie.setFillColor(sf::Color(75,0,199));
    
    circleWhite.setFillColor(sf::Color(0, 0, 0));
    
    circleOrange.setFillColor(sf::Color(255,165,0));
    
    circleGold.setFillColor(sf::Color(255, 0, 0));
    
    circlePurple.setFillColor(sf::Color(255,0,255));
    
    circleGreen.setPosition(100,100);
    
    circleBlue.setPosition(100, 100);
    
    circleYellow.setPosition(100, 100);
    
    circlePie.setPosition(100, 100);
    
    circleWhite.setPosition(100, 100);
    
    circleOrange.setPosition(100, 100);
    
    circleGold.setPosition(100, 100);
    
    circlePurple.setPosition(100, 100);
    
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    
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
    
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
        return EXIT_FAILURE;
    }
    music.play();
    
    while (window.isOpen() && !endGameFlag)
    {
        
        sf::Time elapsedTime =  clock2.getElapsedTime();
        
        std::cout << elapsedTime.asSeconds() << std::endl;
        if(elapsedTime.asSeconds() > 5){
            if(speedGreenX > 0){
                speedGreenX += .1;
            } else {
                speedGreenX -= .1;
            }
            
            if(speedGreenY > 0){
                speedGreenY += .1;
            } else {
                speedGreenY -= .1;
            }

            if(speedBlueX > 0){
                speedBlueX += .1;
            } else {
                speedBlueX -= .1;
            }
            
            if(speedYellowY > 0){
                speedYellowY += .1;
            } else {
                speedYellowY -= .1;
            }
            
            if(speedYellowX > 0){
                speedYellowX += .1;
            } else {
                speedYellowX -= .1;
            }
            
            if(speedYellowY > 0){
                speedYellowY += .1;
            } else {
                speedYellowY -= .1;
            }
            
            if(speedPieX > 0){
                speedPieX += .1;
            } else {
                speedPieX -= .1;
            }
            
            if(speedPieY > 0){
                speedBlueY += .1;
            } else {
                speedPieY -= .1;
            }
            
            if(speedWhiteX > 0){
                speedWhiteX += .1;
            } else {
                speedWhiteX -= .1;
            }
            
            if(speedWhiteY > 0){
                speedWhiteY += .1;
            } else {
                speedWhiteY -= .1;
            }
            
            if(speedOrangeX > 0){
                speedOrangeX += .1;
            } else {
                speedOrangeX -= .1;
            }
            
            if(speedOrangeY > 0){
                speedWhiteY += .1;
            } else {
                speedOrangeY -= .1;
            }
            
            if(speedGoldX > 0){
                speedGoldX += .1;
            } else {
                speedGoldX -= .1;
            }
            
            if(speedGoldY > 0){
                speedGoldY += .1;
            } else {
                speedGoldY -= .1;
            }
            
            if(speedPurpleX > 0){
                speedPurpleX += .1;
            } else {
                speedPurpleX -= .1;
            }
            
            if(speedPurpleY > 0){
                speedPurpleY += .1;
            } else {
                
                speedPurpleY -= .1;
            }
            
            clock2.restart();
            elapsedTime =  clock2.getElapsedTime();
            std::cout << speed << std::endl;
            std::cout << "time" << std::endl;
        }
        
        
        if (xGreen + circleGreen.getRadius() * 2 > window.getSize().x || xGreen < 0)
            speedGreenX *= -1;
        
        if (yGreen + circleGreen.getRadius() * 2 > window.getSize().y || yGreen < 0)
            speedGreenY *= -1;
    
        if (xBlue + circleBlue.getRadius() * 2 > window.getSize().x || xBlue < 0)
            speedBlueX *= -1;
        
        if (yBlue + circleBlue.getRadius() * 2 > window.getSize().y || yBlue < 0)
            speedBlueY *= -1;
        
        if (xYellow + circleYellow.getRadius() * 2 > window.getSize().x || xYellow < 0)
            speedYellowX *= -1;
        
        if (yYellow + circleYellow.getRadius() * 2 > window.getSize().y || yYellow < 0)
            speedYellowY *= -1;
        
        if (xPie + circlePie.getRadius() * 2 > window.getSize().x || xPie < 0)
            speedPieX *= -1;
            
        if (yPie + circlePie.getRadius() * 2 > window.getSize().y || yPie < 0)
            speedPieY *= -1;
        
        if (xWhite + circleWhite.getRadius() * 2 > window.getSize().x || xWhite < 0)
            speedWhiteX *= -1;
        
        if (yWhite + circleWhite.getRadius() * 2 > window.getSize().y || yWhite < 0)
            speedWhiteY *= -1;
        
        if (xOrange + circleOrange.getRadius() * 2 > window.getSize().x || xOrange < 0)
            speedOrangeX *= -1;
        
        if (yOrange + circleOrange.getRadius() * 2 > window.getSize().y || yOrange < 0)
            speedOrangeY *= -1;
        
        if (xGold + circleGold.getRadius() * 2 > window.getSize().x || xGold < 0)
            
            speedGoldX *= -1;
        if (yGold + circleGold.getRadius() * 2 > window.getSize().y || yGold < 0)
            speedGoldY *= -1;
        
        if (xPurple + circlePurple.getRadius() * 2 > window.getSize().x || xPurple< 0)
            
            speedPurpleX *= -1;
        if (yPurple + circlePurple.getRadius() * 2 > window.getSize().y || yPurple < 0)
            
            speedPurpleY *= -1;
        
        
        sf::RectangleShape ballShapeGreen;
        
        ballShapeGreen.setSize(sf::Vector2f(10,10)); // width/height
        
        sf::RectangleShape ballShapeBlue;
        
        ballShapeBlue.setSize(sf::Vector2f(10,10)); // width/height
        
        sf::RectangleShape ballShapeYellow;
        
        ballShapeYellow.setSize(sf::Vector2f(10,10)); // width/height
        
        sf::RectangleShape ballShapePie;
        
        ballShapeYellow.setSize(sf::Vector2f(10,10)); // width/height
        
        sf::RectangleShape ballShapeWhite;
        
        ballShapeWhite.setSize(sf::Vector2f(10,10)); // width/height
        
        sf::RectangleShape ballShapeOrange;
        
        ballShapeOrange.setSize(sf::Vector2f(10,10)); // width/height
        
        sf::RectangleShape ballShapeGold;
        
        ballShapeGold.setSize(sf::Vector2f(10,10)); // width/height
        
        sf::RectangleShape ballShapePurple;
        
        ballShapePurple.setSize(sf::Vector2f(10,10)); // width/height
        
        ballShapeGreen.setPosition(circleGreen.getPosition());
        
        ballShapeBlue.setPosition(circleBlue.getPosition());
        
        ballShapeYellow.setPosition(circleYellow.getPosition());
        
        ballShapePie.setPosition(circlePie.getPosition());
        
        ballShapeWhite.setPosition(circleWhite.getPosition());
        
        ballShapeOrange.setPosition(circleOrange.getPosition());
        
        ballShapeGold.setPosition(circleGold.getPosition());
        
        ballShapePurple.setPosition(circlePurple.getPosition());
        
        
        if (ballShapeGreen.getGlobalBounds().intersects(ballShapeBlue.getGlobalBounds())) {
            speedGreenX *= -1;
            speedGreenY *= -1;
            speedBlueX *= -1;
            speedBlueY *= -1;
        }
        
        if (ballShapeYellow.getGlobalBounds().intersects(ballShapeGreen.getGlobalBounds())) {
            speedYellowX *= -1;
            speedYellowY *= -1;
            speedGreenX *= -1;
            speedGreenY *= -1;
        }
        
        if (ballShapeYellow.getGlobalBounds().intersects(ballShapeBlue.getGlobalBounds())) {
            speedYellowX *= -1;
            speedYellowY *= -1;
            speedBlueX *= -1;
            speedBlueY *= -1;
        }
        
        if (ballShapeYellow.getGlobalBounds().intersects(ballShapePie.getGlobalBounds())) {
            speedYellowX *= -1;
            speedYellowY *= -1;
            speedPieX *= -1;
            speedPieY *= -1;
        }
        
        if (ballShapeBlue.getGlobalBounds().intersects(ballShapePie.getGlobalBounds())) {
            speedBlueX *= -1;
            speedBlueY *= -1;
            speedPieX *= -1;
            speedPieY *= -1;
        }
        
        if (ballShapeGreen.getGlobalBounds().intersects(ballShapePie.getGlobalBounds())) {
            speedGreenX *= -1;
            speedGreenY *= -1;
            speedPieX *= -1;
            speedPieY *= -1;
        }
        
        if (ballShapeWhite.getGlobalBounds().intersects(ballShapePie.getGlobalBounds())) {
            speedWhiteX *= -1;
            speedWhiteY *= -1;
            speedPieX *= -1;
            speedPieY *= -1;
        }
        
        if (ballShapeWhite.getGlobalBounds().intersects(ballShapeGreen.getGlobalBounds())) {
            speedWhiteX *= -1;
            speedWhiteY *= -1;
            speedGreenX *= -1;
            speedGreenY *= -1;
        }
        
        if (ballShapeWhite.getGlobalBounds().intersects(ballShapeBlue.getGlobalBounds())) {
            speedWhiteX *= -1;
            speedWhiteY *= -1;
            speedBlueX *= -1;
            speedBlueY *= -1;
        }
        
        if (ballShapeWhite.getGlobalBounds().intersects(ballShapeYellow.getGlobalBounds())) {
            speedWhiteX *= -1;
            speedWhiteY *= -1;
            speedYellowX *= -1;
            speedYellowY *= -1;
        }
        
        if (ballShapePie.getGlobalBounds().intersects(ballShapeOrange.getGlobalBounds())) {
            speedPieX *= -1;
            speedPieY *= -1;
            speedOrangeX *= -1;
            speedOrangeY *= -1;
        }
        
        if (ballShapeWhite.getGlobalBounds().intersects(ballShapeOrange.getGlobalBounds())) {
            speedWhiteX *= -1;
            speedWhiteY *= -1;
            speedOrangeX *= -1;
            speedOrangeY *= -1;
        }
        if (ballShapeBlue.getGlobalBounds().intersects(ballShapeOrange.getGlobalBounds())) {
            speedBlueX *= -1;
            speedBlueY *= -1;
            speedOrangeX *= -1;
            speedOrangeY *= -1;
        }
        
        if (ballShapeGreen.getGlobalBounds().intersects(ballShapeOrange.getGlobalBounds())) {
            speedGreenX *= -1;
            speedGreenY *= -1;
            speedOrangeX *= -1;
            speedOrangeY *= -1;
        }
        
        if (ballShapeYellow.getGlobalBounds().intersects(ballShapeOrange.getGlobalBounds())) {
            speedYellowX *= -1;
            speedYellowY *= -1;
            speedOrangeX *= -1;
            speedOrangeY *= -1;
        }
        
        if (ballShapeOrange.getGlobalBounds().intersects(ballShapeGold.getGlobalBounds())) {
            speedOrangeX *= -1;
            speedOrangeY *= -1;
            speedGoldX *= -1;
            speedGoldY *= -1;
        }
        
        if (ballShapeWhite.getGlobalBounds().intersects(ballShapeGold.getGlobalBounds())) {
            speedWhiteX *= -1;
            speedWhiteY *= -1;
            speedGoldX *= -1;
            speedGoldY *= -1;
        }
        
        if (ballShapePie.getGlobalBounds().intersects(ballShapeGold.getGlobalBounds())) {
            speedPieX *= -1;
            speedPieY *= -1;
            speedGoldX *= -1;
            speedGoldY *= -1;
        }
        
        if (ballShapeYellow.getGlobalBounds().intersects(ballShapeGold.getGlobalBounds())) {
            speedYellowX *= -1;
            speedYellowY *= -1;
            speedGoldX *= -1;
            speedGoldY *= -1;
        }
        
        if (ballShapeBlue.getGlobalBounds().intersects(ballShapeGold.getGlobalBounds())) {
            speedBlueX *= -1;
            speedBlueY *= -1;
            speedGoldX *= -1;
            speedGoldY *= -1;
        }
        
        if (ballShapeGreen.getGlobalBounds().intersects(ballShapeGold.getGlobalBounds())) {
            speedGreenX *= -1;
            speedGreenY *= -1;
            speedGoldX *= -1;
            speedGoldY *= -1;
        }
        
        if (ballShapeGreen.getGlobalBounds().intersects(ballShapePurple.getGlobalBounds())) {
            speedGreenX *= -1;
            speedGreenY *= -1;
            speedPurpleX *= -1;
            speedPurpleY *= -1;
        }
        
        if (ballShapeGold.getGlobalBounds().intersects(ballShapePurple.getGlobalBounds())) {
            speedGoldX *= -1;
            speedGoldY *= -1;
            speedPurpleX *= -1;
            speedPurpleY *= -1;
        }
        
        if (ballShapeBlue.getGlobalBounds().intersects(ballShapePurple.getGlobalBounds())) {
            speedBlueX *= -1;
            speedBlueY *= -1;
            speedPurpleX *= -1;
            speedPurpleY *= -1;
        }
        
        if (ballShapePie.getGlobalBounds().intersects(ballShapePurple.getGlobalBounds())) {
            speedPieX *= -1;
            speedPieY *= -1;
            speedPurpleX *= -1;
            speedPurpleY *= -1;
        }
        
        if (ballShapeOrange.getGlobalBounds().intersects(ballShapePurple.getGlobalBounds())) {
            speedOrangeX *= -1;
            speedOrangeY *= -1;
            speedPurpleX *= -1;
            speedPurpleY *= -1;
        }
        
        if (ballShapeWhite.getGlobalBounds().intersects(ballShapePurple.getGlobalBounds())) {
            speedWhiteX *= -1;
            speedWhiteY *= -1;
            speedPurpleX *= -1;
            speedPurpleY *= -1;
        }
        
        if (ballShapeYellow.getGlobalBounds().intersects(ballShapePurple.getGlobalBounds())) {
            speedYellowX *= -1;
            speedYellowY *= -1;
            speedPurpleX *= -1;
            speedPurpleY *= -1;
        }
        
        if (jiron.getGlobalBounds().intersects(ballShapePurple.getGlobalBounds())) {
            endGame();
        }
        if (jiron.getGlobalBounds().intersects(ballShapeBlue.getGlobalBounds())) {
            endGame();
        }
        if (jiron.getGlobalBounds().intersects(ballShapeYellow.getGlobalBounds())) {
            endGame();
        }
        if (jiron.getGlobalBounds().intersects(ballShapePie.getGlobalBounds())) {
            endGame();
        }
        if (jiron.getGlobalBounds().intersects(ballShapeOrange.getGlobalBounds())) {
            endGame();
        }
        if (jiron.getGlobalBounds().intersects(ballShapeWhite.getGlobalBounds())) {
            endGame();
        }
        if (jiron.getGlobalBounds().intersects(ballShapeGreen.getGlobalBounds())) {
            endGame();
        }
        
        window.clear();
        
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up){
                jiron.move(0,-10);
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down){
                jiron.move(0,10);
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left){
                jiron.move(-10,0);
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right){
                jiron.move(10,0);
            }
            
        }
        //Update();
        window.clear();
        xGreen = xGreen + speedGreenX;
        
        yGreen = yGreen + speedGreenY;
        
        xBlue = xBlue + speedBlueX;
        
        yBlue = yBlue + speedBlueY;
        
        xYellow = xYellow + speedYellowX;
        
        yYellow = yYellow + speedYellowY;
        
        xPie = xPie + speedPieX;
        
        yPie = yPie + speedPieY;
        
        xWhite = xWhite + speedWhiteX;
        
        yWhite = yWhite + speedWhiteY;
        
        xOrange = xOrange + speedOrangeX;
        
        yOrange = yOrange + speedOrangeY;
        
        xGold = xGold + speedGoldX;
        
        yGold = yGold + speedGoldY;
        
        xPurple = xPurple + speedPurpleX;
        
        yPurple = yPurple + speedPurpleY;
        
        circleGreen.setPosition(xGreen, yGreen);
        
        circleBlue.setPosition(xBlue, yBlue);
        
        circleYellow.setPosition(xYellow, yYellow);
        
        circlePie.setPosition(xPie, yPie);
        
        circleWhite.setPosition(xWhite, yWhite);
        
        circleOrange.setPosition(xOrange, yOrange);
        
        circleGold.setPosition(xGold, yGold);
        
        circlePurple.setPosition(xPurple, yPurple);
        
        window.draw(background);
        
        window.draw(jiron);
        
        window.draw(circleGreen);
        
        window.draw(circleBlue);
        
        window.draw(circleYellow);
        
        window.draw(circlePie);
        
        window.draw(circleWhite);
        
        window.draw(circleOrange);
        
        window.draw(circleGold);
        
        window.draw(circlePurple);
        
        window.display();
    }
    return EXIT_SUCCESS;
}
