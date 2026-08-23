#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int month = 0;
        int day = 0;
        int year=0;
        int first = stoi(s.substr(0,2));
        int second = stoi(s.substr(3,2));
        bool ddmm = (first >= 1 && first <= 31 && second >=1 && second <=12);
        bool mmdd = (first >= 1 && first <= 12 && second >=1 && second <= 31);
        if(ddmm && mmdd){
            cout <<"BOTH\n";
        }
        else if (ddmm){
            cout << "DD/MM/YYYY\n" << endl;
        }
        else{
            cout << "MM/DD/YYYY\n" << endl;
        }
    }
    return 0;
}
        