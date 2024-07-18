#include <bits/stdc++.h>

using namespace std;

int main()
{
  string w;
  int count = 1;

  while (cin >> w && w != "#")
  {
    if (w == "HELLO")
      cout << "Case " << count << ": ENGLISH" << endl;
    else if (w == "HOLA")
      cout << "Case " << count << ": SPANISH" << endl;
    else if (w == "HALLO")
      cout << "Case " << count << ": GERMAN" << endl;
    else if (w == "BONJOUR")
      cout << "Case " << count << ": FRENCH" << endl;
    else if (w == "CIAO")
      cout << "Case " << count << ": ITALIAN" << endl;
    else if (w == "ZDRAVSTVUJTE")
      cout << "Case " << count << ": RUSSIAN" << endl;
    else
      cout << "Case " << count << ": UNKNOWN" << endl;

    count++;
  }

  return 0;
}
