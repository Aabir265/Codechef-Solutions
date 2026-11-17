#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}
    int getValue() const {
        return value;
    }
};

int main() {
    Test t = 5;  // Implicit conversion from int to Test
    cout << t.getValue() << endl;
    return 0;
}