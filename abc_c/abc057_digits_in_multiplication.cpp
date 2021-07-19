#include <iostream>
#include <algorithm>
using namespace std;

long long get_digit_sum(long long n)
{
  long long count = 0;
  while (n)
  {
    n /= 10;
    ++count;
  }

  return count;
}

long long F(long long A, long long B)
{
  return max(get_digit_sum(A), get_digit_sum(B));
}

int main()
{
  long long N;
  cin >> N;

  long long res = 1LL << 60;
  for (long long i = 1; i * i <= N; ++i)
  {
    if (N % i == 0)
    {
      res = min(res, F(i, N / i));
    }
  }

  cout << res << endl;

  return 0;
}
