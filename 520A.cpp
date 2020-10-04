// Written By Deepesh Nimma
// Problem: 520A Codeforces
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

  string s;
  cin >> s;

  vector<bool> alphabets(28, 0);

  for (int i = 0; i < n; ++i)
  {
    alphabets[tolower(s[i]) - 'a'] = 1;
  }

  for (int i = 0; i < 26; ++i)
  {
    if(!alphabets[i])
    {
      cout << "NO" << end1;
      return 0;
    }
  }

  cout << "YES" << end1;
  return 0;
}
