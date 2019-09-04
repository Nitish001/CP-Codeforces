#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
  //  int A[2*n];
    //for(int i = 0; i < n; i++) cin >> A[i];
    vector<vector<int>> v(5001);
    for(int i = 0; i <2*n; i++){
        int a;
        cin >> a;
        v[a].push_back(i+1);
    }
    bool flag = true;

    for(int i = 0; i < 5001; i++){
        for(int k = 0; k < v[i].size(); k++){
            for(int j = k+1; j < v[i].size(); j++){
                flag = false;
                cout << v[i][k] <<" "<<v[i][j]<<'\n';
            }
        }
    }
    if(flag)
    cout << "-1";
}