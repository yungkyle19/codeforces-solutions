// Written By Deepesh Nimma
// Problem: 228A Codeforces
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i, a[5], cnt = 0;
    for(i = 0;i < 4; ++i) {
        cin >> a[i];
    }
    sort(a, a+4);
    for(i = 0; i < 3; ++i) {
        if(a[i] == a[i + 1]){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
