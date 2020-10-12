// Written By Deepesh Nimma
// Problem: 1154A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"
#define space " "

int main()
{
  ll a, b, c, d;
  // cin >> a >> b >> c >> d;
  ll x = 0, y = 0, z = 0;
  ll g[4];

  for(int i = 0; i < 4; ++i) {
    cin >> g[i];
  }

  sort(g, g + 4);

  a = g[0];
  b = g[1];
  c = g[2];
  d = g[3];

  if (d > a) {
    x = d - a;
  }
  else
  {
    x = a - d;
  }

  if (d > b) {
    y = d - b;
  }
  else
  {
    y = b - d;
  }

  if (d > c)
  {
    z = d - c;
  }
  else
  {
    z = c - d;
  }

  cout << x << space << y << space << z;
}
