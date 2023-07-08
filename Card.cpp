#include "Card.hpp"

Card::Card(sf::Texture *texture,int value,int sign){
    this->value=value;
    this->sign=sign;
    card.setTexture(texture);
    card.setSize(sf::Vector2f(250.0f/1.5f,363.0f/1.5f));
    card.setOrigin(sf::Vector2f(250.0f/3,363.0f/3));
}
Card::~Card(){
}

int Card::getValue(){
    return value;
}
int Card::getSign(){
    return sign;
}
const sf::Texture* Card::getTexture(){
    return card.getTexture();
}

void Card::draw(sf::RenderWindow &window){
    window.draw(card);
}

void Card::setPosition(sf::Vector2f newPos){
    card.setPosition(newPos);
}
