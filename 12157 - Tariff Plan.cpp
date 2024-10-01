#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int calls, mile = 0, juice = 0;
    cin >> calls;

    for (int j = 0; j < calls; j++)
    {
      int c;
      cin >> c;

      mile += ((c / 30) + 1) * 10;
      juice += ((c / 60) + 1) * 15;
    }

    cout << "Case " << i << ": ";
    if (mile < juice)
    {
      cout << "Mile " << mile;
    }
    else if (juice < mile)
    {
      cout << "Juice " << juice;
    }
    else
    {
      cout << "Mile Juice " << mile;
    }
    cout << endl;
  }

  return 0;
}
