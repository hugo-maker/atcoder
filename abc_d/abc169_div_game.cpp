#include <iostream>
#include <vector>
using namespace std;

vector<pair<long long, long long>> prime_factorize(long long n)
{
  vector<pair<long long, long long>> res;
  for (long long a = 2; a * a <= n; ++a)
  {
    if (n % a != 0)
    {
      continue;
    }
    long long ex = 0;
    while (n % a == 0)
    {
      ++ex;
      n /= a;
    }
    res.push_back({a, ex});
  }

  if (n != 1)
  {
    res.push_back({n, 1});
  }
  return res;
}

int main()
{
  long long N;
  cin >> N;
  vector<pair<long long, long long>> v = prime_factorize(N);

  int ans = 0;
  for (auto e : v)
  {
    int num = e.second;
    int tmp = 1;
    while (num > 0)
    {
      num -= tmp;
      if (num < 0)
      {
        break;
      }
      ++tmp;
      ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}
