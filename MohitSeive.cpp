#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define f(i,x,n) for(ll int i=x;i<n;i++) 
#define re(j,x,n) for(ll int j=x;j>=n;j--)
#define f1(k,x,n) for(ll int k=x;k<=n;k++)
#define mp make_pair
#define pb push_back
using namespace std;
vector <ll int> v;
ll int a=1000001;
void sieve ()
{
   for(int i = 0; i < a; i++)
   {
     v.push_back(1);
   }
   v[0]=v[1]=0;
   for(ll int i=2;i*i<a;i++)
   {
      if(v[i]==1)
      {
         for(ll int j=i;j<a;j+=i)
         v[j]=0;
      }
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    ll int n;
    cin>>n;
    ll int a[n];
    f(i,0,n)
    {
      cin>>a[i];
    }
    f(i,0,n)
    {
      if(v[a[i]]==1)
      {
        cout<<"NO"<<endl;
        continue;
      }
      if(v[a[i]]==0)
      {
        f1(j,2,sqrt(a[i]))
        {
          if(a[i]%j==0)
          { 
            if(a[i]/j==j)
            { 
              if(v[j]==1)
              {
                cout<<"YES"<<endl;
                break;
              }
              else
              {
                cout<<"NO"<<endl;
                break;
              }
            }
          }
        }

      }
    }
}