#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  while (cin >> n && n != 0)
  {
    vector<double> cost(n);
    double total = 0.0;

    for (int i = 0; i < n; i++)
    {
      cin >> cost[i];
      total += cost[i];
    }

    double avg = total / n;

    double lower = floor(avg * 100) / 100.0;
    double upper = ceil(avg * 100) / 100.0;

    double give = 0.0, take = 0.0;

    for (int i = 0; i < n; i++)
    {
      if (cost[i] < lower)
        give += (lower - cost[i]);
      else if (cost[i] > upper)
        take += (cost[i] - upper);
    }

    double result = max(give, take);
    cout << "$" << fixed << setprecision(2) << result << endl;
  }
  return 0;
}