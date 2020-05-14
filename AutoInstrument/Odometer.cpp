#include "Odometer.h"

Odometer::Odometer(){
	currentMileage = 0;
	tripMileage = 0;
}

void Odometer::setMileage(int currentMileage){
	this->currentMileage = currentMileage;
}

int Odometer::getMileage(){
	return currentMileage;
}

int Odometer::getTripMileage()
{
	return tripMileage;
}

void Odometer::updateMileage(){
	if (currentMileage == maxMileage)
		currentMileage = 0;
	else if (tripMileage == maxMileage)
		tripMileage = 0;
	else
		currentMileage++; tripMileage++;

}