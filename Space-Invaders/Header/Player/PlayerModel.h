#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

enum class PlayerState {

	ALIVE,
	DEAD,

};

class PlayerModel {

private:
	const Vector2f initialPlayerPosition = Vector2f(500, 500);
	Vector2f playerPosition;
	PlayerState playerState;
	int playerScore = 0;

public:

	const Vector2f leftMostPosition = Vector2f(50, 50);
	const Vector2f rightMostPosition = Vector2f(700, 0);

	const float playerMovementSpeed = 200.0f;

	PlayerModel();
	~PlayerModel();

	void initialize();
	void reset();

	Vector2f getPlayerPosition();
	void setPlayerPosition(Vector2f position);

	int getPlayerScore();
	void setPlayerScore(int score);


	PlayerState getPlayerState();
	void setPlayerState(PlayerState state);

};