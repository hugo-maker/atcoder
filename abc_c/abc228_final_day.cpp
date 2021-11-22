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
  int N, K;
  cin >> N >> K;
  vector<pair<int, int>> score;
  for (int i = 0; i < N; ++i)
  {
    int a, b, c;
    cin >> a >> b >> c;
    score.push_back({a + b + c, i});
  }
  sort(score.begin(), score.end(), greater<pair<int, int>>{});

  map<int, string> ans;
  for (int i = 0; i < N; ++i)
  {
    if (i + 1 <= K)
    {
      ans.insert({score[i].first, "Yes"});
    }
    else if (score[i].first + 300 >= score[K - 1].first)
    {
      ans.insert({score[i].first, "Yes"});
    }
    else
    {
      ans.insert({score[i].first, "No"});
    }
  }

  sort(score.begin(), score.end(), cmp);
  for (int i = 0; i < N; ++i)
  {
    cout << ans[score[i].first] << endl;
  }

  return 0;
}
