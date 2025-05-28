#include <bits/stdc++.h>

using namespace std;

int main()
{
  int cases;
  cin >> cases;

  for (int i = 1; i <= cases; i++)
  {
    string deck[52];

    for (int i = 0; i < 52; i++)
    {
      string card;
      cin >> card;

      deck[i] = card;
    }

    cout << "Case " << i << ": " << deck[32] << endl;
  }

  return 0;
}