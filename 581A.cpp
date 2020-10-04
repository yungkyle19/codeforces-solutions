// Written By Deepesh Nimma
// Problem: 581A Codeforces

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"
#define space " "

int main()
{
  int a, b;
  cin >> a >> b;

  if (a >= b)
  {
    a -= b;
    a /= 2;
    cout << b << " " << a;
  }
  else
  {
    b -= a;
    b /= 2;

    cout << a << " " << b << end1;
  }

  return 0;
}
