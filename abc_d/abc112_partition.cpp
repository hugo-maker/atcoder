#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<long long> enum_divisors(long long n)
{
  vector<long long> res;
  for (long long i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      res.push_back(i);
      if (n / i != i)
      {
        res.push_back(n / i);
      }
    }
  }
  sort(res.begin(), res.end());
  return res;
}

int main()
{
  long long N, M;
  cin >> N >> M;
  vector<long long> div = enum_divisors(M);

  long long ans = 1;
  for (auto d : div)
  {
    if (d * N <= M)
    {
      ans = max(ans, d);
    }
  }

  cout << ans << endl;
  return 0;
}
