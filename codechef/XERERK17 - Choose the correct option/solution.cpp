#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    void info() {
        cout << " Shape info 
";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << " Drawing Circle 
";
    }
    void info() {
        cout << " Circle info 
";
    }
};

int main() {
    Circle c;
    Shape * shape = &c;
    shape->draw();
    shape->info();
    return 0;
}