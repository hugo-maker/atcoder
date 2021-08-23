#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; ++i)
  {
    cin >> S[i];
  }
  int ans = 0;
  for (int i = 0; i < H -1; ++i)
  {
    for (int j = 0; j < W - 1; ++j)
    {
      int cnt = 0;
      for (int di = 0; di < 2; ++di)
      {
        for (int dj = 0; dj < 2; ++dj)
        {
          if (S[i + di][j + dj] == '#')
          {
            ++cnt;
          }
        }
      }
      if (cnt == 1 || cnt == 3)
      {
        ++ans;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
