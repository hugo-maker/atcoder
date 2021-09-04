#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }

  vector<vector<int>> ans(H, vector<int>(W, 0));
  int h = 0;
  int w = 0;
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < a[i]; ++j)
    {
      ans[h][w] = i + 1;
      if (h % 2 == 0)
      {
        ++w;
        if (w == W)
        {
          ++h;
          w = W - 1;
        }
      }
      else
      {
        --w;
        if (w == -1)
        {
          ++h;
          w = 0;
        }
      }
    }
  }

  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      if (j != 0)
      {
        cout << " ";
      }
      cout << ans[i][j];
    }
    cout << endl;
  }

  return 0;
}
