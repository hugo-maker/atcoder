#include <iostream>
#include <string>
#include <vector>
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
  string S, T;
  cin >> S >> T;

  // dpテーブル
  vector<int> dp(S.size() + 1, INF);

  // 初期条件
  dp[0] = 0;

  // dpループ
  for (int i = 0; i <= S.size(); ++i)
  {
    if (i > 0)
    {
      if (S[i - 1] == T[i - 1])
      {
        chmin(dp[i], dp[i - 1]);
      }
      else
      {
        chmin(dp[i], dp[i - 1] + 1);
      }
    }
  }

  cout << dp[S.size()] << endl;

  return 0;
}
