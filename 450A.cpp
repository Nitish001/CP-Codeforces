#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
 //   int A[n];
    int idx = 0, mx = INT16_MIN;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cout << ceil(a/m) << " ";
        if(ceil(a/m)>=mx){
            mx = ceil(a/m);
            idx = i+1;
        }
    }
    cout << idx;

}