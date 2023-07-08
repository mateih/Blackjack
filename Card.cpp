#include "Card.hpp"

Card::Card(sf::Texture *texture,int value,int sign){
    this->value=value;
    this->sign=sign;
    card.setTexture(texture);
    card.setSize(sf::Vector2f(250.0f,363.0f));
    card.setPosition(sf::Vector2f(200.0f,200.0f));
}
Card::~Card(){
}

int Card::getValue(){
    return value;
}
int Card::getSign(){
    return sign;
}

void Card::Draw(sf::RenderWindow &window){
    window.draw(card);
}
