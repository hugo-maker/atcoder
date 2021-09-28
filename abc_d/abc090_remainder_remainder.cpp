#include <iostream>
using namespace std;

int main()
{
  long long N, K;
  cin >> N >> K;

  long long ans = 0;
  for (long long b = 1; b <= N; ++b)
  {
    ans += max(0LL, b - K) * (N / b);
    ans += max(0LL, N % b - K + 1);
    if (K == 0)
    {
      --ans;
    }
  }

  cout << ans << endl;
  return 0;
}
