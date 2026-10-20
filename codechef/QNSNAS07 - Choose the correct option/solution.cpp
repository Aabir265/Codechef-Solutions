#include <iostream>
using namespace std;

class Array {
    int arr[5];
public:
    Array() {
        for (int i = 0; i < 5; ++i)
            arr[i] = i + 1;
    }
    int operator[](int index) const {
        return arr[index];
    }
};

int main() {
    Array a;
    cout << a[2] << endl;
    return 0;
}