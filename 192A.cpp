/*
A. Funky Numbers

As you very well know, this year's funkiest numbers are so called triangular numbers (that is, integers that are representable as , where k is some positive integer), and the coolest numbers are those that are representable as a sum of two triangular numbers.

A well-known hipster Andrew adores everything funky and cool but unfortunately, he isn't good at maths. Given number n, help him define whether this number can be represented by a sum of two triangular numbers (not necessarily different)!

Input
The first input line contains an integer n (1 ≤ n ≤ 109).

Output
Print "YES" (without the quotes), if n can be represented as a sum of two triangular numbers, otherwise print "NO" (without the quotes).


*/
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define MAX 1000001
int32_t main(){
    int n;
    cin >> n;
    int dp[MAX+1];
    dp[0] = 0;
    for(int i = 1; i <= MAX; i++){
        dp[i] = dp[i-1]+i;
    }
    for(int i = 1; i < MAX; i++){
        if(binary_search(dp+1, dp+MAX+1, n-dp[i])){
         //   cout << n-dp[i] <<" ";
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}