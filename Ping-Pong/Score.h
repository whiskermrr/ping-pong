#pragma once

#include <SFML/Graphics.hpp>


class Score : public sf::Text
{
public:

	Score(sf::Font &font);
	void AddPoint();
	void Update();

private:
	int value;
};

