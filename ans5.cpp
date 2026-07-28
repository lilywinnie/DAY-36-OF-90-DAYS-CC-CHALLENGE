#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while(T--){
        
        int X,Y,R;
        cin>>X>>Y>>R;
        
        int extra = R/30;
        int total = X+extra;
        
        int plates = total/Y;
        
        if(total%Y!=0)
            plates++;
        
        cout<<plates<<"\n";

    }
}
