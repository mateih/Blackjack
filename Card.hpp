#pragma once
#include"SFML/Graphics.hpp"

class Card{
public:
    Card(sf::Texture *texture,int value,int sign);
    ~Card();
    int getValue();
    int getSign();
    const sf::Texture* getTexture();
    void draw(sf::RenderWindow& window);
    void setPosition(sf::Vector2f newPos);
private:
    int value;
    int sign;
    sf::RectangleShape card;
};
