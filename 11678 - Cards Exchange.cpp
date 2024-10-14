#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;

  while (cin >> a >> b && (a != 0 || b != 0))
  {
    set<int> a_cards, b_cards;
    int a_unique = 0, b_unique = 0;

    for (int i = 0; i < a; i++)
    {
      int c;
      cin >> c;
      a_cards.insert(c);
    }

    for (int i = 0; i < b; i++)
    {
      int c;
      cin >> c;
      b_cards.insert(c);
    }

    for (auto card : a_cards)
    {
      if (b_cards.find(card) == b_cards.end())
      {
        a_unique++;
      }
    }

    for (auto card : b_cards)
    {
      if (a_cards.find(card) == a_cards.end())
      {
        b_unique++;
      }
    }

    cout << min(a_unique, b_unique) << endl;
  }
}