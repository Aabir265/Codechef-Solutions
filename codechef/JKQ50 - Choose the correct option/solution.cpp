#include <iostream>
using namespace std;

template <typename T>
void print(T x) {
    cout << "Template: " << x << endl;
}

template <>
void print<int>(int x) {
    cout << "Specialized Template: " << x << endl;
}

int main() {
    print(10);
    print(10.5);
    return 0;
}