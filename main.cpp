#include <SFML/Graphics.hpp>

int main()
{
    std::vector<sf::VideoMode> availiableVideoModes;
    availiableVideoModes = sf::VideoMode::getFullscreenModes();
    sf::RenderWindow window(availiableVideoModes[0],"Nu cred ca vezi asta",sf::Style::Fullscreen);


    sf::RectangleShape background(sf::Vector2f(2000.0f,2000.0f));
    background.setFillColor(sf::Color(19, 125, 47));
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(background);
        window.draw(shape);
        window.display();
    }

    return 0;
}
