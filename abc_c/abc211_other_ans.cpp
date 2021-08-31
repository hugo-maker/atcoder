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
  dp[0][0] = 1;

  string T = "chokudai";
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < 9; ++j)
    {
      (dp[i + 1][j] += dp[i][j]) %= MOD;
      if (j < 9 && S[i] == T[j])
      {
        (dp[i + 1][j + 1] += dp[i][j]) %= MOD;
      }
    }
  }

  cout << dp[N][8] << endl;
  return 0;
}
