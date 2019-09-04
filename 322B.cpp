#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int r, g, b;
    cin >> r >> g >> b;
    int amount = r/3+ g/3 + b/3;
    int remr = r%3 , remg = g%3, remb = b%3;
    amount += min(remr, min(remg, remb));
    if(remr == 2 && remg == 2 && remb == 0 && b!=0 || 
       remr == 2 && remg == 0 && remb == 2 && g!=0 ||
        remr == 0 && remg == 2 && remb == 2 && r!=0){
            amount++;
        }
    cout << amount; 
}