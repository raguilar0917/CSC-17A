#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"
using namespace std;

void pump(FuelGauge &, int);

int main() {
	FuelGauge gauge;
	Odometer odom;
	int fuel, mileage, MPG = 32, pumpGas;
	char choice;
	cout << "How much gas does your car have?: ";
	cin >> fuel;
	gauge.setFuel(fuel);


	cout << "How much mileage does your car currently have?: ";
	cin >> mileage;
	odom.setMileage(mileage);

	while (gauge.getFuel() > 0) {
		

		odom.updateMileage();
		cout << "=============" << endl;
		cout << "Total Mileage: " << odom.getMileage() << endl;
		cout << "Trip Mileage: " << odom.getTripMileage() << endl;
		cout << "Current Gass: " << gauge.getFuel() << endl;
		cout << "=============" << endl;
		if (odom.getTripMileage() %  MPG == 0) {

			gauge.carRun();
			cout << "=============" << endl;
			cout << "Total Mileage: " << odom.getMileage() << endl;
			cout << "Trip Mileage: " << odom.getTripMileage() << endl;
			cout << "Current Gass: " << gauge.getFuel() << endl;
			cout << "=============" << endl;


			if (gauge.getFuel() == 10 || gauge.getFuel() == 5) {
				cout << "You current fuel amount is: :" << gauge.getFuel() << endl;
				cout << "Would you like to pump some gas?(Y = yes or N = no: ";
				cin >> choice;
				if (choice == 'Y' || choice == 'y') {
					cout << "How many gallons do youw want to pump?: ";
					cin >> pumpGas;
					pump(gauge, pumpGas);

				}

			}
		}
	}
}
void pump(FuelGauge &gauge, int iter) {
	for (int x = 0; x <= iter; x++) {
		gauge.putGas();

	}
}


