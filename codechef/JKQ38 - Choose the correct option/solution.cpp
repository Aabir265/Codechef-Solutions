#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}
    operator string() const {
        return "Value: " + to_string(value);
    }
};

int main() {
    Test t(42);
    string s = t;
    cout << s << endl;
    return 0;
}