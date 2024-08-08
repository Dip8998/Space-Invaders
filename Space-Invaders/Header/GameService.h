#pragma once

class GameService {

private:
	void initialize();
	void destroy();

public:
	GameService();
	~GameService();
	void Ignite();
	void update();
	void render();
	bool isRunning();

};
