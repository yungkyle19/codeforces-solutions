// Written By Deepesh Nimma
// Problem: 1335A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"

int main()
{
  int t;
  double n;

  ll int ans;
  cin >> t;

  while (t--)
  {
    ans = 0;
    cin >> n;
    ans = ceil((n / 2) - 1);
    cout << ans << endl;
  }

  return 0;
}
