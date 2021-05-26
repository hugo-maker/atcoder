// abc057c
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long get_larger(long long a, long long b)
{
  long long digit_a = 1;
  long long digit_b = 1;
  while (a /= 10)
  {
    ++digit_a;
  }
  while (b /= 10)
  {
    ++digit_b;
  }

  if (digit_a >= digit_b) 
  {
    return digit_a;
  }
  else
  {
    return digit_b;
  }
}

// pair で i と n / i を管理
vector<pair<long long, long long>> get_pair(long long n)
{
  vector<pair<long long, long long>> result;
  for (long long i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      result.push_back({i, n / i});
    }
  }
  sort(result.begin(), result.end());
  return result;
}


int main()
{
  long long N;
  cin >> N;

  vector<pair<long long, long long>> divisors = get_pair(N);

  long long min = 100;
  long long temp = 0;
  for (size_t i = 0; i < divisors.size(); ++i)
  {
    temp = get_larger(divisors[i].first, divisors[i].second);
    if (temp < min)
    {
      min = temp;
    }
  }

  cout << min << endl;

  return 0;
}
