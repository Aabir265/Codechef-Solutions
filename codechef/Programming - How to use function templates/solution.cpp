#include <iostream>
using namespace std;

// Define the SwapValues function template here
template<typename T>
void SwapValues(T &a,T &b){
   T temp=a;
    a=b;
    b=temp;
}

int main() {
    // Swap two integers
    int x = 5, y = 10;
SwapValues(x,y);
cout<<x<<endl;
cout<<y<<endl;
    // Call the SwapValues function template to swap x and y
    // Print the values of x on first line and y on second line after swapping

    // Swap two double values
    double a = 2.5, b = 3.7;
    SwapValues(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    // Call the SwapValues function template to swap a and b
    // Print the values of a on third line and b on fourth line after swapping

    return 0;
}