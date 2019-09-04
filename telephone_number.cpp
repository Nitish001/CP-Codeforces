#include<bits/stdc++.h>
using namespace std;

bool check(int n, string num){
    int td = num.size() - 11;
    if(num.size() < 11){
        return false;
    }
    int p8 = INT_MAX;
    for(int i = 0; i < num.size(); i++){
        if(num[i] == '8') {p8 = i; break;}
    }

    if(p8 <= td){
        return true;
    }
    return false;;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string num;
        cin >> num;
        if(check(n, num)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
}