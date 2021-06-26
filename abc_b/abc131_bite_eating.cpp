#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
  int N, L;
  cin >> N >> L;
  vector<int> a(N + 1);
  for (int i = 1; i <= N; ++i)
  {
    a[i] = L + i - 1;
  }

  int all = 0;
  for (int i = 1; i <= N; ++i)
  {
    all += a[i];
  }

  int ans = 1 << 29;
  int min_diff = 1 << 29;
  for (int i = 1; i <= N; ++i)
  {
    if (abs(all - (all - a[i])) < min_diff)
    {
      min_diff = abs(all - (all - a[i]));
      ans = all - a[i];
    }
  }

  cout << ans << endl;

  return 0;
}
