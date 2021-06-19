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
  int N;
  cin >> N;

  vector<vector<int>> a(N + 1, vector<int>(3));
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cin >> a[i][j];
    }
  }

  vector<vector<int>> dp(N + 1, vector<int>(3, 0));

  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 3; ++k)
      {
        if (j == k)
        {
          continue;
        }
        chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
      }
    }
  }

  int res = 0;
  for (int j = 0; j < 3; ++j)
  {
    chmax(res, dp[N][j]);
  }

  cout << res << endl;

  return 0;
}
