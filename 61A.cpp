// Written By Deepesh Nimma
// Problem: 61A Codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  string x, y;
  char z[1000];
  cin >> x >> y;
  int n = x.size();

  for (int i = 0; i < n; i++) {
    if (x[i] == '1' && y[i] == '0'){
      z[i] = '1';
    }
    else if (x[i] == '0' && y[i] == '1') {
      z[i] = '1';
    }
    else {
      z[i] = '0';
    }
  }

  for (int i = 0; i < n; ++i)
  {
      cout << z[i];
  }
}
