#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            A[i] = a % 3;
        }

        int cnt2 = 0, cnt1 = 0;
        int cnt3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == 1)
                cnt1++;
            else if (A[i] == 2)
                cnt2++;
            else
                cnt3++;
        }
        int total = cnt3;
        if(cnt1 > cnt2){
            total += cnt2;
            cnt1-=cnt2;
            cnt2 = 0;

        }
        else{
            total+= cnt1;
             cnt2-=cnt1;
            cnt1 = 0;
           
        }

        total += (cnt1/3 + cnt2/3);
          cout << total <<'\n';
    }
  
}