#include "../Header/Time/TimeService.h"

namespace Time {
	void TimeService::initialize()
	{
		previous_time = std::chrono::steady_clock::now();
		deltaTime = 0;
	}

	void TimeService::update()
	{
		updateDeltaTime();
	}

	float TimeService::getDeltaTime()
	{
		return deltaTime;
	}

	void TimeService::updateDeltaTime()
	{
		deltaTime = calculateDeltaTime();
		updatePreviousTime();
	}

	float TimeService::calculateDeltaTime()
	{

		int delta = std::chrono::duration_cast<std::chrono::microseconds>(
			std::chrono::steady_clock::now() - previous_time).count();


		return static_cast<float>(delta) / static_cast<float>(1000000);
	}

	// Update previous_time to the current time
	void TimeService::updatePreviousTime()
	{
		previous_time = std::chrono::steady_clock::now();
	}
}

