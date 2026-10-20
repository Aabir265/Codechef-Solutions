#include <iostream>
using namespace std;

class A {
};

class B : public A {
public:
    B(int b) {
        cout << "B=" << b << endl;
    }
};

int main() {
    A *b = new B(5);
    return 0;
}