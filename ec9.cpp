#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person() {
		cout << "A new person is created. " << endl;
	}
	void setDetails(string n , int a) {
		name = n;
		age = a;
	}
	void printDetails() {
		cout << "Name: " <<name<< endl;
		cout << "Age: " <<age<< endl;
	}
};
int main() {
	Person person1;

	person1.setDetails("Fardeen ", 18);

	person1.printDetails();

	return 0;
}