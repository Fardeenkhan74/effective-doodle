#include<iostream>
using namespace std;

class Car {
private:
	string brand;
	int year;

public:
	Car() {
		brand = "unknown";
		year = 0;
		cout << "Default constuctor called! " << endl;

	}
	void display() {
		cout << "Brand: " << brand << "Year: " << year << endl;
	}
};
int main() {
	Car car1;
	car1.display();
	return 0;
}