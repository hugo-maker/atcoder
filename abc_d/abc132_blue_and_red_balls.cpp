#include <iostream>
#include <vector>
using namespace std;
const long long MOD = 1e9 + 7;

int main()
{
  long long N, K;
  cin >> N >> K;

  vector<vector<long long>> comb(N + 1, vector<long long>(N + 1));
  for (int i = 0; i <= N; ++i)
  {
    comb[i][0] = 1;
  }
  for (int i = 1; i <= N; ++i)
  {
    for (int j = 1; j <= i; ++j)
    {
      (comb[i][j] += comb[i - 1][j - 1] + comb[i - 1][j]) %= MOD;
    }
  }

  for (long long i = 1; i <= K; ++i)
  {
    cout << (comb[K - 1][i - 1] * comb[N - K + 1][i]) % MOD << endl;
  }
  return 0;
}
