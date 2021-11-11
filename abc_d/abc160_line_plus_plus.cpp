#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int INF = 1 << 29;

int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  --x, --y;
  vector<int> ans(n);
  for (int i = 0; i < n; ++i)
  {
    vector<int> dist(n, INF);
    queue<int> q;
    auto push = [&](int v, int d)
    {
      if (dist[v] != INF)
      {
        return;
      }
      dist[v] = d;
      q.push(v);
    };
    push(i, 0);
    while (!q.empty())
    {
      int v = q.front();
      q.pop();
      int d = dist[v];
      if (v - 1 >= 0)
      {
        push(v - 1, d + 1);
      }
      if (v + 1 < n)
      {
        push(v + 1, d + 1);
      }
      if (v == x)
      {
        push(y, d + 1);
      }
      if (v == y)
      {
        push(x, d + 1);
      }
    }
    for (int j = 0; j < n; ++j)
    {
      ans[dist[j]]++;
    }
  }
  for (int i = 0; i < n; ++i)
  {
    ans[i] /= 2;
  }
  for (int i = 1; i <= n - 1; ++i)
  {
    cout << ans[i] << endl;
  }
  return 0;
}
