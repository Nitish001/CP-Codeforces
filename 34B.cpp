#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n;
    cin >> n;
    int m;
    cin >> m;
    ll sum = 0;
    int cnt = 0;
    ll A[n];
    for(int i = 0; i < n && cnt < m; i++){
       cin >> A[i];
       
    }
    sort(A, A+n);
      for(int i = 0; i < n && cnt < m; i++){
        ll a = A[i];
        if(a <0){
            sum+=a;
            cnt++;
        }
       
    }
     cout << -1*sum;
}