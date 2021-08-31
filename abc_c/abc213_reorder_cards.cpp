#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
  if (a.second != b.second)
  {
    return a.second < b.second;
  }
  return a.first < b.first;
}

int main()
{
  int H, W, N;
  cin >> H >> W >> N;
  vector<pair<int, int>> AB(N);
  map<pair<int, int>, int> map;
  vector<pair<int, int>> ans(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> AB[i].first >> AB[i].second;
    map[{AB[i].first, AB[i].second}] = i;
  }

  sort(AB.begin(), AB.end());
  int cnt = 1;
  ans[map[{AB[0].first, AB[0].second}]].first = cnt;
  for (int i = 1; i < N; ++i)
  {
    if (AB[i].first != AB[i - 1].first)
    {
      ++cnt;
    }
    ans[map[{AB[i].first, AB[i].second}]].first = cnt;
  }

  sort(AB.begin(), AB.end(), cmp);
  cnt = 1;
  ans[map[{AB[0].first, AB[0].second}]].second = cnt;
  for (int i = 1; i < N; ++i)
  {
    if (AB[i].second != AB[i - 1].second)
    {
      ++cnt;
    }
    ans[map[{AB[i].first, AB[i].second}]].second = cnt;
  }

  for (int i = 0; i < N; ++i)
  {
    cout << ans[i].first << " " << ans[i].second << endl;
  }

  return 0;
}
