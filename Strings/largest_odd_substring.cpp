#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    string num;
    cin >> num;
    int lastOdd = -1;
    for(int i = 0 ; i < num.length() ; i++){
        int digit = num[i] - '0';
        if(digit % 2 != 0){
            lastOdd = i;
        }
        
    }
    if(lastOdd  == -1){
        cout << "";
    }
    else{
        cout << num.substr(0, lastOdd + 1);
    }
    return 0;
}