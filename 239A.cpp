#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define f(i,x,n) for(ll int i=x;i<n;i++) 
#define re(j,x,n) for(ll int j=x;j>=n;j--)
#define f1(k,x,n) for(ll int k=x;k<=n;k++)
#define mp make_pair
#define pb push_back
#define mod 1000000007
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int y,k,n,x=1,f=0,mult,i=1;
    cin>>y>>k>>n;
    mult=k;
    while(mult<=n)
    { 
       if(y<mult)
       {
       	 cout<<mult-y<<" ";
       	 f=1;
       }
       i++;
       mult=k*i;
    }
    if(f==0)
     cout<<-1;
}