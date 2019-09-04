#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    bool flag = true;
    while(a!=b){

        a++;
        if(a == n+1) { a = 1;}
        b--; 
        if(b == 0) { b = n;}

        if(a == x || b == y){
            if(a==b){
                flag = true;
            }
            else{
                flag = false;
            }
            break;
        }
    }
    if(flag){
        cout << "YES" <<'\n';
    }
    else{
        cout << "NO" <<'\n';
    }
}