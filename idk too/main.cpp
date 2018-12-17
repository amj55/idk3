
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "ResourcePath.hpp"
int jironX = 200;
int jironY = 200;
bool endGameFlag = false;

sf::CircleShape circleGreen(10);

sf::CircleShape circleBlue(10);

sf::CircleShape circleYellow(10);

sf::CircleShape circlePie(10);

sf::CircleShape circleWhite(10);

sf::CircleShape circleOrange(10);

sf::CircleShape circleGold(10);

sf::CircleShape circlePurple(10);

sf::RenderWindow window(sf::VideoMode(800, 600), "");


void endGame() {
   endGameFlag = true;
    
    sf::Texture safe;
    if (!safe.loadFromFile(resourcePath() + "safe2tell.png")){
        std::cout << "your background shits fucked" << std::endl;}
    sf::Sprite background(safe);
    window.clear();
    window.draw(background);
    window.display();
    sf::sleep(sf::milliseconds(5000));
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
    
    
}

int main(int, char const**)
{
    // set speed and  starting point
    float xGreen = 500;
    float yGreen = 500;
    float speedGreenX = .4;
    float speedGreenY = .4;
    
    float xBlue = 300;
    float yBlue = 100;
    float speedBlueX = .4;
    float speedBlueY = .4;
    
    float xYellow = 50;
    float yYellow = 50;
    float speedYellowX = .4;
    float speedYellowY = .4;
    
    float xPie = 200;
    float yPie = 600;
    float speedPieX = .4;
    float speedPieY = .4;
    
    float xWhite = 100;
    float yWhite = 0;
    float speedWhiteX = .4;
    float speedWhiteY = .4;
    
    float xOrange = 40;
    float yOrange = 300;
    float speedOrangeX = .4;
    float speedOrangeY = .4;
    
    float xGold = 300;
    float yGold = 300;
    float speedGoldX = .4;
    float speedGoldY = .4;
    
    float xPurple = 10;
    float yPurple = 0;
    float speedPurpleX = .4;
    float speedPurpleY = .4;
    
    
    circleGreen.setPosition(400,400);
    
    circleBlue.setPosition(400, 400);
    
    circleYellow.setPosition(400, 400);
    
    circlePie.setPosition(400, 400);
    
    circleWhite.setPosition(400, 400);
    
    circleOrange.setPosition(400, 400);
    
    circleGold.setPosition(400, 400);
    
    circlePurple.setPosition(400, 400);
    
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
    
    while (window.isOpen() && !endGameFlag )
    {
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

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window.close();}
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up){
                jiron.move(0,-10); }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down){
                jiron.move(0,10);}
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left){
                jiron.move(-10,0);}
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right){
                jiron.move(10,0);}
        }
        
        Update();
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
