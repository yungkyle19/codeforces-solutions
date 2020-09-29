#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, checkstring, finalstring;
  cin >> s >> checkstring;

  reverse(s.begin(), s.end());

  if (s == checkstring)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
}
