#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
  int a, n;
  cin >> a >> n;
  const int MAX = 1000000;
  const int INF = 1001001001;
  vector<int> dist(MAX, INF);
  queue<int> q;
  auto push = [&] (int v, int d)
  {
    if (dist[v] != INF)
    {
      return;
    }
    dist[v] = d;
    q.push(v);
  };
  push(1, 0);
  while (!q.empty())
  {
    int v = q.front();
    q.pop();
    int d = dist[v];
    if (ll(v) * a < MAX)
    {
      push(v * a, d + 1);
    }
    if (v >= 10 && v % 10 != 0)
    {
      string s = to_string(v);
      int len = s.size();
      rotate(s.begin(), s.begin() + (len - 1), s.end());
      int u = stoi(s);
      push(u, d + 1);
    }
  }

  if (dist[n] == INF)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << dist[n] << endl;
  }
  return 0;
}
