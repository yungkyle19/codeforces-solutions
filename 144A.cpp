// Written By Deepesh Nimma
// Problem: 144A Codeforces

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"

int main()
{
  int n, i, maxx, minn, index_max, index_min;

  cin >> n;

  int a[n];

  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  maxx = 0;
  minn = 101;

  for (int i = 0; i < n; ++i)
  {
    if (a[i] > maxx) {
      maxx = a[i];
      index_max = i;
    }

    if (a[i] <= minn) {
      minn = a[i];
      index_min = i;
    }
  }

  --n;

  if(index_max > index_min) {
    index_min += 1;
  }

  cout << index_max + n - index_min;

  return 0;
}
