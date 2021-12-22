#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main()
{
  int n;
  cin >> n;
  bitset<100001> dp;
  dp[0] = 1;
  int tot = 0;
  for (int i = 0; i < n; ++i)
  {
    int t;
    cin >> t;
    tot += t;
    dp |= dp << t;
  }
  int ans = tot;
  for (int i = 0; i < tot + 1; ++i)
  {
    if (dp[i])
    {
      ans = min(ans, max(i, (tot - i)));
    }
  }
  cout << ans << endl;
  return 0;
}
