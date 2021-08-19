#include <iostream>
#include <vector>
using namespace std;

const unsigned long long MOD = 1e9 + 7;

int main()
{
  int N;
  cin >> N;
  vector<unsigned long long> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  vector<unsigned long long> B(N);
  B[N - 1] = A[N - 1];
  for (int i = N - 2; i >= 0; --i)
  {
    B[i] = B[i + 1] + A[i];
  }

  unsigned long long ans = 0;
  unsigned long long tmp = 0;
  for (int i = 0; i < N - 1; ++i)
  {
    tmp = A[i] * (B[i + 1] % MOD);
    ans += tmp;
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
