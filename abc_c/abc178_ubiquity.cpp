#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

long long powmod(long long x, long long y)
{
  long long res = 1;
  for (long long i = 0; i < y; ++i)
  {
    res = res * x % MOD;
  }

  return res;
}

int main()
{
  long long N;
  cin >> N;
  long long ans = powmod(10, N) - powmod(9, N) - powmod(9, N) + powmod(8, N);
  ans %= MOD;
  ans = (ans + MOD) % MOD;
  cout << ans << endl;

  return 0;
}
