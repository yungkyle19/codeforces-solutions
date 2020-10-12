// Written By Deepesh Nimma
// Problem: 115A Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define end1 "\n"
#define space " "

const int mxN = 1000;
int n, a[mxN], counter = 0;

int main()
{
  cin >> n;

  for(int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  int smallest = a[0];

  for(int i = 0; i < n; ++i)
  {
    if(a[i] < smallest)
    {
      counter++;
      smallest = a[i];
    }
  }

  int largest = a[0];

  for(int i = 0; i < n; ++i)
  {
    if(a[i] > largest)
    {
      largest = a[i];
      counter++;
    }
  }


  cout << counter;
}
