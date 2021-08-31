#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
  string S;
  cin >> S;
  int N = S.size();
  vector<vector<int>> dp(N + 1, vector<int>(9));
  for (int i = 0; i < N + 1; ++i)
  {
    dp[i][0] = 1;
  }
  string T = "chokudai";
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < 8; ++j)
    {
      if (S[i] != T[j])
      {
        dp[i + 1][j + 1] = dp[i][j + 1];
      }
      else
      {
        dp[i + 1][j + 1] = (dp[i][j + 1] + dp[i][j]) % MOD;
      }
    }
  }

  cout << dp[N][8] << endl;
  return 0;
}
