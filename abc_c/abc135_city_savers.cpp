#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N + 1);
  vector<long long> B(N);

  for (int i = 0; i < N + 1; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> B[i];
  }

  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    ans += min(A[i], B[i]);
    B[i] -= min(A[i], B[i]);
    ans += min(A[i + 1], B[i]);
    A[i + 1] -= min(A[i + 1], B[i]);
  }

  cout << ans << endl;
  return 0;
}
