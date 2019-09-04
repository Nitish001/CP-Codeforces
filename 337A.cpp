#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int A[m];
    for(int i = 0; i < m; i++){
        cin >> A[i];
        
    }
    sort(A, A+m);
    int l = INT32_MAX;
    for(int i = 0; i < m-n+1; i++){
        int sum = 0;
        for(int j = i; j < n+i-1; j++){
            sum+=(A[j+1]-A[j]);
        }
        l = min(sum, l);
    }
    cout << l << endl;
}