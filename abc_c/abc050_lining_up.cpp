#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

static const int MOD = 1e9+7;

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

  if (N % 2 == 0)
  {
    bool ok = true;
    long long ans = 1;
    for (int i = 1; i < N; i += 2)
    {
      if (A[i - 1] != A[i] || A[i] != i)
      {
        ok = false;
      }
      (ans *= 2) %= MOD;
    }

    if (ok)
    {
      cout << ans << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }
  else
  {
    bool ok = true;
    long long ans = 1;
    for (int i = 2; i < N; i += 2)
    {
      if (A[i - 1] != A[i] || A[i] != i)
      {
        ok = false;
      }
      (ans *= 2) %= MOD;
    }
    if (A[0] != 0)
    {
      ok = false;
    }

    if (ok)
    {
      cout << ans << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }

  return 0;
}
