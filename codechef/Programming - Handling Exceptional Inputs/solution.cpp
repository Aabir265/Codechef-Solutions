#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int main() {
    try {
        int num1, num2;
        cin >> num1 >> num2;

        try {
            // Attempt to perform division
            if (cin.fail()) {
            throw invalid_argument("invalid input.");
            }

            int result = num1 / num2;
            cout << "Result of division: " << result << endl;

        } catch (const invalid_argument& e) {
            cout<<e.what()<<endl;
        }

    } catch (...) {
        cout<<"An unknown error occured"<<endl;
    }

    return 0;
}