#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N);
  long long S = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    S += A[i];
  }

  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    ans += A[i] * A[i];
  }
  ans *= N;
  ans -= S * S;
  cout << ans << endl;
  return 0;
}
