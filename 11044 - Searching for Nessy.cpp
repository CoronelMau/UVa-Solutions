#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n--)
  {
    int i, j, res;
    cin >> i >> j;

    cout << int(i / 3) * int(j / 3) << endl;
  }

  return 0;
}