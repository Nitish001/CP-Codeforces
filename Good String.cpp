#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r="";
    for(int i = 0; i < n; i++){
        if(r.size()%2 == 0 || r.back() != s[i]){
            r.push_back(s[i]);
        }
    }

    if(r.size()%2 == 1) r.pop_back();

    cout << n-r.size() << '\n' << r;
}