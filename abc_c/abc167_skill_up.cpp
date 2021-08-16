#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> C(N);
  vector<vector<int>> A(N, vector<int>(M, 0));
  for (int i = 0; i < N; ++i)
  {
    cin >> C[i];
    for (int j = 0; j < M; ++j)
    {
      cin >> A[i][j];
    }
  }

  int ans = 1 << 29;
  for (int bit = 0; bit < (1 << N); ++bit)
  {
    int amount = 0;
    bool can = true;
    vector<int> algo(M, 0);

    for (int i = 0; i < N; ++i)
    {
      if (bit & (1 << i))
      {
        for (int j = 0; j < M; ++j)
        {
          algo[j] += A[i][j];
        }
        amount += C[i];
      }
    }

    for (int k = 0; k < M; ++k)
    {
      if (algo[k] < X)
      {
        can = false;
      }
    }

    if (can)
    {
      ans = min(ans, amount);
    }
  }

  if (ans == 1 << 29)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
  }
  return 0;
}
