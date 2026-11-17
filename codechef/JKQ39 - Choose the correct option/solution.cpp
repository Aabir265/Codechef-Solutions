#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}
    operator int() const {
        return value * 2;
    }
};

int main() {
    Test t(10);
    int x = t;  // Conversion operator is called
    Test t2 = 20;  // Conversion constructor is called
    cout << x << " " << t2.operator int() << endl;
    return 0;
}