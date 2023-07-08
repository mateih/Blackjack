#pragma once
#include"SFML/Graphics.hpp"

class Card{
public:
    Card(sf::Texture *texture,int value,int sign);
    ~Card();
    int getValue();
    int getSign();
    void Draw(sf::RenderWindow& window);
private:
    int value;
    int sign;
    sf::RectangleShape card;
};
