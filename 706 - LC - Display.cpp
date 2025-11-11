/*
 * User: Mauricio Coronel
 * Problem: 706 - LC - Display
 */

#include <bits/stdc++.h>
using namespace std;

void printNum(int, string);

int main()
{
  string numList[10][5] = {
      {" - ", "| |", "   ", "| |", " - "},  // 0
      {"   ", "  |", "   ", "  |", "   "},  // 1
      {" - ", "  |", " - ", "|  ", " - "},  // 2
      {" - ", "  |", " - ", "  |", " - "},  // 3
      {"   ", "| |", " - ", "  |", "   "},  // 4
      {" - ", "|  ", " - ", "  |", " - "},  // 5
      {" - ", "|  ", " - ", "| |", " - "},  // 6
      {" - ", "  |", "   ", "  |", "   "},  // 7
      {" - ", "| |", " - ", "| |", " - "},  // 8
      {" - ", "| |", " - ", "  |", " - "}}; // 9

  int times;
  string num;

  while (cin >> times >> num && !(times == 0 && num == "0"))
  {
    for (int i = 0; i < 5; i++)
    {
      if (i == 1 || i == 3)
      {
        for (int k = 0; k < times; k++)
        {
          for (int j = 0; j < num.length(); j++)
          {
            if (j != 0)
              cout << " ";
            int curr = num[j] - '0';
            printNum(times, numList[curr][i]);
          }
          cout << endl;
        }
      }
      else
      {
        for (int j = 0; j < num.length(); j++)
        {
          if (j != 0)
            cout << " ";
          int curr = num[j] - '0';
          printNum(times, numList[curr][i]);
        }
        cout << endl;
      }
    }

    cout << endl;
  }

  return 0;
}

void printNum(int times, string num)
{
  cout << num[0];
  for (int i = 0; i < times; i++)
  {
    cout << num[1];
  }
  cout << num[2];
}
