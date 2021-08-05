#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> X(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> X[i];
  }

  sort(X.begin(), X.end());
  int ans = 0;
  if (N < M)
  {
    vector<int> diff(M - 1);
    for (int i = 0; i < M - 1; ++i)
    {
      diff[i] = abs(X[i + 1] - X[i]);
    }
    sort(diff.begin(), diff.end());
    for (int i = 0; i < M - N; ++i)
    {
      ans += diff[i];
    }
  }

  cout << ans << endl;
  return 0;
}
