#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int r = 0;
    int a = n-1; int b = 1;
    while(a > 0){
        r += a*b;
        a--; b++;
    }
    cout << r+n;
}