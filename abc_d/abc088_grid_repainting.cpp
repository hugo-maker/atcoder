#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
using pint = pair<int, int>;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> s(H);
  for (int i = 0; i < H; ++i)
  {
    cin >> s[i];
  }
  int white = 0;
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      if (s[i][j] == '.')
      {
        ++white;
      }
    }
  }

  vector<vector<int>> dist(H, vector<int>(W, -1));
  dist[0][0] = 1;
  queue<pint> que;
  que.push({0, 0});
  while (!que.empty())
  {
    pint cur = que.front();
    que.pop();
    int x = cur.first;
    int y = cur.second;
    for (int dir = 0; dir < 4; ++dir)
    {
      int nx = x + dx[dir];
      int ny = y + dy[dir];
      if (nx < 0 || nx >= H || ny < 0 || ny >= W)
      {
        continue;
      }
      if (s[nx][ny] == '#')
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

  if (dist[H - 1][W - 1] == -1)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << white - dist[H - 1][W - 1] << endl;
  }

  return 0;
}
