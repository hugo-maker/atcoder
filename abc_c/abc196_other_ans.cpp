#include <iostream>
using namespace std;

long long solve(long long n)
{
  long long val = 1;
  long long nn = n;
  while (nn)
  {
    val *= 10;
    nn /= 10;
  }
  return n * val + n;
}

int main()
{
  long long N;
  cin >> N;
  long long res = 0;
  for (long long n = 1; n <= 1000000; ++n)
  {
    if (solve(n) <= N)
    {
      ++res;
    }
    else
    {
      break;
    }
  }

  cout << res << endl;
}
