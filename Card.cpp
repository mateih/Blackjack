#include "Card.hpp"

Card::Card(int value,int sign){
    this->value=value;
    this->sign=sign;
}
Card::~Card(){
}

int Card::getValue(){
    return value;
}
int Card::getSign(){
    return sign;
}
