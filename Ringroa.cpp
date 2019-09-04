#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll n, m;
    cin >> n >> m;
    ll A[m];
    for(int i = 0; i < m; i++) cin >> A[i];

    ll start = 1;
    ll i = 0;
    ll cnt = 0;
    while(i < m){
        if(start > A[i]){
            A[i]+=n;
        }
        cnt += A[i]-start;
     //   cout << cnt <<" ";
        start = A[i];
        if(start>n)
        start%=n;
        
        i++;
    }
 //   cout << endl;
    cout << cnt;
}