#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
  int w;
  cin >> w;

  while (w--)
  {
    long long num;
    cin >> num;

    cout << ((int)sqrt(8 * num + 1) - 1) / 2 << endl;
  }
}
