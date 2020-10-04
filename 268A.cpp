// Written By Deepesh Nimma
// Problem: 268A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"

int main()
{
  int n;
  cin >> n;

  int number(0);
  vector<int> h(n), a(n);

  for (int i = 0; i < n; ++i)
  {
    cin >> h[i] >> a[i];

    for (int j = 0; j < i; ++j)
    {
      if (h[i] == a[j])
      {
        number += 1;
      }
      if (a[i] == h[j])
      {
        number += 1;
      }
    }
  }

  cout << number << end1;
  return 0;
}
