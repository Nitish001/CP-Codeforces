/*
Ivan has n songs on his phone. The size of the i-th song is ai bytes. Ivan also has a flash drive which can hold at most m bytes in total. Initially, his flash drive is empty.

Ivan wants to copy all n songs to the flash drive. He can compress the songs. If he compresses the i-th song, the size of the i-th song reduces from ai to bi bytes (bi<ai).

Ivan can compress any subset of the songs (possibly empty) and copy all the songs to his flash drive if the sum of their sizes is at most m. He can compress any subset of the songs (not necessarily contiguous).

Ivan wants to find the minimum number of songs he needs to compress in such a way that all his songs fit on the drive (i.e. the sum of their sizes is less than or equal to m).

If it is impossible to copy all the songs (even if Ivan compresses all the songs), print "-1". Otherwise print the minimum number of songs Ivan needs to compress.

Input
The first line of the input contains two integers n and m (1≤n≤105,1≤m≤109) — the number of the songs on Ivan's phone and the capacity of Ivan's flash drive.

The next n lines contain two integers each: the i-th line contains two integers ai and bi (1≤ai,bi≤109, ai>bi) — the initial size of the i-th song and the size of the i-th song after compression.

Output
If it is impossible to compress a subset of the songs in such a way that all songs fit on the flash drive, print "-1". Otherwise print the minimum number of the songs to compress.


*/

#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int n, k;
    cin >> n >> k;
    int sum = 0;
    int dif[n];
    for(int i = 0;i < n; i++){
        int a, b;
        cin >> a >> b;
        sum += a;
        dif[i] = b-a;
    }
    sort(dif, dif+n);
    bool flag = false;
        int cnt = 0;
     for(int i = 0;i < n; i++){
         if(sum <= k){
            flag = true;
            break;
        }
        cnt++;
        sum += dif[i];
 //       cout << sum <<" ";
        if(sum <= k){
            flag = true;
            break;
        }
    }
    if(flag)
    cout << cnt <<"\n";
    else 
    cout <<-1;
}