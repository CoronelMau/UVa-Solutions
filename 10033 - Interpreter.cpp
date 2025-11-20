/*
 * User: Mauricio Coronel
 * Problem: 10033 - Interpreter
 */

#include <bits/stdc++.h>

using namespace std;

int instToNum(const string &s)
{
  int number;
  stringstream ss(s);
  ss >> number;
  return number;
}

string numToString(int num)
{
  string s = to_string(num);

  while (s.length() < 3)
    s = "0" + s;

  return s;
}

int main()
{
  int cases;
  string ram[1000], regs[10];
  cin >> cases;
  cin.ignore();
  cin.ignore();

  while (cases--)
  {
    fill(ram, ram + 1000, "000");
    fill(regs, regs + 10, "000");

    string inst;
    int pos = 0;

    while (getline(cin, inst) and inst.length())
    {
      ram[pos++] = inst;
    }

    int count = 0, pc = 0;
    bool halt = false;

    while (!halt)
    {
      int a = ram[pc][1] - '0', b = ram[pc][2] - '0';
      count++;

      switch (ram[pc][0])
      {
      case '1':
        halt = true;
        break;

      case '2':
        regs[a] = numToString(b);
        break;

      case '3':
        regs[a] = numToString((instToNum(regs[a]) + b) % 1000);
        break;

      case '4':
        regs[a] = numToString((instToNum(regs[a]) * b) % 1000);
        break;

      case '5':
        regs[a] = regs[b];
        break;

      case '6':
        regs[a] = numToString((instToNum(regs[a]) + instToNum(regs[b])) % 1000);
        break;

      case '7':
        regs[a] = numToString((instToNum(regs[a]) * instToNum(regs[b])) % 1000);
        break;

      case '8':
        regs[a] = ram[instToNum(regs[b])];
        break;

      case '9':
        ram[instToNum(regs[b])] = regs[a];
        break;

      case '0':
        if (instToNum(regs[b]) != 0)
        {
          pc = instToNum(regs[a]);
          continue;
        }
        break;
      }
      pc++;
    }

    cout << count << endl;

    if (cases)
      cout << endl;
  }

  return 0;
}