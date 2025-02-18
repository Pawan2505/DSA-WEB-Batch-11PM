#include<iostream>
using namespace std;

class Complex {
    public:
    int real;
    int img;

    Complex() {
        real = 0;
        img = 0;
    }

    Complex(int real, int img) {
        this->real = real;
        this->img = img;
    }

    // Operator Overloading for Addition
    Complex operator +(Complex &other) {
        Complex result;
        result.real = real + other.real;
        result.img = img + other.img;
        return result;
    }

    void getComplex() {
        cout << "Complex number: " << real << "+" << img << "i" << endl;
    }
};

int main() {
    Complex c1(5, 4);
    Complex c2(2, 1);
    Complex c3 = c1 + c2;

    c3.getComplex();
    return 0;
}
