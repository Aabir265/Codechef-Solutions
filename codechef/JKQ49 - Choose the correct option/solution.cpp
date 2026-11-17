#include <iostream>
using namespace std;

template <typename T>
void print(T x) {
    cout << "Template: " << x << endl;
}

void print(int x) {
    cout << "Non-template: " << x << endl;
}

int main() {
    print(10);
    print(10.5);
    return 0;
}