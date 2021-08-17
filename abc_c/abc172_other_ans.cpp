#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  long long K;
  cin >> N >> M >> K;
  vector<long long> A(N), B(M);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < M; ++i)
  {
    cin >> B[i];
  }

  vector<long long> c(M + 1, 0);
  for (int i = 0; i < M; ++i)
  {
    c[i + 1] = c[i] + B[i];
  }

  long long t = 0;
  int ans = 0;
  for (int i = 0; i < N + 1; ++i)
  {
    if (i != 0)
    {
      t += A[i - 1];
    }
    if (t > K)
    {
      break;
    }
    int l = -1;
    int r = M + 1;
    while (r - l > 1)
    {
      int m = (l + r) / 2;
      if (t + c[m] <= K)
      {
        l = m;
      }
      else
      {
        r = m;
      }
    }
    ans = max(ans, i + l);
  }

  cout << ans << endl;
  return 0;
}
