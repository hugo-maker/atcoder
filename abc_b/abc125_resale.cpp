#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> V(N);
  vector<int> C(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> V[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> C[i];
  }

  vector<int> dp(N);
  dp[0] = max(0, V[0] - C[0]);
  for (int i = 1; i < N; ++i)
  {
    dp[i] = max(dp[i - 1], dp[i - 1] + V[i] - C[i]);
  }

  cout << dp[N - 1] << endl;

  return 0;
}
