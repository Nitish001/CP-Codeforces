#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int A[26]= {0};
    for(int i = 0;i < s.length(); i++){
        A[s[i]-'A']++;
    }
    sort(A, A+26, greater<int>());
    int i = 0;
    int ans = 0;
    while(k > 0){
        ans += min(k, A[i])*min(k, A[i]);
        k-=A[i];
        i++;
    }
    cout << ans;
}