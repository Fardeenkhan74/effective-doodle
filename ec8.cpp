#include<iostream>
using namespace std;

int main() {
	float a, b, c;

	cout << "Enter the length of three sides of the triangle: ";
	cin >> a, b, c;

	if (cin.fail() || a <= 0 || b <= 0 || c <= 0) {
		cout << "Invalid input, Please enter lengths number for the side length. " << endl;
		return 1;
	}if ((a + b > c) && (b + c > a) && (a + c > b)) {
		float s = (a + b + c) / 2;

		float area = sqrt(s * (s - a) * (s - b) * (s - c));

		cout << "The area of triangle is " << area << endl;
	}
	else {
		cout << "The triangle is invalid. Cannot calculate the area. " << endl;
	}
	return 0;
}