#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    ll A[n];
    // cin >> A[0]
    ll B[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B, B+n);
    for(int i = 1; i < n; i++){
        A[i] = A[i] + A[i-1];
        B[i] = B[i] + B[i-1];
    }
    int t;
    cin >> t;
    while(t--){
        int qt, a, b;
        cin >> qt >> a >> b;
        if(qt == 1){
            if(a-2 >= 0)
            cout << A[b-1] - A[a-2]<<"\n";
            else
            cout << A[b-1]<<'\n';
        }
        else{
             if(a-2 >= 0)
            cout << B[b-1] - B[a-2]<<"\n";
            else
            cout << B[b-1]<<'\n';
        }

    }
}