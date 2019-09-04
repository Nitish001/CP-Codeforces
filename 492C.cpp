#include <bits/stdc++.h>
using namespace std;
#define int int64_t
struct cus{
    int a;
    int b;

};
bool cmp(cus A, cus B){
    return A.b < B.b;
}
int32_t main(){
    int n, r, avg;
    cin >> n >> r >> avg;
    cus A[n];
    avg *= n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> A[i].a;
        sum+=A[i].a;
        cin >> A[i].b;
    }
    sort(A, A+n,cmp);
    int i = 0;
    int need = avg-sum;
  //  cout <<"Need :: "<<need <<'\n';
    int cnt = 0;
    while(need > 0){

            if(A[i].a == r ){
                i++;
                continue;
            }
        if(r- A[i].a  <= need){
            need = need - (r-A[i].a);
           
            cnt += (A[i].b*(r-A[i].a));
         //   cout << cnt <<" ";
             i++;
            continue;
        }
        else {
          
            cnt+=need*A[i].b;
            need = 0;
        }
        
    }
    cout << cnt <<"\n";
}