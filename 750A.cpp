// Written By Deepesh Nimma
// Problem: 750A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"
#define space " "

int n, k, counter = 0, result = 0;

int main()
{
  cin >> n >> k;
  int remaining_minutes = 240 - k;
  for(int i = 1; i <= n; ++i)
  {
    result += 5*i;
    // counter++;
    if (result <= remaining_minutes)
    {
      counter++;
      // cout << counter;
      // break;
    }
    else
    {
      break;
    }
  }

  cout << counter;
}
