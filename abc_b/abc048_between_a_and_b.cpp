#include <iostream>
using namespace std;

long long f(long long n, long long x)
{
  if (n >= 0)
  {
    return n / x + 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  long long a, b, x;
  cin >> a >> b >> x;

  cout << f(b, x) - f(a - 1, x) << endl;

  return 0;
}
