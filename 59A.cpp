#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  int lowercounter = 0, uppercounter = 0;
  for (int i = 0; i < n; ++i)
  {
    if (isupper(s[i]) == false)
    {
      lowercounter++;
    }
    else if(isupper(s[i]) == true)
    {
      uppercounter++;
    }
  }

  if (uppercounter > lowercounter)
  {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;
    return 0;
  }
  else
  {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
  }
}
