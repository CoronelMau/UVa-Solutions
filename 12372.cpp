#include <bits/stdc++.h>

using namespace std;

int main()
{
  int c, n = 1;
  cin >> c;

  while (c--)
  {
    int l, w, h;
    cin >> l >> w >> h;

    if (l <= 20 && w <= 20 && h <= 20)
    {
      cout << "Case " << n << ": good" << endl;
    }
    else
    {
      cout << "Case " << n << ": bad" << endl;
    }

    n++;
  }
}