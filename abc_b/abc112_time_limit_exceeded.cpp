#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = 100000000;

bool comp_by_second(pair<int, int> a, pair<int, int> b)
{
  if (a.second != b.second)
  {
    return a.second < b.second;
  }

  return a.first < b.first;
}

int main()
{
  int N, T;
  cin >> N >> T;
  vector<pair<int, int>> v(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> v[i].second >> v[i].first;
  }

  sort(v.begin(), v.end());
  auto iter = upper_bound(v.begin(), v.end(), make_pair(T, INF));
  v.erase(iter, v.end());
  sort(v.begin(), v.end(), comp_by_second);

  if (v.size() != 0)
  {
    cout << v[0].second << endl;
  }
  else
  {
    cout << "TLE" << endl;
  }

  return 0;
}
