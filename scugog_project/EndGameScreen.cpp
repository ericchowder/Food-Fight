#include "stdafx.h"
#include "EndGameScreen.h"



void EndGameScreen::Show(sf::RenderWindow & renderWindow, int player_won)
{
	//sf::Image image;
	sf::Texture texture;
	if (player_won == 0) {
		if (texture.loadFromFile("../scugog_project/resources/images/player_one_wins.png") != true)
		{
			return;
		}
	}
	else {
		if (texture.loadFromFile("../scugog_project/resources/images/player_two_wins.png") != true)
		{
			return;
		}
	}

	//texture.update(image);
	sf::Sprite sprite(texture);
	renderWindow.draw(sprite);
	renderWindow.display();

	sf::Event event;
	while (true)
	{
		while (renderWindow.pollEvent(event))
		{
			if (event.type == sf::Event::EventType::MouseButtonPressed
				|| event.type == sf::Event::EventType::Closed)
			{
				return;
			}
		}
	}
}
