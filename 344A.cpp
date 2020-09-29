#include <Bits/stdc++.h>
using namespace std;

int main()
{
  int n, a[100001], counter = 1;
  cin >> n;

  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n - 1; ++i)
  {
    if (a[i] != a[i + 1])
    {
      counter++;
    }
  }

  cout << counter;
}
