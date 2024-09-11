#include <bits/stdc++.h>

using namespace std;

int main()
{
  int c;
  cin >> c;

  while (c--)
  {
    int times, p = 0;
    cin >> times;
    int list[times + 1];

    cin.ignore();

    for (int i = 1; i <= times; i++)
    {
      string instruction;
      getline(cin, instruction);

      if (instruction == "LEFT")
      {
        p--;
        list[i] = -1;
      }
      else if (instruction == "RIGHT")
      {
        p++;
        list[i] = 1;
      }
      else
      {
        int num = stoi(instruction.substr(8));
        p += list[num];
        list[i] = list[num];
      }
    }
    cout << p << endl;
  }

  return 0;
}