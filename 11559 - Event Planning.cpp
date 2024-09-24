#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n, b, h, w;

  while (cin >> n >> b >> h >> w)
  {
    long long min_cost = LLONG_MAX;

    for (int i = 0; i < h; i++)
    {
      long long price;
      cin >> price;

      for (int j = 0; j < w; j++)
      {
        int beds;
        cin >> beds;
        if (beds >= n && price * n <= b)
        {
          long long total_cost = price * n;
          if (total_cost < min_cost)
          {
            min_cost = total_cost;
          }
        }
      }
    }

    if (min_cost == LLONG_MAX)
    {
      cout << "stay home" << endl;
    }
    else
    {
      cout << min_cost << endl;
    }
  }

  return 0;
}