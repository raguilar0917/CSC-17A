#include <iostream>
#include <string.h>
using namespace std;

void stockProfit(int NS, int SP, int PP, int SC, int PC);

int main() {
	int NS, SP, PP, SC, PC;
	
	cout << "Please enter your number of shares: ";
	cin >> NS;

	cout << "Please enter your sale price per share: ";
	cin >> SP;

	cout << "Please enter the sales commision paid: ";
	cin >> SC;

	cout << "Please enter the purchase price per share: ";
	cin >> PP;

	cout << "Please enter the purchase commision paid: ";
	cin >> PC;

	stockProfit(NS, SP, PP, SC, PC);

	return 0;
}
void stockProfit(int NS, int SP, int PP, int SC, int PC) {
	float result = ((NS * SP) - SC) - ((NS * PP) + PC);
	if (result > 0) {
		cout << "Your profit is: " << result << endl;
	}
	else {
		cout << "Your loss is: " << result << endl;
	}

}