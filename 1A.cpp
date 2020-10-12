// Written By Deepesh Nimma
// Problem: 1A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"

int main()
{
    ll n, m, a, number;
    cin >> n >> m >> a;
    number = (((n + a - 1)) / a) * ((m + a - 1) / a);
    cout << number << end1;
    return 0;
}
