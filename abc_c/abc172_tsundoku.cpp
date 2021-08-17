#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M, K;
  cin >> N >> M >> K;
  vector<int> A(N), B(M);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < M; ++i)
  {
    cin >> B[i];
  }

  long long t = 0;
  for (int i = 0; i < M; ++i)
  {
    t += B[i];
  }

  int j = M;
  int ans = 0;
  for (int i = 0; i < N + 1; ++i)
  {
    while (j > 0 && t > K)
    {
      --j;
      t -= B[j];
    }
    if (t > K)
    {
      break;
    }
    ans = max(ans, i + j);
    if (i == N)
    {
      break;
    }
    t += A[i];
  }

  cout << ans << endl;
  return 0;
}
