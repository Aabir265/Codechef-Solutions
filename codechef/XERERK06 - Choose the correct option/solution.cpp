#include <iostream>
using namespace std;

class A {
protected:
    void funA() {
        cout << "A";
    }
};

class B : public A {
public:
    void funA() {
        cout << "B";
        A::funA();
    }
};

int main() {
    B b;
    b.funA();
    return 0;
}