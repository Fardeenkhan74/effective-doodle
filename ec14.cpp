#include<iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    // Default Constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called!" << endl;
    }

    // Parameterized Constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called!" << endl;
    }

    // Destructor (corrected syntax with ~)
    ~Rectangle() {
        cout << "Rectangle destroyed!" << endl;
    }

    void setDimension(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }

    float calculatePerimeter() {  // Corrected name and formula
        return 2 * (length + width);
    }
};

int main() {
    { // New block scope to demonstrate destructor
        Rectangle rect1;
        cout << "Area of rect1: " << rect1.calculateArea() << endl;

        Rectangle rect2(5.0, 3.0);
        cout << "Area of rect2: " << rect2.calculatePerimeter() << endl;
    } // Destructors called here

    return 0;
}