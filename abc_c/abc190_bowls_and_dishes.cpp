#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M, K;
  cin >> N >> M;
  vector<int> A(M);
  vector<int> B(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> A[i] >> B[i];
    --A[i];
    --B[i];
  }
  cin >> K;
  vector<int> C(K);
  vector<int> D(K);
  for (int i = 0; i < K; ++i)
  {
    cin >> C[i] >> D[i];
    --C[i];
    --D[i];
  }

  int ans = 0;
  for (int bit = 0; bit < (1 << K); ++bit)
  {
    int cnt = 0;
    vector<bool> dish(N, false);
    for (int k = 0; k < K; ++k)
    {
      if (bit & (1 << k))
      {
        dish[C[k]] = true;
      }
      else
      {
        dish[D[k]] = true;
      }
    }
    for (int m = 0; m < M; ++m)
    {
      if (dish[A[m]] && dish[B[m]])
      {
        ++cnt;
      }
    }
    ans = max(ans, cnt);
  }

  cout << ans << endl;
  return 0;
}
