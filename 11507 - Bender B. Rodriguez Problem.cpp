#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  while (cin >> n && n != 0)
  {
    string current = "+x";

    for (int i = 0; i < n - 1; i++)
    {
      string move;
      cin >> move;

      if (move == "No")
      {
        continue;
      }

      if (current[1] == 'x')
      {
        current[1] = move[1];
        current[0] = move[0] == current[0] ? '+' : '-';
      }
      else if (move[1] == 'z')
      {
        if (current[1] == 'z')
        {
          current[1] = 'x';
          current[0] = move[0] == current[0] ? '-' : '+';
        }
      }
      else
      {
        if (current[1] == 'y')
        {
          current[1] = 'x';
          current[0] = move[0] == current[0] ? '-' : '+';
        }
      }
    }

    cout << current << endl;
  }

  return 0;
}