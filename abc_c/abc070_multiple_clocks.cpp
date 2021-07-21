#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
  long long g = gcd(a, b);
  return a / g * b;
}

int main()
{
  int N;
  cin >> N;

  long long ans = 1LL;

  for (int i = 0; i < N; ++i)
  {
    long long T;
    cin >> T;
    ans = lcm(ans, T);
  }

  cout << ans << endl;
  return 0;
}
