#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, temp;
  cin >> n;

  for (int i = 0; i < n; ++i)
  {
    cin >> temp;

    if (temp == 1)
    {
      cout << "HARD";
      return 0;
    }
  }

  cout << "EASY";
  return 0;
}
