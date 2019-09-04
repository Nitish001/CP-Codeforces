#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int A[7];
    int sum = 0;
    for(int i = 0; i < 7; i++){
        cin >> A[i];
        sum+=A[i];
    }
  
  
    int c = 1;
    int i = 0;
    while(n > 0){
        n -= A[i];
        if(n<=0) break;
        i++; c++;
        if(c > 7) c = 1;
        if(i > 6) i = 0;
    }
    cout << c;
}