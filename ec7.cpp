#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a, b, c;

	cout << "Enter the lengths of the three sides of the triangle: ";
	cin >> a >> b >> c;

	if (cin.fail() || a <= 0 || b <= 0 || c <= 0) {
		cout << "Invalid input, Please enter the positive input. " << endl;
		return 1;
	}
	if ((a + b > c) && (b + c > a) && (a + c > b)) {
		float s = (a + b + c) / 2;

		float area = sqrt(s * (s - a) * (s - b) * (s - c));

		cout << "The area of the triangle is " << area << endl;
	}
	else {
		cout << "The triangle is invalid . Cannot calaulate the area." << endl;
	}
	return 0;
}