#pragma once

//Game with its functions
class Game
{
	static Game* m_instance; // creating a game instance
	Game(); // game constructor
public:
	static Game* getInstance(); // a getter for the instance (for checking if game already exists)
	void draw(); // drawing function (for items inside the canvas such as background etc.)
	void update(); // an update function to be used inside the game loop
	~Game(); // game destructor
	void init(); // initializing stuff
};