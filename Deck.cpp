#include "Deck.hpp"
#include "Card.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
#include <random>
#include <chrono>

Deck::Deck(int sizeOf,std::vector<Card*> initialCards){
    sizeOfDeck=sizeOf;
    for(int i=1;i<=sizeOfDeck;i++){
        for(int i=0;i<initialCards.size();i++){
            int a=initialCards[i]->getSign();
            int b=initialCards[i]->getValue();
            sf::Texture* t=const_cast<sf::Texture*>(initialCards[i]->getTexture());
            Card* card=new Card(t,b,a);
            cards.push_back(card);
        }
    }
}
Deck::~Deck(){
}

void Deck::shuffle(){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine e(seed);
    std::shuffle(cards.begin(), cards.end(), e);
}

Card* Deck::getCard(int pos){
    return cards[pos];
}
