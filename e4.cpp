#include<iostream>
using namespace std;

int main() {
	int year;

	cout << "Enter a year: ";
	cin >> year;

	if (cin.fail() || year <= 0) {
		cout << "Invaild input, Please enter a valid input. " << endl;
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << year << "is a leap year. " << endl;
	}
	else {
		cout << year << " is not a leap year. " << endl;
	}
	return;
}