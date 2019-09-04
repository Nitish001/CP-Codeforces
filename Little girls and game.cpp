#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int A[26] = {0};
    for(int i = 0; i < s.size(); i++) A[s[i]-'a']++;
    int oc=0;
    for(int i = 0; i < 26; i++){
        if(A[i]%2 == 1){
            oc++;
        }
    }
    
    if(oc%2 != 0) cout << "First";
    else cout << "Second";
}