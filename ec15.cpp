#include<iostream>
using namespace std;

class shape {
protected:
	float area;
public:
	void printArea() {
		cout << "Area" << area << endl;
	}
};
class Reactangle : public shape {
private:
	float length, width;

public:
	Reactangle(float l, float w) :length(1), width(w) {}
	void calculateArea() {
		area = length * width;
	}
};
int main() {
	Reactangle rect(5.0, 4.0);
	rect.calculateArea();
	rect.printArea();
	return 0;
}