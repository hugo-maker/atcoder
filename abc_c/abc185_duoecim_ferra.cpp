#include <iostream>
using namespace std;

long long comb(long long n, long long r)
{
  long long p = 1;
  for (long long i = 1; i <= r; ++i)
  {
    p = p * (n - i + 1) / i;
  }
  return p;
}

int main()
{
  long long L;
  cin >> L;

  cout << comb(L - 1, 11) << endl;
  return 0;
}
