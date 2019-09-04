#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
bool prime[MAX+1];
#define int int64_t
void calc(){
    for(int i = 1; i <= MAX; i++){
        prime[i] = true;
    }
    for(int i = 2; i*i <= MAX; i++){
        for(int j = 2; j*i <=MAX; j++){
            prime[i*j] = false;
        }
    }
    //  for(int i = 1; i <= MAX; i++){
    //    if( prime[i] == true) cout << i <<" ";
    // }
}
bool isPerfect(int a){
    if(sqrt(a) - int(sqrt(a)) == 0) return true;
    else return false;
}
int32_t main(){
   calc();
   int n;
   cin >> n;
   while (n--)
   {
       /* code */
       int a;
       cin >> a;
       if(a == 1) {cout << "NO\n"; continue;}
    //    cout << prime[int(sqrt(a))] <<'\n';
    //    cout << sqrt(a);
       if(isPerfect(a) && prime[int(sqrt(a))]){
           cout << "YES\n";
       }
       else{
           cout << "NO\n";
       }
   }
   
}