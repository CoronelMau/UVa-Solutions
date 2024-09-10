#include <bits/stdc++.h>

using namespace std;

int main()
{
  int c, num = 1;
  cin >> c;

  while (c--)
  {
    vector<pair<int, string>> pages;
    for (int i = 0; i < 10; i++)
    {
      string page;
      int rank;
      cin >> page >> rank;
      pages.push_back(make_pair(rank, page));
    }

    sort(pages.begin(), pages.end(), [](const pair<int, string> &a, const pair<int, string> &b)
         { return a.first > b.first; });

    int max_num = pages[0].first;

    vector<pair<int, string>> lucky;
    copy_if(pages.begin(), pages.end(), back_inserter(lucky), [max_num](const pair<int, string> &el)
            { return el.first == max_num; });

    cout << "Case #" << num << ":" << endl;
    for (int i = 0; i < lucky.size(); i++)
    {
      cout << lucky[i].second << endl;
    }
    num++;
  }

  return 0;
}
