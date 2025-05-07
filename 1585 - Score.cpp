#include <bits/stdc++.h>

using namespace std;

int main()
{
  int cases;
  cin >> cases;

  while (cases--)
  {
    int current = 0, result = 0;
    string score;

    cin >> score;

    for (int i = 0; i < score.length(); i++)
    {
      if (score[i] == 'O')
      {
        current++;
        result += current;
      }
      else
      {
        current = 0;
      }
    }

    cout << result << endl;
  }

  return 0;
}