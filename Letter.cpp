#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, c;
    getline(cin, s);
    getline(cin, c);
    int A[256]={0};
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') continue;
        A[s[i]]++;
    }

    for(int i = 0; i < c.size(); i++){
        if(c[i] == ' ') continue;
        A[c[i]]--;
    }

    bool check = true;
    for(int i = 0; i < 256; i++){
        if(A[i] < 0){
            check = false;
            break;
        }
    }
    if(check){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}