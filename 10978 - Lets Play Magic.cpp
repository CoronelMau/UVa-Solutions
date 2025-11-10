#include <bits/stdc++.h>
using namespace std;

int main()
{
  int c;
  while (cin >> c && c != 0)
  {
    vector<string> deck(c, "");
    int position = -1;

    for (int i = 0; i < c; i++)
    {
      string card, name;
      cin >> card >> name;
      int count = name.length();

      while (count)
      {
        position = (position + 1) % c;

        if (deck[position] == "")
        {
          count--;
        }
      }

      deck[position] = card;
    }

    cout << deck[0];
    for (int i = 1; i < c; i++)
    {
      cout << " " << deck[i];
    }
    cout << endl;
  }
}