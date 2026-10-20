#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}
    void operator++() {
        ++value;
    }
    void display() const {
        cout << value << endl;
    }
};

int main() {
    Test t(5);
    ++t;
    t.display();
    return 0;
}