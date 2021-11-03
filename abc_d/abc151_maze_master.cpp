#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int bfs(const vector<string> & v, int x, int y)
{
  int H = v.size(), W = v[0].size();
  vector<vector<int>> dist(H, vector<int>(W, -1));
  queue<pair<int, int>> que;

  int res = 0;
  que.push({x, y});
  dist[x][y] = 0;
  while (!que.empty())
  {
    int x = que.front().first, y = que.front().second;
    res = max(res, dist[x][y]);
    que.pop();
    for (int dir = 0; dir < 4; ++dir)
    {
      int nx = x + dx[dir], ny = y + dy[dir];
      if (nx < 0 || nx >= H || ny < 0 || ny >= W)
      {
        continue;
      }
      if (v[nx][ny] == '#')
      {
        continue;
      }
      if (dist[nx][ny] == -1)
      {
        dist[nx][ny] = dist[x][y] + 1;
        que.push({nx, ny});
      }
    }
  }
  return res;
}

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> v(H);
  for (int i = 0; i < H; ++i)
  {
    cin >> v[i];
  }

  int ans = 0;
  for (int x = 0; x < H; ++x)
  {
    for (int y = 0; y < W; ++y)
    {
      if (v[x][y] == '#')
      {
        continue;
      }
      ans = max(ans, bfs(v, x, y));
    }
  }

  cout << ans << endl;
  return 0;
}
