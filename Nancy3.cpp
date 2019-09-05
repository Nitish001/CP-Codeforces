#include <bits/stdc++.h>
using namespace std;
struct cus
{
    int cnt;
    char c;
};
struct cmp{
bool operator()(cus a, cus b){
    return a.cnt  < b.cnt;
}
};
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string ans = "";
    int i = 0;
    priority_queue<cus, vector<cus> , cmp> p;
    p.push({a, 'a'});
    p.push({b, 'b'});
    p.push({c, 'c'});
  //  cout << "yo worked;";
    while (!p.empty())
    {
        cus temp = p.top();
        p.pop();
//cout << "yo worked;";
        if (ans.size() == 0)
        {
      //      cout << "size 0;";
            if (temp.cnt > 0)
            {
                ans += temp.c;
                temp.cnt--;
                i++;
            }
            if (temp.cnt)
            {
                ans += temp.c;
                temp.cnt--;
                i++;
            }
            if(temp.cnt != 0)
            p.push(temp);
        }
        else if (ans[i - 1] == temp.c)
        {
            cus temp2 = p.top();
            p.pop();
             if (temp2.cnt > 0)
            {
                ans += temp2.c;
                temp2.cnt--;
                i++;
            }
            if (temp2.cnt > 0)
            {
                ans += temp2.c;
                temp2.cnt--;
                i++;
            }
            if(temp2.cnt != 0)
            p.push(temp2);
            if(temp.cnt != 0)
            p.push(temp);
        }
        else{
            if (temp.cnt > 0)
            {
                ans += temp.c;
                temp.cnt--;
                i++;
            }
            if (temp.cnt)
            {
                ans += temp.c;
                temp.cnt--;
                i++;
            }
            if(temp.cnt != 0)
            p.push(temp);
        }
    }
    cout << ans;
}