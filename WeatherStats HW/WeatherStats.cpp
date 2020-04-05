#include <iostream>

using namespace std;

struct WeatherStats {
	double Total_Rainfall;
	double Total_Snowfall;
	double High_Temperature;
	double Low_Temperature;
	double Average_Teperatuere;
};

void printYear(WeatherStats [], int);
void checkTemp(double &);
void checkFall(double &);

int main() {
	WeatherStats Months[12];

	for (int i = 0; i < 12; i++) {
		cout << "Please enter the Total SnowFall of Month " << i + 1 << ": ";
		cin >> Months[i].Total_Snowfall;
		checkFall(Months[i].Total_Snowfall);

		cout << Months[i].Total_Snowfall;
		cout << "Please enter the Total Rainfall of Month " << i + 1 << ": ";
		cin >> Months[i].Total_Rainfall;
		checkFall(Months[i].Total_Rainfall);

		cout << "Please enter the Highest temperature of Month " << i + 1 << ": ";
		cin >> Months[i].High_Temperature;
		checkTemp(Months[i].High_Temperature);

		cout << "Please enter the Lowest temperature of Month " << i + 1 << ": ";
		cin >> Months[i].Low_Temperature;
		checkTemp(Months->Low_Temperature);

		Months[i].Average_Teperatuere = (Months[i].High_Temperature + Months[i].Low_Temperature) / 2.0;
	}

	printYear(Months, 12);

}
void checkFall(double& val) {
	if (val < 0) {
		cout << "ERROR: INVALID INPUT \nPLEASE ENTER A VALUE EQUAL OR GREATER THAN 0: ";
		cin >> val;
		checkFall(val);
	}
}

void checkTemp(double &val) {
	if (val > 150 || val < -150) {
		cout << "ERROR: INVALID INPUT \nPLEASE ENTER TEMPERATURE BETWEEN -150 AND 150: ";
		cin >> val;
		checkTemp(val);
	}
}

void printYear(WeatherStats Months[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << "= = = = =FOR MONTH " << i + 1 << " = = = = =" << endl;
		cout << "You entered " << Months[i].Total_Snowfall << " for this months total snowfall" << endl;
		cout << "You entered " << Months[i].Total_Rainfall << " for this months total rainfall" << endl;
		cout << "You entered " << Months[i].High_Temperature << " for this months highest temperature" << endl;
		cout << "You entered " << Months[i].Low_Temperature << " for this months lowest temperature" << endl;
		cout << "The average temperature is for the month is:" << Months[i].Average_Teperatuere << endl;
	}
}