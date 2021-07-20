#include <iostream>
using namespace std;

static const long long MOD = 1e9 + 7;

long long get_factorial(long long n)
{
  long long res = 1;
  for (int i = 1; i <= n; ++i)
  {
    res *= i;
    res %= MOD;
  }

  return res;
}

int main()
{
  long long N, M;
  cin >> N >> M;

  long long ans = 0;
  long long n = get_factorial(N);
  long long m = get_factorial(M);
  if (N == M)
  {
    ans = 2 * n * m;
    ans %= MOD;
  }
  else if (N + 1 == M || M + 1 == N)
  {
    ans = n * m;
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
