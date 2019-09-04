#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    multiset<int> s;
    bool A[1000+1];
    for(int i = 1; i <= 1000; i++){
        A[i] = false;
     }
    for(int i = 0; i< n; i++){
        int a, b;
        cin >> a >> b;
        s.insert(a); s.insert(b);
        if(a != b) A[b] = true;
    }
    int cnt = 0;
    for(auto x : s){
        if(!A[x]) cnt++;
    }
     cout << cnt <<"\n";
}