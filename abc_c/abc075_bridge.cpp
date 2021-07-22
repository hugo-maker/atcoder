#include <iostream>
#include <vector>
using namespace std;

const int limit = 50;

int N, M;
vector<int> a(limit);
vector<int> b(limit);

vector<vector<bool>> graph(limit, vector<bool>(limit, false));
vector<bool> visited(limit, false);

void dfs(int v)
{
  visited[v] = true;
  for (int v2 = 0; v2 < N; ++v2)
  {
    if (graph[v][v2] == false)
    {
      continue;
    }
    if (visited[v2] == true)
    {
      continue;
    }
    dfs(v2);
  }
}

int main()
{
  cin >> N >> M;
  for (int i = 0; i < M; ++i)
  {
    cin >> a[i] >> b[i];
    --a[i];
    --b[i];
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
  }

  int ans = 0;
  for (int i = 0; i < M; ++i)
  {
    // グラフから辺を一つ取り除く
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;

    // すべての頂点を未訪問にする
    for (int j = 0; j < N; ++j)
    {
      visited[j] = false;
    }

    // 任意の一つの頂点からDFSを呼ぶ
    dfs(0);

    // 頂点が一つでも未訪問なら、取り除いた辺が橋であったということ
    bool bridge = false;
    for (int j = 0; j < N; ++j)
    {
      if (visited[j] == false)
      {
        bridge = true;
      }
    }
    if (bridge)
    {
      ++ans;
    }

    // 取り除いた辺を戻す
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
  }

  cout << ans << endl;
  return 0;
}
