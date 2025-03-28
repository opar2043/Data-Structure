#include <iostream>
#include <cmath>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const {
        return length * width;
    }
    double perimeter() const {
        return 2 * (length + width);
    }

    void display() const {
        cout << "Rectangle:" << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

class Circle {
private:
    double radius;
public:

    Circle(double r) : radius(r) {}
    double area() const {
        return M_PI * radius * radius;
    }
    double perimeter() const {
        return 2 * M_PI * radius;
    }
    void display() const {
        cout << "Circle:" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};
int main() {

    Rectangle obj(6, 3);
    obj.display();
    cout << endl;
    Circle obj1(4);
    obj1.display();

    return 0;
}

