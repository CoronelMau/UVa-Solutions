#include <bits/stdc++.h>

using namespace std;

int main()
{
  int count;
  cin >> count;

  while (count--)
  {
    long long a, b;
    string res;
    cin >> a >> b;

    res = (a > b) ? ">" : (a < b) ? "<"
                                  : "=";

    cout << res << endl;
  }

  return 0;
}