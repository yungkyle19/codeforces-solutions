#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int counter = 0;
  int a[101][2];

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < 2; ++j)
    {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; ++i)
  {
    if (a[i][0] != a[i][1] && a[i][1] - a[i][0] >= 2)
    {
      counter++;
    }
  }

  cout << counter;
}
