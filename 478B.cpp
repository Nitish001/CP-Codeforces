#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main(){
    int m, n;
    cin >> n >> m;
    int x = n-m;
    int mx = (x*(x+1))/2;
    int q = n/m;
    int rem = n%m;
    int mn = 0;
    
            mn+=(((q)*(q+1))/2)*(rem);
          
       
             mn+=(((q-1)*(q))/2)*(m-rem);
           // rem--;
        
    
    cout << mn <<" "<<mx;
    
}