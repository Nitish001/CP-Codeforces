#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int mx = 0;
    int curr = 0;
    for(int i = 0; i < m; i++){
        int an = 1;
        string x;
        cin >> x;
        for(int j = 0; j < n; j++){
            an&=(x[j]-'0');
        }
        if(an){
            curr=0;
        }
        else{
            curr++;
        }
        mx = max(curr, mx);
    }
    cout << mx << '\n';
}