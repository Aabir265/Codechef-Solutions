#include <iostream>
using namespace std;
template <typename T>
class Class {
    private: T value;
    public: Class(T val);
    T multiply(T factor);
};

template <typename T>
Class<T>::Class(T val) { value = val; }

template <typename T>
T Class<T>::multiply(T factor) { return value * factor; }

template <> int Class<int>::multiply(int factor) { return value * factor * 2; }

int main() {
Class<double> obj1(5.5);
cout << obj1.multiply(2.0) << endl; Class<int> obj2(5); cout << 
    obj2.multiply(2) << endl;
return 0;
}