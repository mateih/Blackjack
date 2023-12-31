#pragma once
#include"SFML/Graphics.hpp"
#include "Card.hpp"
#include <vector>

class Deck{
public:
    Deck(int sizeOf,std::vector<Card*> initialCards);
    ~Deck();
    void shuffle();
    Card* getCard(int pos);

private:
    std::vector<Card*> cards;
    int sizeOfDeck;
};
