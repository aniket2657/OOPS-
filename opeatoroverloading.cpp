#include<iostream>
using namespace std;

class complex {
    int real;
    int img;

public:
    // Default constructor
    complex() {
        real = 0;
        img = 0;
    }

    // Parameterized constructor
    complex(int r, int i) {
        real = r;
        img = i;
    }

    // Overloaded + operator
    complex operator+(complex c3) {
        complex temp;
        temp.real = real + c3.real;
        temp.img = img + c3.img;
        return temp;
    }

    // Overloaded - operator
    complex operator-(complex c3) {
        complex temp;
        temp.real = real - c3.real;
        temp.img = img - c3.img;
        return temp;
    }

    // Overloaded == operator
    bool operator==(complex c3) {
        if (real == c3.real && img == c3.img) {
            return true;
        } else {
            return false;
        }
    }

    // Display function
    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    complex c1(1, 2);
    complex c2(1, 4);
    
    // Using the + and - operators
    complex c3 = c1 + c2;
    c3.display();  // Displays result of c1 + c2
    
    c3 = c1 - c2;
    c3.display();  // Displays result of c1 - c2
    
    // Using the == operator
    if (c1 == c2) {
        cout << "c1 is equal to c2" << endl;
    } else {
        cout << "c1 is not equal to c2" << endl;
    }

    return 0;
}
