#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<int>> c(10, vector<int>(10, 0));
  for (int i = 0; i < 10; ++i)
  {
    for (int j = 0; j < 10; ++j)
    {
      cin >> c[i][j];
    }
  }

  for (int k = 0; k < 10; ++k)
  {
    for (int i = 0; i < 10; ++i)
    {
      for (int j = 0; j < 10; ++j)
      {
        c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
      }
    }
  }

  long long ans = 0;
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      int A;
      cin >> A;
      if (A == -1)
      {
        continue;
      }
      ans += c[A][1];
    }
  }

  cout << ans << endl;
  return 0;
}
