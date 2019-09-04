#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int A[n], B[n];
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        cin >> B[i];

    }


    int mx=0, mn = INT32_MAX;
    for(int i = 0; i < n; i++){
        mn = min(A[i], mn);
        mx = max(mx, B[i]);
    }

    int idx = -1;
    for(int i = 0; i < n; i++){
        if(A[i] <= mn && B[i] >= mx){
            idx = i+1;
        }
    }
    cout << idx;
}