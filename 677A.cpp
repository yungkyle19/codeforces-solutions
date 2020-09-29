#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, h, a[1001], result = 0;
  cin >> n >> h;

  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i)
  {
    if (a[i] > h)
    {
      a[i] = 2;
    }
    else
    {
      a[i] = 1;
    }

    result += a[i];
  }

  cout << result;
}
