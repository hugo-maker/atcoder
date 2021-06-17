#include <iostream>
#include <vector>
using namespace std;

template <class T>
void chmax(T & a, T b)
{
  if (a < b)
  {
    a = b;
  }
}
template <class T>
void chmin(T & a, T b)
{
  if (a > b)
  {
    a = b;
  }
}

const long long INF = 1LL << 60;
const int MAX_V = 100100;

int main()
{
  int N, W;
  cin >> N >> W;

  vector<int> weight(N);
  vector<int> value(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> weight[i] >> value[i];
  }

  vector<vector<long long>> dp(N + 10, vector<long long>(MAX_V, INF));

  dp[0][0] = 0;

  for (int i = 0; i < N; ++i)
  {
    for (int sum_v = 0; sum_v < MAX_V; ++sum_v)
    {
      if (sum_v - value[i] >= 0)
      {
        chmin(dp[i + 1][sum_v], dp[i][sum_v - value[i]] + weight[i]);
      }

      chmin(dp[i + 1][sum_v], dp[i][sum_v]);
    }
  }

  long long res = 0;
  for (int sum_v = 0; sum_v < MAX_V; ++sum_v)
  {
    if (dp[N][sum_v] <= W)
    {
      res = sum_v;
    }
  }

  cout << res << endl;

  return 0;
}
