// Written By Deepesh Nimma
// Problem: 469A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  int n, p, q;
  vector<int> v;
  cin >> n;

  cin >> p;
  for (int i = 0; i < p; ++i)
  {
    int x;
    cin >> x;

    v.push_back(x);
  }

  cin >> q;

  for (int i = 0; i < q; ++i)
  {
    int x;
    cin >> x;

    v.push_back(x);
  }

  if (v.size() == n)
  {
    cout << "I become the guy.";
    return 0;
  }
  else
  {
    cout << "Oh, my keyboard!";
    return 0;
  }
}
