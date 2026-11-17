#include <iostream>
using namespace std;

template <typename T>
class Test {
public:
    Test() {
        cout << "General Template" << endl;
    }
};

template <>
class Test<int> {
public:
    Test() {
        cout << "Specialized Template for int" << endl;
    }
};

int main() {
    Test<double> obj1;
    Test<int> obj2;
    return 0;
}