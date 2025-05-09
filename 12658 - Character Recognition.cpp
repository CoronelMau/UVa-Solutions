#include <bits/stdc++.h>
using namespace std;

int main()
{
  int numbers;
  cin >> numbers;

  string line;

  for (int i = 0; i < 5; i++)
  {
    string temp;
    if (i == 3)
    {
      cin >> line;
    }
    else
    {
      cin >> temp;
    }
  }

  for (int i = 0; i < numbers; i++)
  {
    int idx = i * 4;

    if (line[idx] == '.' && line[idx + 1] == '*')
    {
      cout << 1;
    }
    else if (line[idx] == '*' && line[idx + 1] == '.')
    {
      cout << 2;
    }
    else if (line[idx] == '.' && line[idx + 1] == '.')
    {
      cout << 3;
    }
  }

  cout << endl;
  return 0;
}
