#pragma once
#include <chrono>
using namespace std;

class TimeService {
private:
	chrono::time_point<chrono::steady_clock> previous_time;
	float deltaTime;

	void updateDeltaTime();
	float calculateDeltaTime();
	void updatePreviousTime();

public:
	
	void initialize();
	void update();

	float getDeltaTime();
};