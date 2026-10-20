#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A";
    }
    A(int a) {
        A();
        cout << "A=" << a << endl;
    }
};

class B : public A {
public:
    B(int b) : A(0) {
        cout << "B=" << b << endl;
    }
};

int main() {
    A *b = new B(5);
    return 0;
}