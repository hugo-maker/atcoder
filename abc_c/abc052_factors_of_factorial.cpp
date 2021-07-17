#include <iostream>
#include <vector>
using namespace std;

vector<long long> v(1001, 0);
static const int MOD = 1e9 + 7;

void solve(long long N)
{
  for (long long a = 2; a * a <= N; ++a)
  {
    if (N % a != 0)
    {
      continue;
    }
    long long ex = 0;
    while (N % a == 0)
    {
      ++ex;
      N /= a;
    }
    v[a] += ex;
  }
  if (N != 1)
  {
    ++v[N];
  }
}

int main()
{
  long long N;
  cin >> N;
  for (int i = 1; i <= N; ++i)
  {
    solve(i);
  }

  long long res = 1;
  for (int i = 1; i <= N; ++i)
  {
    res *= v[i] + 1;
    res %= MOD;
  }

  cout << res << endl;
  return 0;
}
