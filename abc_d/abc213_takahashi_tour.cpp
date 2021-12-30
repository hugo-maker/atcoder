#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> G;
vector<int> ans;

void dfs(int cur, int pre)
{
  ans.push_back(cur);
  for (int next : G[cur])
  {
    if (next != pre)
    {
      dfs(next, cur);
      ans.push_back(cur);
    }
  }
}

int main()
{
  int N;
  cin >> N;
  G.resize(N + 1);
  for (int i = 0; i < N - 1; ++i)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  for (int i = 1; i <= N; ++i)
  {
    sort(G[i].begin(), G[i].end());
  }
  dfs(1, -1);
  for (int i = 0; i < ans.size(); ++i)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }
  return 0;
}
