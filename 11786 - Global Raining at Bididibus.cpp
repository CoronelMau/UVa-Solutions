#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n--)
  {
    int res = 0;
    stack<int> m;

    string t;
    cin >> t;

    for (int i = 0; i < t.length(); i++)
    {
      if (t[i] == '\\')
      {
        m.push(i);
      }
      else if (t[i] == '/' && !m.empty())
      {
        res += i - m.top();
        m.pop();
      }
    }

    cout << res << endl;
  }

  return 0;
}