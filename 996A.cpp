// Written By Deepesh Nimma
// Problem: 996A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n";

int main()
{
  int n, counter = 0;
  int a[] = {100, 20, 10, 5, 1};
  cin >> n;

  for (int i = 0; i < 5; ++i)
  {
    counter += n / a[i];
    n = n % a[i];
  }

  cout << counter << end1;
  return 0;
}
