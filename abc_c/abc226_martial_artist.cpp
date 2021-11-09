#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, x;
  long long ans = 0;
  cin >> N;
  vector<long long> t(N);
  vector<int> k(N);
  vector<vector<int>> e(N);
  vector<bool> used(N, false);

  for (int i = 0; i < N; ++i)
  {
    cin >> t[i];
    cin >> k[i];
    for (int j = 0; j < k[i]; ++j)
    {
      cin >> x;
      e[i].push_back(x - 1);
    }
  }

  used[N - 1] = true;
  for (int i = N - 1; i >= 0; --i)
  {
    if (used[i])
    {
      ans += t[i];
      for (int j = 0; j < k[i]; ++j)
      {
        used[e[i][j]] = true;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
