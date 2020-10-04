// Written By Deepesh Nimma
// Problem: 141A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"

int main()
{
  int n;

  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  s1 = s1 + s2;

  sort(s1.begin(), s1.end());
  sort(s3.begin(), s3.end());

  if(s1 == s3)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return 0;
}
