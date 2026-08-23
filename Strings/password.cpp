#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        string pass;
        cin >> pass;
        bool upper = false;
        bool lower = false;
        bool digit = false;
        string special = "@#%&?";
        bool special_found = false;
        
        for(int i = 0 ; i < pass.length() ; i++){
            char c = pass[i];
            if(islower(c)){
                lower = true;
            }
            else if(i > 0 && i < pass.length() - 1){
            if(isupper(c)){
                upper = true;
            }
            else if(isdigit(c)){
                digit = true;
            }
            else if(special.find(c) != string::npos){
                special_found = true;
            }
        }
        }
        if(pass.length() >= 10 && lower && digit && special_found && upper){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
