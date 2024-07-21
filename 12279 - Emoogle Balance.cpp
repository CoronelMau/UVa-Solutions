#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T, c = 1;

  cin >> T;

  while (T != 0)
  {
    int b = 0;
    for (int i = 0; i < T; i++)
    {
      int j;
      cin >> j;

      if (j != 0)
      {
        b++;
      }
      else
      {
        b--;
      }
    }

    cout << "Case " << c << ": " << b << endl;
    c++;
    cin >> T;
  }
}