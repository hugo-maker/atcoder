#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<vector<int>> F(N, vector<int>(10, 0));
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < 10; ++j)
    {
      cin >> F[i][j];
    }
  }

  vector<vector<int>> P(N, vector<int>(11, 0));
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < 11; ++j)
    {
      cin >> P[i][j];
    }
  }

  long long ans = -(1LL << 60);

  for (int bit = 1; bit < (1 << 10); ++bit)
  {
    long long x = 0;
    for (int i = 0; i < N; ++i)
    {
      int cnt = 0;
      for (int j = 0; j < 10; ++j)
      {
        if ((bit >> j & 1) && F[i][j])
        {
          ++cnt;
        }
      }
      x += P[i][cnt];
    }
    if (ans < x)
    {
      ans = x;
    }
  }
  cout << ans << endl;

  return 0;
}
