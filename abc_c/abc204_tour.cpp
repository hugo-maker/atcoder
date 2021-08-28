#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 2000;
vector<vector<int>> G;
bool flag[MAX_N];
void dfs(int v)
{
  if (flag[v])
  {
    return;
  }
  flag[v] = true;
  for (auto vv : G[v])
  {
    dfs(vv);
  }
}

int main()
{
  int N, M;
  cin >> N >> M;
  G.resize(N);
  for (int i = 0; i < M; ++i)
  {
    int a, b;
    cin >> a >> b;
    G[a - 1].push_back(b - 1);
  }

  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      flag[j] = false;
    }
    dfs(i);
    for (int j = 0; j < N; ++j)
    {
      if (flag[j])
      {
        ++ans;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
