#include <iostream>
using namespace std;

int main() {
    try {
        throw 1.5;
    } catch (int e) {
        cout << "Caught int: " << e << endl;
    } catch (...) {
        cout << "Caught unknown exception" << endl;
    }
    return 0;
}