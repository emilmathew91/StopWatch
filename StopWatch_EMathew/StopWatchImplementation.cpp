#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include "StopWatchHeader.h"

using namespace std;

StopWatch::StopWatch() {
	long double beginTime = 0.0;
	long double endTime = 0.0;
	long double elapsedTime = 0.0;
	long double secondsElapsed = 0.0;
	long int milsElapsed = 0;
}
bool StopWatch::Start() {
	if (!Stop()) {
		this->beginTime = clock();
		return true;
	}
	else
		return false;
}
bool StopWatch::IsTicking() {
	if(beginTime > 0){
		return true;
	}
	else
		return false;
}
bool StopWatch::Stop() {
	if (IsTicking()) {
		this->endTime = clock();
		return true;
	}
	else
		return false;
}
void StopWatch::DisplayTimerInfo() {
	elapsedTime = endTime - beginTime;
	double secondsElapsed = elapsedTime /(double) CLOCKS_PER_SEC;
	cout << secondsElapsed << setprecision(4) << " seconds have passed" << endl;
}
