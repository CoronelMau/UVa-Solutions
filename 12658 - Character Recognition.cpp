#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> lines(5);
  cin.ignore();

  for (int i = 0; i < 5; i++)
  {
    getline(cin, lines[i]);
  }

  for (int i = 0; i < n; i++)
  {
    string digit = lines[3].substr(i * 4, 3);
    if (digit == ".*.")
    {
      cout << 1;
    }
    else if (digit == "*..")
    {
      cout << 2;
    }
    else if (digit == "..*")
    {
      cout << 3;
    }
  }
  cout << endl;

  return 0;
}
