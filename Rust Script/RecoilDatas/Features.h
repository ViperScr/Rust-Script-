#pragma once
#include <Windows.h>
#include <iostream>
#include <intrin.h>
#include <chrono>


namespace Util
{
	static void accurate_sleep(int ms)
	{
		LONGLONG timerResolution;
		LONGLONG wantedTime;
		LONGLONG currentTime;

		QueryPerformanceFrequency((LARGE_INTEGER*)&timerResolution);
		timerResolution /= 1000;

		QueryPerformanceCounter((LARGE_INTEGER*)&currentTime);
		wantedTime = currentTime / timerResolution + ms;
	
		mouse_event(1, move_point_x % 5, move_point_y % 5, 0, 0);
	}
}