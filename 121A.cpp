#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000007
int main(){
  
    vector<ll> num;
    num.push_back(4);
    num.push_back(7);
    ll i = 1;
    for(i = 1; i < MAX; )
    {   i = i*10+1;
        ll a= i*4;
        num.push_back(a);
        num.push_back(a+3);
        ll b = i*7;
        num.push_back(b-3);
        num.push_back(b);
     
     //   cout << i << " ";
    }
     for(auto x : num) cout << x <<" ";
    ll l, r;
    ll sum = 0;
    cin >> l >> r;
    vector<ll>::iterator itr = lower_bound(num.begin(), num.end(), l);
    if(*itr < l){
        cout << *itr;
        itr++;
    }
    while (l <= r)
    {
       sum+=*itr;
  //   cout << *itr <<" ";
       l++;
       if(l > *itr){
           itr++;
       }
    }

    cout <<sum;
    

}