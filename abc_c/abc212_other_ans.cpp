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
  int ai = 0;
  int bi = 0;
  while (ai < N && bi < M)
  {
    ans = min(ans, abs(A[ai] - B[bi]));
    if (A[ai] < B[bi])
    {
      ++ai;
    }
    else
    {
      ++bi;
    }
  }

  cout << ans << endl;
  return 0;
}
