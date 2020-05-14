#pragma once
#include "FuelGauge.h"
class Odometer{
private:
	int currentMileage; //total mileage of car (including past trip miles)
	int tripMileage; //only miles of the current trip and used to work with Gauge Object in main  AutoInstrument.cpp
	int maxMileage = 999999; //as a roof for code
	
public:
	Odometer(); //constructor

	void setMileage(int currentMileage);//to set miles into private variable
	int getMileage();//to get current total miles

	int getTripMileage(); // to get trip mileage 

	void updateMileage();//to increment miles and trip miles
};

