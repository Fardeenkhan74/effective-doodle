#include<iostream>
using namespace std;

class Car {
private:
	string brand;
	int year;

public:
	Car(string b, int y) {
		brand = b;
		year = y;
		cout << "parameterized construtor called! " << endl;
	}
	void display() {
		cout << "Brand: " << brand << " Year: " << year << endl;
	}
};
int main() {
	Car car2("Toyota", 2020);
	car2.display();
	return 0;
}