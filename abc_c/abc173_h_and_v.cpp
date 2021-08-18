#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int H, W, K;
  cin >> H >> W >> K;
  vector<string> c(H);
  for (int i = 0; i < H; ++i)
  {
    cin >> c[i];
  }

  int ans = 0;
  for (int bit1 = 0; bit1 < (1 << H); ++bit1)
  {
    for (int bit2 = 0; bit2 < (1 << W); ++bit2)
    {
      int cnt = 0;
      for (int i = 0; i < H; ++i)
      {
        if (bit1 & (1 << i))
        {
          continue;
        }
        for (int j = 0; j < W; ++j)
        {
          if (bit2 & (1 << j))
          {
            continue;
          }

          if (c[i][j] == '#')
          {
            ++cnt;
          }
        }
      }
      if (cnt == K)
      {
        ++ans;
      }
    }
  }

  cout << ans << endl;
}
