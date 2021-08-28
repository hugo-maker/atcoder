#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX_N = 2000;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> to(N);
  for (int i = 0; i < M; ++i)
  {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    to[a].push_back(b);
  }
  int ans = 0;
  for (int sv = 0; sv < N; ++sv)
  {
    queue<int> q;
    vector<bool> used(N, false);
    used[sv] = true;
    ++ans;
    q.push(sv);
    while (q.size())
    {
      int v = q.front();
      q.pop();
      for (int u : to[v])
      {
        if (used[u])
        {
          continue;
        }
        ++ans;
        used[u] = true;
        q.push(u);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
