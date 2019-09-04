#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    char c[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) 
           {
               char c;
               cin >> c;
               if(c == '.')
               if((i+j)&1) cout << 'B';
               else cout << 'W';
               else cout << c;
           }
     
    }
}