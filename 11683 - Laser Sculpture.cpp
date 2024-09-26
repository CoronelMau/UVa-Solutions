#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, c;

  while (cin >> a >> c && a != 0)
  {
    int total = 0, current;

    for (int i = 0; i < c; i++)
    {
      int value;
      cin >> value;

      if (i == 0)
      {
        total = a - value;
      }
      else
      {
        if (value < current)
        {
          total += current - value;
        }
      }
      current = value;
    }
    cout << total << endl;
  }

  return 0;
}