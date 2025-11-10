#include <bits/stdc++.h>

using namespace std;

int main()
{
  int m, n, curr_case = 1;

  while (cin >> m >> n && m != 0 && n != 0)
  {
    string table[m];

    for (int i = 0; i < m; i++)
    {
      string curr;
      cin >> curr;
      table[i] = curr;
    }

    if (curr_case > 1)
      cout << endl;
    cout << "Field #" << curr_case++ << ":" << endl;

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (table[i][j] == '*')
        {
          cout << '*';
          continue;
        }
        int count = 0;

        for (int dx = -1; dx <= 1; dx++)
        {
          for (int dy = -1; dy <= 1; dy++)
          {
            int x = i + dx, y = j + dy;

            if (x >= 0 && x < m && y >= 0 && y < n && table[x][y] == '*')
            {
              count++;
            }
          }
        }
        cout << count;
      }
      cout << endl;
    }
  }

  return 0;
}