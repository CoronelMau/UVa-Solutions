#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T, c = 1;
  cin >> T;

  while (T--)
  {
    int v, f = 0, n;
    cin >> n;
    while (n--)
    {
      cin >> v;
      if (v > f)
      {
        f = v;
      }
    }

    cout << "Case " << c << ": " << f << endl;
    c++;
  }
}