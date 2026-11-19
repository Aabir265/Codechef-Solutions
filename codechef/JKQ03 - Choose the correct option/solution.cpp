#include <iostream>
using namespace std;

void func() throw(int) { // Exception specification
    throw 5;
}

int main() {
    try {
        func();
    } catch (int e) {
        cout << "Caught exception: " << e << endl;
    }
    return 0;
}