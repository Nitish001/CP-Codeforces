#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long A[n];
    for(long long i = 0; i < n; i++) cin >> A[i];
    sort(A, A+n);
    long long r = 0;
    for(long long i = 1; i <= n; i++){
            r+=abs(i-A[i-1]);
    }
    cout << r << endl;
}
