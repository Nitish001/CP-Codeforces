#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int A[1001] = {0};
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        A[a]++;
    }
    int mx = 0;
    for(int i = 0; i < 1001; i++){
        mx = max(mx, A[i]);
    }
   // cout << mx << "\n";
    if(mx  <= (n+1)/2){
        cout << "YES" <<'\n';
    }
    else {
        cout << "NO" <<'\n';
    }
}