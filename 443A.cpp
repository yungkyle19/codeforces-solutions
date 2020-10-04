// Written By Deepesh Nimma
// Problem: 443A Codeforces

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"

int main() {
  string s;
  set<char> l;
  getline(cin, s);

  int i = 0;

  while(s[i])
  {
    if (isalpha(s[i])) {
      l.insert(s[i]);
    }

    ++i;
  }

  cout << l.size() << end1;
}
