#include <iostream>
using namespace std;

bool check(string s, string s0){
      string a = "", b = "";
        if(s.size() != s0.size()) return 0;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != s0[i]){
                cnt++;
                a+=s[i];
                b+=s0[i];
            }
            if(cnt > 2) {
                return 0;
            }
        }

        if(a[1] != b[0] || b[1] != a[0]){
            return 0;
        }
        return 1;
}

int main(){
    string s;
    string s0;
    cin >> s >> s0;
    bool flag = check(s, s0);
    if(check(s, s0)) cout << "YES";
    else cout << "NO";
}