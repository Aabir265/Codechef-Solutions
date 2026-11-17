#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}
    operator double() const {
        return value + 0.25;
    }
};

int main() {
    Test t(10);
    double d = t;
    cout << d << endl;
    return 0;
}