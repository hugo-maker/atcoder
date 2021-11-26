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
  sort(A.begin(), A.end(), greater<long long>{});

  int t = N - 1;
  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    int lim = 2;
    if (i == 0)
    {
      lim = 1;
    }
    for (int j = 0; j < lim; ++j)
    {
      if (t > 0)
      {
        ans += A[i];
      }
      --t;
    }
  }
  cout << ans << endl;
  return 0;
}
