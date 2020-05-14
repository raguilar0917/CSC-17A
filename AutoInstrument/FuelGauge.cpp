#include "FuelGauge.h"
#include <iostream>

FuelGauge::FuelGauge(){
	currentFuel = 0;
}

void FuelGauge::setFuel(int currentFuel){
	this->currentFuel = currentFuel;
}

int FuelGauge::getFuel(){
	return this->currentFuel;
}

void FuelGauge::putGas(){
	if (currentFuel != maxGas)
		currentFuel++;
	else
		std::cout << "Exceded MAXIMUM GAS" << std::endl;
}

void FuelGauge::carRun(){
	if (currentFuel != minGas)
		currentFuel--;
	else
		std::cout << "You're out of fuel!!" << std::endl;

}
