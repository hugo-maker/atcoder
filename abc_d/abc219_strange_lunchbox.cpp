#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void chmin(int & x, int y)
{
  x = min(x, y);
}

int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  const int INF = 1001001001;
  vector dp(x + 1, vector<int>(y + 1, INF));
  dp[0][0] = 0;
  for (int i = 0; i < n; ++i)
  {
    int a, b;
    cin >> a >> b;

    vector p(x + 1, vector<int>(y + 1, INF));
    swap(dp, p);
    for (int j = 0; j < x + 1; ++j)
    {
      for (int k = 0; k < y + 1; ++k)
      {
        chmin(dp[j][k], p[j][k]);
        chmin(dp[min(j + a, x)][min(k + b, y)], p[j][k] + 1);
      }
    }
  }

  int ans = dp[x][y];
  if (ans == INF)
  {
    ans = -1;
  }
  cout << ans << endl;
  return 0;
}
