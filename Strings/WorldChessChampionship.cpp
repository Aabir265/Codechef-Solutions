#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++){
        int X;
        string S;
        
        cin >> X;
        cin >> S;
        
        
    int carlsen =0;
    int codechef=0;
    
        for(int i = 0 ; i < 14 ; i++){
            if(S[i] == 'C'){
                carlsen += 2;
            }
            else if(S[i] == 'N'){
                codechef += 2;
                
            }
            else if (S[i] = 'D'){
                carlsen += 1;
                codechef += 1;
            }
        }
            if(carlsen > codechef){
                cout << 60 * X << "\n";
            }
            else if(carlsen < codechef){
                cout << 40 * X << "\n";
            }
            else if(carlsen == codechef){
                cout << 55 * X << "\n";
            }
    }   
        return 0;
    
    
    
    
    

}
