#include<iostream>
using namespace std;

class Rectangle {
private:
	float length, width;

public:
	void setDimensions(float l,float w) {
		length = l;
		width = w;
	}
	float calculateArea() {
		return length * width;
	}
	float calculatePerimeter() {
		return 2 * (length * width);
	}
};
int main() {
	Rectangle rect;
	rect.setDimensions(5.0, 2.0);
	cout << "Area: " << rect.calculateArea() << endl;
	cout << "Perimeter: " << rect.calculatePerimeter() << endl;
	return 0;
}