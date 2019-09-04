#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int t = n*m;
    int count = 0;
    while(t > 0){
        count++;
        t-=(n+m-1);
        n--; m--;
    }
    if(count&1){
        cout << "Akshat";
    }
    else{
        cout << "Malvika";
    }
}