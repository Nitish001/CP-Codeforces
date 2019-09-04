#include <bits/stdc++.h>
using namespace std;

bool chk1(string s, int n){
    int i = 0, j = n;
    while (i < n && j < 2*n)
    {
        if(s[i] < s[j]){
            i++; j++;
        }
        else{
            return false;
        }
    }
    return true;
    
}

bool chk2(string s, int n){
    int i = 0, j = n;
    while (i < n && j < 2*n)
    {
        if(s[i] > s[j]){
            i++; j++;
        }
        else{
            return false;
        }
    }
    return true;
    
}


int main(){
    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    string s;
    cin >> s;
    sort(s.begin(), s.begin()+n);
    sort(s.begin()+n, s.end());
    bool check1 = chk1(s, n);
    bool check2 = chk2(s, n);
    if(check1 || check2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
   

}