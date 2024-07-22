#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n--)
  {
    string s;
    cin >> s;
    int p = 0, r = 0;

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == 'O')
      {
        p++;
      }
      else
      {
        p = 0;
      }
      r += p;
    }

    cout << r << endl;
  }
}