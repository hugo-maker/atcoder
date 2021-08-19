#include <iostream>
using namespace std;

int main()
{
  long long N;
  cin >> N;
  long long ans = 0;
  for (long long A = 1; A < N; ++A)
  {
    ans += (N - 1) / A;
  }
  cout << ans << endl;
  return 0;
}
