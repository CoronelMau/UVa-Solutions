#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;

  while (cin >> a >> b)
  {
    int max_count = 0;
    int start = min(a, b);
    int end = max(a, b);

    for (int i = start; i <= end; i++)
    {
      int current = i;
      int curr_count = 1;

      while (current != 1)
      {
        if (current % 2 == 0)
        {
          current /= 2;
        }
        else
        {
          current = (current * 3) + 1;
        }

        curr_count++;
      }

      max_count = max(max_count, curr_count);
    }

    cout << a << " " << b << " " << max_count << endl;
  }
}