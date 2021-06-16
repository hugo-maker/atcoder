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

  // dpテーブル
  // dp[i][w] = i 個の品物から 重さw 以下に収まるよう選んだときの価値の最大値
  vector<vector<long>> dp(N + 1, vector<long>(W + 1, 0));

  // dpループ
  for (int i = 0; i < N; ++i)
  {
    for (int w = 0; w <= W; ++w)
    {
      // i 番目の品物を選ぶ
      if (w - weight[i] >= 0)
      {
        chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
      }

      // i 番目の品物を選ばない
      chmax(dp[i + 1][w], dp[i][w]);
    }
  }

  cout << dp[N][W] << endl;

  return 0;
}
