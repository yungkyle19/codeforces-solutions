// Written By Deepesh Nimma
// Problem: 1328A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll a, b;
    int counter = 0;
    cin >> a >> b;

    if (a % b != 0)
    {
      counter = b - (a % b);
    }
    cout << counter << endl;
  }
}
