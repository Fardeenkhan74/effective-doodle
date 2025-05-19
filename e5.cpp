#include<iostream>
using namespace std;

int main() {
	float marks;

	cout << "Enter the student's marks (0-100). ";
	cin >> marks;

	if (cin.fail() || marks < 0 || marks > 100) {
		cout << "Invaild input, Please enter a valid input. " << endl;
		return 1;
	}

	char grade;
	if (marks >= 90) {
		grade = 'A';

	}
	else if (marks >= 80) {
		grade = 'B';
	}
	else if (marks >= 70) {
		grade = 'C';

	}
	else if (marks >= 60) {
		grade = 'D';

	}
	else {
		grade = 'F';
	}
	cout << "The student's grade is: " << grade << endl;

	return 0;
}