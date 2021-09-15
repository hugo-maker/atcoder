#include <iostream>
#include <vector>
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
  int N, H;
  cin >> N >> H;
  vector<pair<int, int>> ab;
  for (int i = 0; i < N; ++i)
  {
    int a, b;
    cin >> a >> b;
    ab.push_back({i, a});
    ab.push_back({i + N, b});
  }
  sort(ab.begin(), ab.end(), cmp);

  int ans = 0;
  while (H > 0)
  {
    int i = ab.end() - ab.begin();
    --i;
    if (ab[i].first >= N)
    {
      ab.pop_back();
      H -= ab[i].second;
      ++ans;
    }
    else
    {
      ans += H / ab[i].second;
      if (H % ab[i].second != 0)
      {
        ++ans;
      }
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
