#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  sort(A.begin(), A.end());
  vector<long long> S(N + 1, 0);
  for (int i = 0; i < N; ++i)
  {
    S[i + 1] = S[i] + A[i];
  }

  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    ans += A[i] * i - S[i];
  }
  cout << ans << endl;
  return 0;
}
