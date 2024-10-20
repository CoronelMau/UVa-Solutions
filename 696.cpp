#include <bits/stdc++.h>

using namespace std;

int main()
{
  int w, h;

  while (cin >> w >> h && w != 0 && h != 0)
  {
    int knights;

    if (w == 1 || h == 1)
    {
      knights = max(w, h);
    }
    else if (w == 2 || h == 2)
    {
      int maxNum = max(w, h);
      knights = (maxNum / 4) * 4 + min(2, maxNum % 4) * 2;
    }
    else
    {
      knights = ((w * h) / 2) + ((w * h) % 2);
    }

    cout << knights << " knights may be placed on a " << w << " row " << h << " column board." << endl;
  }

  return 0;
}