// Written By Deepesh Nimma
// Problem: 148A Codeforces
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k, l, m, n, d;
  int counter = 0;
  cin >> k >> l >> m >> n >> d;

  for (int i = 1; i <= d; ++i)
  {
    if (i % k == 0)
    {
      counter++;
    }
    else if (i % l == 0)
    {
      counter++;
    }
    else if (i % m == 0)
    {
      counter++;
    }
    else if (i % n == 0)
    {
      counter++;
    }
  }

  cout << counter;
}
