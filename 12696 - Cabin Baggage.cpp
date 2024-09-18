#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, ok = 0;
  cin >> n;

  while (n--)
  {
    float l, w, d, kg;
    cin >> l >> w >> d >> kg;

    if (((l <= 56 && w <= 45 && d <= 25) || (l + w + d <= 125)) && kg <= 7)
    {
      cout << 1;
      ok++;
    }
    else
    {
      cout << 0;
    }
    cout << endl;
  }
  cout << ok << endl;

  return 0;
}