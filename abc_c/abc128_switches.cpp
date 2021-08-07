#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<vector<int>> s(M, vector<int>(N, -1));
  vector<int> p(M);

  int k;
  for (int i = 0; i < M; ++i)
  {
    cin >> k;
    for (int j = 0; j < k; ++j)
    {
      cin >> s[i][j];
      --s[i][j];
    }
  }

  for (int i = 0; i < M; ++i)
  {
    cin >> p[i];
  }

  int ans = 0;
  for (int bit = 0; bit < (1 << N); ++bit)
  {
    int sum = 0;
    for (int i = 0; i < M; ++i)
    {
      int cnt = 0;
      for (int j = 0; j < N; ++j)
      {
        if (bit & (1 << s[i][j]))
        {
          ++cnt;
        }
      }
      if (cnt % 2 == p[i])
      {
        ++sum
      }
    }
    if (sum == N)
    {
      ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}
