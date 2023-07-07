#pragma once
#include"SFML/Graphics.hpp"
#include <string>

class Card{
public:
    Card(int value,int sign);
    ~Card();
    int getValue();
    int getSign();
private:
    int value;
    int sign;
};
