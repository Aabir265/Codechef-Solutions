#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}
    operator int() const {
        return value;
    }
};

int main() {
    Test t(10);
    int x = t;
    cout << x << endl;
    return 0;
}