#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum= 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        sum+=a;
    }

    n = n+1;
    int r = sum%n;
    if(r < n-5){
        cout << 5;
        return 0;
    }
    int cnt = 0;
    int un=5;
    while(un--){
        if((r+un)% n == 0)
            {
                continue;
            }
        else{
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}