#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  // M 種類の食べ物それぞれについてN 人それぞれの好き嫌いを記録するvector
  vector<vector<bool>> v(M, vector<bool>(N, false));
  int K;
  int A;
  for (int i = 0; i < N; ++i)
  {
    cin >> K;
    for (int j = 0; j < K; ++j)
    {
      cin >> A;
      v[A - 1][i] = true;
    }
  }

  int count = 0;
  for (int i = 0; i < M; ++i)
  {
    bool ok = true;
    for (int j = 0; j < N; ++j)
    {
      if (!v[i][j])
      {
        ok = false;
        break;
      }
    }
    if (ok)
    {
      ++count;
    }
  }

  cout << count << endl;

  return 0;
}
