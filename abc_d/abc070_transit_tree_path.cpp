#include <iostream>
#include <vector>
using namespace std;

using Edge = pair<int, long long>;
using Graph = vector<vector<Edge>>;

void rec(const Graph & G, int v, int p, long long sum, vector<long long> & dist)
{
  dist[v] = sum;
  for (auto e : G[v])
  {
    if (e.first == p)
    {
      continue;
    }
    rec(G, e.first, v, sum + e.second, dist);
  }
}

int main()
{
  int N;
  cin >> N;
  Graph G(N);
  for (int i = 0; i < N - 1; ++i)
  {
    int a, b;
    long long c;
    cin >> a >> b >> c;
    --a, --b;
    G[a].push_back({b, c});
    G[b].push_back({a, c});
  }

  int Q, K;
  cin >> Q >> K;
  --K;
  vector<long long> dist(N, 0);
  rec(G, K, -1, 0, dist);

  for (int q = 0; q < Q; ++q)
  {
    int x, y;
    cin >> x >> y;
    --x, --y;
    cout << dist[x] + dist[y] << endl;
  }

  return 0;
}
