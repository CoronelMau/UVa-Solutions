#include <bits/stdc++.h>

using namespace std;

void fillRegion(vector<vector<char>> &table, int x, int y, char curr, char color)
{
  int rows = table.size(), cols = table[0].size();
  if (x < 0 || x >= cols || y < 0 || y >= rows)
    return;
  if (table[y][x] != curr || table[y][x] == color)
    return;
  table[y][x] = color;
  fillRegion(table, x + 1, y, curr, color);
  fillRegion(table, x - 1, y, curr, color);
  fillRegion(table, x, y + 1, curr, color);
  fillRegion(table, x, y - 1, curr, color);
}

int main()
{
  char inst;
  int x = 0, y = 0;
  vector<vector<char>> table;

  while (cin >> inst && inst != 'X')
  {
    if (inst == 'I')
    {
      cin >> x >> y;
      table.assign(y, vector<char>(x, 'O'));
    }
    else if (inst == 'S')
    {
      string name;
      cin >> name;

      cout << name << endl;

      for (int i = 0; i < y; i++)
      {
        for (int j = 0; j < x; j++)
        {
          cout << table[i][j];
        }
        cout << endl;
      }
    }
    else if (inst == 'L')
    {
      int i, j;
      cin >> i >> j;
      char color;
      cin >> color;
      table[j - 1][i - 1] = color;
    }
    else if (inst == 'F')
    {
      int i, j;
      char curr, color;

      cin >> i >> j >> color;

      curr = table[j - 1][i - 1];
      if (curr != color)
        fillRegion(table, i - 1, j - 1, curr, color);
    }
    else if (inst == 'V')
    {
      int x1, y1, y2;
      char color;
      cin >> x1 >> y1 >> y2 >> color;
      if (y1 > y2)
        swap(y1, y2);

      for (int i = y1; i <= y2; i++)
      {
        table[i - 1][x1 - 1] = color;
      }
    }
    else if (inst == 'H')
    {
      int x1, x2, y1;
      char color;
      cin >> x1 >> x2 >> y1 >> color;
      if (x1 > x2)
        swap(x1, x2);

      for (int i = x1; i <= x2; i++)
      {
        table[y1 - 1][i - 1] = color;
      }
    }
    else if (inst == 'K')
    {
      int x1, y1, x2, y2;
      char color;
      cin >> x1 >> y1 >> x2 >> y2 >> color;
      if (x1 > x2)
        swap(x1, x2);
      if (y1 > y2)
        swap(y1, y2);

      for (int i = x1; i <= x2; i++)
      {
        for (int j = y1; j <= y2; j++)
        {
          table[j - 1][i - 1] = color;
        }
      }
    }
    else if (inst == 'C')
    {
      table.assign(y, vector<char>(x, 'O'));
    }
  }
}