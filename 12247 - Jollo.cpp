#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c, x, y;
  while (cin >> a >> b >> c >> x >> y && (a != 0 && b != 0 && c != 0 && x != 0 && y != 0))
  {
    vector<int> princess = {a, b, c};
    vector<int> prince = {x, y};

    sort(princess.begin(), princess.end());
    sort(prince.begin(), prince.end());

    if (prince[0] > princess[0] && prince[1] > princess[1])
    {
      bool deck[53] = {false};
      deck[princess[0]] = true;
      deck[princess[1]] = true;
      deck[princess[2]] = true;
      deck[prince[0]] = true;
      deck[prince[1]] = true;

      int card = princess[1] + 1;
      int found = -1;

      for (int i = card; i <= 52; i++)
      {
        if (deck[i] == false)
        {
          found = i;
          break;
        }
      }
      cout << found << endl;
    }
    else
    {
      cout << -1 << endl;
    }
  }
  return 0;
}
