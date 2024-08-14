#include "../../Header/Player/PlayerModel.h"

PlayerModel::PlayerModel() {}
PlayerModel::~PlayerModel(){}

void PlayerModel::initialize() {
	reset();
}
void PlayerModel::reset() {
	playerState = PlayerState::ALIVE;
	playerPosition = initialPlayerPosition;
	playerScore = 0;
}
Vector2f PlayerModel::getPlayerPosition() {
	return  playerPosition;
}
void PlayerModel::setPlayerPosition(Vector2f position) {
	playerPosition = position;
}
int PlayerModel::getPlayerScore() {
	return playerScore;
}
void PlayerModel::setPlayerScore(int score) {
	playerScore = score;
}
PlayerState PlayerModel::getPlayerState() {
	return playerState;
}
void PlayerModel::setPlayerState(PlayerState state) {
	playerState = state;
}