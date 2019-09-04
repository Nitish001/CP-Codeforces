#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool flag = true;
    string r = "";
    int k = 0;

    for(int i = k; i < s.size(); i++){
        if(flag && s[i] == '0'){
            flag = false;
            continue;
        }
        
        r+=s[i];
    }
    if(r.size() == s.size()) cout << r.substr(1);
    cout << r;
}