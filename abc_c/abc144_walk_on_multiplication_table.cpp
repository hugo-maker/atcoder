#include <iostream>
using namespace std;

int main()
{
  long long N;
  cin >> N;

  long long ans = 1e15;
  long long tmp = 0;
  for (long long i = 1; i * i <= N; ++i)
  {
    if (N % i == 0)
    {
      tmp = (i - 1) + (N / i - 1);
      ans = min(ans, tmp);
    }
  }

  cout << ans << endl;
  return 0;
}
