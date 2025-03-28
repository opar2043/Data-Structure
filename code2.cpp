#include <iostream>
using namespace std;
class Complex {
private:
    float realNumber;
    float imagNumber;

public:
    Complex(double r = 0.0, double i = 0.0) : realNumber(r), imagNumber(i) {}
    Complex operator + (const Complex& other) const {
        return Complex(realNumber + other.realNumber, imagNumber + other.imagNumber);
    }
    void display() const {
        cout << realNumber << " + " << imagNumber << "i" << endl;
    }
};
int main() {

    Complex cFrist(6.2, 2.5);
    Complex cSecond(4.4, 7.7);
    Complex cThird = cFrist +cSecond;
    cout << "Frist Complex number : ";
     cFrist.display();
    cout << "Second Complex number 2: ";
    cSecond.display();
    cout << "Sum of the two complex numbers: ";
    cThird.display();
    return 0;
}
