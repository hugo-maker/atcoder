#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);

  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < M; ++i)
  {
    cin >> B[i];
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  int ans = 1e9;
  for (int i = 0; i < N; ++i)
  {
    auto iter = lower_bound(B.begin(), B.end(), A[i]);
    ans = min(ans, abs(A[i] - *iter));

    if (iter != B.begin())
    {
      --iter;
      ans = min(ans, abs(A[i] - *iter));
    }
  }

  cout << ans << endl;
  return 0;
}
