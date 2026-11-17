#include <iostream>
using namespace std;

template <typename T, typename U>
void display(T x, U y) {
    cout << x << " " << y << endl;
}

int main() {
    display(10, 20.5);
    display("Hello", 100);
    return 0;
}