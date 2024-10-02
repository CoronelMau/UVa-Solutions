#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, i, j;

  while (cin >> n >> i >> j)
  {
    int round = 0;

    while (i != j)
    {
      i = (i + 1) / 2;
      j = (j + 1) / 2;
      round++;
    }

    cout << round << endl;
  }

  return 0;
}
