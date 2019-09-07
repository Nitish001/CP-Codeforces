/*
B. Little Pony and Sort by Shift

One day, Twilight Sparkle is interested in how to sort a sequence of integers a1, a2, ..., an in non-decreasing order. Being a young unicorn, the only operation she can perform is a unit shift. That is, she can move the last element of the sequence to its beginning:

a1, a2, ..., an → an, a1, a2, ..., an - 1.
Help Twilight Sparkle to calculate: what is the minimum number of operations that she needs to sort the sequence?

Input
The first line contains an integer n (2 ≤ n ≤ 105). The second line contains n integer numbers a1, a2, ..., an (1 ≤ ai ≤ 105).

Output
If it's impossible to sort the sequence output -1. Otherwise output the minimum number of operations Twilight Sparkle needs to sort it.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int check = 0, idx = 0;
    for(int i = 0; i < n-1; i++) if(A[i] > A[i+1]) idx = i, check++;
    if(A[0] < A[n-1]) idx = n-1, check++;
    if(check == 0) cout << 0;
    else if(check > 1) cout << -1;
    else cout << n-idx-1;
}
