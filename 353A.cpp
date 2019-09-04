#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x, y;
    int ls = 0, rs = 0;
    bool parity = true;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x == y && x&1) {parity = false; cnt++;}
        ls+=x; rs+=y; 
    }

    if(ls%2==0 && rs%2 == 0){
        cout << 0;
    }
    else if(ls%2 == 1 && rs%2 == 1 && n!=1 && (parity&&cnt%2 == 1)){
        cout << 1;
    }
    else{
        cout << -1;
    }

}