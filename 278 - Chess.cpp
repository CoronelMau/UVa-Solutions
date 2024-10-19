#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    string piece;
    int w, h;
    cin >> piece >> w >> h;
    if (piece == "r" || piece == "Q")
    {
      cout << min(w, h) << endl;
    }
    else if (piece == "k")
    {
      cout << ((w * h) / 2) + ((w * h) % 2) << endl;
    }
    else if (piece == "K")
    {
      cout << (((w / 2) + (w % 2)) * ((h / 2) + (h % 2))) << endl;
    }
  }
  return 0;
}