#include <bits/stdc++.h>

using namespace std;

int main()
{
  int c, count = 1;
  cin >> c;

  while (c--)
  {
    int j, f, n, l = 0, h = 0;
    cin >> j >> f;
    for (int i = 0; i < j - 1; i++)
    {
      cin >> n;
      if (n > f)
      {
        h++;
      }
      else if (n < f)
      {
        l++;
      }
      f = n;
    }

    cout << "Case " << count << ": " << h << " " << l << endl;
    count++;
  }
}