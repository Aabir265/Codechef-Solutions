#include <iostream>
using namespace std;

class Matrix {
private:
    int data;
public:
    Matrix(int value = 0) : data(value) {}

    Matrix operator+(const Matrix & other) {
        return Matrix(data + other.data);
    }

    Matrix & operator++() {
        ++data;
        return *this;
    }

    Matrix operator++(int) {
        Matrix temp = *this;
        data++;
        return temp;
    }

    void display() const {
        cout << data << endl;
    }
};

int main() {
    Matrix m1(5), m2(10);
    Matrix m3 = m1 + m2++;
    m3.display();
    m1.display();
    m2.display();
    return 0;
}