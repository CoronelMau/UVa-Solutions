#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int count;
  cin >> count;

  while (count--)
  {
    int num, res;
    cin >> num;

    res = (235 * ((num * 567 / 9) + 7492) / 47) - 498;
    cout << abs(int((res % 100) / 10)) << endl;
  }

  return 0;
}