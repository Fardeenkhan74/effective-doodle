#include<iostream>
using namespace std;

class Shape {

protected:
	float area;

public:

	virtual void calculateArea() {
		cout << "Base shape area calaulation (generic) " << endl;

	}
	void printArea() {
		cout << "Area " << area << endl;
	}
};
class Rectangle :public Shape {
private:
	float length, width;
public:
	Rectangle(float l, float w) : length(l), width(w) {}

	void calculateArea() override {
		area = length * width;
		cout << "Rectangle area calculated." << endl;
	}
};
class Circle : public Shape {
private:
	float radius;
public:
	Circle(float r) : radius(r) {}

	void calculateArea()override {
		area = 3.14159f * radius * radius;
		cout << "Circle area calculated" << endl;
	}
};
int main() {
	Shape* shapes[2];

	shapes[0] = new Rectangle(5.0f, 4.0f);
	shapes[1] = new Circle(3.0f);

	for (int i = 0; i < 2; i++) {
		shapes[i]->calculateArea();
		shapes[i]->printArea();
		delete shapes[i];


	}
	return 0;
}