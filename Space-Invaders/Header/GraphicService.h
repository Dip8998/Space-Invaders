#pragma once

#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

class GraphicService {

private:

	const string gameWindowTitle = "Space Shooter";
	const int gameWindowWidth = 800;
	const int gameWindowHeight = 600;
	const int frameRate = 60;
	const Color windowColor = Color::Black;
	VideoMode* videoMode;
	RenderWindow* gameWindow;

	void setVideoMode();
	void onDestroy();

public:
	GraphicService();
	~GraphicService();

	RenderWindow* createGameWindow();

	void initialize();
	void update();
	void render();
	bool isGameWindowOpen();
	RenderWindow* getGameWindow();
	Color getWindowColor();



};
