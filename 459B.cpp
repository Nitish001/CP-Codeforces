#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    ll A[n];
    for(ll i = 0; i < n; i++) cin >> A[i];
    sort(A, A+n);
    ll cnt = 0;
    ll a = A[0];
    ll mx = A[n-1]-a;
    ll j = n-1;
    while(j >=0){
        if(A[j] == A[n-1]){
            cnt++;
        }
        j--;
    }
    ll cntm = 0;
    for(ll i = 0; i < n; i++){
        if(A[0] == A[i]) cntm++;
    }
    if(A[0] == A[n-1]) {
        cnt = 1;
        cntm = (((n))*(n-1))/2;
    }
    cout << mx << " "<< cntm*cnt;
}