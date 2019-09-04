#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int mn = max(0, n-2*m);
    int mx = 0;
    n-=2;
    m--;
    while(n >0 && m > 0){
        m--;
        n--;
       
    }
    mx = n;
    cout << mn << " " << mx;
}
