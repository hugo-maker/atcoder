#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> B[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> C[i];
  }

  vector<int> cnt(N);
  for (int j = 0; j < N; ++j)
  {
    cnt[B[C[j] - 1] - 1] += 1;
  }

  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    ans += cnt[A[i] - 1];
  }

  cout << ans << endl;
  return 0;
}
