// Written By Deepesh Nimma (and his googling expertise :) )
// Problem: 617A Codeforces
#include<bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    if (n % 5 == 0) {
      cout << n / 5;
    }
    else
    {
      cout << n / 5 + 1;
    }

    return 0;
}
