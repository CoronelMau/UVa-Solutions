#include <bits/stdc++.h>

using namespace std;

int charValue(char l)
{
  int total = 0;

  if (!isalpha(l))
    return 0;

  if (l == tolower(l))
  {
    return l - 96;
  }

  return l - 64;
}

int nameValue(string name)
{
  int total = 0;
  for (int i = 0; i < name.length(); i++)
  {
    total += charValue(name[i]);
  }
  return total;
}

int calculate(string name)
{
  int total = nameValue(name);

  while (total >= 10)
  {
    int temp = 0;

    while (total)
    {
      temp += total % 10;
      total /= 10;
    }
    total = temp;
  }
  return total;
}

int main()
{
  string n1, n2;
  getline(cin, n1);
  getline(cin, n2);

  int r1 = calculate(n1);
  int r2 = calculate(n2);

  if (r1 < r2)
  {
    printf("%.2f %%\n", r1 * 100.0 / r2);
  }
  else
  {
    printf("%.2f %%\n", r2 * 100.0 / r1);
  }
}