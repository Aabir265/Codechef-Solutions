#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        string num;
        cin >> num;
        int i = num.length() - 1;
        while(i >= 0 && num[i] == '9'){
            num[i] = '0';
            i--;
        }
        if(i >= 0){
            num[i]++;
        }
        else{
            num = '1' + num;
        }
        cout << num<< endl;
    }
return 0;
}
