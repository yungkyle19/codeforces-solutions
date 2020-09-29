#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int awins = 0;
  int dwins = 0;
  cin >> n;
  char games[100001];

  for (int i = 0; i < n; ++i)
  {
    cin >> games[i];
  }

  for (int i = 0; i < n; ++i)
  {
    if (games[i] == 'A')
    {
      awins++;
    }
    else if (games[i] == 'D')
    {
      dwins++;
    }
  }

  if (awins > dwins)
  {
    cout << "Anton";
  }
  else if(dwins > awins)
  {
    cout << "Danik";
  }
  else
  {
    cout << "Friendship";
  }
}
