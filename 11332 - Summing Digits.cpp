#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n;
  while (cin >> n && n != 0)
  {
    while (n >= 10)
    {
      int temp = 0;
      while (n)
      {
        temp += n % 10;
        n /= 10;
      }
      n = temp;
    }
    cout << n << endl;
  }
}