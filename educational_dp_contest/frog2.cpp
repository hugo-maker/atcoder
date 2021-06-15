#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int INF = 1 << 29;

template <class T>
void chmin(T & a, T b)
{
  if (a > b)
  {
    a = b;
  }
}

int main()
{
  int N, K;
  cin >> N >> K;
  vector<long> h(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> h[i];
  }

  // dpテーブル
  vector<long> dp(N, INF);

  // 初期条件
  dp[0] = 0;

  // dpループ
  for (int i = 1; i < N; ++i)
  {
    for (int j = 1; j <= min(i, K); ++j)
    {
      if (j == 1)
      {
        dp[i] = dp[i - j] + abs(h[i] - h[i - j]);
      }
      else
      {
        dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
      }
    }
  }

  cout << dp[N - 1] << endl;

  return 0;
}
