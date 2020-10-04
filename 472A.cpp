// Written By Deepesh Nimma
// Problem: 472A Codeforces

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"
#define space " "

int main()
{
  ll n;
  cin >> n;

  if (n % 2 == 0)
  {
    cout << n - 4 << space << "4";
  }
  else
  {
    cout << n - 9 << space << "9";
  }
}
