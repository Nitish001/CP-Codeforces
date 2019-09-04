#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int A[n];
    for(int i = 0; i < n; i++) cin >> A[i];
    int glo = INT_MAX, cur_min = 0;
    int i ;
    for( i = 0; i < k; i++){
        cur_min+=A[i];
    }
    int idx = 0;
    if(cur_min < glo){
        idx = i;
        glo = cur_min;
    }
   
    for( i = k; i < n; i++){
        cur_min = cur_min-A[i-k]+A[i];
         if(cur_min < glo){
         //    cout << cur_min <<"\n";
        idx = i-k+1+1;
        glo = cur_min;
    }
   
    }
    cout << idx <<'\n';
}