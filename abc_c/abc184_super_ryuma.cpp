#include <iostream>
#include <cmath>
using namespace std;

long long a, b, c, d;
long long solve()
{
  long long p = abs(c - a), q = abs(d - b);
  if (p == 0 && q == 0)
  {
    return 0;
  }
  if (p == q || p + q <= 3)
  {
    return 1;
  }
  if ((p + q) % 2 == 0 || p + q <= 6 || abs(p - q) <= 3)
  {
    return 2;
  }
  return 3;
}

int main()
{
  cin >> a >> b >> c >> d;
  cout << solve() << endl;
  return 0;
}
