#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  const int INF = 1001001001;
  vector f(n, vector<int>(n, INF));
  for (int i = 0; i < n; ++i)
  {
    f[i][i] = 0;
  }
  for (int i = 0; i < m; ++i)
  {
    int a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    f[a][b] = c;
  }

  long long ans = 0;
  for (int k = 0; k < n; ++k)
  {
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
        f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
        if (f[i][j] != INF)
        {
          ans += f[i][j];
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
