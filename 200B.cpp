// Written By Deepesh Nimma
// Problem: 200B Codeforces
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double n, result = 0;
  cin >> n;
  double p[10001];

  for (int i = 0; i < n; ++i)
  {
    cin >> p[i];
  }

  for (int i = 0; i < n; ++i)
  {
    result += p[i];
  }

  cout << result / n;
}
