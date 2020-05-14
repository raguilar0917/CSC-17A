#pragma once
class FuelGauge{
private:
	int currentFuel;//current gas as it changes over time
	int maxGas = 22;//mac amount gas possible
	int minGas = 0;//minimum amount of gas possible
public:
	FuelGauge();

	void setFuel(int currentFuel);
	int getFuel();

	void putGas();
	void carRun();
};

