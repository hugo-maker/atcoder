#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<vector<int>> T(N, vector<int>(N, 0));
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      cin >> T[i][j];
    }
  }

  vector<int> p(N - 1);
  for (int i = 0; i < N - 1; ++i)
  {
    p[i] = i + 1;
  }

  int ans = 0;
  do
  {
    int t = 0;
    for (int i = 0; i < N; ++i)
    {
      if (i == 0)
      {
        t += T[0][p[i]];
      }
      else if (i == N - 1)
      {
        t += T[p[i - 1]][0];
      }
      else
      {
        t += T[p[i - 1]][p[i]];
      }
    }
    if (t == K)
    {
      ++ans;
    }
  } while (next_permutation(p.begin(), p.end()));

  cout << ans << endl;
  return 0;
}
