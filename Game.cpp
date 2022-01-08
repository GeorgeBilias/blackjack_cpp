#include "Game.h"
#include "graphics.h"
#include "config.h"
#include "Card.h"
#include "Deck.h"

//Game functions

void Game::update()
{
}

Game* Game::getInstance()
{
	if (!m_instance)
	{
		m_instance = new Game();
	}
	return m_instance;
	
}

void Game::draw()
{
	//Creates a brush 
	graphics::Brush br;

	//We create the background
	br.texture = std::string(ASSET_PATH) + "blackjack_background.png";

	graphics::drawRect(CANVAS_WIDTH / 2, CANVAS_HEIGHT / 2, CANVAS_WIDTH, CANVAS_WIDTH, br);

	//We create a mat on top of the background
	br.texture = std::string(ASSET_PATH) + "mat.png";
	graphics::drawRect(CANVAS_WIDTH / 2, CANVAS_HEIGHT / 2 - 35, CANVAS_WIDTH - 100.0f, CANVAS_HEIGHT+150, br);

	//We create some cards on the top left of the screen
	br.texture = std::string(ASSET_PATH) + "cards.png";
	// and reverse them
	graphics::setOrientation(180.f);
	graphics::drawRect(CARD_X, CARD_Y, CARD_WIDTH, CARD_HEIGHT, br);
	// reverse back so everything we do next will be normal
	graphics::setOrientation(0.f);
	
	Deck d;
	d.fill_deck();
	
	
}

void Game::init()
{
}

Game* Game::m_instance = nullptr;

Game::Game()
{
}

Game::~Game()
{

}