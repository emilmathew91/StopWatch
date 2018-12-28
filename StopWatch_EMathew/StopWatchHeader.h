#pragma once
#ifndef __StopWatch__
#define __StopWatch__
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

class StopWatch {
private:
	double beginTime;		// really a 'long int'
	double endTime;
	double elapsedTime;
	long int secondsElapsed;
	long int milsElapsed;

public:
	//CONSTRUCTORS
	StopWatch();

	//SETTERS
	bool Start();
	bool IsTicking();
	bool Stop();
	void DisplayTimerInfo();
	
	//GETTERS
	
};











#endif