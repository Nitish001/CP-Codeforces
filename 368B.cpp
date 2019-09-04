/*
B. Sereja and Suffixes

Sereja has an array a, consisting of n integers a1, a2, ..., an. The boy cannot sit and do nothing, he decided to study an array. Sereja took a piece of paper and wrote out m integers l1, l2, ..., lm (1 ≤ li ≤ n). For each number li he wants to know how many distinct numbers are staying on the positions li, li + 1, ..., n. Formally, he want to find the number of distinct numbers among ali, ali + 1, ..., an.?

Sereja wrote out the necessary array elements but the array was so large and the boy was so pressed for time. Help him, find the answer for the described question for each li.

Input
The first line contains two integers n and m (1 ≤ n, m ≤ 105). The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 105) — the array elements.

Next m lines contain integers l1, l2, ..., lm. The i-th line contains integer li (1 ≤ li ≤ n).

Output
Print m lines — on the i-th line print the answer to the number li.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int n, q;
    cin >> n >> q;
    int ans[n];
    int A[n];
    for(int i = 0;i<n; i++){
        cin >> A[i];
    }
    for(int i = n-1; i >= 0; i--){
        s.insert(A[i]);
        ans[i] = s.size();
    }
    while(q--){
        int a;
        cin >> a;
        cout << ans[a-1]<<'\n';
    }
}