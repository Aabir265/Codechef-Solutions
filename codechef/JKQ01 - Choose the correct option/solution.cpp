#include <iostream>
using namespace std;

void func() {
    try {
        throw "An error occurred!";
    } catch (const char* e) {
        cout << "Caught in func: " << e << endl;
        throw; // Re-throwing the exception
    }
}

int main() {
    try {
        func();
    } catch (const char* e) {
        cout << "Caught in main: " << e << endl;
    }
    return 0;
}