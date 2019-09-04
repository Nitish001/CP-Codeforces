#include<iostream>
using namespace std;


bool check(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '1' && s[i] != '4'){
            return false;
        }
    }

    if(s[0] == '4') return false;
    if(s.find("444") != -1){
        //cout << s.find("444");
        return false;
    }
    return true;

}


int main(){
    string s;
    cin >> s;
    if(check(s)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}