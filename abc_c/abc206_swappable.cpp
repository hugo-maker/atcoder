#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  sort(A.begin(), A.end());
  long long ans = N * (N - 1) / 2;

  long long cnt = 1;
  for (int i = 1; i < N; ++i)
  {
    if (A[i] == A[i - 1])
    {
      ++cnt;
    }
    else
    {
      ans -= cnt * (cnt - 1) / 2;
      cnt = 1;
    }
  }

  if (cnt)
  {
    ans -= cnt * (cnt - 1) / 2;
  }

  cout << ans << endl;
  return 0;
}
