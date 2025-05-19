#include <iostream>
using namespace std;

int main() {
	float a , b, c;

	cout << "Enter the lengths of three side of the triangle: ";
	cin >> a >> b >> c;

	if (cin.fail() || a <= 0 || b <= 0 || c <= 0) {
		cout << "Invalid input, Please enter positive input" << endl;
		return 1;

	}if ((a + b > c) && (b + c > a) && (a + c > b)) {
		cout << "The triangle is valid. " << endl;
	}
	else {
		cout << "The triangle is invalid." << endl;
	}
	return 0;
}