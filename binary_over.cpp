#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    bool operator == (const Complex& obj) {
        return (real == obj.real && imag == obj.imag);
    }
    bool operator < (const Complex& obj) {
        float magnitude1 = sqrt(real * real + imag * imag);
        float magnitude2 = sqrt(obj.real * obj.real + obj.imag * obj.imag);
        return magnitude1 < magnitude2;
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3.0, 4.0);  
    Complex c2(1.0, 2.0);  
    Complex c3(3.0, 4.0);  
    Complex c4 = c1 + c2;
    cout << "c1 + c2 = ";
    c4.display();
    if (c1 == c3) {
        cout << "c1 and c3 are equal." << endl;
    } else {
        cout << "c1 and c3 are not equal." << endl;
    }
    if (c1 < c2) {
        cout << "c1 is less than c2." << endl;
    } else {
        cout << "c1 is not less than c2." << endl;
    }

    return 0;
}
