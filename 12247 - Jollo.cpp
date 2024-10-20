#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, x, y;
    while (cin >> a >> b >> c >> x >> y && a != 0 && b != 0 && c != 0 && x != 0 && y != 0)
    {
        vector<int> princess = {a, b, c};
        vector<int> prince = {x, y};
        bool deck[53] = {false};
        int card = 53;
        deck[princess[0]] = true;
        deck[princess[1]] = true;
        deck[princess[2]] = true;
        deck[prince[0]] = true;
        deck[prince[1]] = true;
        sort(princess.begin(), princess.end());
        sort(prince.begin(), prince.end());

        if (prince[0] > princess[2])
        {
            for (int i = 1; i <= 52 && i < card; ++i)
            {
                if (!deck[i])
                {
                    card = i;
                }
            }
        }
        if (prince[1] > princess[2])
        {
            for (int i = princess[2] + 1; i <= 52 && i < card; ++i)
            {
                if (!deck[i])
                {
                    card = i;
                }
            }
        }
        if (prince[0] > princess[1])
        {
            for (int i = princess[1] + 1; i <= 52 && i < card; ++i)
            {
                if (!deck[i])
                {
                    card = i;
                }
            }
        }
        if (card == 53)
        {
            card = -1;
        }
        cout << card << endl;
    }
    return 0;
}