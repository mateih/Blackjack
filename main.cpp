#include <iostream>
#include <SFML/Graphics.hpp>
#include "Card.hpp"
#include "Deck.hpp"
#include <string>
#include<sstream>
    template <typename T>
    std::string to_string(T value)
    {
      //create an output string stream
      std::ostringstream os ;

      //throw the value into the string stream
      os << value ;

      //convert the string stream into a string and return
      return os.str() ;
    }

int main()
{
    std::vector<sf::VideoMode> availiableVideoModes;
    availiableVideoModes = sf::VideoMode::getFullscreenModes();
    sf::RenderWindow window(availiableVideoModes[0],"Nu cred ca vezi asta",sf::Style::Fullscreen);

    sf::RectangleShape background(sf::Vector2f(2000.0f,2000.0f));
    background.setFillColor(sf::Color(19, 125, 47));


    std::vector<Card*> cards;
    for(int i=1;i<=13;i++){///load the 52 cards
        for(int j=1;j<=4;j++){
            sf::Texture* temp=new sf::Texture();
            temp->loadFromFile("textures/cards/"+to_string((i-1)*4+j)+".png");
            int icopie=i;
            if(i>10)
                icopie++;
            Card* card=new Card(temp,icopie,j);
            cards.push_back(card);
        }
    }

    Deck deck(1,cards);
    deck.shuffle();
    deck.getCard(0)->setPosition(sf::Vector2f(1920.f/2,200.f));
    deck.getCard(1)->setPosition(sf::Vector2f(1920.f/4,800.f));

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(background);
        deck.getCard(0)->draw(window);
        deck.getCard(1)->draw(window);
        window.display();
    }

    return 0;
}
