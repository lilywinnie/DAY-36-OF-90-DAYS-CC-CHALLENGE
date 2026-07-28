#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while(T--){
        
        int X,Y,Z;
        cin>>X>>Y>>Z;
               
       if (Z >= Y) {
            cout << Y * 2 << "\n";
        } 
        
        else {
            cout << Z * 2 << "\n";
        }
            
        
    }
    
    return 0;
    
}
