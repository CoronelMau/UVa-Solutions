#include <bits/stdc++.h>

using namespace std;

int main()
{
  string bed;

  while (cin >> bed)
  {

    int dist = -1, count = 0, first = false;

    for (int i = 0; i < bed.length(); i++)
    {
      if (bed[i] == '.')
      {
        count++;
        if (i == 0)
        {
          first = true;
        }

        if (i == bed.length() - 1)
        {
          dist = max(count - 1, dist);
        }
      }
      else
      {
        if (first)
        {
          dist = max(dist, count - 1);
          first = false;
        }
        else if (count % 2 == 0)
        {
          dist = max(dist, count / 2 - 1);
        }
        else
        {
          if (count != 1)
          {
            dist = max(dist, (count + 1) / 2 - 1);
          }
          else
          {
            dist = max(dist, 0);
          }
        }

        count = 0;
      }
    }

    cout << dist << endl;
  }
}
