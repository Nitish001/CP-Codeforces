#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    cin >> k;
    int d = 0;
    int A[n];
    cin >> A[0];
    for(int i = 1; i < n; i++){
        cin >> A[i];
        if(A[i-1] != A[i]){
            d++;
        }
    }
    if(d> 2){
        cout << -1;
        return 0;
    }

    if(A[k-1])

}