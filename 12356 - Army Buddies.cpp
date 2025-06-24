#include <bits/stdc++.h>

using namespace std;

int main()
{
  int s, k;

  while (cin >> s >> k && s != 0 && k != 0)
  {
    int L1[s + 2], R1[s + 2];

    for (int i = 0; i <= s; i++)
    {
      L1[i] = i - 1;
      R1[i] = i + 1;
    }

    for (int i = 0; i < k; i++)
    {
      int L, R;
      cin >> L >> R;

      if (L1[L] < 1)
        cout << "* ";
      else
        cout << L1[L] << " ";

      if (R1[R] > s)
        cout << "*" << endl;
      else
        cout << R1[R] << endl;

      L1[R1[R]] = L1[L];
      R1[L1[L]] = R1[R];
    }

    cout << "-" << endl;
  }

  return 0;
}