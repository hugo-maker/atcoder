#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b)
{
  if (a.first != b.first)
  {
    return a.first > b.first;
  }
  else
  {
    return a.second < b.second;
  }
}

int main()
{
  map<string, int> m;
  int N;
  cin >> N;
  string S;
  for (int i = 0; i < N; ++i)
  {
    cin >> S;
    if (m.count(S))
    {
      ++m[S];
    }
    else
    {
      m.insert({S, 1});
    }
  }

  vector<pair<int, string>> v;
  for (auto iter = m.begin(); iter != m.end(); ++iter)
  {
    v.push_back({iter->second, iter->first});
  }

  sort(v.begin(), v.end(), cmp);
  cout << v[0].second << endl;
  for (int i = 1; i < (int)v.size(); ++i)
  {
    if (v[i].first == v[i - 1].first)
    {
      cout << v[i].second << endl;
    }
    else
    {
      break;
    }
  }

  return 0;
}
