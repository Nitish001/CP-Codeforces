#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int A[3001] = {0};
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        A[a]++;
    }
    for(int i = 1; i < 3001; i++){
        if(A[i] == 0){
            cout << i <<"\n";
            return 0;
            break;
        }
    }
     cout << 3001;
    
}