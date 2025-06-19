#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cars;

  while (cin >> cars && cars != 0)
  {
    vector<int> start(cars, 0);
    bool valid = true;

    for (int i = 0; i < cars; ++i)
    {
      int n, v;
      cin >> n >> v;

      int pos = i + v;

      if (pos < 0 || pos >= cars || start[pos] != 0)
      {
        valid = false;
        continue;
      }

      start[pos] = n;
    }

    if (!valid)
    {
      cout << -1 << endl;
    }
    else
    {
      cout << start[0];
      for (int i = 1; i < cars; ++i)
      {
        cout << " " << start[i];
      }
      cout << endl;
    }
  }

  return 0;
}