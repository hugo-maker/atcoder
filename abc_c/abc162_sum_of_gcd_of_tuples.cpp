#include <iostream>
#include <numeric>
using namespace std;

int main()
{
  long long K;
  cin >> K;

  long long ans = 0;
  for (long long a = 1; a <= K; ++a)
  {
    for (long long b = 1; b <= K; ++b)
    {
      for (long long c = 1; c <= K; ++c)
      {
        ans += gcd(gcd(a, b), c);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
