#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct yoo{
    int x; int y;
};

bool cmp(yoo a, yoo b){
    if(a.x < b.x) return true;
    return false;
}


int main(){
    int n;
    cin >> n;
    yoo A[n];
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        A[i].x = a;
        int b;
        cin >> b;
        A[i].y = b;
      }

  
      
    sort(A, A+n, cmp);
    int i = 0;
    int j = n-1;
    if(A[i].x < A[j].x && A[i].y  > A[j].y) cout << "Happy Alex";

    else cout << "Poor Alex";
}