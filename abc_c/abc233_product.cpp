#include <iostream>
#include <vector>
using namespace std;

long long ans = 0;
long long n, x;
vector<vector<long long>> a;

void dfs(long long pos, long long seki)
{
  if (pos == n)
  {
    if (seki == x)
    {
      ++ans;
    }
    return;
  }
  for (long long c : a[pos])
  {
    if (seki > x / c)
    {
      continue;
    }
    dfs(pos + 1, seki * c);
  }
}

int main()
{
  cin >> n >> x;
  a.resize(n);
  for (long long i = 0; i <= n - 1; ++i)
  {
    long long L;
    cin >> L;
    a[i].resize(L);
    for (long long j = 0; j <= L - 1; ++j)
    {
      cin >> a[i][j];
    }
  }
  dfs(0, 1);
  cout << ans << endl;
  return 0;
}
