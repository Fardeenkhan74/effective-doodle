#include<iostream>
using namespace std;

class Car {

	string brand;
	int year;

public:
	Car() {
		brand = "Unknown";
		year = 0;
	}

	Car(int saal, string name) {
		
		brand = name;
		year = saal;
		cout << "year is " << year << endl;
		cout << "brand is " << brand << endl;


	}
};

int main() {
	Car car1( 2028, "BMW");
	//car1.Car("BMW", 2028);
}