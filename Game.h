#pragma once

//Game with its functions
class Game
{
	static Game* m_instance;
	Game();
public:
	static Game* getInstance();
	void draw();
	void update();
	~Game();
	void init();
};