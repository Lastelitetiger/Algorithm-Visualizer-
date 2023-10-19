#include <SFML/Graphics.hpp>
#include <iostream>


int randomNumber()
{
    int range = 500 - 20 + 1;
    int num = rand() % range + 20;
    return num;
}
int randRgbValue()
{
    int range = 255 - 0 + 1;
    int num = rand() % range + 0;
    return num;
}
void randomizeVector(std::vector<int> &randNums)
{
    randNums.push_back(randomNumber());
    randNums.push_back(randomNumber());
    randNums.push_back(randomNumber());
    randNums.push_back(randomNumber());
    randNums.push_back(randomNumber());
    randNums.push_back(randomNumber());    
}



int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 800), "Test");
    sf::RectangleShape shape(sf::Vector2f(120.f, 50.f));
    sf:: RectangleShape space(sf::Vector2f(100.f, 10.f));

    

    //window.setFramerateLimit(500);
    float value = 10.0f;
    space.rotate(90.0f);
    while (window.isOpen())
    {
        window.clear();
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close(); 
            }
            
            
            space.setPosition(10,700);
            window.draw(space);
            window.display();
                
        }
    return 0;
    }
    
    
    
    
    
    
    /*      
            std::vector<int> randNums;
            shape.setPosition(100.f,100.f);
            shape.setRotation(90.f);
            shape.setFillColor(sf::Color::White);
            space.setPosition(120.f,120.f);
            space.setRotation(90.f);
            space.setFillColor(sf::Color::Red);
            space.setPosition(value,600.f);
            
                randNums.clear();
                randomizeVector(randNums);
                for(int i=0;i<randNums.size();i++)
                {
                value += 20;
                space.setPosition(value,600.f);
                //space.setFillColor(sf::Color{randRgbValue(),randRgbValue(),randRgbValue()});
                for(int j=0;j<randNums[i];j++)
                {
                    space.move(0.0f,0.0f-1);
                    window.draw(space);
                    window.display();
                }
                
                window.draw(space);
            }
            */