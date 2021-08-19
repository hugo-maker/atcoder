#include <iostream>
using namespace std;

int main()
{
  long long N;
  cin >> N;
  long long ans = 0;
  for (long long A = 1; A * A < N; ++A)
  {
    ++ans;
  }
  for (long long A = 1; A * A < N; ++A)
  {
    long long num = max((N - 1) / A - A, 0LL);
    ans += num * 2;
  }
  cout << ans << endl;
  return 0;
}
