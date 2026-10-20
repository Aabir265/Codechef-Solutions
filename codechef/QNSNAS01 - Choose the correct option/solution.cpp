#include <iostream>
using namespace std;

void display(int x = 10) {
    cout << " Integer : " << x << endl;
}

void display(double y) {
    cout << " Double : " << y << endl;
}

int main() {
    display();
    display(3.14);
    return 0;
}