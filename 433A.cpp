#include <iostream>
using namespace std;
#define ll long long
int main(){

    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;
    if( n== 1) {cout << "NO"; return 0;}
    for(int i = 0; i < n; i++) {
        int a ;
        cin >> a;
        if(a == 100){
            cnt1++;
        }
        else {
            cnt2++;
        }
    }
    ll sum = cnt1*100 + cnt2*200;
    if(sum%2 != 0) cout <<"NO";
    else if(cnt1 == 0 && cnt2%2!=0) cout << "NO";
    else if(cnt1%2 != 0) cout <<"NO";
    else cout << "YES";
    return 0;
    


}