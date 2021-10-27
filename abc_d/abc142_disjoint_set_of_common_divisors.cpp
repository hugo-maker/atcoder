#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> enum_divisors(long long N)
{
  vector<long long> res;
  for (long long i = 1; i * i <= N; ++i)
  {
    if (N % i == 0)
    {
      res.push_back(i);
      if (N / i != i)
      {
        res.push_back(N / i);
      }
    }
  }
  sort(res.begin(), res.end());
  return res;
}

bool is_prime(long long N)
{
  if (N == 1)
  {
    return false;
  }
  for (long long i = 2; i * i <= N; ++i)
  {
    if (N % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  long long A, B;
  cin >> A >> B;
  long long n = gcd(A, B);

  vector<long long> v = enum_divisors(n);
  long long ans = 1;
  for (auto num : v)
  {
    if (is_prime(num))
    {
      ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}
