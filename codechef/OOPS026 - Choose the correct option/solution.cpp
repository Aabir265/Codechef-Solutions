#include <iostream>
using namespace std;

class A {
    void funA() {
        cout << "A";
    }
};

class B : public A {
public:
    void funA() {
        cout << "B";
    }
};

int main() {
    A b;
    b.funA();
    cout << sizeof(B);
    return 0;
}